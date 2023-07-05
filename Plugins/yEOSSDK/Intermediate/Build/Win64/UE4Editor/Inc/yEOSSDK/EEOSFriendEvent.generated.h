// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSFriendEvent_generated_h
#error "EEOSFriendEvent.generated.h already included, missing '#pragma once' in EEOSFriendEvent.h"
#endif
#define YEOSSDK_EEOSFriendEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSFriendEvent_h


#define FOREACH_ENUM_EEOSFRIENDEVENT(op) \
	op(EEOSFriendEvent::FriendInfo) \
	op(EEOSFriendEvent::FriendInfo_Empty) \
	op(EEOSFriendEvent::FriendStatus) \
	op(EEOSFriendEvent::FriendGetInfo) \
	op(EEOSFriendEvent::FriendUpdatePUID) \
	op(EEOSFriendEvent::FriendInfo_Failed) \
	op(EEOSFriendEvent::FriendUpdateExternalAccount) 

enum class EEOSFriendEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSFriendEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
