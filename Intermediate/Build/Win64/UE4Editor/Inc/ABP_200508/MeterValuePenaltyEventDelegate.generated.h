// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_MeterValuePenaltyEventDelegate_generated_h
#error "MeterValuePenaltyEventDelegate.generated.h already included, missing '#pragma once' in MeterValuePenaltyEventDelegate.h"
#endif
#define ABP_200508_MeterValuePenaltyEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MeterValuePenaltyEventDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventMeterValuePenaltyEvent_Parms \
{ \
	float PenaltyRate; \
}; \
static inline void FMeterValuePenaltyEvent_DelegateWrapper(const FMulticastScriptDelegate& MeterValuePenaltyEvent, float PenaltyRate) \
{ \
	_Script_ABP_200508_eventMeterValuePenaltyEvent_Parms Parms; \
	Parms.PenaltyRate=PenaltyRate; \
	MeterValuePenaltyEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MeterValuePenaltyEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
