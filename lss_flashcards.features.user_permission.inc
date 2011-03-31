<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function lss_flashcards_user_default_permissions() {
  $permissions = array();

  // Exported permission: create lss_flashcards content
  $permissions['create lss_flashcards content'] = array(
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
  $permissions['delete any lss_flashcards content'] = array(
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
  $permissions['delete own lss_flashcards content'] = array(
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
  $permissions['edit any lss_flashcards content'] = array(
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
  $permissions['edit own lss_flashcards content'] = array(
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
