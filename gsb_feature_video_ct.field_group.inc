<?php
/**
 * @file
 * gsb_feature_video_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_video_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|gsb_video|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gsb_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '4',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_target_audience',
      2 => 'field_discipline',
      3 => 'field_industry',
      4 => 'field_region',
      5 => 'field_company_organization',
      6 => 'field_tag',
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
  $export['group_taxonomy|node|gsb_video|form'] = $field_group;

  return $export;
}
