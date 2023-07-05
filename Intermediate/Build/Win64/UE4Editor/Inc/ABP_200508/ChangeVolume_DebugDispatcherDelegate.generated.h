// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangeVolume_DebugDispatcherDelegate_generated_h
#error "ChangeVolume_DebugDispatcherDelegate.generated.h already included, missing '#pragma once' in ChangeVolume_DebugDispatcherDelegate.h"
#endif
#define ABP_200508_ChangeVolume_DebugDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangeVolume_DebugDispatcherDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangeVolume_DebugDispatcher_Parms \
{ \
	int32 Category; \
	float Volume; \
}; \
static inline void FChangeVolume_DebugDispatcher_DelegateWrapper(const FMulticastScriptDelegate& ChangeVolume_DebugDispatcher, int32 Category, float Volume) \
{ \
	_Script_ABP_200508_eventChangeVolume_DebugDispatcher_Parms Parms; \
	Parms.Category=Category; \
	Parms.Volume=Volume; \
	ChangeVolume_DebugDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangeVolume_DebugDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
