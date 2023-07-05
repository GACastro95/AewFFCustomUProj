// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateGameSession_RequestParam;
struct FGameLiftGameSession_Response;
#ifdef ABP_200508_OnCreateGameSessionSuccessDelegate_generated_h
#error "OnCreateGameSessionSuccessDelegate.generated.h already included, missing '#pragma once' in OnCreateGameSessionSuccessDelegate.h"
#endif
#define ABP_200508_OnCreateGameSessionSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnCreateGameSessionSuccessDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnCreateGameSessionSuccess_Parms \
{ \
	FCreateGameSession_RequestParam reqestParam; \
	FGameLiftGameSession_Response responseParam; \
}; \
static inline void FOnCreateGameSessionSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnCreateGameSessionSuccess, FCreateGameSession_RequestParam const& reqestParam, FGameLiftGameSession_Response const& responseParam) \
{ \
	_Script_ABP_200508_eventOnCreateGameSessionSuccess_Parms Parms; \
	Parms.reqestParam=reqestParam; \
	Parms.responseParam=responseParam; \
	OnCreateGameSessionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnCreateGameSessionSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
