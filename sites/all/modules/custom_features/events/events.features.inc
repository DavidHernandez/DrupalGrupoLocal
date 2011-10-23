<?php
/**
 * @file
 * events.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function events_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function events_node_info() {
  $items = array(
    'evento' => array(
      'name' => t('Evento'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título del evento'),
      'help' => '',
    ),
  );
  return $items;
}
