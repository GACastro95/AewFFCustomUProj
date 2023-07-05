// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_OnManaPlayerMovieOpenFailedDelegate_generated_h
#error "OnManaPlayerMovieOpenFailedDelegate.generated.h already included, missing '#pragma once' in OnManaPlayerMovieOpenFailedDelegate.h"
#endif
#define CRIWARERUNTIME_OnManaPlayerMovieOpenFailedDelegate_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_OnManaPlayerMovieOpenFailedDelegate_h_5_DELEGATE \
struct _Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms \
{ \
	FString FailedUrl; \
}; \
static inline void FOnManaPlayerMovieOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerMovieOpenFailed, const FString& FailedUrl) \
{ \
	_Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms Parms; \
	Parms.FailedUrl=FailedUrl; \
	OnManaPlayerMovieOpenFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_OnManaPlayerMovieOpenFailedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
