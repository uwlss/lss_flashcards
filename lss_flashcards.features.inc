<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function lss_flashcards_context_default_contexts() {
  $items = array();

  $items['context_ui-lss_flashcards-lss_flashcards_node'] = array(
    'namespace' => 'context_ui',
    'attribute' => 'lss_flashcards',
    'value' => 'lss_flashcards_node',
    'description' => 'Context for Flashcards nodes',
    'node' => array(
      '0' => 'lss_flashcards',
    ),
    'menu' => 'lss_flashcards',
    'block' => array(),
  );
  return $items;
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function lss_flashcards_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function lss_flashcards_node_info() {
  $items = array(
    'lss_flashcards' => array(
      'name' => t('Flashcards entry'),
      'module' => 'features',
      'description' => t('Flashcards entries'),
      'has_title' => '1',
      'title_label' => t('Term'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function lss_flashcards_views_api() {
  return array(
    'api' => '2',
  );
}
