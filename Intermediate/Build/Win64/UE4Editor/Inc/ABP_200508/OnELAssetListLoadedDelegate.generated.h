// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ABP_200508_OnELAssetListLoadedDelegate_generated_h
#error "OnELAssetListLoadedDelegate.generated.h already included, missing '#pragma once' in OnELAssetListLoadedDelegate.h"
#endif
#define ABP_200508_OnELAssetListLoadedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnELAssetListLoadedDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnELAssetListLoaded_Parms \
{ \
	TArray<UObject*> Objects; \
}; \
static inline void FOnELAssetListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnELAssetListLoaded, TArray<UObject*> const& Objects) \
{ \
	_Script_ABP_200508_eventOnELAssetListLoaded_Parms Parms; \
	Parms.Objects=Objects; \
	OnELAssetListLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnELAssetListLoadedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
