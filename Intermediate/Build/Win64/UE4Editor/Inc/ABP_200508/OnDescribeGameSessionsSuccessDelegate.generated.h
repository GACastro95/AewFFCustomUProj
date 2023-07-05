// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDescribeGameSessions_RequestParam;
struct FGameLiftGameSessions_Response;
#ifdef ABP_200508_OnDescribeGameSessionsSuccessDelegate_generated_h
#error "OnDescribeGameSessionsSuccessDelegate.generated.h already included, missing '#pragma once' in OnDescribeGameSessionsSuccessDelegate.h"
#endif
#define ABP_200508_OnDescribeGameSessionsSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionsSuccessDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnDescribeGameSessionsSuccess_Parms \
{ \
	FDescribeGameSessions_RequestParam Request; \
	FGameLiftGameSessions_Response response; \
}; \
static inline void FOnDescribeGameSessionsSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnDescribeGameSessionsSuccess, FDescribeGameSessions_RequestParam const& Request, FGameLiftGameSessions_Response const& response) \
{ \
	_Script_ABP_200508_eventOnDescribeGameSessionsSuccess_Parms Parms; \
	Parms.Request=Request; \
	Parms.response=response; \
	OnDescribeGameSessionsSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnDescribeGameSessionsSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
