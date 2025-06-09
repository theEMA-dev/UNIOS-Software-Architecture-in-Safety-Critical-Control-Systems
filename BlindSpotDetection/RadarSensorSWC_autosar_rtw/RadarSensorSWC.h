/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: RadarSensorSWC.h
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

#ifndef RadarSensorSWC_h_
#define RadarSensorSWC_h_
#ifndef RadarSensorSWC_COMMON_INCLUDES_
#define RadarSensorSWC_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_RadarSensorSWC.h"
#endif                                 /* RadarSensorSWC_COMMON_INCLUDES_ */

#include "RadarSensorSWC_types.h"
#include "Rte_Type.h"

/* Invariant block signals (default storage) */
typedef struct {
  BlindSpotDetectedType Constant;      /* '<Root>/Constant' */
  BlindSpotDetectedType Constant1;     /* '<Root>/Constant1' */
} ConstB_RadarSensorSWC_T;

extern const ConstB_RadarSensorSWC_T RadarSensorSWC_ConstB;/* constant block i/o */

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
 * '<Root>' : 'RadarSensorSWC'
 */
#endif                                 /* RadarSensorSWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
