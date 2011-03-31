<?php

/**
 * Implementation of hook_strongarm().
 */
function lss_flashcards_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lss_flashcards';
  $strongarm->value = 0;

  $export['comment_anonymous_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_lss_flashcards';
  $strongarm->value = '3';

  $export['comment_controls_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lss_flashcards';
  $strongarm->value = '4';

  $export['comment_default_mode_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_lss_flashcards';
  $strongarm->value = '1';

  $export['comment_default_order_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lss_flashcards';
  $strongarm->value = '50';

  $export['comment_default_per_page_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lss_flashcards';
  $strongarm->value = '0';

  $export['comment_form_location_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lss_flashcards';
  $strongarm->value = '2';

  $export['comment_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lss_flashcards';
  $strongarm->value = '1';

  $export['comment_preview_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lss_flashcards';
  $strongarm->value = '1';

  $export['comment_subject_field_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_lss_flashcards';
  $strongarm->value = array(
    'title' => '-9',
    'revision_information' => '0',
    'author' => '5',
    'options' => '-2',
    'comment_settings' => '1',
    'menu' => '-1',
    'path' => '4',
    'attachments' => '2',
    'print' => '3',
    'vud_node_widget_display' => '-10',
  );

  $export['content_extra_weights_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_display_settings_lss_flashcards';
  $strongarm->value = array(
    'study_image' => array(
      'fields' => array(
        'nd_vud' => array(
          'region' => 'left',
          'weight' => '-19',
          'format' => '_nd_vud_widget',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_pos' => array(
          'region' => 'middle',
          'weight' => '-99',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_translation' => array(
          'region' => 'middle',
          'weight' => '-94',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_translation',
        ),
        'field_easyimage' => array(
          'region' => 'middle',
          'weight' => '-100',
          'format' => 'imagefield__lightbox2__medium__original',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_transsentence' => array(
          'region' => 'middle',
          'weight' => '-93',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_translation',
        ),
        'field_audio' => array(
          'region' => 'middle',
          'weight' => '-91',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_external_video' => array(
          'region' => 'middle',
          'weight' => '-92',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_termside1' => array(
          'region' => 'middle',
          'weight' => '-97',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_side1',
        ),
        'field_sentence' => array(
          'region' => 'middle',
          'weight' => '-96',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_side1',
        ),
        'group_side1' => array(
          'region' => 'middle',
          'weight' => '-98',
          'format' => 'ds_group_fieldset_collapsed',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_translation' => array(
          'region' => 'middle',
          'weight' => '-95',
          'format' => 'ds_group_fieldset_collapsed',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_lss_flashcardsimagegroup' => array(
          'region' => 'disabled',
          'weight' => '-90',
          'format' => 'ds_field',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_lss_flashcardsaudiogroup' => array(
          'region' => 'disabled',
          'weight' => '-86',
          'format' => 'ds_field',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_lss_flashcardsvideogroup' => array(
          'region' => 'disabled',
          'weight' => '-87',
          'format' => 'ds_field',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'disabled',
          'weight' => '-88',
          'format' => 'nd_title_h1_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-89',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-85',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'disabled',
          'weight' => '-84',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-82',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'files' => array(
          'region' => 'disabled',
          'weight' => '-83',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
      'region_styles' => array(
        'header' => '',
        'left' => '',
        'middle' => '',
        'right' => '',
        'footer' => '',
      ),
    ),
    'study_side2' => array(
      'fields' => array(
        'nd_vud' => array(
          'region' => 'left',
          'weight' => '-19',
          'format' => '_nd_vud_widget',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_pos' => array(
          'region' => 'disabled',
          'weight' => '-82',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_translation' => array(
          'region' => 'middle',
          'weight' => '-99',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_translation',
        ),
        'field_easyimage' => array(
          'region' => 'middle',
          'weight' => '-94',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_transsentence' => array(
          'region' => 'middle',
          'weight' => '-98',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_translation',
        ),
        'field_audio' => array(
          'region' => 'middle',
          'weight' => '-93',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_external_video' => array(
          'region' => 'middle',
          'weight' => '-92',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_termside1' => array(
          'region' => 'middle',
          'weight' => '-96',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_side1',
        ),
        'field_sentence' => array(
          'region' => 'middle',
          'weight' => '-95',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
          'parent' => 'group_side1',
        ),
        'group_side1' => array(
          'region' => 'middle',
          'weight' => '-97',
          'format' => 'ds_group_fieldset_collapsed',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_translation' => array(
          'region' => 'middle',
          'weight' => '-100',
          'format' => 'ds_group_fieldset_collapsible',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_lss_flashcardsimagegroup' => array(
          'region' => 'disabled',
          'weight' => '-91',
          'format' => 'ds_field',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_lss_flashcardsaudiogroup' => array(
          'region' => 'disabled',
          'weight' => '-87',
          'format' => 'ds_field',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'group_lss_flashcardsvideogroup' => array(
          'region' => 'disabled',
          'weight' => '-88',
          'format' => 'ds_field',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'disabled',
          'weight' => '-89',
          'format' => 'nd_title_h1_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-90',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-86',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'disabled',
          'weight' => '-85',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-83',
          'format' => 'nd_post_date_small',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'files' => array(
          'region' => 'disabled',
          'weight' => '-84',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 1,
      'region_styles' => array(
        'header' => '',
        'left' => '',
        'middle' => '',
        'right' => '',
        'footer' => '',
      ),
    ),
  );

  $export['nd_display_settings_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lss_flashcards';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );

  $export['node_options_lss_flashcards'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_lss_flashcards';
  $strongarm->value = '1';

  $export['upload_lss_flashcards'] = $strongarm;
  return $export;
}
