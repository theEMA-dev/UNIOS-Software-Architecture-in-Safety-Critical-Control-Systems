/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "VehicleStatusSWC"
   ARXML schema: "R22-11"
   File generated on: "Sat Jun 07 23:28:49 2025"  */

#ifndef Rte_VehicleStatusSWC_h
#define Rte_VehicleStatusSWC_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_VehicleStatusSWC_Step_TurnSignalStatus_status Rte_IWrite_VehicleStatusSWC_VehicleStatusSWC_Step_TurnSignalStatus_status

void Rte_IWrite_VehicleStatusSWC_Step_TurnSignalStatus_status
  (TurnSignalStatusType u);

#define Rte_IWriteRef_VehicleStatusSWC_Step_TurnSignalStatus_status Rte_IWriteRef_VehicleStatusSWC_VehicleStatusSWC_Step_TurnSignalStatus_status

TurnSignalStatusType*
  Rte_IWriteRef_VehicleStatusSWC_Step_TurnSignalStatus_status(void);

/* Entry point functions */
extern FUNC(void, VehicleStatusSWC_CODE) VehicleStatusSWC_Init(void);
extern FUNC(void, VehicleStatusSWC_CODE) New(void);

#endif
