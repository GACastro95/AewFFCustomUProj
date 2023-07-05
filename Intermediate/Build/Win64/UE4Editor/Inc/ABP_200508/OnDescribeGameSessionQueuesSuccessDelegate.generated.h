// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnDescribeGameSessionQueuesSuccessDelegate_generated_h
#error "OnDescribeGameSessionQueuesSuccessDelegate.generated.h already included, missing '#pragma once' in OnDescribeGameSessionQueuesSuccessDelegate.h"
#endif
#define ABP_200508_OnDescribeGameSessionQueuesSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionQueuesSuccessDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnDescribeGameSessionQueuesSuccess_Parms \
{ \
	TArray<FString> FleetARNs; \
}; \
static inline void FOnDescribeGameSessionQueuesSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeGameSessionQueuesSuccess, TArray<FString> const& FleetARNs) \
{ \
	_Script_ABP_200508_eventOnDescribeGameSessionQueuesSuccess_Parms Parms; \
	Parms.FleetARNs=FleetARNs; \
	OnDescribeGameSessionQueuesSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionQueuesSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
