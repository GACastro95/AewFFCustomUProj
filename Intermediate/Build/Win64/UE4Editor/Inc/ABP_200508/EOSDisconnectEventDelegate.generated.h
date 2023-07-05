// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELEOSDisconnectReason : uint8;
#ifdef ABP_200508_EOSDisconnectEventDelegate_generated_h
#error "EOSDisconnectEventDelegate.generated.h already included, missing '#pragma once' in EOSDisconnectEventDelegate.h"
#endif
#define ABP_200508_EOSDisconnectEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSDisconnectEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventEOSDisconnectEvent_Parms \
{ \
	EELEOSDisconnectReason Reason; \
}; \
static inline void FEOSDisconnectEvent_DelegateWrapper(const FMulticastScriptDelegate& EOSDisconnectEvent, EELEOSDisconnectReason Reason) \
{ \
	_Script_ABP_200508_eventEOSDisconnectEvent_Parms Parms; \
	Parms.Reason=Reason; \
	EOSDisconnectEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSDisconnectEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
