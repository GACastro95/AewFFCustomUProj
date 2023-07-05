// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnGameTokenChangedDelegate_generated_h
#error "OnGameTokenChangedDelegate.generated.h already included, missing '#pragma once' in OnGameTokenChangedDelegate.h"
#endif
#define ABP_200508_OnGameTokenChangedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnGameTokenChangedDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnGameTokenChanged_Parms \
{ \
	int32 NewValue; \
}; \
static inline void FOnGameTokenChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameTokenChanged, int32 NewValue) \
{ \
	_Script_ABP_200508_eventOnGameTokenChanged_Parms Parms; \
	Parms.NewValue=NewValue; \
	OnGameTokenChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnGameTokenChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
