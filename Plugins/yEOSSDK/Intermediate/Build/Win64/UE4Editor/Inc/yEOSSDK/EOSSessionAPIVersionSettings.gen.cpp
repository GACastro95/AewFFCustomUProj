// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSSessionAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSessionAPIVersionSettings"), sizeof(FEOSSessionAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSessionAPIVersionSettings>()
{
	return FEOSSessionAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSessionAPIVersionSettings(FEOSSessionAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSessionAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSSessionAPIVersionSettings>(FName(TEXT("EOSSessionAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifySessionInviteReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifySessionInviteReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifySessionInviteAccepted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifySessionInviteAccepted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateSessionModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreateSessionModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateSessionModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateSessionModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetMaxPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetMaxPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPermissionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetPermissionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetJoininProgressAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetJoininProgressAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetInvitesAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetInvitesAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetHostAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetHostAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionAttributeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionAttributeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroySession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestroySession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegiterPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegiterPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnregisterPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnregisterPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnedInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SnedInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryInvites_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RejectInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetSessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetSessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SearchFind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JoinSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySessionHandleByInviteID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySessionHandleByInviteID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySessionHandleForPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySessionHandleForPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetSearchResultCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetSearchResultCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySearchResultByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySearchResultByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetSessionAttributeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetSessionAttributeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySessionAttributeByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySessionAttributeByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetRegisteredPlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetRegisteredPlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyRegisteredPlayerByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyRegisteredPlayerByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyActiveSessionHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyActiveSessionHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSessionCopyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveSessionCopyInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSessionAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteReceived = { "AddNotifySessionInviteReceived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, AddNotifySessionInviteReceived), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteAccepted = { "AddNotifySessionInviteAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, AddNotifySessionInviteAccepted), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteAccepted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CreateSessionModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CreateSessionModification = { "CreateSessionModification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CreateSessionModification), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CreateSessionModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CreateSessionModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSessionModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSessionModification = { "UpdateSessionModification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, UpdateSessionModification), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSessionModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSessionModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetMaxPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetMaxPlayer = { "SetMaxPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetMaxPlayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetMaxPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetMaxPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetPermissionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetPermissionLevel = { "SetPermissionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetPermissionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetPermissionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetPermissionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetJoininProgressAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetJoininProgressAllowed = { "SetJoininProgressAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetJoininProgressAllowed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetJoininProgressAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetJoininProgressAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetInvitesAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetInvitesAllowed = { "SetInvitesAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetInvitesAllowed), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetInvitesAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetInvitesAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetHostAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetHostAddress = { "SetHostAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetHostAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetHostAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetHostAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionAttributeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionAttributeData = { "SessionAttributeData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SessionAttributeData), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionAttributeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddAttribute = { "AddAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, AddAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RemoveAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RemoveAttribute = { "RemoveAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, RemoveAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RemoveAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RemoveAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSession = { "UpdateSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, UpdateSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_DestroySession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_DestroySession = { "DestroySession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, DestroySession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_DestroySession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_DestroySession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_StartSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_StartSession = { "StartSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, StartSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_StartSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_StartSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_EndSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_EndSession = { "EndSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, EndSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_EndSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_EndSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RegiterPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RegiterPlayers = { "RegiterPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, RegiterPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RegiterPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RegiterPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UnregisterPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UnregisterPlayers = { "UnregisterPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, UnregisterPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UnregisterPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UnregisterPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SnedInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SnedInvite = { "SnedInvite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SnedInvite), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SnedInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SnedInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_QueryInvites_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_QueryInvites = { "QueryInvites", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, QueryInvites), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_QueryInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_QueryInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RejectInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RejectInvite = { "RejectInvite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, RejectInvite), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RejectInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RejectInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionSearch = { "SessionSearch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SessionSearch), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetParameter = { "SetParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AttributeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AttributeData = { "AttributeData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, AttributeData), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AttributeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetSessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetSessionID = { "SetSessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SetSessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetSessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetSessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SearchFind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SearchFind = { "SearchFind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, SearchFind), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SearchFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SearchFind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_JoinSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_JoinSession = { "JoinSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, JoinSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_JoinSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_JoinSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleByInviteID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleByInviteID = { "CopySessionHandleByInviteID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopySessionHandleByInviteID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleByInviteID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleByInviteID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleForPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleForPresence = { "CopySessionHandleForPresence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopySessionHandleForPresence), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleForPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleForPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSearchResultCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSearchResultCount = { "GetSearchResultCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, GetSearchResultCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSearchResultCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSearchResultCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex = { "CopySearchResultByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopySearchResultByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyInfo = { "CopyInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopyInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSessionAttributeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSessionAttributeCount = { "GetSessionAttributeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, GetSessionAttributeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSessionAttributeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSessionAttributeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionAttributeByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionAttributeByIndex = { "CopySessionAttributeByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopySessionAttributeByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionAttributeByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionAttributeByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetRegisteredPlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetRegisteredPlayerCount = { "GetRegisteredPlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, GetRegisteredPlayerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetRegisteredPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetRegisteredPlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyRegisteredPlayerByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyRegisteredPlayerByIndex = { "CopyRegisteredPlayerByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopyRegisteredPlayerByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyRegisteredPlayerByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyRegisteredPlayerByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyActiveSessionHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyActiveSessionHandle = { "CopyActiveSessionHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, CopyActiveSessionHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyActiveSessionHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyActiveSessionHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_ActiveSessionCopyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_ActiveSessionCopyInfo = { "ActiveSessionCopyInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionAPIVersionSettings, ActiveSessionCopyInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_ActiveSessionCopyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_ActiveSessionCopyInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddNotifySessionInviteAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CreateSessionModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSessionModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetMaxPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetPermissionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetJoininProgressAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetInvitesAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetHostAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionAttributeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AddAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RemoveAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UpdateSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_DestroySession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_StartSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_EndSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RegiterPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_UnregisterPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SnedInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_QueryInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_RejectInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SessionSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_AttributeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SetSessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_SearchFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_JoinSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleByInviteID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionHandleForPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSearchResultCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySearchResultByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetSessionAttributeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopySessionAttributeByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_GetRegisteredPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyRegisteredPlayerByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_CopyActiveSessionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::NewProp_ActiveSessionCopyInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSessionAPIVersionSettings",
		sizeof(FEOSSessionAPIVersionSettings),
		alignof(FEOSSessionAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSessionAPIVersionSettings"), sizeof(FEOSSessionAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings_Hash() { return 2676130500U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
