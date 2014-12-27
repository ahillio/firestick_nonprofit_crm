<?php
/**
 * @file
 * firestick_nonprofit_crm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function firestick_nonprofit_crm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function firestick_nonprofit_crm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function firestick_nonprofit_crm_default_redhen_contact_type() {
  $items = array();
  $items['adult'] = entity_import('redhen_contact_type', '{
    "name" : "adult",
    "label" : "Adult",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['contact'] = entity_import('redhen_contact_type', '{
    "name" : "contact",
    "label" : "Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['kid'] = entity_import('redhen_contact_type', '{
    "name" : "kid",
    "label" : "Kid",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['teenager'] = entity_import('redhen_contact_type', '{
    "name" : "teenager",
    "label" : "Teenager",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function firestick_nonprofit_crm_default_redhen_org_type() {
  $items = array();
  $items['bank'] = entity_import('redhen_org_type', '{
    "name" : "bank",
    "label" : "Bank",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['business'] = entity_import('redhen_org_type', '{
    "name" : "business",
    "label" : "Business",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['foundations'] = entity_import('redhen_org_type', '{
    "name" : "foundations",
    "label" : "Foundations",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['government_agency'] = entity_import('redhen_org_type', '{
    "name" : "government_agency",
    "label" : "Government Agency",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['household'] = entity_import('redhen_org_type', '{
    "name" : "household",
    "label" : "Household",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  $items['school'] = entity_import('redhen_org_type', '{
    "name" : "school",
    "label" : "School",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
