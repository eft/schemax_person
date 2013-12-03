<?php
/**
 * @file
 * schemax_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_person_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function schemax_person_node_info() {
  $items = array(
    'schemax_person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('An individual associated with an organization.  A person may be managed by one or more users.  A user may also manage one or more persons.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
