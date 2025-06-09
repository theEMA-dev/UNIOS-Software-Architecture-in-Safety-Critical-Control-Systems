/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: VehicleStatusSWC.c
 *
 * Code generated for Simulink model 'VehicleStatusSWC'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Jun  8 02:11:44 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VehicleStatusSWC.h"
#include "Rte_Type.h"

/* Output and update for referenced model: 'VehicleStatusSWC' */
void VehicleStatusSWC(const TurnSignalStatusType *rtu_Simulation_TurnSignal,
                      TurnSignalStatusType *rty_TurnSignalStatus)
{
  /* SignalConversion generated from: '<Root>/Simulation_TurnSignal' */
  *rty_TurnSignalStatus = *rtu_Simulation_TurnSignal;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
