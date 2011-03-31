<?php

/**
 * Implementation of hook_content_default_fields().
 */
function lss_flashcards_content_default_fields() {
  $fields = array();

  // Exported field: field_audio
  $fields['lss_flashcards-field_audio'] = array(
    'field_name' => 'field_audio',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-93',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_audio',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-93',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_audio',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-91',
      ),
      'weight' => '-2',
      'parent' => 'group_lss_flashcardsaudiogroup',
      'teaser' => array(
        'format' => 'swftools_no_file',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'swftools_no_file',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'mp3',
      'file_path' => 'audio',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '50M',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_profilepic_small' => 0,
        'imagecache_tiny' => 0,
        'imagecache_profilepic_medium' => 0,
        'imagecache_teaser-thumbnail' => 0,
        'imagecache_gallery' => 0,
        'imagecache_medium' => 0,
        'imagecache_profilepic_tiny' => 0,
        'imagecache_small_block' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Upload audio',
      'weight' => '-2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_easyimage
  $fields['lss_flashcards-field_easyimage'] = array(
    'field_name' => 'field_easyimage',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-94',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_easyimage',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-94',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'imagefield__lightbox2__medium__original',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_easyimage',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-100',
      ),
      'weight' => '-3',
      'parent' => 'group_lss_flashcardsimagegroup',
      'teaser' => array(
        'format' => 'teaser-thumbnail_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__medium__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg png jpeg gif',
      'file_path' => 'easy_images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '50M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_profilepic_small' => 0,
        'imagecache_tiny' => 0,
        'imagecache_profilepic_medium' => 0,
        'imagecache_teaser-thumbnail' => 0,
        'imagecache_gallery' => 0,
        'imagecache_medium' => 0,
        'imagecache_profilepic_tiny' => 0,
        'imagecache_small_block' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Easy image',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_external_video
  $fields['lss_flashcards-field_external_video'] = array(
    'field_name' => 'field_external_video',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-92',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_external_video',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-92',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_external_video',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-92',
      ),
      'weight' => '-1',
      'parent' => 'group_lss_flashcardsvideogroup',
      'teaser' => array(
        'format' => 'video_thumbnail',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'video_replace',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'bliptv' => 'bliptv',
        'google' => 'google',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
        'zzz_custom_url' => 'zzz_custom_url',
        'archive' => 0,
        'dailymotion' => 0,
        'guba' => 0,
        'imeem' => 0,
        'jumpcut' => 0,
        'lastfm' => 0,
        'livevideo' => 0,
        'metacafe' => 0,
        'myspace' => 0,
        'revver' => 0,
        'sevenload' => 0,
        'spike' => 0,
        'tudou' => 0,
        'twistage' => 0,
        'ustream' => 0,
        'ustreamlive' => 0,
        'veoh' => 0,
        'voicethread' => 0,
        'yahoomusic' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link to a video',
      'weight' => '-1',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_pos
  $fields['lss_flashcards-field_pos'] = array(
    'field_name' => 'field_pos',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-82',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_pos',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-82',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_pos',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-99',
      ),
      'weight' => '-6',
      'parent' => '',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_pos][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Part of Speech',
      'weight' => '-6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_sentence
  $fields['lss_flashcards-field_sentence'] = array(
    'field_name' => 'field_sentence',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-95',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_side1',
        'field_id' => 'field_sentence',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-95',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_side1',
        'field_id' => 'field_sentence',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-96',
      ),
      'weight' => '13',
      'parent' => 'group_side1',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_sentence][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sentence (Side 1)',
      'weight' => '13',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_termside1
  $fields['lss_flashcards-field_termside1'] = array(
    'field_name' => 'field_termside1',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-96',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_side1',
        'field_id' => 'field_termside1',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-96',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_side1',
        'field_id' => 'field_termside1',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-97',
      ),
      'weight' => '12',
      'parent' => 'group_side1',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'study_side1' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_termside1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Term (Side 1)',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_translation
  $fields['lss_flashcards-field_translation'] = array(
    'field_name' => 'field_translation',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-99',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_translation',
        'field_id' => 'field_translation',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-99',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_translation',
        'field_id' => 'field_translation',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-94',
      ),
      'weight' => '-4',
      'parent' => 'group_translation',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_translation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Term (Side 2)',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_transsentence
  $fields['lss_flashcards-field_transsentence'] = array(
    'field_name' => 'field_transsentence',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-98',
      'study_side2' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_translation',
        'field_id' => 'field_transsentence',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-98',
      ),
      'study_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => 'group_translation',
        'field_id' => 'field_transsentence',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-93',
      ),
      'weight' => '-3',
      'parent' => 'group_translation',
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_transsentence][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sentence (Side 2)',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Easy image');
  t('Link to a video');
  t('Part of Speech');
  t('Sentence (Side 1)');
  t('Sentence (Side 2)');
  t('Term (Side 1)');
  t('Term (Side 2)');
  t('Upload audio');

  return $fields;
}
