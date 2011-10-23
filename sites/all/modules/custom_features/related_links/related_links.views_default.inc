<?php
/**
 * @file
 * related_links.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function related_links_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'enlaces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enlaces';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces de interés';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_enlace']['id'] = 'field_enlace';
  $handler->display->display_options['fields']['field_enlace']['table'] = 'field_data_field_enlace';
  $handler->display->display_options['fields']['field_enlace']['field'] = 'field_enlace';
  $handler->display->display_options['fields']['field_enlace']['label'] = '';
  $handler->display->display_options['fields']['field_enlace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_enlace']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_enlace']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_enlace']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_enlace']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_enlace']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_enlace']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_enlace']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_enlace']['type'] = 'plain';
  $handler->display->display_options['fields']['field_enlace']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_enlace]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'enlace' => 'enlace',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['enlaces'] = $view;

  return $export;
}
