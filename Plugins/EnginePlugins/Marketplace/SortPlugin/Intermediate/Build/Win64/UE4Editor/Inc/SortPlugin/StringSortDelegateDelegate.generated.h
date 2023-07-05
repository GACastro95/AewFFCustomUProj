// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_StringSortDelegateDelegate_generated_h
#error "StringSortDelegateDelegate.generated.h already included, missing '#pragma once' in StringSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_StringSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_StringSortDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventStringSortDelegate_Parms \
{ \
	FString A; \
	FString B; \
	bool Result; \
}; \
static inline void FStringSortDelegate_DelegateWrapper(const FScriptDelegate& StringSortDelegate, const FString& A, const FString& B, bool& Result) \
{ \
	_Script_SortPlugin_eventStringSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	StringSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_StringSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
