// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameLiftGameSessions_Response;
#ifdef ABP_200508_OnSearchGameSessionsSuccessDelegate_generated_h
#error "OnSearchGameSessionsSuccessDelegate.generated.h already included, missing '#pragma once' in OnSearchGameSessionsSuccessDelegate.h"
#endif
#define ABP_200508_OnSearchGameSessionsSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnSearchGameSessionsSuccessDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventOnSearchGameSessionsSuccess_Parms \
{ \
	FGameLiftGameSessions_Response gameSessionList; \
}; \
static inline void FOnSearchGameSessionsSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnSearchGameSessionsSuccess, FGameLiftGameSessions_Response const& gameSessionList) \
{ \
	_Script_ABP_200508_eventOnSearchGameSessionsSuccess_Parms Parms; \
	Parms.gameSessionList=gameSessionList; \
	OnSearchGameSessionsSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnSearchGameSessionsSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
