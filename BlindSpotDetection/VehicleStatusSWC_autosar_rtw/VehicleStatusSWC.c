/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: VehicleStatusSWC.c
 *
 * Code generated for Simulink model 'VehicleStatusSWC'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat Jun  7 23:28:45 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VehicleStatusSWC.h"

/* Model step function */
void New(void)
{
  /* Outport: '<Root>/TurnSignalStatus' */
  Rte_IWrite_VehicleStatusSWC_Step_TurnSignalStatus_status
    (VehicleStatusSWC_ConstB.CONTROL);
}

/* Model initialize function */
void VehicleStatusSWC_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
