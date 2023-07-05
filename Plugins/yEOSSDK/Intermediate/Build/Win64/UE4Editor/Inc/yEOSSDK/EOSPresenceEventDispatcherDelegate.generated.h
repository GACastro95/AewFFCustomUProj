// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSPresenceEvent : uint8;
class UEOSPresenceBase;
#ifdef YEOSSDK_EOSPresenceEventDispatcherDelegate_generated_h
#error "EOSPresenceEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSPresenceEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSPresenceEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresenceEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSPresenceEventDispatcher_Parms \
{ \
	EEOSPresenceEvent EOSPresenceEvent; \
	UEOSPresenceBase* EOSPresenceBase; \
	FString FriendEpicAccountID; \
}; \
static inline void FEOSPresenceEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSPresenceEventDispatcher, EEOSPresenceEvent EOSPresenceEvent, UEOSPresenceBase* EOSPresenceBase, const FString& FriendEpicAccountID) \
{ \
	_Script_yEOSSDK_eventEOSPresenceEventDispatcher_Parms Parms; \
	Parms.EOSPresenceEvent=EOSPresenceEvent; \
	Parms.EOSPresenceBase=EOSPresenceBase; \
	Parms.FriendEpicAccountID=FriendEpicAccountID; \
	EOSPresenceEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPresenceEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
