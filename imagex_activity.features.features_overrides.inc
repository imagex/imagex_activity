<?php
/**
 * @file
 * imagex_activity.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_activity_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-3"] = (object) array(
      'pid' => 'new-3',
      'panel' => 'center',
      'type' => 'views_panes',
      'subtype' => 'imagex_activity-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'more_link' => 1,
        'items_per_page' => 5,
        'path' => 'user/%/activity',
        'arguments' => array(
          'user' => '%user:uid',
        ),
        'exposed' => array(
          'type' => array(),
        ),
        'override_title' => 1,
        'override_title_text' => 'User Activity',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|panels|center|2"] = 'new-3';

 return $overrides;
}
