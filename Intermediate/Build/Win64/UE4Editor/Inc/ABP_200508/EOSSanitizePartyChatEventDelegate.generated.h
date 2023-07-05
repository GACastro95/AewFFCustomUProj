// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ABP_200508_EOSSanitizePartyChatEventDelegate_generated_h
#error "EOSSanitizePartyChatEventDelegate.generated.h already included, missing '#pragma once' in EOSSanitizePartyChatEventDelegate.h"
#endif
#define ABP_200508_EOSSanitizePartyChatEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSSanitizePartyChatEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventEOSSanitizePartyChatEvent_Parms \
{ \
	FString Message; \
	UObject* UserData; \
}; \
static inline void FEOSSanitizePartyChatEvent_DelegateWrapper(const FScriptDelegate& EOSSanitizePartyChatEvent, const FString& Message, UObject* UserData) \
{ \
	_Script_ABP_200508_eventEOSSanitizePartyChatEvent_Parms Parms; \
	Parms.Message=Message; \
	Parms.UserData=UserData; \
	EOSSanitizePartyChatEvent.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSSanitizePartyChatEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
