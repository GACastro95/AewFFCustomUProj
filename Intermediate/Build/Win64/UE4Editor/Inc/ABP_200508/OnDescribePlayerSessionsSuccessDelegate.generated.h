// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDescribePlayerSessions_RequestParam;
struct FGameLiftPlayerSessions_Response;
#ifdef ABP_200508_OnDescribePlayerSessionsSuccessDelegate_generated_h
#error "OnDescribePlayerSessionsSuccessDelegate.generated.h already included, missing '#pragma once' in OnDescribePlayerSessionsSuccessDelegate.h"
#endif
#define ABP_200508_OnDescribePlayerSessionsSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnDescribePlayerSessionsSuccessDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnDescribePlayerSessionsSuccess_Parms \
{ \
	FDescribePlayerSessions_RequestParam Request; \
	FGameLiftPlayerSessions_Response response; \
}; \
static inline void FOnDescribePlayerSessionsSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnDescribePlayerSessionsSuccess, FDescribePlayerSessions_RequestParam const& Request, FGameLiftPlayerSessions_Response const& response) \
{ \
	_Script_ABP_200508_eventOnDescribePlayerSessionsSuccess_Parms Parms; \
	Parms.Request=Request; \
	Parms.response=response; \
	OnDescribePlayerSessionsSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnDescribePlayerSessionsSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
