// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnMoveStartPlayerDelegate_generated_h
#error "OnMoveStartPlayerDelegate.generated.h already included, missing '#pragma once' in OnMoveStartPlayerDelegate.h"
#endif
#define ABP_200508_OnMoveStartPlayerDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnMoveStartPlayerDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnMoveStartPlayer_Parms \
{ \
	int32 Result; \
}; \
static inline void FOnMoveStartPlayer_DelegateWrapper(const FMulticastScriptDelegate& OnMoveStartPlayer, int32 Result) \
{ \
	_Script_ABP_200508_eventOnMoveStartPlayer_Parms Parms; \
	Parms.Result=Result; \
	OnMoveStartPlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnMoveStartPlayerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
