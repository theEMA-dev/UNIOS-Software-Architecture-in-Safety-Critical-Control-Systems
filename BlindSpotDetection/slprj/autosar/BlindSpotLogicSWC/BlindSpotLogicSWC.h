/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: BlindSpotLogicSWC.h
 *
 * Code generated for Simulink model 'BlindSpotLogicSWC'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jun  9 16:16:51 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BlindSpotLogicSWC_h_
#define BlindSpotLogicSWC_h_
#ifndef BlindSpotLogicSWC_COMMON_INCLUDES_
#define BlindSpotLogicSWC_COMMON_INCLUDES_
#include "Platform_Types.h"
#endif                                 /* BlindSpotLogicSWC_COMMON_INCLUDES_ */

#include "Rte_Type.h"
#include "BlindSpotLogicSWC_types.h"

/* Block states (default storage) for system '<S1>/Embedded MATLAB Function' */
typedef struct {
  uint16 cnt;                          /* '<S1>/Embedded MATLAB Function' */
  boolean pre_out;                     /* '<S1>/Embedded MATLAB Function' */
} DW_EmbeddedMATLABFunction_Bli_T;

/* Block states (default storage) for model 'BlindSpotLogicSWC' */
typedef struct {
  DW_EmbeddedMATLABFunction_Bli_T sf_EmbeddedMATLABFunction_d;/* '<S2>/Embedded MATLAB Function' */
  DW_EmbeddedMATLABFunction_Bli_T sf_EmbeddedMATLABFunction;/* '<S1>/Embedded MATLAB Function' */
} DW_BlindSpotLogicSWC_f_T;

typedef struct {
  DW_BlindSpotLogicSWC_f_T rtdw;
} MdlrefDW_BlindSpotLogicSWC_T;

extern void BlindSpo_EmbeddedMATLABFunction(boolean rtu_u, boolean rtu_reset,
  uint16 rtu_w, boolean rtu_i, boolean *rty_out, DW_EmbeddedMATLABFunction_Bli_T
  *localDW);
extern void BlindSpotLogicSWC(const BlindSpotDetectedType
  *rtu_LeftBlindSpotDetected, const BlindSpotDetectedType
  *rtu_RightBlindSpotDetected, const TurnSignalStatusType *rtu_TurnSignalStatus,
  boolean *rty_BlindSpotWarningLeft, boolean *rty_BlindSpotWarningRight,
  DW_BlindSpotLogicSWC_f_T *localDW);

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
 * '<Root>' : 'BlindSpotLogicSWC'
 * '<S1>'   : 'BlindSpotLogicSWC/Extender (Left)'
 * '<S2>'   : 'BlindSpotLogicSWC/Extender (Right)'
 * '<S3>'   : 'BlindSpotLogicSWC/Extender (Left)/Embedded MATLAB Function'
 * '<S4>'   : 'BlindSpotLogicSWC/Extender (Right)/Embedded MATLAB Function'
 */
#endif                                 /* BlindSpotLogicSWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
