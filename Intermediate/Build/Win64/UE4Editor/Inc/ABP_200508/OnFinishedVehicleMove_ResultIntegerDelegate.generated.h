// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnFinishedVehicleMove_ResultIntegerDelegate_generated_h
#error "OnFinishedVehicleMove_ResultIntegerDelegate.generated.h already included, missing '#pragma once' in OnFinishedVehicleMove_ResultIntegerDelegate.h"
#endif
#define ABP_200508_OnFinishedVehicleMove_ResultIntegerDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnFinishedVehicleMove_ResultIntegerDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnFinishedVehicleMove_ResultInteger_Parms \
{ \
	int32 Result; \
}; \
static inline void FOnFinishedVehicleMove_ResultInteger_DelegateWrapper(const FMulticastScriptDelegate& OnFinishedVehicleMove_ResultInteger, int32 Result) \
{ \
	_Script_ABP_200508_eventOnFinishedVehicleMove_ResultInteger_Parms Parms; \
	Parms.Result=Result; \
	OnFinishedVehicleMove_ResultInteger.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnFinishedVehicleMove_ResultIntegerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
