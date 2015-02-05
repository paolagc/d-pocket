<?php


/**
 * @file
 * Administration menu callbacks for Notification center
 */

function com_pocket_admin_settings() {
  $form = array();

  $node_types = node_type_get_names();

  $form['com_pocket_link_later_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Read More link'),
    '#description' => t('Select the content types in which display the Read More link.'),
    '#default_value' => variable_get('com_pocket_link_later_node_types', array()),
    '#options' => $node_types,
  );

  $form['com_pocket_link_share_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Share link'),
    '#description' => t('Select the content types in which display the Share link.'),
    '#default_value' => variable_get('com_pocket_link_share_node_types', array()),
    '#options' => $node_types,
  );


  $form['#submit'][] = 'com_pocket_admin_settings_submit';
  return system_settings_form($form);
}

function com_pocket_admin_settings_submit() {
  drupal_theme_rebuild();
}

