// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSRoundParam;
#ifdef ABP_200508_SSRoundOnTickEventDispatcherDelegate_generated_h
#error "SSRoundOnTickEventDispatcherDelegate.generated.h already included, missing '#pragma once' in SSRoundOnTickEventDispatcherDelegate.h"
#endif
#define ABP_200508_SSRoundOnTickEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSRoundOnTickEventDispatcherDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventSSRoundOnTickEventDispatcher_Parms \
{ \
	FSSRoundParam inRoundParam; \
	float inNewRoundTime; \
	float inPrevRoundTime; \
}; \
static inline void FSSRoundOnTickEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SSRoundOnTickEventDispatcher, FSSRoundParam const& inRoundParam, float inNewRoundTime, float inPrevRoundTime) \
{ \
	_Script_ABP_200508_eventSSRoundOnTickEventDispatcher_Parms Parms; \
	Parms.inRoundParam=inRoundParam; \
	Parms.inNewRoundTime=inNewRoundTime; \
	Parms.inPrevRoundTime=inPrevRoundTime; \
	SSRoundOnTickEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSRoundOnTickEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
