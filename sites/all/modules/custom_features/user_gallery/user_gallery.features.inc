<?php
/**
 * @file
 * user_gallery.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function user_gallery_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
