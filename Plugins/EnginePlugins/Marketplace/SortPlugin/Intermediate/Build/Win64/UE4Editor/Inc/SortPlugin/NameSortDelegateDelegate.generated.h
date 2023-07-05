// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_NameSortDelegateDelegate_generated_h
#error "NameSortDelegateDelegate.generated.h already included, missing '#pragma once' in NameSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_NameSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_NameSortDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventNameSortDelegate_Parms \
{ \
	FName A; \
	FName B; \
	bool Result; \
}; \
static inline void FNameSortDelegate_DelegateWrapper(const FScriptDelegate& NameSortDelegate, FName const& A, FName const& B, bool& Result) \
{ \
	_Script_SortPlugin_eventNameSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	NameSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_NameSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
