// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SORTPLUGIN_VectorFilterDelegateDelegate_generated_h
#error "VectorFilterDelegateDelegate.generated.h already included, missing '#pragma once' in VectorFilterDelegateDelegate.h"
#endif
#define SORTPLUGIN_VectorFilterDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_VectorFilterDelegateDelegate_h_6_DELEGATE \
struct _Script_SortPlugin_eventVectorFilterDelegate_Parms \
{ \
	FVector Value; \
	bool Result; \
}; \
static inline void FVectorFilterDelegate_DelegateWrapper(const FScriptDelegate& VectorFilterDelegate, FVector const& Value, bool& Result) \
{ \
	_Script_SortPlugin_eventVectorFilterDelegate_Parms Parms; \
	Parms.Value=Value; \
	Parms.Result=Result ? true : false; \
	VectorFilterDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_VectorFilterDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
