// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELEOSEventType : uint8;
enum class EELEOSEventResult : uint8;
#ifdef ABP_200508_EOSEventDelegate_generated_h
#error "EOSEventDelegate.generated.h already included, missing '#pragma once' in EOSEventDelegate.h"
#endif
#define ABP_200508_EOSEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventEOSEvent_Parms \
{ \
	EELEOSEventType EventType; \
	EELEOSEventResult EventResult; \
}; \
static inline void FEOSEvent_DelegateWrapper(const FMulticastScriptDelegate& EOSEvent, EELEOSEventType EventType, EELEOSEventResult EventResult) \
{ \
	_Script_ABP_200508_eventEOSEvent_Parms Parms; \
	Parms.EventType=EventType; \
	Parms.EventResult=EventResult; \
	EOSEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
