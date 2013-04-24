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
  $field_group->identifier = 'group_content_wrapper|node|gsb_video|default';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gsb_video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_date_published',
      3 => 'field_discipline',
      4 => 'field_editorial_summary',
      5 => 'field_industry',
      6 => 'field_region',
      7 => 'field_tag',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_wrapper|node|gsb_video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|gsb_video|teaser';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gsb_video';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_date_published',
      3 => 'field_discipline',
      4 => 'field_editorial_summary',
      5 => 'field_industry',
      6 => 'field_region',
      7 => 'field_tag',
      8 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_wrapper|node|gsb_video|teaser'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_discipline',
      3 => 'field_industry',
      4 => 'field_region',
      5 => 'field_tag',
      6 => 'field_target_audience',
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
