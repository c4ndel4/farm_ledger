<?php

/**
 * @file
 * Provides Views data for farm_ledger.module.
 */

/**
 * Implements hook_views_data_alter().
 */
function farm_ledger_views_data_alter(array &$data) {

  // Create unit price field, filter, and sort using fraction decimal handlers.
  $fraction_fields = [
    'numerator' => 'unit_price_numerator',
    'denominator' => 'unit_price_denominator',
  ];
  $data['quantity__unit_price']['unit_price_value'] = [
    'title' => t('Unit price'),
    'help' => t('Value of the unit price, in decimal format.'),
    'real field' => 'unit_price_numerator',
    'field' => [
      'id' => 'fraction',
      'additional fields' => $fraction_fields,
      'click sortable' => TRUE,
    ],
    'sort' => [
      'id' => 'fraction',
      'additional fields' => $fraction_fields,
    ],
    'filter' => [
      'id' => 'fraction',
      'additional fields' => $fraction_fields,
    ],
  ];

  // Create unit quantity field, filter, and sort using fraction decimal
  // handlers.
  $fraction_fields = [
    'numerator' => 'unit_quantity_numerator',
    'denominator' => 'unit_quantity_denominator',
  ];
  $data['quantity__unit_quantity']['unit_quantity_value'] = [
    'title' => t('Unit quantity'),
    'help' => t('Value of the unit quantity, in decimal format.'),
    'real field' => 'unit_quantity_numerator',
    'field' => [
      'id' => 'fraction',
      'additional fields' => $fraction_fields,
      'click sortable' => TRUE,
    ],
    'sort' => [
      'id' => 'fraction',
      'additional fields' => $fraction_fields,
    ],
    'filter' => [
      'id' => 'fraction',
      'additional fields' => $fraction_fields,
    ],
  ];
}
