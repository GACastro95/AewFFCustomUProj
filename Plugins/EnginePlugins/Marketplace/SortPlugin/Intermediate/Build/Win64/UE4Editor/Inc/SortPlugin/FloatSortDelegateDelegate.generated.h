// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_FloatSortDelegateDelegate_generated_h
#error "FloatSortDelegateDelegate.generated.h already included, missing '#pragma once' in FloatSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_FloatSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_FloatSortDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventFloatSortDelegate_Parms \
{ \
	float A; \
	float B; \
	bool Result; \
}; \
static inline void FFloatSortDelegate_DelegateWrapper(const FScriptDelegate& FloatSortDelegate, float const& A, float const& B, bool& Result) \
{ \
	_Script_SortPlugin_eventFloatSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	FloatSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_FloatSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
