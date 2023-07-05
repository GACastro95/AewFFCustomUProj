// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_OnManaPlayerMovieOpenedDelegate_generated_h
#error "OnManaPlayerMovieOpenedDelegate.generated.h already included, missing '#pragma once' in OnManaPlayerMovieOpenedDelegate.h"
#endif
#define CRIWARERUNTIME_OnManaPlayerMovieOpenedDelegate_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_OnManaPlayerMovieOpenedDelegate_h_5_DELEGATE \
struct _Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnManaPlayerMovieOpened_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerMovieOpened, const FString& OpenedUrl) \
{ \
	_Script_CriWareRuntime_eventOnManaPlayerMovieOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnManaPlayerMovieOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_OnManaPlayerMovieOpenedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
