// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_IntFilterDelegateDelegate_generated_h
#error "IntFilterDelegateDelegate.generated.h already included, missing '#pragma once' in IntFilterDelegateDelegate.h"
#endif
#define SORTPLUGIN_IntFilterDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_IntFilterDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventIntFilterDelegate_Parms \
{ \
	int32 Value; \
	bool Result; \
}; \
static inline void FIntFilterDelegate_DelegateWrapper(const FScriptDelegate& IntFilterDelegate, int32 const& Value, bool& Result) \
{ \
	_Script_SortPlugin_eventIntFilterDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Result=Result ? true : false; \
	IntFilterDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_IntFilterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
