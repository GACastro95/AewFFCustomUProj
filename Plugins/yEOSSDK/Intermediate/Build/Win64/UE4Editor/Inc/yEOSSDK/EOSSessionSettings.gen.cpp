// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission();
// End Cross Module References
class UScriptStruct* FEOSSessionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSessionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSessionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSessionSettings"), sizeof(FEOSSessionSettings), Get_Z_Construct_UScriptStruct_FEOSSessionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSessionSettings>()
{
	return FEOSSessionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSessionSettings(FEOSSessionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSessionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSSessionSettings>(FName(TEXT("EOSSessionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionSettings;
	struct Z_Construct_UScriptStruct_FEOSSessionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BucketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BucketID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommunityPermission_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityPermission_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CommunityPermission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowJoinInProgress_MetaData[];
#endif
		static void NewProp_AllowJoinInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowJoinInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitesAllowed_MetaData[];
#endif
		static void NewProp_InvitesAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvitesAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceEnabled_MetaData[];
#endif
		static void NewProp_PresenceEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PresenceEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSessionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_SessionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionSettings, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_BucketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_BucketID = { "BucketID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionSettings, BucketID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_BucketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_BucketID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionSettings, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_MaxMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionSettings, MaxMembers), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_MaxMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_MaxMembers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission = { "CommunityPermission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionSettings, CommunityPermission), Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress_SetBit(void* Obj)
	{
		((FEOSSessionSettings*)Obj)->AllowJoinInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress = { "AllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSSessionSettings), &Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed_SetBit(void* Obj)
	{
		((FEOSSessionSettings*)Obj)->InvitesAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed = { "InvitesAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSSessionSettings), &Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled_SetBit(void* Obj)
	{
		((FEOSSessionSettings*)Obj)->PresenceEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled = { "PresenceEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSSessionSettings), &Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_HostAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSettings" },
		{ "ModuleRelativePath", "Public/EOSSessionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_HostAddress = { "HostAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionSettings, HostAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_HostAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_HostAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_BucketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_MaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_CommunityPermission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_AllowJoinInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_InvitesAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_PresenceEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::NewProp_HostAddress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSessionSettings",
		sizeof(FEOSSessionSettings),
		alignof(FEOSSessionSettings),
		Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSessionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSessionSettings"), sizeof(FEOSSessionSettings), Get_Z_Construct_UScriptStruct_FEOSSessionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSessionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSessionSettings_Hash() { return 1274636344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
