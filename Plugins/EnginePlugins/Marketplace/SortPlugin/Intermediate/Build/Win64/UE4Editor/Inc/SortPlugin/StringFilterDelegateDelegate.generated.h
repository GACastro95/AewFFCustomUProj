// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SORTPLUGIN_StringFilterDelegateDelegate_generated_h
#error "StringFilterDelegateDelegate.generated.h already included, missing '#pragma once' in StringFilterDelegateDelegate.h"
#endif
#define SORTPLUGIN_StringFilterDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_StringFilterDelegateDelegate_h_5_DELEGATE \
struct _Script_SortPlugin_eventStringFilterDelegate_Parms \
{ \
	FString Value; \
	bool Result; \
}; \
static inline void FStringFilterDelegate_DelegateWrapper(const FScriptDelegate& StringFilterDelegate, const FString& Value, bool& Result) \
{ \
	_Script_SortPlugin_eventStringFilterDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Result=Result ? true : false; \
	StringFilterDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_StringFilterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
