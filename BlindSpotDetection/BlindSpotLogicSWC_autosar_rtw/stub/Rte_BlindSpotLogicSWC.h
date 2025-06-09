/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "BlindSpotLogicSWC"
   ARXML schema: "R22-11"
   File generated on: "Sat Jun 07 22:55:47 2025"  */

#ifndef Rte_BlindSpotLogicSWC_h
#define Rte_BlindSpotLogicSWC_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_EvaluateBlindSpot_LeftBlindSpotDetected_detected Rte_IRead_BlindSpotLogicSWC_EvaluateBlindSpot_LeftBlindSpotDetected_detected

BlindSpotDetectedType Rte_IRead_EvaluateBlindSpot_LeftBlindSpotDetected_detected
  (void);

#define Rte_IRead_EvaluateBlindSpot_RightBlindSpotDetected_detected Rte_IRead_BlindSpotLogicSWC_EvaluateBlindSpot_RightBlindSpotDetected_detected

BlindSpotDetectedType
  Rte_IRead_EvaluateBlindSpot_RightBlindSpotDetected_detected(void);

#define Rte_IRead_EvaluateBlindSpot_TurnSignalStatus_turn Rte_IRead_BlindSpotLogicSWC_EvaluateBlindSpot_TurnSignalStatus_turn

TurnSignalStatusType Rte_IRead_EvaluateBlindSpot_TurnSignalStatus_turn(void);

#define Rte_IWrite_EvaluateBlindSpot_BlindSpotWarningLeft_warning Rte_IWrite_BlindSpotLogicSWC_EvaluateBlindSpot_BlindSpotWarningLeft_warning

void Rte_IWrite_EvaluateBlindSpot_BlindSpotWarningLeft_warning
  (BlindSpotWarningType u);

#define Rte_IWriteRef_EvaluateBlindSpot_BlindSpotWarningLeft_warning Rte_IWriteRef_BlindSpotLogicSWC_EvaluateBlindSpot_BlindSpotWarningLeft_warning

BlindSpotWarningType*
  Rte_IWriteRef_EvaluateBlindSpot_BlindSpotWarningLeft_warning(void);

#define Rte_IWrite_EvaluateBlindSpot_BlindSpotWarningRight_warning Rte_IWrite_BlindSpotLogicSWC_EvaluateBlindSpot_BlindSpotWarningRight_warning

void Rte_IWrite_EvaluateBlindSpot_BlindSpotWarningRight_warning
  (BlindSpotWarningType u);

#define Rte_IWriteRef_EvaluateBlindSpot_BlindSpotWarningRight_warning Rte_IWriteRef_BlindSpotLogicSWC_EvaluateBlindSpot_BlindSpotWarningRight_warning

BlindSpotWarningType*
  Rte_IWriteRef_EvaluateBlindSpot_BlindSpotWarningRight_warning(void);

/* Entry point functions */
extern FUNC(void, BlindSpotLogicSWC_CODE) EvaluateBlindSpot(void);
extern FUNC(void, BlindSpotLogicSWC_CODE) BlindSpotLogicSWC_Init(void);

#endif
