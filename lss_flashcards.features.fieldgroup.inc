<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function lss_flashcards_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_lss_flashcardsaudiogroup
  $groups['lss_flashcards-group_lss_flashcardsaudiogroup'] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_lss_flashcardsaudiogroup',
    'label' => 'Add audio',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'study_side2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'study_image' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
      '0' => 'field_audio',
    ),
  );

  // Exported group: group_lss_flashcardsimagegroup
  $groups['lss_flashcards-group_lss_flashcardsimagegroup'] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_lss_flashcardsimagegroup',
    'label' => 'Add an image',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-5',
        'study_side2' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'study_image' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
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
    'weight' => '-5',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_easyimage',
    ),
  );

  // Exported group: group_lss_flashcardsvideogroup
  $groups['lss_flashcards-group_lss_flashcardsvideogroup'] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_lss_flashcardsvideogroup',
    'label' => 'Add video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'study_side2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'study_image' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
      '0' => 'field_external_video',
    ),
  );

  // Exported group: group_side1
  $groups['lss_flashcards-group_side1'] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_side1',
    'label' => 'Side 1',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-8',
        'study_side2' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'study_image' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'study_side1' => array(
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
    'weight' => '-8',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_termside1',
      '1' => 'field_sentence',
    ),
  );

  // Exported group: group_translation
  $groups['lss_flashcards-group_translation'] = array(
    'type_name' => 'lss_flashcards',
    'group_name' => 'group_translation',
    'label' => 'Side 2',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-7',
        'study_side2' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
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
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'study_image' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'study_side1' => array(
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
        'label' => 'above',
      ),
    ),
    'weight' => '-7',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_translation',
      '1' => 'field_transsentence',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add an image');
  t('Add audio');
  t('Add video');
  t('Side 1');
  t('Side 2');

  return $groups;
}
