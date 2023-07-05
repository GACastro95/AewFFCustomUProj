// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayer;
#ifdef ABP_200508_SSPlayerEventDispatcherDelegate_generated_h
#error "SSPlayerEventDispatcherDelegate.generated.h already included, missing '#pragma once' in SSPlayerEventDispatcherDelegate.h"
#endif
#define ABP_200508_SSPlayerEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSPlayerEventDispatcherDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventSSPlayerEventDispatcher_Parms \
{ \
	AELSSPlayer* inPlayer; \
}; \
static inline void FSSPlayerEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SSPlayerEventDispatcher, AELSSPlayer* inPlayer) \
{ \
	_Script_ABP_200508_eventSSPlayerEventDispatcher_Parms Parms; \
	Parms.inPlayer=inPlayer; \
	SSPlayerEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSPlayerEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
