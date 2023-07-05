// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangeValue_DebugDispatcherDelegate_generated_h
#error "ChangeValue_DebugDispatcherDelegate.generated.h already included, missing '#pragma once' in ChangeValue_DebugDispatcherDelegate.h"
#endif
#define ABP_200508_ChangeValue_DebugDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangeValue_DebugDispatcherDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangeValue_DebugDispatcher_Parms \
{ \
	int32 Category; \
	float Value; \
}; \
static inline void FChangeValue_DebugDispatcher_DelegateWrapper(const FMulticastScriptDelegate& ChangeValue_DebugDispatcher, int32 Category, float Value) \
{ \
	_Script_ABP_200508_eventChangeValue_DebugDispatcher_Parms Parms; \
	Parms.Category=Category; \
	Parms.Value=Value; \
	ChangeValue_DebugDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangeValue_DebugDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
