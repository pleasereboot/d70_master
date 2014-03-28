<?php
/**
 * @file
 * contact_form.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function contact_form_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['entityform_block-contact'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'contact',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'entityform_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'basic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'basic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
