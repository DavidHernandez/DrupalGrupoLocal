<?php
/**
 * @file
 * related_links.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function related_links_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function related_links_node_info() {
  $items = array(
    'enlace' => array(
      'name' => t('Enlace'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
