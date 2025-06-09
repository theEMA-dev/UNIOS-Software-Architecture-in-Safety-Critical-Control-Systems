/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: BlindSpotLogicSWC.c
 *
 * Code generated for Simulink model 'BlindSpotLogicSWC'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat Jun  7 22:55:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BlindSpotLogicSWC.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_BlindSpotLogicSWC_T BlindSpotLogicSWC_ARID_DEF;/* '<Root>/Memory' */

/* Model step function */
void EvaluateBlindSpot(void)
{
  TurnSignalStatusType rtb_LogicalOperator2_tmp;

  /* RelationalOperator: '<Root>/Equal' incorporates:
   *  Inport: '<Root>/TurnSignalStatus'
   *  RelationalOperator: '<Root>/Equal1'
   */
  rtb_LogicalOperator2_tmp = Rte_IRead_EvaluateBlindSpot_TurnSignalStatus_turn();

  /* Logic: '<Root>/Logical Operator2' incorporates:
   *  Constant: '<Root>/LEFT'
   *  Inport: '<Root>/LeftBlindSpotDetected'
   *  Inport: '<Root>/TurnSignalStatus'
   *  Logic: '<Root>/Logical Operator'
   *  Memory: '<Root>/Memory'
   *  RelationalOperator: '<Root>/Equal'
   */
  BlindSpotLogicSWC_ARID_DEF.Memory_PreviousInput =
    ((Rte_IRead_EvaluateBlindSpot_LeftBlindSpotDetected_detected() &&
      (rtb_LogicalOperator2_tmp == LEFT)) ||
     BlindSpotLogicSWC_ARID_DEF.Memory_PreviousInput);

  /* Outport: '<Root>/BlindSpotWarningLeft' */
  Rte_IWrite_EvaluateBlindSpot_BlindSpotWarningLeft_warning
    (BlindSpotLogicSWC_ARID_DEF.Memory_PreviousInput);

  /* Logic: '<Root>/Logical Operator3' incorporates:
   *  Constant: '<Root>/RIGHT'
   *  Inport: '<Root>/RightBlindSpotDetected'
   *  Logic: '<Root>/Logical Operator1'
   *  Memory: '<Root>/Memory1'
   *  RelationalOperator: '<Root>/Equal1'
   */
  BlindSpotLogicSWC_ARID_DEF.Memory1_PreviousInput =
    (BlindSpotLogicSWC_ARID_DEF.Memory1_PreviousInput ||
     ((rtb_LogicalOperator2_tmp == RIGHT) &&
      Rte_IRead_EvaluateBlindSpot_RightBlindSpotDetected_detected()));

  /* Outport: '<Root>/BlindSpotWarningRight' */
  Rte_IWrite_EvaluateBlindSpot_BlindSpotWarningRight_warning
    (BlindSpotLogicSWC_ARID_DEF.Memory1_PreviousInput);
}

/* Model initialize function */
void BlindSpotLogicSWC_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
