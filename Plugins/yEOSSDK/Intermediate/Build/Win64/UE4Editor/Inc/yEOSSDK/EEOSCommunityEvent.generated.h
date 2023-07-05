// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSCommunityEvent_generated_h
#error "EEOSCommunityEvent.generated.h already included, missing '#pragma once' in EEOSCommunityEvent.h"
#endif
#define YEOSSDK_EEOSCommunityEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSCommunityEvent_h


#define FOREACH_ENUM_EEOSCOMMUNITYEVENT(op) \
	op(EEOSCommunityEvent::InviteReceived) \
	op(EEOSCommunityEvent::UpdateReceived) \
	op(EEOSCommunityEvent::InviteAccepted) \
	op(EEOSCommunityEvent::MemberUpdateReceived) \
	op(EEOSCommunityEvent::UpdateMemberDescription) \
	op(EEOSCommunityEvent::SesionGameStarted) \
	op(EEOSCommunityEvent::SesionGameEnded) \
	op(EEOSCommunityEvent::StatusUpdatedOnJoined) \
	op(EEOSCommunityEvent::StatusUpdatedOnLeft) \
	op(EEOSCommunityEvent::StatusUpdatedOnDisconnected) \
	op(EEOSCommunityEvent::StatusUpdatedOnKickedMe) \
	op(EEOSCommunityEvent::StatusUpdatedOnKickedOther) \
	op(EEOSCommunityEvent::StatusUpdatedOnPromotedMe) \
	op(EEOSCommunityEvent::StatusUpdatedOnPromotedOther) \
	op(EEOSCommunityEvent::StatusUpdatedOnClosed) \
	op(EEOSCommunityEvent::Create) \
	op(EEOSCommunityEvent::CreateErr) \
	op(EEOSCommunityEvent::CreateErr_LimitExceeded) \
	op(EEOSCommunityEvent::Destroy) \
	op(EEOSCommunityEvent::DestroyErr) \
	op(EEOSCommunityEvent::DestroyForce) \
	op(EEOSCommunityEvent::DestroyForceErr) \
	op(EEOSCommunityEvent::DeleteUser) \
	op(EEOSCommunityEvent::DeleteUserErr) \
	op(EEOSCommunityEvent::ChangeOwner) \
	op(EEOSCommunityEvent::ChangeOwnerErr) \
	op(EEOSCommunityEvent::Update) \
	op(EEOSCommunityEvent::UpdateErr) \
	op(EEOSCommunityEvent::SentInvite) \
	op(EEOSCommunityEvent::SentInviteErr) \
	op(EEOSCommunityEvent::Search) \
	op(EEOSCommunityEvent::SearchErr) \
	op(EEOSCommunityEvent::NotFound) \
	op(EEOSCommunityEvent::Join) \
	op(EEOSCommunityEvent::JoinErr) \
	op(EEOSCommunityEvent::Leave) \
	op(EEOSCommunityEvent::LeaveErr) \
	op(EEOSCommunityEvent::QueryInvites) \
	op(EEOSCommunityEvent::QueryInvitesErr) \
	op(EEOSCommunityEvent::RejectInvites) \
	op(EEOSCommunityEvent::RejectInvitesErr) \
	op(EEOSCommunityEvent::Start) \
	op(EEOSCommunityEvent::StartErr) \
	op(EEOSCommunityEvent::End) \
	op(EEOSCommunityEvent::EndErr) \
	op(EEOSCommunityEvent::RegisteUser) \
	op(EEOSCommunityEvent::RegisteUserErr) \
	op(EEOSCommunityEvent::UnregistUser) \
	op(EEOSCommunityEvent::UnregistUserErr) \
	op(EEOSCommunityEvent::VoiceChatConnected) \
	op(EEOSCommunityEvent::VoiceChatDisconnected) \
	op(EEOSCommunityEvent::VoiceChatJoined) \
	op(EEOSCommunityEvent::VoiceChatLeft) \
	op(EEOSCommunityEvent::VoiceChatEnabled) \
	op(EEOSCommunityEvent::VoiceChatDisabled) \
	op(EEOSCommunityEvent::VoiceChatUnsupported) \
	op(EEOSCommunityEvent::StartSpeaking) \
	op(EEOSCommunityEvent::StopSpeaking) \
	op(EEOSCommunityEvent::MuteVoice) \
	op(EEOSCommunityEvent::UnmuteVoice) \
	op(EEOSCommunityEvent::MuteVoiceErr) \
	op(EEOSCommunityEvent::BlockVoice) \
	op(EEOSCommunityEvent::UnblockVoice) \
	op(EEOSCommunityEvent::BlockVoiceErr) 

enum class EEOSCommunityEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSCommunityEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
