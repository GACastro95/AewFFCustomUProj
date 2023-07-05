// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SORTPLUGIN_ActorSortDelegateDelegate_generated_h
#error "ActorSortDelegateDelegate.generated.h already included, missing '#pragma once' in ActorSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_ActorSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ActorSortDelegateDelegate_h_7_DELEGATE \
struct _Script_SortPlugin_eventActorSortDelegate_Parms \
{ \
	const AActor* A; \
	const AActor* B; \
	bool Result; \
}; \
static inline void FActorSortDelegate_DelegateWrapper(const FScriptDelegate& ActorSortDelegate, const AActor* A, const AActor* B, bool& Result) \
{ \
	_Script_SortPlugin_eventActorSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	ActorSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ActorSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
