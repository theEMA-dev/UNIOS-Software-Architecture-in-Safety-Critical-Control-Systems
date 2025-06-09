/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: RadarSensorSWC.c
 *
 * Code generated for Simulink model 'RadarSensorSWC'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Jun  8 02:11:39 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RadarSensorSWC.h"
#include "Rte_Type.h"

/* Output and update for referenced model: 'RadarSensorSWC' */
void RadarSensorSWC(const BlindSpotDetectedType *rtu_Simulation_BSD_Left, const
                    BlindSpotDetectedType *rtu_Simulation_BSD_Right,
                    BlindSpotDetectedType *rty_LeftBlindSpotDetected,
                    BlindSpotDetectedType *rty_RightBlindSpotDetected)
{
  /* SignalConversion generated from: '<Root>/Simulation_BSD_Left' */
  *rty_LeftBlindSpotDetected = *rtu_Simulation_BSD_Left;

  /* SignalConversion generated from: '<Root>/Simulation_BSD_Right' */
  *rty_RightBlindSpotDetected = *rtu_Simulation_BSD_Right;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
