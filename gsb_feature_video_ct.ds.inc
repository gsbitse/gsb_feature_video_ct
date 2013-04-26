<?php
/**
 * @file
 * gsb_feature_video_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_video_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gsb_video|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gsb_video';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_editorial_summary' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|gsb_video|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_video_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gsb_video|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gsb_video';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_file_single_public',
        1 => 'field_date_published',
        2 => 'title',
        3 => 'field_editorial_summary',
        4 => 'group_tags_wrapper',
        5 => 'field_business_insight_topic',
        6 => 'field_company_organization',
        7 => 'field_discipline',
        8 => 'field_industry',
        9 => 'field_region',
        10 => 'field_target_audience',
        11 => 'field_tag',
      ),
    ),
    'fields' => array(
      'field_file_single_public' => 'ds_content',
      'field_date_published' => 'ds_content',
      'title' => 'ds_content',
      'field_editorial_summary' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_discipline' => 'ds_content',
      'field_industry' => 'ds_content',
      'field_region' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|gsb_video|teaser'] = $ds_layout;

  return $export;
}
