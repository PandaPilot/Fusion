/**
 * @file FusionConvention.h
 * @author Seb Madgwick
 * @brief Earth axes convention.
 */

#pragma once

//------------------------------------------------------------------------------
// Definitions

/**
 * @brief Earth axes convention.
 */
typedef enum {
  FusionConventionNwu, /* North-West-Up */
  FusionConventionEnu, /* East-North-Up */
  FusionConventionNed, /* North-East-Down */
} FusionConvention;

//------------------------------------------------------------------------------
// End of file
