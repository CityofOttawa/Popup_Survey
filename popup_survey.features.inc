<?php
/**
 * @file
 * popup_survey.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function popup_survey_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
