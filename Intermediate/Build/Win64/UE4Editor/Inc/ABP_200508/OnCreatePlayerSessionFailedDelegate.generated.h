// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnCreatePlayerSessionFailedDelegate_generated_h
#error "OnCreatePlayerSessionFailedDelegate.generated.h already included, missing '#pragma once' in OnCreatePlayerSessionFailedDelegate.h"
#endif
#define ABP_200508_OnCreatePlayerSessionFailedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnCreatePlayerSessionFailedDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnCreatePlayerSessionFailed_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnCreatePlayerSessionFailed_DelegateWrapper(const FMulticastScriptDelegate& OnCreatePlayerSessionFailed, const FString& ErrorMessage) \
{ \
	_Script_ABP_200508_eventOnCreatePlayerSessionFailed_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnCreatePlayerSessionFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnCreatePlayerSessionFailedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
