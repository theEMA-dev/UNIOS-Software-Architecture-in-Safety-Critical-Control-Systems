/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: RadarSensorSWC.c
 *
 * Code generated for Simulink model 'RadarSensorSWC'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat Jun  7 23:09:33 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RadarSensorSWC.h"

/* Model step function */
void RadarSensorSWC_Step(void)
{
  /* Outport: '<Root>/LeftBlindSpotDetected' */
  (void)Rte_Write_LeftBlindSpotDetected_detected(RadarSensorSWC_ConstB.Constant);

  /* Outport: '<Root>/RightBlindSpotDetected' */
  (void)Rte_Write_RightBlindSpotDetected_detected
    (RadarSensorSWC_ConstB.Constant1);
}

/* Model initialize function */
void RadarSensorSWC_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
