// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ABP_200508_OnELAssetLoadedDelegate_generated_h
#error "OnELAssetLoadedDelegate.generated.h already included, missing '#pragma once' in OnELAssetLoadedDelegate.h"
#endif
#define ABP_200508_OnELAssetLoadedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnELAssetLoadedDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnELAssetLoaded_Parms \
{ \
	UObject* Object; \
}; \
static inline void FOnELAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnELAssetLoaded, UObject* Object) \
{ \
	_Script_ABP_200508_eventOnELAssetLoaded_Parms Parms; \
	Parms.Object=Object; \
	OnELAssetLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnELAssetLoadedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
