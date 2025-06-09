/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "RadarSensorSWC"
   ARXML schema: "R22-11"
   File generated on: "Sat Jun 07 23:09:37 2025"  */

#ifndef Rte_RadarSensorSWC_h
#define Rte_RadarSensorSWC_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_Write_LeftBlindSpotDetected_detected Rte_Write_RadarSensorSWC_LeftBlindSpotDetected_detected

Std_ReturnType Rte_Write_LeftBlindSpotDetected_detected(BlindSpotDetectedType u);

#define Rte_Invalidate_LeftBlindSpotDetected_detected Rte_Invalidate_RadarSensorSWC_LeftBlindSpotDetected_detected

Std_ReturnType Rte_Invalidate_LeftBlindSpotDetected_detected(void);

#define Rte_Write_RightBlindSpotDetected_detected Rte_Write_RadarSensorSWC_RightBlindSpotDetected_detected

Std_ReturnType Rte_Write_RightBlindSpotDetected_detected(BlindSpotDetectedType u);

#define Rte_Invalidate_RightBlindSpotDetected_detected Rte_Invalidate_RadarSensorSWC_RightBlindSpotDetected_detected

Std_ReturnType Rte_Invalidate_RightBlindSpotDetected_detected(void);

/* Entry point functions */
extern FUNC(void, RadarSensorSWC_CODE) RadarSensorSWC_Init(void);
extern FUNC(void, RadarSensorSWC_CODE) RadarSensorSWC_Step(void);

#endif
