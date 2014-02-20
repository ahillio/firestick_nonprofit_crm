<?php
/**
 * @file
 * firestick_nonprofit_crm.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function firestick_nonprofit_crm_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_organization_financials-field_total_giving'
  $field_instances['field_collection_item-field_organization_financials-field_total_giving'] = array(
    'bundle' => 'field_organization_financials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_total_giving',
    'label' => 'Total Giving',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_organization_financials-field_year'
  $field_instances['field_collection_item-field_organization_financials-field_year'] = array(
    'bundle' => 'field_organization_financials',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_contact-contact-field_contact_household'
  $field_instances['redhen_contact-contact-field_contact_household'] = array(
    'bundle' => 'contact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'field_contact_household',
    'label' => 'Household',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 1,
          'match_operator' => 'CONTAINS',
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_contact-contact-redhen_contact_email'
  $field_instances['redhen_contact-contact-redhen_contact_email'] = array(
    'bundle' => 'contact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'redhen_fields',
        'settings' => array(),
        'type' => 'redhen_email_formatter',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'redhen_contact_email',
    'label' => 'Email',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'redhen_fields',
      'settings' => array(),
      'type' => 'redhen_email_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'redhen_contact-kid-field_allergies'
  $field_instances['redhen_contact-kid-field_allergies'] = array(
    'bundle' => 'kid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'field_allergies',
    'label' => 'Allergies',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'redhen_contact-kid-field_date_of_birth'
  $field_instances['redhen_contact-kid-field_date_of_birth'] = array(
    'bundle' => 'kid',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'field_date_of_birth',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_contact-kid-field_gender'
  $field_instances['redhen_contact-kid-field_gender'] = array(
    'bundle' => 'kid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'field_gender',
    'label' => 'Gender',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'redhen_contact-kid-field_school'
  $field_instances['redhen_contact-kid-field_school'] = array(
    'bundle' => 'kid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'field_school',
    'label' => 'School',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'redhen_contact-kid-redhen_contact_email'
  $field_instances['redhen_contact-kid-redhen_contact_email'] = array(
    'bundle' => 'kid',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'redhen_fields',
        'settings' => array(),
        'type' => 'redhen_email_formatter',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'redhen_contact_email',
    'label' => 'Email',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'redhen_fields',
      'settings' => array(),
      'type' => 'redhen_email_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'redhen_org-foundations-field_contacts_person'
  $field_instances['redhen_org-foundations-field_contacts_person'] = array(
    'bundle' => 'foundations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_contacts_person',
    'label' => 'Contacts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'fields' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
        'type_settings' => array(),
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'redhen_org-foundations-field_mailing_address'
  $field_instances['redhen_org-foundations-field_mailing_address'] = array(
    'bundle' => 'foundations',
    'default_value' => array(
      0 => array(
        'element_key' => 'redhen_org|foundations|field_mailing_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'VT',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_mailing_address',
    'label' => 'Mailing Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'redhen_org-foundations-field_organization_financials'
  $field_instances['redhen_org-foundations-field_organization_financials'] = array(
    'bundle' => 'foundations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_organization_financials',
    'label' => 'Financials',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'redhen_org-foundations-field_organization_overview'
  $field_instances['redhen_org-foundations-field_organization_overview'] = array(
    'bundle' => 'foundations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_organization_overview',
    'label' => 'Overview',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'redhen_org-foundations-field_organization_phone'
  $field_instances['redhen_org-foundations-field_organization_phone'] = array(
    'bundle' => 'foundations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_organization_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'redhen_org-foundations-field_website'
  $field_instances['redhen_org-foundations-field_website'] = array(
    'bundle' => 'foundations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_org-household-field_mailing_address'
  $field_instances['redhen_org-household-field_mailing_address'] = array(
    'bundle' => 'household',
    'default_value' => array(
      0 => array(
        'element_key' => 'redhen_org|household|field_mailing_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'VT',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_mailing_address',
    'label' => 'Mailing Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'redhen_org-school-field_mailing_address'
  $field_instances['redhen_org-school-field_mailing_address'] = array(
    'bundle' => 'school',
    'default_value' => array(
      0 => array(
        'element_key' => 'redhen_org|school|field_mailing_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'VT',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_mailing_address',
    'label' => 'Mailing Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'AD' => 'AD',
          'AE' => 'AE',
          'AF' => 'AF',
          'AG' => 'AG',
          'AI' => 'AI',
          'AL' => 'AL',
          'AM' => 'AM',
          'AN' => 'AN',
          'AO' => 'AO',
          'AQ' => 'AQ',
          'AR' => 'AR',
          'AS' => 'AS',
          'AT' => 'AT',
          'AU' => 'AU',
          'AW' => 'AW',
          'AX' => 'AX',
          'AZ' => 'AZ',
          'BA' => 'BA',
          'BB' => 'BB',
          'BD' => 'BD',
          'BE' => 'BE',
          'BF' => 'BF',
          'BG' => 'BG',
          'BH' => 'BH',
          'BI' => 'BI',
          'BJ' => 'BJ',
          'BL' => 'BL',
          'BM' => 'BM',
          'BN' => 'BN',
          'BO' => 'BO',
          'BR' => 'BR',
          'BS' => 'BS',
          'BT' => 'BT',
          'BV' => 'BV',
          'BW' => 'BW',
          'BY' => 'BY',
          'BZ' => 'BZ',
          'CA' => 'CA',
          'CC' => 'CC',
          'CD' => 'CD',
          'CF' => 'CF',
          'CG' => 'CG',
          'CH' => 'CH',
          'CI' => 'CI',
          'CK' => 'CK',
          'CL' => 'CL',
          'CM' => 'CM',
          'CN' => 'CN',
          'CO' => 'CO',
          'CR' => 'CR',
          'CU' => 'CU',
          'CV' => 'CV',
          'CW' => 'CW',
          'CX' => 'CX',
          'CY' => 'CY',
          'CZ' => 'CZ',
          'DE' => 'DE',
          'DJ' => 'DJ',
          'DK' => 'DK',
          'DM' => 'DM',
          'DO' => 'DO',
          'DZ' => 'DZ',
          'EC' => 'EC',
          'EE' => 'EE',
          'EG' => 'EG',
          'EH' => 'EH',
          'ER' => 'ER',
          'ES' => 'ES',
          'ET' => 'ET',
          'FI' => 'FI',
          'FJ' => 'FJ',
          'FK' => 'FK',
          'FM' => 'FM',
          'FO' => 'FO',
          'FR' => 'FR',
          'GA' => 'GA',
          'GB' => 'GB',
          'GD' => 'GD',
          'GE' => 'GE',
          'GF' => 'GF',
          'GG' => 'GG',
          'GH' => 'GH',
          'GI' => 'GI',
          'GL' => 'GL',
          'GM' => 'GM',
          'GN' => 'GN',
          'GP' => 'GP',
          'GQ' => 'GQ',
          'GR' => 'GR',
          'GS' => 'GS',
          'GT' => 'GT',
          'GU' => 'GU',
          'GW' => 'GW',
          'GY' => 'GY',
          'HK' => 'HK',
          'HM' => 'HM',
          'HN' => 'HN',
          'HR' => 'HR',
          'HT' => 'HT',
          'HU' => 'HU',
          'ID' => 'ID',
          'IE' => 'IE',
          'IL' => 'IL',
          'IM' => 'IM',
          'IN' => 'IN',
          'IO' => 'IO',
          'IQ' => 'IQ',
          'IR' => 'IR',
          'IS' => 'IS',
          'IT' => 'IT',
          'JE' => 'JE',
          'JM' => 'JM',
          'JO' => 'JO',
          'JP' => 'JP',
          'KE' => 'KE',
          'KG' => 'KG',
          'KH' => 'KH',
          'KI' => 'KI',
          'KM' => 'KM',
          'KN' => 'KN',
          'KP' => 'KP',
          'KR' => 'KR',
          'KW' => 'KW',
          'KY' => 'KY',
          'KZ' => 'KZ',
          'LA' => 'LA',
          'LB' => 'LB',
          'LC' => 'LC',
          'LI' => 'LI',
          'LK' => 'LK',
          'LR' => 'LR',
          'LS' => 'LS',
          'LT' => 'LT',
          'LU' => 'LU',
          'LV' => 'LV',
          'LY' => 'LY',
          'MA' => 'MA',
          'MC' => 'MC',
          'MD' => 'MD',
          'ME' => 'ME',
          'MF' => 'MF',
          'MG' => 'MG',
          'MH' => 'MH',
          'MK' => 'MK',
          'ML' => 'ML',
          'MM' => 'MM',
          'MN' => 'MN',
          'MO' => 'MO',
          'MP' => 'MP',
          'MQ' => 'MQ',
          'MR' => 'MR',
          'MS' => 'MS',
          'MT' => 'MT',
          'MU' => 'MU',
          'MV' => 'MV',
          'MW' => 'MW',
          'MX' => 'MX',
          'MY' => 'MY',
          'MZ' => 'MZ',
          'NA' => 'NA',
          'NC' => 'NC',
          'NE' => 'NE',
          'NF' => 'NF',
          'NG' => 'NG',
          'NI' => 'NI',
          'NL' => 'NL',
          'NO' => 'NO',
          'NP' => 'NP',
          'NR' => 'NR',
          'NU' => 'NU',
          'NZ' => 'NZ',
          'OM' => 'OM',
          'PA' => 'PA',
          'PE' => 'PE',
          'PF' => 'PF',
          'PG' => 'PG',
          'PH' => 'PH',
          'PK' => 'PK',
          'PL' => 'PL',
          'PM' => 'PM',
          'PN' => 'PN',
          'PR' => 'PR',
          'PS' => 'PS',
          'PT' => 'PT',
          'PW' => 'PW',
          'PY' => 'PY',
          'QA' => 'QA',
          'RE' => 'RE',
          'RO' => 'RO',
          'RS' => 'RS',
          'RU' => 'RU',
          'RW' => 'RW',
          'SA' => 'SA',
          'SB' => 'SB',
          'SC' => 'SC',
          'SD' => 'SD',
          'SE' => 'SE',
          'SG' => 'SG',
          'SH' => 'SH',
          'SI' => 'SI',
          'SJ' => 'SJ',
          'SK' => 'SK',
          'SL' => 'SL',
          'SM' => 'SM',
          'SN' => 'SN',
          'SO' => 'SO',
          'SR' => 'SR',
          'ST' => 'ST',
          'SV' => 'SV',
          'SY' => 'SY',
          'SZ' => 'SZ',
          'TC' => 'TC',
          'TD' => 'TD',
          'TF' => 'TF',
          'TG' => 'TG',
          'TH' => 'TH',
          'TJ' => 'TJ',
          'TK' => 'TK',
          'TL' => 'TL',
          'TM' => 'TM',
          'TN' => 'TN',
          'TO' => 'TO',
          'TR' => 'TR',
          'TT' => 'TT',
          'TV' => 'TV',
          'TW' => 'TW',
          'TZ' => 'TZ',
          'UA' => 'UA',
          'UG' => 'UG',
          'UM' => 'UM',
          'US' => 'US',
          'UY' => 'UY',
          'UZ' => 'UZ',
          'VA' => 'VA',
          'VC' => 'VC',
          'VE' => 'VE',
          'VG' => 'VG',
          'VI' => 'VI',
          'VN' => 'VN',
          'VU' => 'VU',
          'WF' => 'WF',
          'WS' => 'WS',
          'YE' => 'YE',
          'YT' => 'YT',
          'ZA' => 'ZA',
          'ZM' => 'ZM',
          'ZW' => 'ZW',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'redhen_org-school-field_school_level'
  $field_instances['redhen_org-school-field_school_level'] = array(
    'bundle' => 'school',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_school_level',
    'label' => 'School Level',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_org-school-field_school_type'
  $field_instances['redhen_org-school-field_school_type'] = array(
    'bundle' => 'school',
    'default_value' => array(
      0 => array(
        'tid' => 30,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_school_type',
    'label' => 'Type of School',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'redhen_org-school-field_website'
  $field_instances['redhen_org-school-field_website'] = array(
    'bundle' => 'school',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_org',
    'field_name' => 'field_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'relation-child_of-endpoints'
  $field_instances['relation-child_of-endpoints'] = array(
    'bundle' => 'child_of',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'node' => 'default',
            'redhen_contact' => 'default',
            'redhen_contact_type' => 'default',
            'redhen_org' => 'default',
            'redhen_org_type' => 'default',
            'relation' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
            'wysiwyg_profile' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Allergies');
  t('Contacts');
  t('Date of Birth');
  t('Email');
  t('Financials');
  t('Gender');
  t('Household');
  t('Mailing Address');
  t('Overview');
  t('Phone');
  t('School');
  t('School Level');
  t('Total Giving');
  t('Type of School');
  t('Website');
  t('Year');
  t('endpoints');

  return $field_instances;
}
