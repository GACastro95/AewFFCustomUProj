// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SORTPLUGIN_VectorSortDelegateDelegate_generated_h
#error "VectorSortDelegateDelegate.generated.h already included, missing '#pragma once' in VectorSortDelegateDelegate.h"
#endif
#define SORTPLUGIN_VectorSortDelegateDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_VectorSortDelegateDelegate_h_6_DELEGATE \
struct _Script_SortPlugin_eventVectorSortDelegate_Parms \
{ \
	FVector A; \
	FVector B; \
	bool Result; \
}; \
static inline void FVectorSortDelegate_DelegateWrapper(const FScriptDelegate& VectorSortDelegate, FVector const& A, FVector const& B, bool& Result) \
{ \
	_Script_SortPlugin_eventVectorSortDelegate_Parms Parms; \
	Parms.A=A; \
	Parms.B=B; \
	Parms.Result=Result ? true : false; \
	VectorSortDelegate.ProcessDelegate<UObject>(&Parms); \
	Result=Parms.Result; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Marketplace_SortPlugin_Source_SortPlugin_Public_VectorSortDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
