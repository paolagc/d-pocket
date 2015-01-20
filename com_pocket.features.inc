<?php
/**
 * @file
 * com_pocket.features.inc
 */

/**
 * Implements hook_views_api().
 */
function com_pocket_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function com_pocket_default_entityform_type() {
  $items = array();
  $items['suggest_content'] = entity_import('entityform_type', '{
    "type" : "suggest_content",
    "label" : "Suggest content",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "plain_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "plain_text" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function com_pocket_flag_default_flags() {
  $flags = array();
  // Exported flag: "Read Later".
  $flags['read_later'] = array(
    'entity_type' => 'node',
    'title' => 'Read Later',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Read it Later',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Already on waitlist',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'com_pocket',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
