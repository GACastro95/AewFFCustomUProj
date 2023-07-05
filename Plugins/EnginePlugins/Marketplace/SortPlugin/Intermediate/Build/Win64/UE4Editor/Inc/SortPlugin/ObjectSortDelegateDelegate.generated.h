// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SORTPLUGIN_ObjectSortDelegateDelegate_generated_h
#error "ObjectSortDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_ObjectSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ObjectSortDelegateDelegate_h_7_DELEGATE \
struct _Script_SortPlugin_eventObjectSortDelegate_Parms \
{ \
	const UObject* A; \
	const UObject* B; \
	bool Result; \
}; \
static inline void FObjectSortDelegate_DelegateWrapper(const FScriptDelegate& ObjectSortDelegate, const UObject* A, const UObject* B, bool& Result) \
{ \
	_Script_SortPlugin_eventObjectSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	ObjectSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_ObjectSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
