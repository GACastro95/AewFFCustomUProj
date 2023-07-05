// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSLobbyEventType_generated_h
#error "EELEOSLobbyEventType.generated.h already included, missing '#pragma once' in EELEOSLobbyEventType.h"
#endif
#define ABP_200508_EELEOSLobbyEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSLobbyEventType_h


#define FOREACH_ENUM_EELEOSLOBBYEVENTTYPE(op) \
	op(EELEOSLobbyEventType::Created) \
	op(EELEOSLobbyEventType::Destroyed) \
	op(EELEOSLobbyEventType::Joined) \
	op(EELEOSLobbyEventType::Leaved) \
	op(EELEOSLobbyEventType::KickedMe) \
	op(EELEOSLobbyEventType::KickedOther) \
	op(EELEOSLobbyEventType::ChangeOwner) \
	op(EELEOSLobbyEventType::MemberUpdated) \
	op(EELEOSLobbyEventType::MemberUpdatedJoin) \
	op(EELEOSLobbyEventType::MemberUpdatedLeft) \
	op(EELEOSLobbyEventType::InviteReceived) \
	op(EELEOSLobbyEventType::InviteReject) \
	op(EELEOSLobbyEventType::QueryInviteResponse) \
	op(EELEOSLobbyEventType::OnPromotedMe) \
	op(EELEOSLobbyEventType::WrestlerDataReceived) \
	op(EELEOSLobbyEventType::VoiceChatEnabled) \
	op(EELEOSLobbyEventType::VoiceChatDisabled) \
	op(EELEOSLobbyEventType::VoiceChatUnsupported) \
	op(EELEOSLobbyEventType::Mute) \
	op(EELEOSLobbyEventType::Unmute) \
	op(EELEOSLobbyEventType::StartSpeaking) \
	op(EELEOSLobbyEventType::StopSpeaking) \
	op(EELEOSLobbyEventType::Block) \
	op(EELEOSLobbyEventType::Unblock) 

enum class EELEOSLobbyEventType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSLobbyEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
