<?php
/**
 * @file
 * user_gallery.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function user_gallery_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
