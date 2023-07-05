// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_IntSortDelegateDelegate_generated_h
#error "IntSortDelegateDelegate.generated.h already included, missing '#pragma once' in IntSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_IntSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_IntSortDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventIntSortDelegate_Parms \
{ \
	int32 A; \
	int32 B; \
	bool Result; \
}; \
static inline void FIntSortDelegate_DelegateWrapper(const FScriptDelegate& IntSortDelegate, int32 const& A, int32 const& B, bool& Result) \
{ \
	_Script_SortPlugin_eventIntSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	IntSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_IntSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
