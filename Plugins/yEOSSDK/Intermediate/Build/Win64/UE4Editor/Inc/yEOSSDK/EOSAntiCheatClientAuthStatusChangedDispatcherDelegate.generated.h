// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSIDs;
enum class EEOSAntiCheatAuthStatus : uint8;
#ifdef YEOSSDK_EOSAntiCheatClientAuthStatusChangedDispatcherDelegate_generated_h
#error "EOSAntiCheatClientAuthStatusChangedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAntiCheatClientAuthStatusChangedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAntiCheatClientAuthStatusChangedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClientAuthStatusChangedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSAntiCheatClientAuthStatusChangedDispatcher_Parms \
{ \
	UEOSIDs* UserId; \
	EEOSAntiCheatAuthStatus AuthStatus; \
}; \
static inline void FEOSAntiCheatClientAuthStatusChangedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAntiCheatClientAuthStatusChangedDispatcher, UEOSIDs* UserId, EEOSAntiCheatAuthStatus AuthStatus) \
{ \
	_Script_yEOSSDK_eventEOSAntiCheatClientAuthStatusChangedDispatcher_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.AuthStatus=AuthStatus; \
	EOSAntiCheatClientAuthStatusChangedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClientAuthStatusChangedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
