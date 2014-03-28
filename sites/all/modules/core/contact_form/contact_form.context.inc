<?php
/**
 * @file
 * contact_form.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contact_form_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
        'en/contact' => 'en/contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'entityform_block-contact' => array(
          'module' => 'entityform_block',
          'delta' => 'contact',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['contact'] = $context;

  return $export;
}
