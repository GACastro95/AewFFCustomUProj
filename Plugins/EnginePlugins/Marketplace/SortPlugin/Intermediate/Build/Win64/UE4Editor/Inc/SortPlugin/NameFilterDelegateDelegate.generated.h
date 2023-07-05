// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_NameFilterDelegateDelegate_generated_h
#error "NameFilterDelegateDelegate.generated.h already included, missing '#pragma once' in NameFilterDelegateDelegate.h"
#endif
#define SORTPLUGIN_NameFilterDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_NameFilterDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventNameFilterDelegate_Parms \
{ \
	FName Value; \
	bool Result; \
}; \
static inline void FNameFilterDelegate_DelegateWrapper(const FScriptDelegate& NameFilterDelegate, FName const& Value, bool& Result) \
{ \
	_Script_SortPlugin_eventNameFilterDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Result=Result ? true : false; \
	NameFilterDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_NameFilterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
