// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SORTPLUGIN_ActorFilterDelegateDelegate_generated_h
#error "ActorFilterDelegateDelegate.generated.h already included, missing '#pragma once' in ActorFilterDelegateDelegate.h"
#endif
#define SORTPLUGIN_ActorFilterDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ActorFilterDelegateDelegate_h_7_DELEGATE \
struct _Script_SortPlugin_eventActorFilterDelegate_Parms \
{ \
	const AActor* Value; \
	bool Result; \
}; \
static inline void FActorFilterDelegate_DelegateWrapper(const FScriptDelegate& ActorFilterDelegate, const AActor* Value, bool& Result) \
{ \
	_Script_SortPlugin_eventActorFilterDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Result=Result ? true : false; \
	ActorFilterDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ActorFilterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
