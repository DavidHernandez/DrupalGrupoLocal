<?php
/**
 * @file
 * events_calendar.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function events_calendar_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'calendar';
  $view->description = 'A multi-dimensional calendar view with back/next navigation.';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fecha']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fecha']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fecha']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fecha']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fecha']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fecha']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_fecha']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_fecha']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fecha']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_fecha']['field_api_classes'] = 0;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['value'] = 'All';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-3:+3';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'month';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_fecha.field_fecha_value' => 'field_data_field_fecha.field_fecha_value',
  );
  $handler->display->display_options['arguments']['date_argument']['date_method'] = 'OR';
  $handler->display->display_options['arguments']['date_argument']['date_group'] = 'date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'evento' => 'evento',
  );

  /* Display: Calendar page */
  $handler = $view->new_display('calendar', 'Calendar page', 'calendar_1');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['path'] = 'calendar';

  /* Display: Calendar block */
  $handler = $view->new_display('calendar_block', 'Calendar block', 'calendar_block_1');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Calendar';

  /* Display: Year view */
  $handler = $view->new_display('calendar_period', 'Year view', 'calendar_period_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['max_items_behavior'] = 'more';
  $handler->display->display_options['style_options']['groupby_times'] = 'hour';
  $handler->display->display_options['style_options']['groupby_times_custom'] = '';
  $handler->display->display_options['style_options']['groupby_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Month view */
  $handler = $view->new_display('calendar_period', 'Month view', 'calendar_period_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['max_items_behavior'] = 'more';
  $handler->display->display_options['style_options']['groupby_times'] = 'hour';
  $handler->display->display_options['style_options']['groupby_times_custom'] = '';
  $handler->display->display_options['style_options']['groupby_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Day view */
  $handler = $view->new_display('calendar_period', 'Day view', 'calendar_period_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['max_items_behavior'] = 'more';
  $handler->display->display_options['style_options']['groupby_times'] = 'hour';
  $handler->display->display_options['style_options']['groupby_times_custom'] = '';
  $handler->display->display_options['style_options']['groupby_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Week view */
  $handler = $view->new_display('calendar_period', 'Week view', 'calendar_period_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['max_items_behavior'] = 'more';
  $handler->display->display_options['style_options']['groupby_times'] = 'hour';
  $handler->display->display_options['style_options']['groupby_times_custom'] = '';
  $handler->display->display_options['style_options']['groupby_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Block view */
  $handler = $view->new_display('calendar_period', 'Block view', 'calendar_period_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['max_items_behavior'] = 'more';
  $handler->display->display_options['style_options']['groupby_times'] = 'hour';
  $handler->display->display_options['style_options']['groupby_times_custom'] = '';
  $handler->display->display_options['style_options']['groupby_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 0,
    'default' => 0,
    'calendar_block_1' => 'calendar_block_1',
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'day';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = '';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-3:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.changed' => 'node.changed',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'OR';
  $handler->display->display_options['filters']['date_filter']['date_group'] = 'date';
  $handler->display->display_options['block_description'] = 'Upcoming';
  $export['calendar'] = $view;

  return $export;
}
