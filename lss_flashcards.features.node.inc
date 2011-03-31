<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _lss_flashcards_node_info() {
  $items = array(
    'lss_flashcards' => array(
      'name' => t('Flashcards entry'),
      'module' => 'features',
      'description' => t('Flashcards entries'),
      'has_title' => '1',
      'title_label' => t('Term'),
      'has_body' => '1',
      'body_label' => t('Definition'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
