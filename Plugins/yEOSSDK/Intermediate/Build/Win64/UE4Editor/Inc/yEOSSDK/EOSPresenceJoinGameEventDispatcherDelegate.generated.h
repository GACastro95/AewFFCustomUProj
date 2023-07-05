// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSPresenceBase;
#ifdef YEOSSDK_EOSPresenceJoinGameEventDispatcherDelegate_generated_h
#error "EOSPresenceJoinGameEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSPresenceJoinGameEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSPresenceJoinGameEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresenceJoinGameEventDispatcherDelegate_h_7_DELEGATE \
struct _Script_yEOSSDK_eventEOSPresenceJoinGameEventDispatcher_Parms \
{ \
	UEOSPresenceBase* EOSPresenceBase; \
	FString SessionID; \
	FString SessionName; \
	FString ProductUserID; \
}; \
static inline void FEOSPresenceJoinGameEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSPresenceJoinGameEventDispatcher, UEOSPresenceBase* EOSPresenceBase, const FString& SessionID, const FString& SessionName, const FString& ProductUserID) \
{ \
	_Script_yEOSSDK_eventEOSPresenceJoinGameEventDispatcher_Parms Parms; \
	Parms.EOSPresenceBase=EOSPresenceBase; \
	Parms.SessionID=SessionID; \
	Parms.SessionName=SessionName; \
	Parms.ProductUserID=ProductUserID; \
	EOSPresenceJoinGameEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresenceJoinGameEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
