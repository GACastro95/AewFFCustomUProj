// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpecialMovesType : uint8;
#ifdef ABP_200508_ReversalEventDelegate_generated_h
#error "ReversalEventDelegate.generated.h already included, missing '#pragma once' in ReversalEventDelegate.h"
#endif
#define ABP_200508_ReversalEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ReversalEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventReversalEvent_Parms \
{ \
	bool Reversal; \
	ESpecialMovesType SpecialMovesType; \
}; \
static inline void FReversalEvent_DelegateWrapper(const FMulticastScriptDelegate& ReversalEvent, bool Reversal, ESpecialMovesType SpecialMovesType) \
{ \
	_Script_ABP_200508_eventReversalEvent_Parms Parms; \
	Parms.Reversal=Reversal ? true : false; \
	Parms.SpecialMovesType=SpecialMovesType; \
	ReversalEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ReversalEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
