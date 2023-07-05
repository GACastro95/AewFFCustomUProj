// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLobbyAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbyAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSLobbyAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSLobbyAPIVersionSettings"), sizeof(FEOSLobbyAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSLobbyAPIVersionSettings>()
{
	return FEOSLobbyAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSLobbyAPIVersionSettings(FEOSLobbyAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSLobbyAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLobbyAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLobbyAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSLobbyAPIVersionSettings>(FName(TEXT("EOSLobbyAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLobbyAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInviteReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LobbyInviteReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyUpdateReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LobbyUpdateReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberUpdateReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemberUpdateReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberStatusReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemberStatusReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreateLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestroyLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KickMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromoteMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PromoteMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateLobbyModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateLobbyModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPermissionl_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetPermissionl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetMaxMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetMaxMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddMemberAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddMemberAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveMemberAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveMemberAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SendInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryInvites_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RejectInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetInviteCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetInviteCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetInviteIdByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetInviteIdByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbySearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LobbySearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetTargetUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetTargetUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchFind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetLobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetSearchResultCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetSearchResultCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JoinLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaveLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyLobbyDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyLobbyDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyLobbyDetailsByInvited_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyLobbyDetailsByInvited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySearchResultByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySearchResultByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetLobbyOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetLobbyOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAttributeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetAttributeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyAttributeByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyAttributeByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetMemberCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetMemberCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetMemberByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetMemberByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetMemberAttributeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetMemberAttributeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyMemberAttributeByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyMemberAttributeByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRTCOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalRTCOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetRTCRoomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetRTCRoomName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyRTCRoomConnectionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyRTCRoomConnectionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTCAddNotifyParticipantStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RTCAddNotifyParticipantStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTCAudioUpdateSending_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RTCAudioUpdateSending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTCAudioUpdateReceiving_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RTCAudioUpdateReceiving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTCAudioNotifyParticipantUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RTCAudioNotifyParticipantUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTCBlockParticipant_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RTCBlockParticipant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSLobbyAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyInviteReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyInviteReceived = { "LobbyInviteReceived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, LobbyInviteReceived), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyInviteReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyInviteReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyUpdateReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyUpdateReceived = { "LobbyUpdateReceived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, LobbyUpdateReceived), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyUpdateReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyUpdateReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberUpdateReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberUpdateReceived = { "MemberUpdateReceived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, MemberUpdateReceived), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberUpdateReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberUpdateReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberStatusReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberStatusReceived = { "MemberStatusReceived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, MemberStatusReceived), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberStatusReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberStatusReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CreateLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CreateLobby = { "CreateLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CreateLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CreateLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CreateLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_DestroyLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_DestroyLobby = { "DestroyLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, DestroyLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_DestroyLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_DestroyLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_KickMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_KickMember = { "KickMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, KickMember), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_KickMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_KickMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_PromoteMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_PromoteMember = { "PromoteMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, PromoteMember), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_PromoteMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_PromoteMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobbyModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobbyModification = { "UpdateLobbyModification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, UpdateLobbyModification), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobbyModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobbyModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetPermissionl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetPermissionl = { "SetPermissionl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SetPermissionl), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetPermissionl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetPermissionl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetMaxMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetMaxMembers = { "SetMaxMembers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SetMaxMembers), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetMaxMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetMaxMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobby = { "UpdateLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, UpdateLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddAttribute = { "AddAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, AddAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveAttribute = { "RemoveAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RemoveAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddMemberAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddMemberAttribute = { "AddMemberAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, AddMemberAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddMemberAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddMemberAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveMemberAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveMemberAttribute = { "RemoveMemberAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RemoveMemberAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveMemberAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveMemberAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SendInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SendInvite = { "SendInvite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SendInvite), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SendInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SendInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_QueryInvites_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_QueryInvites = { "QueryInvites", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, QueryInvites), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_QueryInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_QueryInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RejectInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RejectInvite = { "RejectInvite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RejectInvite), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RejectInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RejectInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteCount = { "GetInviteCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetInviteCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteIdByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteIdByIndex = { "GetInviteIdByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetInviteIdByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteIdByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteIdByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbySearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbySearch = { "LobbySearch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, LobbySearch), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbySearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbySearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetTargetUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetTargetUserID = { "SetTargetUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SetTargetUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetTargetUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetTargetUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SearchFind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SearchFind = { "SearchFind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SearchFind), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SearchFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SearchFind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetLobbyID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetLobbyID = { "SetLobbyID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SetLobbyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetLobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetLobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetParameter = { "SetParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, SetParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AttributeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AttributeData = { "AttributeData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, AttributeData), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AttributeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetSearchResultCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetSearchResultCount = { "GetSearchResultCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetSearchResultCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetSearchResultCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetSearchResultCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_JoinLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_JoinLobby = { "JoinLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, JoinLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_JoinLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_JoinLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LeaveLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LeaveLobby = { "LeaveLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, LeaveLobby), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LeaveLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LeaveLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetails = { "CopyLobbyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CopyLobbyDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetailsByInvited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetailsByInvited = { "CopyLobbyDetailsByInvited", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CopyLobbyDetailsByInvited), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetailsByInvited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetailsByInvited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex = { "CopySearchResultByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CopySearchResultByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetLobbyOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetLobbyOwner = { "GetLobbyOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetLobbyOwner), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetLobbyOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetLobbyOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyInfo = { "CopyInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CopyInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetAttributeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetAttributeCount = { "GetAttributeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetAttributeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetAttributeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetAttributeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyAttributeByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyAttributeByIndex = { "CopyAttributeByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CopyAttributeByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyAttributeByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyAttributeByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberCount = { "GetMemberCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetMemberCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberByIndex = { "GetMemberByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetMemberByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberAttributeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberAttributeCount = { "GetMemberAttributeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetMemberAttributeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberAttributeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberAttributeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyMemberAttributeByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyMemberAttributeByIndex = { "CopyMemberAttributeByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, CopyMemberAttributeByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyMemberAttributeByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyMemberAttributeByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LocalRTCOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LocalRTCOptions = { "LocalRTCOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, LocalRTCOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LocalRTCOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LocalRTCOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetRTCRoomName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetRTCRoomName = { "GetRTCRoomName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, GetRTCRoomName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetRTCRoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetRTCRoomName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddNotifyRTCRoomConnectionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddNotifyRTCRoomConnectionChanged = { "AddNotifyRTCRoomConnectionChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, AddNotifyRTCRoomConnectionChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddNotifyRTCRoomConnectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddNotifyRTCRoomConnectionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAddNotifyParticipantStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAddNotifyParticipantStatusChanged = { "RTCAddNotifyParticipantStatusChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RTCAddNotifyParticipantStatusChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAddNotifyParticipantStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAddNotifyParticipantStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateSending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateSending = { "RTCAudioUpdateSending", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RTCAudioUpdateSending), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateSending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateSending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateReceiving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateReceiving = { "RTCAudioUpdateReceiving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RTCAudioUpdateReceiving), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateReceiving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateReceiving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioNotifyParticipantUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioNotifyParticipantUpdated = { "RTCAudioNotifyParticipantUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RTCAudioNotifyParticipantUpdated), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioNotifyParticipantUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioNotifyParticipantUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCBlockParticipant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLobbyAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCBlockParticipant = { "RTCBlockParticipant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLobbyAPIVersionSettings, RTCBlockParticipant), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCBlockParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCBlockParticipant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyInviteReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbyUpdateReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberUpdateReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_MemberStatusReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CreateLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_DestroyLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_KickMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_PromoteMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobbyModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetPermissionl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetMaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_UpdateLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddMemberAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RemoveMemberAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SendInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_QueryInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RejectInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetInviteIdByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LobbySearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetTargetUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SearchFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetLobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_SetParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AttributeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetSearchResultCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_JoinLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LeaveLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyLobbyDetailsByInvited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetLobbyOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetAttributeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyAttributeByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetMemberAttributeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_CopyMemberAttributeByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_LocalRTCOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_GetRTCRoomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_AddNotifyRTCRoomConnectionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAddNotifyParticipantStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateSending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioUpdateReceiving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCAudioNotifyParticipantUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::NewProp_RTCBlockParticipant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSLobbyAPIVersionSettings",
		sizeof(FEOSLobbyAPIVersionSettings),
		alignof(FEOSLobbyAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSLobbyAPIVersionSettings"), sizeof(FEOSLobbyAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings_Hash() { return 3648516550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
