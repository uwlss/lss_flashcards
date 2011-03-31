<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _lss_flashcards_content_default_fields() {
  $fields = array();

  // Exported field: field_audio
  $fields[] = array(
    'field_name' => 'field_audio',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_lss_flashcardsaudiogroup',
      'label' => array(
        'format' => 'hidden',
      ),
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
  $fields[] = array(
    'field_name' => 'field_easyimage',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_lss_flashcardsimagegroup',
      'label' => array(
        'format' => 'hidden',
      ),
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
  $fields[] = array(
    'field_name' => 'field_external_video',
    'type_name' => 'lss_flashcards',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_lss_flashcardsvideogroup',
      'label' => array(
        'format' => 'hidden',
      ),
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

  // Translatables
  array(
    t('Easy image'),
    t('Link to a video'),
    t('Upload audio'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _lss_flashcards_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'context_ui',
    'attribute' => 'lss_flashcards',
    'value' => 'lss_flashcards_node',
    'description' => 'Context for Flashcards nodes',
    'node' => array(
      '0' => 'lss_flashcards',
    ),
    'menu' => 'lss_flashcards',
    'block' => array(
      'views_lss_flashcards-block_2' => array(
        'module' => 'views',
        'delta' => 'lss_flashcards-block_2',
        'weight' => 31,
        'region' => 'right',
        'status' => '0',
        'label' => 'Flashcards Summary Block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _lss_flashcards_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _lss_flashcards_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_lss_flashcardsaudiogroup
  $groups[] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_lss_flashcardsaudiogroup',
    'label' => 'Add audio',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_audio',
    ),
  );

  // Exported group: group_lss_flashcardsimagegroup
  $groups[] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_lss_flashcardsimagegroup',
    'label' => 'Add an image',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_easyimage',
    ),
  );

  // Exported group: group_lss_flashcardsvideogroup
  $groups[] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_lss_flashcardsvideogroup',
    'label' => 'Add video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_external_video',
    ),
  );

  // Translatables
  array(
    t('Add an image'),
    t('Add audio'),
    t('Add video'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _lss_flashcards_user_default_permissions() {
  $permissions = array();

  // Exported permission: create lss_flashcards content
  $permissions[] = array(
    'name' => 'create lss_flashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'consultant',
      '3' => 'instructor',
      '4' => 'student',
    ),
  );

  // Exported permission: delete any lss_flashcards content
  $permissions[] = array(
    'name' => 'delete any lss_flashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'consultant',
      '3' => 'instructor',
      '4' => 'student',
    ),
  );

  // Exported permission: delete own lss_flashcards content
  $permissions[] = array(
    'name' => 'delete own lss_flashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'consultant',
      '3' => 'instructor',
      '4' => 'student',
    ),
  );

  // Exported permission: edit any lss_flashcards content
  $permissions[] = array(
    'name' => 'edit any lss_flashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'consultant',
      '3' => 'instructor',
      '4' => 'student',
    ),
  );

  // Exported permission: edit own lss_flashcards content
  $permissions[] = array(
    'name' => 'edit own lss_flashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'consultant',
      '3' => 'instructor',
      '4' => 'student',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _lss_flashcards_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_lss_flashcards';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '2',
    'author' => '7',
    'options' => '8',
    'comment_settings' => '3',
    'menu' => '0',
    'path' => '6',
    'attachments' => '4',
    'print' => '5',
  );

  $export['content_extra_weights_lss_flashcards'] = $strongarm;
  return $export;
}
