<?php
/**
 * @file
 * imagex_activity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function imagex_activity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'message-imagex_activity_comment_created-field_activity_comment_ref'
  $field_instances['message-imagex_activity_comment_created-field_activity_comment_ref'] = array(
    'bundle' => 'imagex_activity_comment_created',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_comment_ref',
    'label' => 'Referenced Comments',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_comment_created-field_activity_node_ref'
  $field_instances['message-imagex_activity_comment_created-field_activity_node_ref'] = array(
    'bundle' => 'imagex_activity_comment_created',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_node_ref',
    'label' => 'Referenced Nodes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'apply_chosen' => 0,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_comment_created-field_activity_published'
  $field_instances['message-imagex_activity_comment_created-field_activity_published'] = array(
    'bundle' => 'imagex_activity_comment_created',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_published',
    'label' => 'Published',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_content_created-field_activity_node_ref'
  $field_instances['message-imagex_activity_content_created-field_activity_node_ref'] = array(
    'bundle' => 'imagex_activity_content_created',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_node_ref',
    'label' => 'Referenced Nodes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_content_created-field_activity_published'
  $field_instances['message-imagex_activity_content_created-field_activity_published'] = array(
    'bundle' => 'imagex_activity_content_created',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determines whether this message is visible or not.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_published',
    'label' => 'Published',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_content_liked-field_activity_node_ref'
  $field_instances['message-imagex_activity_content_liked-field_activity_node_ref'] = array(
    'bundle' => 'imagex_activity_content_liked',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_node_ref',
    'label' => 'Referenced Nodes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_content_liked-field_activity_published'
  $field_instances['message-imagex_activity_content_liked-field_activity_published'] = array(
    'bundle' => 'imagex_activity_content_liked',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determines whether this message is visible or not.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_published',
    'label' => 'Published',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_content_viewed-field_activity_node_ref'
  $field_instances['message-imagex_activity_content_viewed-field_activity_node_ref'] = array(
    'bundle' => 'imagex_activity_content_viewed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_node_ref',
    'label' => 'Referenced Nodes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message-imagex_activity_content_viewed-field_activity_published'
  $field_instances['message-imagex_activity_content_viewed-field_activity_published'] = array(
    'bundle' => 'imagex_activity_content_viewed',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determines whether this message is visible or not.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'message',
    'field_name' => 'field_activity_published',
    'label' => 'Published',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'message_type-message_type-message_text'
  $field_instances['message_type-message_type-message_text'] = array(
    'bundle' => 'message_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the text of all messages of this type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'message_type',
    'field_name' => 'message_text',
    'label' => 'Message text',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Determines whether this message is visible or not.');
  t('Message text');
  t('Published');
  t('Referenced Comments');
  t('Referenced Nodes');
  t('This is the text of all messages of this type.');

  return $field_instances;
}
