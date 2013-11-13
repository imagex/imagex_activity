<?php
/**
 * @file
 * Custom code to trigger message creation
 *
 * Triggers = drupal hooks
 */

/**
 * Implements hook_flag_flag().
 */
function imagex_activity_flag_flag($flag, $entity_id, $account, $flagging) {
  // imagex_content_likes integration
  if (module_exists('imagex_content_likes') && $flag->name == 'imagex_node_like') {
    $node = node_load($entity_id);
    $type = 'imagex_activity_content_liked';
    if (imagex_activity_message_create_access($node, array($node->nid), 'field_activity_node_ref', $type, $account->uid)) {
      // Insert new message, message publish status follows entity status
      $message = message_create($type, array('uid' => $account->uid));
      $wrapper = entity_metadata_wrapper('message', $message);
      $wrapper->field_activity_node_ref->set($node);
      $wrapper->field_activity_published->set($node->status);
      $wrapper->save();
    }
  }
}

/**
 * Implements hook_flag_unflag().
 */
function imagex_activity_flag_unflag($flag, $entity_id, $account, $flagging) {
  // imagex_content_likes integration
  if (module_exists('imagex_content_likes') && $flag->name == 'imagex_node_like') {
    $type = 'imagex_activity_content_liked';
    $node = node_load($entity_id);

    // Delete related message direct
    imagex_activity_delete_message(array($type), array($account->uid), array(), array('field_activity_node_ref' => array('column' => 'target_id', 'values' => $node->nid, 'operator' => '=')));   
  }
}
 
/**
 * Implements hook_node_view().
 */
function imagex_activity_node_view($node, $view_mode, $langcode) {
  // Record view if full view mode & node published.
  // Can assume node access is ok for user at this point?
  $type = 'imagex_activity_content_viewed';
  if ($view_mode == 'full' && !empty($node->status) && imagex_activity_message_create_access($node, array($node->nid), 'field_activity_node_ref', $type)) {
    $message = message_create($type, array('uid' => $node->uid));
    $wrapper = entity_metadata_wrapper('message', $message);
    $wrapper->field_activity_node_ref->set($node);
    $wrapper->field_activity_published->set($node->status);
    $wrapper->save();
  }
}

/**
 * Implements hook_node_insert().
 */
function imagex_activity_node_insert($node) {
  $type = 'imagex_activity_content_created';
  if (imagex_activity_message_create_access($node, array($node->nid), 'field_activity_node_ref', $type)) {
    // Insert new message, message publish status follows node status
    $message = message_create($type, array('uid' => $node->uid));
    $wrapper = entity_metadata_wrapper('message', $message);
    $wrapper->field_activity_node_ref->set($node);
    $wrapper->field_activity_published->set($node->status);
    $wrapper->save();
  }
}

/**
 * Implements hook_node_update().
 */
function imagex_activity_node_update($node) {
  // update message status if one exists
  imagex_activity_update_message_status('node', $node);
}

/**
 * Implements hook_comment_insert().
 */
function imagex_activity_comment_insert($comment) {
  $account = user_load($comment->uid);
  $node = node_load($comment->nid);
  $type = 'imagex_activity_comment_created';
  
  //check throttle against node commented on, not comment
  if (imagex_activity_message_create_access($node, array($node->nid), 'field_activity_node_ref', $type, $account->uid)) {
    $message = message_create($type, array(), $account);
    // Save reference to the node in the node reference field, and the
    // "publish" state (i.e. if the node is published or unpublished).
    $wrapper = entity_metadata_wrapper('message', $message);
    $wrapper->field_activity_node_ref->set($node);
    $wrapper->field_activity_comment_ref->set($comment);
  
    // The message should be published only if the node and the comment are
    // both published.
    $published = $node->status && $comment->status;
    $wrapper->field_activity_published->set($published);
    $wrapper->save();
  }
}

/**
 * Implements hook_comment_update().
 */
function imagex_activity_comment_update($comment) {
  imagex_activity_update_message_status('comment', $comment);
}