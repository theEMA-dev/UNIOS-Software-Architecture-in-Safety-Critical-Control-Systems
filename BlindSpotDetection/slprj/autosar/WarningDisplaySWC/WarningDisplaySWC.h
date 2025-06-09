/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: WarningDisplaySWC.h
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

#ifndef WarningDisplaySWC_h_
#define WarningDisplaySWC_h_
#ifndef WarningDisplaySWC_COMMON_INCLUDES_
#define WarningDisplaySWC_COMMON_INCLUDES_
#include "Platform_Types.h"
#endif                                 /* WarningDisplaySWC_COMMON_INCLUDES_ */

#include "Rte_Type.h"
#include "WarningDisplaySWC_types.h"

extern void WarningDisplaySWC(const BlindSpotWarningType
  *rtu_BlindSpotWarningLeft, const BlindSpotWarningType
  *rtu_BlindSpotWarningRight, BlindSpotWarningType *rty_Simulation_BSD_Left,
  BlindSpotWarningType *rty_Simulation_BSD_Right);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'WarningDisplaySWC'
 */
#endif                                 /* WarningDisplaySWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
