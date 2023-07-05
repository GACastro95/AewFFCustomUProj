// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_LastHitMovesSituationIndexEventDelegate_generated_h
#error "LastHitMovesSituationIndexEventDelegate.generated.h already included, missing '#pragma once' in LastHitMovesSituationIndexEventDelegate.h"
#endif
#define ABP_200508_LastHitMovesSituationIndexEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LastHitMovesSituationIndexEventDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventLastHitMovesSituationIndexEvent_Parms \
{ \
	int32 MovesSituationIndex; \
}; \
static inline void FLastHitMovesSituationIndexEvent_DelegateWrapper(const FMulticastScriptDelegate& LastHitMovesSituationIndexEvent, int32 MovesSituationIndex) \
{ \
	_Script_ABP_200508_eventLastHitMovesSituationIndexEvent_Parms Parms; \
	Parms.MovesSituationIndex=MovesSituationIndex; \
	LastHitMovesSituationIndexEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LastHitMovesSituationIndexEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
