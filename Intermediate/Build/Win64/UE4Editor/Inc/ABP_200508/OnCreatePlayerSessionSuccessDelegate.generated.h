// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreatePlayerSession_RequestParam;
struct FGameLiftPlayerSession_Response;
#ifdef ABP_200508_OnCreatePlayerSessionSuccessDelegate_generated_h
#error "OnCreatePlayerSessionSuccessDelegate.generated.h already included, missing '#pragma once' in OnCreatePlayerSessionSuccessDelegate.h"
#endif
#define ABP_200508_OnCreatePlayerSessionSuccessDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnCreatePlayerSessionSuccessDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnCreatePlayerSessionSuccess_Parms \
{ \
	FCreatePlayerSession_RequestParam Request; \
	FGameLiftPlayerSession_Response response; \
}; \
static inline void FOnCreatePlayerSessionSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnCreatePlayerSessionSuccess, FCreatePlayerSession_RequestParam const& Request, FGameLiftPlayerSession_Response const& response) \
{ \
	_Script_ABP_200508_eventOnCreatePlayerSessionSuccess_Parms Parms; \
	Parms.Request=Request; \
	Parms.response=response; \
	OnCreatePlayerSessionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnCreatePlayerSessionSuccessDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
