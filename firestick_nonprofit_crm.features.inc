<?php
/**
 * @file
 * firestick_nonprofit_crm.features.inc
 */

/**
 * Implements hook_default_redhen_contact_type().
 */
function firestick_nonprofit_crm_default_redhen_contact_type() {
  $items = array();
  $items['contact'] = entity_import('redhen_contact_type', '{
    "name" : "contact",
    "label" : "Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function firestick_nonprofit_crm_default_redhen_org_type() {
  $items = array();
  $items['foundations'] = entity_import('redhen_org_type', '{
    "name" : "foundations",
    "label" : "Foundations",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
