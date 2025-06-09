/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: BlindSpotComposition.h
 *
 * Code generated for Simulink model 'BlindSpotComposition'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jun  9 18:52:50 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BlindSpotComposition_h_
#define BlindSpotComposition_h_
#ifndef BlindSpotComposition_COMMON_INCLUDES_
#define BlindSpotComposition_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_BlindSpotComposition.h"
#endif                               /* BlindSpotComposition_COMMON_INCLUDES_ */

#include "BlindSpotComposition_types.h"
#include "BlindSpotLogicSWC.h"
#include "RadarSensorSWC.h"
#include "VehicleStatusSWC.h"
#include "WarningDisplaySWC.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  MdlrefDW_BlindSpotLogicSWC_T Model2_InstanceData;/* '<Root>/Model2' */
} ARID_DEF_BlindSpotComposition_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_BlindSpotComposition_T BlindSpotComposition_ARID_DEF;/* '<Root>/Model2' */

/* External data declarations for dependent source files */
extern const boolean BlindSpotComposition_BGND;/* boolean ground */
extern const TurnSignalStatusType BlindSpotComposition_TurnSignalStatusTypeGND;/* TurnSignalStatusType ground */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/BSD Warning Left' : Unused code path elimination
 * Block '<Root>/BSD Warning Right' : Unused code path elimination
 * Block '<Root>/Radar Left' : Eliminated due to constant selection input
 * Block '<Root>/Radar Right' : Eliminated due to constant selection input
 * Block '<Root>/Signal On//Off' : Eliminated due to constant selection input
 * Block '<Root>/Signal Side' : Eliminated due to constant selection input
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 * Block '<Root>/LEFT SIGNAL' : Unused code path elimination
 * Block '<Root>/RIGHT SIGNAL' : Unused code path elimination
 */

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
 * '<Root>' : 'BlindSpotComposition'
 */
#endif                                 /* BlindSpotComposition_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
