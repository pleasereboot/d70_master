<?php
/**
 * @file
 * core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: webadmin.
  $roles['webadmin'] = array(
    'name' => 'webadmin',
    'weight' => 2,
  );

  return $roles;
}
