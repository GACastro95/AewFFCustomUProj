// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSAuthEvent : uint8;
class UEOSAuth;
#ifdef YEOSSDK_EOSAuthEventDispatcherDelegate_generated_h
#error "EOSAuthEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAuthEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAuthEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuthEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSAuthEventDispatcher_Parms \
{ \
	EEOSAuthEvent EOSAuthEvent; \
	UEOSAuth* EOSAuth; \
}; \
static inline void FEOSAuthEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAuthEventDispatcher, EEOSAuthEvent EOSAuthEvent, UEOSAuth* EOSAuth) \
{ \
	_Script_yEOSSDK_eventEOSAuthEventDispatcher_Parms Parms; \
	Parms.EOSAuthEvent=EOSAuthEvent; \
	Parms.EOSAuth=EOSAuth; \
	EOSAuthEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAuthEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
