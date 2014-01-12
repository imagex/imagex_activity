<?php
/**
 * @file
 * imagex_activity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_activity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function imagex_activity_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function imagex_activity_default_message_type() {
  $items = array();
  $items['imagex_activity_comment_created'] = entity_import('message_type', '{
    "name" : "imagex_activity_comment_created",
    "description" : "User Activity Comment Created",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=\\u0022[message:field-activity-comment-ref:url]\\u0022\\u003Ecommented\\u003C\\/a\\u003E on \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "message",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=\\u0022[message:field-activity-comment-ref:url]\\u0022\\u003Ecommented\\u003C\\/a\\u003E on \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E."
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['imagex_activity_content_created'] = entity_import('message_type', '{
    "name" : "imagex_activity_content_created",
    "description" : "User Activity Content Created",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E created a new post, \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "message",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E created a new post, \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E."
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['imagex_activity_content_liked'] = entity_import('message_type', '{
    "name" : "imagex_activity_content_liked",
    "description" : "User Activity Content Liked",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E liked \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "message",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E liked \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E."
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['imagex_activity_content_viewed'] = entity_import('message_type', '{
    "name" : "imagex_activity_content_viewed",
    "description" : "User Activity Content Viewed",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E recently viewed the post, \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "message",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E recently viewed the post, \\u003Ca href=\\u0022[message:field-activity-node-ref:url]\\u0022\\u003E[message:field-activity-node-ref:title]\\u003C\\/a\\u003E."
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
