// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWrestlerNameText;
class UObject;
#ifdef ABP_200508_EOSSanitizeWrestlerNameTextEventDelegate_generated_h
#error "EOSSanitizeWrestlerNameTextEventDelegate.generated.h already included, missing '#pragma once' in EOSSanitizeWrestlerNameTextEventDelegate.h"
#endif
#define ABP_200508_EOSSanitizeWrestlerNameTextEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSSanitizeWrestlerNameTextEventDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventEOSSanitizeWrestlerNameTextEvent_Parms \
{ \
	FWrestlerNameText WrestlerNameText; \
	UObject* UserObject; \
}; \
static inline void FEOSSanitizeWrestlerNameTextEvent_DelegateWrapper(const FScriptDelegate& EOSSanitizeWrestlerNameTextEvent, FWrestlerNameText const& WrestlerNameText, UObject* UserObject) \
{ \
	_Script_ABP_200508_eventEOSSanitizeWrestlerNameTextEvent_Parms Parms; \
	Parms.WrestlerNameText=WrestlerNameText; \
	Parms.UserObject=UserObject; \
	EOSSanitizeWrestlerNameTextEvent.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSSanitizeWrestlerNameTextEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
