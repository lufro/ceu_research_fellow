<?php
/**
 * @file
 * ceu_research_fellow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ceu_research_fellow_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|profile_research_fellow|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_research_fellow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '5',
    'children' => array(
      0 => 'field_email',
      1 => 'field_room',
      2 => 'field_phone',
      3 => 'field_building',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|profile_research_fellow|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core|node|profile_research_fellow|form';
  $field_group->group_name = 'group_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_research_fellow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_featured_image',
      2 => 'field_basic_file_file',
      3 => 'field_tags',
      4 => 'field_academic_areas',
      5 => 'field_related_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_core|node|profile_research_fellow|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|profile_research_fellow|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_research_fellow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CEU data',
    'weight' => '4',
    'children' => array(
      0 => 'field_rank',
      1 => 'field_position',
      2 => 'field_unit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_data|node|profile_research_fellow|form'] = $field_group;

  return $export;
}
