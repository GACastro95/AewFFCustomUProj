// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSGameState;
#ifdef ABP_200508_SSGameStateEventDispatcherDelegate_generated_h
#error "SSGameStateEventDispatcherDelegate.generated.h already included, missing '#pragma once' in SSGameStateEventDispatcherDelegate.h"
#endif
#define ABP_200508_SSGameStateEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSGameStateEventDispatcherDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventSSGameStateEventDispatcher_Parms \
{ \
	AELSSGameState* inGameState; \
}; \
static inline void FSSGameStateEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& SSGameStateEventDispatcher, AELSSGameState* inGameState) \
{ \
	_Script_ABP_200508_eventSSGameStateEventDispatcher_Parms Parms; \
	Parms.inGameState=inGameState; \
	SSGameStateEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSGameStateEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
