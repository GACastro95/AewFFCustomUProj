// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStickinputDir : uint8;
#ifdef ABP_200508_NormalTauntEventDelegate_generated_h
#error "NormalTauntEventDelegate.generated.h already included, missing '#pragma once' in NormalTauntEventDelegate.h"
#endif
#define ABP_200508_NormalTauntEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_NormalTauntEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventNormalTauntEvent_Parms \
{ \
	EStickinputDir InputDir; \
}; \
static inline void FNormalTauntEvent_DelegateWrapper(const FMulticastScriptDelegate& NormalTauntEvent, EStickinputDir InputDir) \
{ \
	_Script_ABP_200508_eventNormalTauntEvent_Parms Parms; \
	Parms.InputDir=InputDir; \
	NormalTauntEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_NormalTauntEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
