/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: BlindSpotLogicSWC.c
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

#include "BlindSpotLogicSWC.h"
#include "Platform_Types.h"
#include "Rte_Type.h"

/*
 * Output and update for atomic system:
 *    '<S1>/Embedded MATLAB Function'
 *    '<S2>/Embedded MATLAB Function'
 */
void BlindSpo_EmbeddedMATLABFunction(boolean rtu_u, boolean rtu_reset, uint16
  rtu_w, boolean rtu_i, boolean *rty_out, DW_EmbeddedMATLABFunction_Bli_T
  *localDW)
{
  if (rtu_i) {
    if (rtu_reset) {
      *rty_out = FALSE;
      localDW->pre_out = FALSE;
    } else if (rtu_u) {
      *rty_out = TRUE;
      localDW->pre_out = TRUE;
    } else {
      *rty_out = localDW->pre_out;
    }
  } else if (rtu_u && (!rtu_reset)) {
    localDW->cnt = 1U;
    *rty_out = TRUE;
  } else if ((localDW->cnt < 1) || (localDW->cnt > rtu_w) || rtu_reset) {
    localDW->cnt = 0U;
    *rty_out = FALSE;
  } else {
    localDW->cnt++;
    *rty_out = TRUE;
  }
}

/* Output and update for referenced model: 'BlindSpotLogicSWC' */
void BlindSpotLogicSWC(const BlindSpotDetectedType *rtu_LeftBlindSpotDetected,
  const BlindSpotDetectedType *rtu_RightBlindSpotDetected, const
  TurnSignalStatusType *rtu_TurnSignalStatus, boolean *rty_BlindSpotWarningLeft,
  boolean *rty_BlindSpotWarningRight, DW_BlindSpotLogicSWC_f_T *localDW)
{
  boolean rtb_LogicalOperator;
  boolean rtb_RelationalOperator;
  boolean rtb_out;

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<Root>/LEFT'
   *  RelationalOperator: '<Root>/Equal'
   */
  rtb_LogicalOperator = ((*rtu_LeftBlindSpotDetected) && (*rtu_TurnSignalStatus ==
    LEFT));

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/NONE'
   */
  rtb_RelationalOperator = (*rtu_TurnSignalStatus == NONE);

  /* MATLAB Function: '<S1>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Infinite'
   */
  BlindSpo_EmbeddedMATLABFunction(rtb_LogicalOperator, rtb_RelationalOperator,
    20, FALSE, &rtb_out, &localDW->sf_EmbeddedMATLABFunction);

  /* Logic: '<Root>/Logical Operator2' */
  *rty_BlindSpotWarningLeft = (rtb_LogicalOperator || rtb_out);

  /* Logic: '<Root>/Logical Operator1' incorporates:
   *  Constant: '<Root>/RIGHT'
   *  RelationalOperator: '<Root>/Equal1'
   */
  rtb_LogicalOperator = ((*rtu_TurnSignalStatus == RIGHT) &&
    (*rtu_RightBlindSpotDetected));

  /* MATLAB Function: '<S2>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Infinite'
   */
  BlindSpo_EmbeddedMATLABFunction(rtb_LogicalOperator, rtb_RelationalOperator,
    20, FALSE, &rtb_out, &localDW->sf_EmbeddedMATLABFunction_d);

  /* Logic: '<Root>/Logical Operator3' */
  *rty_BlindSpotWarningRight = (rtb_out || rtb_LogicalOperator);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
