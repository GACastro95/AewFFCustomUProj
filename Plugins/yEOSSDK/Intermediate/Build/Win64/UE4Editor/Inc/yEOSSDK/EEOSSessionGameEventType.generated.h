// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionGameEventType_generated_h
#error "EEOSSessionGameEventType.generated.h already included, missing '#pragma once' in EEOSSessionGameEventType.h"
#endif
#define YEOSSDK_EEOSSessionGameEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionGameEventType_h


#define FOREACH_ENUM_EEOSSESSIONGAMEEVENTTYPE(op) \
	op(EEOSSessionGameEventType::None) \
	op(EEOSSessionGameEventType::DisconnectedHost) \
	op(EEOSSessionGameEventType::WaitingForJoinPlayres) \
	op(EEOSSessionGameEventType::RegisteredAllMembers) \
	op(EEOSSessionGameEventType::WaitingClientForReady) \
	op(EEOSSessionGameEventType::ReadyAllClients) \
	op(EEOSSessionGameEventType::WaitingForMemberInfo) \
	op(EEOSSessionGameEventType::WaitingForReceivedAPackets) \
	op(EEOSSessionGameEventType::SynchronizedAllPackets) \
	op(EEOSSessionGameEventType::QuitGame) \
	op(EEOSSessionGameEventType::ResendRequestPlayerData) 

enum class EEOSSessionGameEventType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionGameEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
