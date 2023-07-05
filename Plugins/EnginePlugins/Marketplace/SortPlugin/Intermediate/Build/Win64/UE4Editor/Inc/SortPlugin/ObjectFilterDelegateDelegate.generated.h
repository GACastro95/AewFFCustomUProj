// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SORTPLUGIN_ObjectFilterDelegateDelegate_generated_h
#error "ObjectFilterDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectFilterDelegateDelegate.h"
#endif
#define SORTPLUGIN_ObjectFilterDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ObjectFilterDelegateDelegate_h_7_DELEGATE \
struct _Script_SortPlugin_eventObjectFilterDelegate_Parms \
{ \
	const UObject* Value; \
	bool Result; \
}; \
static inline void FObjectFilterDelegate_DelegateWrapper(const FScriptDelegate& ObjectFilterDelegate, const UObject* Value, bool& Result) \
{ \
	_Script_SortPlugin_eventObjectFilterDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Result=Result ? true : false; \
	ObjectFilterDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ObjectFilterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
