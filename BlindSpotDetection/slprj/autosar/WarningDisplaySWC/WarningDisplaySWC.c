/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: WarningDisplaySWC.c
 *
 * Code generated for Simulink model 'WarningDisplaySWC'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jun  9 16:17:16 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "WarningDisplaySWC.h"
#include "Rte_Type.h"

/* Output and update for referenced model: 'WarningDisplaySWC' */
void WarningDisplaySWC(const BlindSpotWarningType *rtu_BlindSpotWarningLeft,
  const BlindSpotWarningType *rtu_BlindSpotWarningRight, BlindSpotWarningType
  *rty_Simulation_BSD_Left, BlindSpotWarningType *rty_Simulation_BSD_Right)
{
  /* SignalConversion generated from: '<Root>/BlindSpotWarningLeft' */
  *rty_Simulation_BSD_Left = *rtu_BlindSpotWarningLeft;

  /* SignalConversion generated from: '<Root>/BlindSpotWarningRight' */
  *rty_Simulation_BSD_Right = *rtu_BlindSpotWarningRight;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
