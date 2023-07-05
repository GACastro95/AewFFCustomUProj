// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnDescribeGameSessionQueuesFailedDelegate_generated_h
#error "OnDescribeGameSessionQueuesFailedDelegate.generated.h already included, missing '#pragma once' in OnDescribeGameSessionQueuesFailedDelegate.h"
#endif
#define ABP_200508_OnDescribeGameSessionQueuesFailedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionQueuesFailedDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnDescribeGameSessionQueuesFailed_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnDescribeGameSessionQueuesFailed_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeGameSessionQueuesFailed, const FString& ErrorMessage) \
{ \
	_Script_ABP_200508_eventOnDescribeGameSessionQueuesFailed_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnDescribeGameSessionQueuesFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionQueuesFailedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
