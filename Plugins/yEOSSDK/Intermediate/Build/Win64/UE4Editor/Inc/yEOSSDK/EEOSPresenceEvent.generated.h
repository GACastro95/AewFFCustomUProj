// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSPresenceEvent_generated_h
#error "EEOSPresenceEvent.generated.h already included, missing '#pragma once' in EEOSPresenceEvent.h"
#endif
#define YEOSSDK_EEOSPresenceEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSPresenceEvent_h


#define FOREACH_ENUM_EEOSPRESENCEEVENT(op) \
	op(EEOSPresenceEvent::PresenceSet) \
	op(EEOSPresenceEvent::PresenceSetErr) \
	op(EEOSPresenceEvent::PresenceGet) \
	op(EEOSPresenceEvent::PresenceGetErr) \
	op(EEOSPresenceEvent::PresenceChanged) \
	op(EEOSPresenceEvent::FriendPresenceGet) \
	op(EEOSPresenceEvent::FriendPresenceGetErr) \
	op(EEOSPresenceEvent::FriendPresenceChanged) \
	op(EEOSPresenceEvent::JoinGameAccepted) 

enum class EEOSPresenceEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSPresenceEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
