// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_RemoveGloveBuffEventDelegate_generated_h
#error "RemoveGloveBuffEventDelegate.generated.h already included, missing '#pragma once' in RemoveGloveBuffEventDelegate.h"
#endif
#define ABP_200508_RemoveGloveBuffEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_RemoveGloveBuffEventDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventRemoveGloveBuffEvent_Parms \
{ \
	float BuffTime; \
}; \
static inline void FRemoveGloveBuffEvent_DelegateWrapper(const FMulticastScriptDelegate& RemoveGloveBuffEvent, float BuffTime) \
{ \
	_Script_ABP_200508_eventRemoveGloveBuffEvent_Parms Parms; \
	Parms.BuffTime=BuffTime; \
	RemoveGloveBuffEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_RemoveGloveBuffEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
