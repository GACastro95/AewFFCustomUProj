// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSCommunityEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSCommunityEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSCommunityEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSCommunityEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSCommunityEvent>()
	{
		return EEOSCommunityEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSCommunityEvent(EEOSCommunityEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSCommunityEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent_Hash() { return 3770096882U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSCommunityEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSCommunityEvent::InviteReceived", (int64)EEOSCommunityEvent::InviteReceived },
				{ "EEOSCommunityEvent::UpdateReceived", (int64)EEOSCommunityEvent::UpdateReceived },
				{ "EEOSCommunityEvent::InviteAccepted", (int64)EEOSCommunityEvent::InviteAccepted },
				{ "EEOSCommunityEvent::MemberUpdateReceived", (int64)EEOSCommunityEvent::MemberUpdateReceived },
				{ "EEOSCommunityEvent::UpdateMemberDescription", (int64)EEOSCommunityEvent::UpdateMemberDescription },
				{ "EEOSCommunityEvent::SesionGameStarted", (int64)EEOSCommunityEvent::SesionGameStarted },
				{ "EEOSCommunityEvent::SesionGameEnded", (int64)EEOSCommunityEvent::SesionGameEnded },
				{ "EEOSCommunityEvent::StatusUpdatedOnJoined", (int64)EEOSCommunityEvent::StatusUpdatedOnJoined },
				{ "EEOSCommunityEvent::StatusUpdatedOnLeft", (int64)EEOSCommunityEvent::StatusUpdatedOnLeft },
				{ "EEOSCommunityEvent::StatusUpdatedOnDisconnected", (int64)EEOSCommunityEvent::StatusUpdatedOnDisconnected },
				{ "EEOSCommunityEvent::StatusUpdatedOnKickedMe", (int64)EEOSCommunityEvent::StatusUpdatedOnKickedMe },
				{ "EEOSCommunityEvent::StatusUpdatedOnKickedOther", (int64)EEOSCommunityEvent::StatusUpdatedOnKickedOther },
				{ "EEOSCommunityEvent::StatusUpdatedOnPromotedMe", (int64)EEOSCommunityEvent::StatusUpdatedOnPromotedMe },
				{ "EEOSCommunityEvent::StatusUpdatedOnPromotedOther", (int64)EEOSCommunityEvent::StatusUpdatedOnPromotedOther },
				{ "EEOSCommunityEvent::StatusUpdatedOnClosed", (int64)EEOSCommunityEvent::StatusUpdatedOnClosed },
				{ "EEOSCommunityEvent::Create", (int64)EEOSCommunityEvent::Create },
				{ "EEOSCommunityEvent::CreateErr", (int64)EEOSCommunityEvent::CreateErr },
				{ "EEOSCommunityEvent::CreateErr_LimitExceeded", (int64)EEOSCommunityEvent::CreateErr_LimitExceeded },
				{ "EEOSCommunityEvent::Destroy", (int64)EEOSCommunityEvent::Destroy },
				{ "EEOSCommunityEvent::DestroyErr", (int64)EEOSCommunityEvent::DestroyErr },
				{ "EEOSCommunityEvent::DestroyForce", (int64)EEOSCommunityEvent::DestroyForce },
				{ "EEOSCommunityEvent::DestroyForceErr", (int64)EEOSCommunityEvent::DestroyForceErr },
				{ "EEOSCommunityEvent::DeleteUser", (int64)EEOSCommunityEvent::DeleteUser },
				{ "EEOSCommunityEvent::DeleteUserErr", (int64)EEOSCommunityEvent::DeleteUserErr },
				{ "EEOSCommunityEvent::ChangeOwner", (int64)EEOSCommunityEvent::ChangeOwner },
				{ "EEOSCommunityEvent::ChangeOwnerErr", (int64)EEOSCommunityEvent::ChangeOwnerErr },
				{ "EEOSCommunityEvent::Update", (int64)EEOSCommunityEvent::Update },
				{ "EEOSCommunityEvent::UpdateErr", (int64)EEOSCommunityEvent::UpdateErr },
				{ "EEOSCommunityEvent::SentInvite", (int64)EEOSCommunityEvent::SentInvite },
				{ "EEOSCommunityEvent::SentInviteErr", (int64)EEOSCommunityEvent::SentInviteErr },
				{ "EEOSCommunityEvent::Search", (int64)EEOSCommunityEvent::Search },
				{ "EEOSCommunityEvent::SearchErr", (int64)EEOSCommunityEvent::SearchErr },
				{ "EEOSCommunityEvent::NotFound", (int64)EEOSCommunityEvent::NotFound },
				{ "EEOSCommunityEvent::Join", (int64)EEOSCommunityEvent::Join },
				{ "EEOSCommunityEvent::JoinErr", (int64)EEOSCommunityEvent::JoinErr },
				{ "EEOSCommunityEvent::Leave", (int64)EEOSCommunityEvent::Leave },
				{ "EEOSCommunityEvent::LeaveErr", (int64)EEOSCommunityEvent::LeaveErr },
				{ "EEOSCommunityEvent::QueryInvites", (int64)EEOSCommunityEvent::QueryInvites },
				{ "EEOSCommunityEvent::QueryInvitesErr", (int64)EEOSCommunityEvent::QueryInvitesErr },
				{ "EEOSCommunityEvent::RejectInvites", (int64)EEOSCommunityEvent::RejectInvites },
				{ "EEOSCommunityEvent::RejectInvitesErr", (int64)EEOSCommunityEvent::RejectInvitesErr },
				{ "EEOSCommunityEvent::Start", (int64)EEOSCommunityEvent::Start },
				{ "EEOSCommunityEvent::StartErr", (int64)EEOSCommunityEvent::StartErr },
				{ "EEOSCommunityEvent::End", (int64)EEOSCommunityEvent::End },
				{ "EEOSCommunityEvent::EndErr", (int64)EEOSCommunityEvent::EndErr },
				{ "EEOSCommunityEvent::RegisteUser", (int64)EEOSCommunityEvent::RegisteUser },
				{ "EEOSCommunityEvent::RegisteUserErr", (int64)EEOSCommunityEvent::RegisteUserErr },
				{ "EEOSCommunityEvent::UnregistUser", (int64)EEOSCommunityEvent::UnregistUser },
				{ "EEOSCommunityEvent::UnregistUserErr", (int64)EEOSCommunityEvent::UnregistUserErr },
				{ "EEOSCommunityEvent::VoiceChatConnected", (int64)EEOSCommunityEvent::VoiceChatConnected },
				{ "EEOSCommunityEvent::VoiceChatDisconnected", (int64)EEOSCommunityEvent::VoiceChatDisconnected },
				{ "EEOSCommunityEvent::VoiceChatJoined", (int64)EEOSCommunityEvent::VoiceChatJoined },
				{ "EEOSCommunityEvent::VoiceChatLeft", (int64)EEOSCommunityEvent::VoiceChatLeft },
				{ "EEOSCommunityEvent::VoiceChatEnabled", (int64)EEOSCommunityEvent::VoiceChatEnabled },
				{ "EEOSCommunityEvent::VoiceChatDisabled", (int64)EEOSCommunityEvent::VoiceChatDisabled },
				{ "EEOSCommunityEvent::VoiceChatUnsupported", (int64)EEOSCommunityEvent::VoiceChatUnsupported },
				{ "EEOSCommunityEvent::StartSpeaking", (int64)EEOSCommunityEvent::StartSpeaking },
				{ "EEOSCommunityEvent::StopSpeaking", (int64)EEOSCommunityEvent::StopSpeaking },
				{ "EEOSCommunityEvent::MuteVoice", (int64)EEOSCommunityEvent::MuteVoice },
				{ "EEOSCommunityEvent::UnmuteVoice", (int64)EEOSCommunityEvent::UnmuteVoice },
				{ "EEOSCommunityEvent::MuteVoiceErr", (int64)EEOSCommunityEvent::MuteVoiceErr },
				{ "EEOSCommunityEvent::BlockVoice", (int64)EEOSCommunityEvent::BlockVoice },
				{ "EEOSCommunityEvent::UnblockVoice", (int64)EEOSCommunityEvent::UnblockVoice },
				{ "EEOSCommunityEvent::BlockVoiceErr", (int64)EEOSCommunityEvent::BlockVoiceErr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockVoice.Name", "EEOSCommunityEvent::BlockVoice" },
				{ "BlockVoiceErr.Name", "EEOSCommunityEvent::BlockVoiceErr" },
				{ "BlueprintType", "true" },
				{ "ChangeOwner.Name", "EEOSCommunityEvent::ChangeOwner" },
				{ "ChangeOwnerErr.Name", "EEOSCommunityEvent::ChangeOwnerErr" },
				{ "Create.Name", "EEOSCommunityEvent::Create" },
				{ "CreateErr.Name", "EEOSCommunityEvent::CreateErr" },
				{ "CreateErr_LimitExceeded.Name", "EEOSCommunityEvent::CreateErr_LimitExceeded" },
				{ "DeleteUser.Name", "EEOSCommunityEvent::DeleteUser" },
				{ "DeleteUserErr.Name", "EEOSCommunityEvent::DeleteUserErr" },
				{ "Destroy.Name", "EEOSCommunityEvent::Destroy" },
				{ "DestroyErr.Name", "EEOSCommunityEvent::DestroyErr" },
				{ "DestroyForce.Name", "EEOSCommunityEvent::DestroyForce" },
				{ "DestroyForceErr.Name", "EEOSCommunityEvent::DestroyForceErr" },
				{ "End.Name", "EEOSCommunityEvent::End" },
				{ "EndErr.Name", "EEOSCommunityEvent::EndErr" },
				{ "InviteAccepted.Name", "EEOSCommunityEvent::InviteAccepted" },
				{ "InviteReceived.Name", "EEOSCommunityEvent::InviteReceived" },
				{ "Join.Name", "EEOSCommunityEvent::Join" },
				{ "JoinErr.Name", "EEOSCommunityEvent::JoinErr" },
				{ "Leave.Name", "EEOSCommunityEvent::Leave" },
				{ "LeaveErr.Name", "EEOSCommunityEvent::LeaveErr" },
				{ "MemberUpdateReceived.Name", "EEOSCommunityEvent::MemberUpdateReceived" },
				{ "ModuleRelativePath", "Public/EEOSCommunityEvent.h" },
				{ "MuteVoice.Name", "EEOSCommunityEvent::MuteVoice" },
				{ "MuteVoiceErr.Name", "EEOSCommunityEvent::MuteVoiceErr" },
				{ "NotFound.Name", "EEOSCommunityEvent::NotFound" },
				{ "QueryInvites.Name", "EEOSCommunityEvent::QueryInvites" },
				{ "QueryInvitesErr.Name", "EEOSCommunityEvent::QueryInvitesErr" },
				{ "RegisteUser.Name", "EEOSCommunityEvent::RegisteUser" },
				{ "RegisteUserErr.Name", "EEOSCommunityEvent::RegisteUserErr" },
				{ "RejectInvites.Name", "EEOSCommunityEvent::RejectInvites" },
				{ "RejectInvitesErr.Name", "EEOSCommunityEvent::RejectInvitesErr" },
				{ "Search.Name", "EEOSCommunityEvent::Search" },
				{ "SearchErr.Name", "EEOSCommunityEvent::SearchErr" },
				{ "SentInvite.Name", "EEOSCommunityEvent::SentInvite" },
				{ "SentInviteErr.Name", "EEOSCommunityEvent::SentInviteErr" },
				{ "SesionGameEnded.Name", "EEOSCommunityEvent::SesionGameEnded" },
				{ "SesionGameStarted.Name", "EEOSCommunityEvent::SesionGameStarted" },
				{ "Start.Name", "EEOSCommunityEvent::Start" },
				{ "StartErr.Name", "EEOSCommunityEvent::StartErr" },
				{ "StartSpeaking.Name", "EEOSCommunityEvent::StartSpeaking" },
				{ "StatusUpdatedOnClosed.Name", "EEOSCommunityEvent::StatusUpdatedOnClosed" },
				{ "StatusUpdatedOnDisconnected.Name", "EEOSCommunityEvent::StatusUpdatedOnDisconnected" },
				{ "StatusUpdatedOnJoined.Name", "EEOSCommunityEvent::StatusUpdatedOnJoined" },
				{ "StatusUpdatedOnKickedMe.Name", "EEOSCommunityEvent::StatusUpdatedOnKickedMe" },
				{ "StatusUpdatedOnKickedOther.Name", "EEOSCommunityEvent::StatusUpdatedOnKickedOther" },
				{ "StatusUpdatedOnLeft.Name", "EEOSCommunityEvent::StatusUpdatedOnLeft" },
				{ "StatusUpdatedOnPromotedMe.Name", "EEOSCommunityEvent::StatusUpdatedOnPromotedMe" },
				{ "StatusUpdatedOnPromotedOther.Name", "EEOSCommunityEvent::StatusUpdatedOnPromotedOther" },
				{ "StopSpeaking.Name", "EEOSCommunityEvent::StopSpeaking" },
				{ "UnblockVoice.Name", "EEOSCommunityEvent::UnblockVoice" },
				{ "UnmuteVoice.Name", "EEOSCommunityEvent::UnmuteVoice" },
				{ "UnregistUser.Name", "EEOSCommunityEvent::UnregistUser" },
				{ "UnregistUserErr.Name", "EEOSCommunityEvent::UnregistUserErr" },
				{ "Update.Name", "EEOSCommunityEvent::Update" },
				{ "UpdateErr.Name", "EEOSCommunityEvent::UpdateErr" },
				{ "UpdateMemberDescription.Name", "EEOSCommunityEvent::UpdateMemberDescription" },
				{ "UpdateReceived.Name", "EEOSCommunityEvent::UpdateReceived" },
				{ "VoiceChatConnected.Name", "EEOSCommunityEvent::VoiceChatConnected" },
				{ "VoiceChatDisabled.Name", "EEOSCommunityEvent::VoiceChatDisabled" },
				{ "VoiceChatDisconnected.Name", "EEOSCommunityEvent::VoiceChatDisconnected" },
				{ "VoiceChatEnabled.Name", "EEOSCommunityEvent::VoiceChatEnabled" },
				{ "VoiceChatJoined.Name", "EEOSCommunityEvent::VoiceChatJoined" },
				{ "VoiceChatLeft.Name", "EEOSCommunityEvent::VoiceChatLeft" },
				{ "VoiceChatUnsupported.Name", "EEOSCommunityEvent::VoiceChatUnsupported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSCommunityEvent",
				"EEOSCommunityEvent",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
