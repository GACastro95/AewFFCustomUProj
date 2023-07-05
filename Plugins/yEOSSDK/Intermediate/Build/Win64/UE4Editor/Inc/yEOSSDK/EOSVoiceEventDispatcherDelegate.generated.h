// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSVoiceEvent : uint8;
class UEOSVoice;
#ifdef YEOSSDK_EOSVoiceEventDispatcherDelegate_generated_h
#error "EOSVoiceEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSVoiceEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSVoiceEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoiceEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSVoiceEventDispatcher_Parms \
{ \
	EEOSVoiceEvent EOSVoiceEvent; \
	UEOSVoice* EOSVoice; \
}; \
static inline void FEOSVoiceEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSVoiceEventDispatcher, EEOSVoiceEvent EOSVoiceEvent, UEOSVoice* EOSVoice) \
{ \
	_Script_yEOSSDK_eventEOSVoiceEventDispatcher_Parms Parms; \
	Parms.EOSVoiceEvent=EOSVoiceEvent; \
	Parms.EOSVoice=EOSVoice; \
	EOSVoiceEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSVoiceEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
