<?php
/**
 * @file
 * firestick_nonprofit_crm.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function firestick_nonprofit_crm_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_profile';
  $context->description = '';
  $context->tag = 'redhen';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'redhen/contact/*' => 'redhen/contact/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-contacts-block_3' => array(
          'module' => 'views',
          'delta' => 'contacts-block_3',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-contacts-block_4' => array(
          'module' => 'views',
          'delta' => 'contacts-block_4',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('redhen');
  $export['contact_profile'] = $context;

  return $export;
}
