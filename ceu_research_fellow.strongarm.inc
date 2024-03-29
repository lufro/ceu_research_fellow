<?php
/**
 * @file
 * ceu_research_fellow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ceu_research_fellow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_profile_research_fellow';
  $strongarm->value = array();
  $export['menu_options_profile_research_fellow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_profile_research_fellow';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_profile_research_fellow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile_research_fellow';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_profile_research_fellow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_profile_research_fellow';
  $strongarm->value = '1';
  $export['node_preview_profile_research_fellow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_profile_research_fellow';
  $strongarm->value = 0;
  $export['node_submitted_profile_research_fellow'] = $strongarm;

  return $export;
}
