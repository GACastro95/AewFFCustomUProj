// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSRoundParam;
#ifdef ABP_200508_SSRoundEventDispatcherDelegate_generated_h
#error "SSRoundEventDispatcherDelegate.generated.h already included, missing '#pragma once' in SSRoundEventDispatcherDelegate.h"
#endif
#define ABP_200508_SSRoundEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSRoundEventDispatcherDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventSSRoundEventDispatcher_Parms \
{ \
	FSSRoundParam inRoundParam; \
}; \
static inline void FSSRoundEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SSRoundEventDispatcher, FSSRoundParam const& inRoundParam) \
{ \
	_Script_ABP_200508_eventSSRoundEventDispatcher_Parms Parms; \
	Parms.inRoundParam=inRoundParam; \
	SSRoundEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSRoundEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
