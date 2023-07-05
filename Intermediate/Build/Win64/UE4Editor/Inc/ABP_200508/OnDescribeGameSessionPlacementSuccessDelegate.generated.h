// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnDescribeGameSessionPlacementSuccessDelegate_generated_h
#error "OnDescribeGameSessionPlacementSuccessDelegate.generated.h already included, missing '#pragma once' in OnDescribeGameSessionPlacementSuccessDelegate.h"
#endif
#define ABP_200508_OnDescribeGameSessionPlacementSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionPlacementSuccessDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnDescribeGameSessionPlacementSuccess_Parms \
{ \
	FString gameSessionId; \
	FString PlacementId; \
	int32 Status; \
	FString IPtoPort; \
}; \
static inline void FOnDescribeGameSessionPlacementSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeGameSessionPlacementSuccess, const FString& gameSessionId, const FString& PlacementId, int32 const& Status, const FString& IPtoPort) \
{ \
	_Script_ABP_200508_eventOnDescribeGameSessionPlacementSuccess_Parms Parms; \
	Parms.gameSessionId=gameSessionId; \
	Parms.PlacementId=PlacementId; \
	Parms.Status=Status; \
	Parms.IPtoPort=IPtoPort; \
	OnDescribeGameSessionPlacementSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionPlacementSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
