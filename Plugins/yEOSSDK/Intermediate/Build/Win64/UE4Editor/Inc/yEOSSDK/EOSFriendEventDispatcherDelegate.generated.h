// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSFriendEvent : uint8;
class UEOSFriend;
class UEOSUserBase;
#ifdef YEOSSDK_EOSFriendEventDispatcherDelegate_generated_h
#error "EOSFriendEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSFriendEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSFriendEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSFriendEventDispatcher_Parms \
{ \
	EEOSFriendEvent EOSFriendEvent; \
	UEOSFriend* EOSFriend; \
	UEOSUserBase* EOSFriendUser; \
}; \
static inline void FEOSFriendEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSFriendEventDispatcher, EEOSFriendEvent EOSFriendEvent, UEOSFriend* EOSFriend, UEOSUserBase* EOSFriendUser) \
{ \
	_Script_yEOSSDK_eventEOSFriendEventDispatcher_Parms Parms; \
	Parms.EOSFriendEvent=EOSFriendEvent; \
	Parms.EOSFriend=EOSFriend; \
	Parms.EOSFriendUser=EOSFriendUser; \
	EOSFriendEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSFriendEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
