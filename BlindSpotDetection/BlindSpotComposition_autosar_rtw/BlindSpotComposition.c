/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: BlindSpotComposition.c
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

#include "BlindSpotComposition.h"
#include "Platform_Types.h"
#include "Rte_Type.h"
#include "RadarSensorSWC.h"
#include "VehicleStatusSWC.h"
#include "BlindSpotLogicSWC.h"
#include "WarningDisplaySWC.h"

const boolean BlindSpotComposition_BGND = FALSE;/* boolean ground */
const TurnSignalStatusType BlindSpotComposition_TurnSignalStatusTypeGND = NONE;/* TurnSignalStatusType ground */

/* PublicStructure Variables for Internal Data */
ARID_DEF_BlindSpotComposition_T BlindSpotComposition_ARID_DEF;/* '<Root>/Model2' */

/* Model step function */
void BlindSpotComposition_Step(void)
{
  /* local block i/o variables */
  TurnSignalStatusType rtb_Model1;
  BlindSpotWarningType rtb_Model3_o1;
  BlindSpotWarningType rtb_Model3_o2;
  BlindSpotDetectedType rtb_Model_o1;
  BlindSpotDetectedType rtb_Model_o2;
  BlindSpotWarningType rtb_Model2_o1;
  BlindSpotWarningType rtb_Model2_o2;

  /* ModelReference: '<Root>/Model' */
  RadarSensorSWC(((const boolean*) &BlindSpotComposition_BGND), ((const boolean*)
    &BlindSpotComposition_BGND), &rtb_Model_o1, &rtb_Model_o2);

  /* ModelReference: '<Root>/Model1' */
  VehicleStatusSWC(((const TurnSignalStatusType*)
                    &BlindSpotComposition_TurnSignalStatusTypeGND), &rtb_Model1);

  /* ModelReference: '<Root>/Model2' */
  BlindSpotLogicSWC(&rtb_Model_o1, &rtb_Model_o2, &rtb_Model1, &rtb_Model2_o1,
                    &rtb_Model2_o2,
                    &(BlindSpotComposition_ARID_DEF.Model2_InstanceData.rtdw));

  /* ModelReference: '<Root>/Model3' */
  WarningDisplaySWC(&rtb_Model2_o1, &rtb_Model2_o2, &rtb_Model3_o1,
                    &rtb_Model3_o2);
}

/* Model initialize function */
void BlindSpotComposition_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
