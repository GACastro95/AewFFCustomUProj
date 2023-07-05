// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFriendAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriendAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSFriendAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSFriendAPIVersionSettings"), sizeof(FEOSFriendAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSFriendAPIVersionSettings>()
{
	return FEOSFriendAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSFriendAPIVersionSettings(FEOSFriendAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSFriendAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSFriendAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSFriendAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSFriendAPIVersionSettings>(FName(TEXT("EOSFriendAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSFriendAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyFriendsUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyFriendsUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetFriendsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetFriendsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetFriendAtIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetFriendAtIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSFriendAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSFriendAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_AddNotifyFriendsUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSFriendAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_AddNotifyFriendsUpdate = { "AddNotifyFriendsUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFriendAPIVersionSettings, AddNotifyFriendsUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_AddNotifyFriendsUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_AddNotifyFriendsUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_QueryFriends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSFriendAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_QueryFriends = { "QueryFriends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFriendAPIVersionSettings, QueryFriends), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_QueryFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_QueryFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSFriendAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendsCount = { "GetFriendsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFriendAPIVersionSettings, GetFriendsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendAtIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSFriendAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendAtIndex = { "GetFriendAtIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFriendAPIVersionSettings, GetFriendAtIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendAtIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendAtIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSFriendAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetStatus = { "GetStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFriendAPIVersionSettings, GetStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_AddNotifyFriendsUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_QueryFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetFriendAtIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::NewProp_GetStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSFriendAPIVersionSettings",
		sizeof(FEOSFriendAPIVersionSettings),
		alignof(FEOSFriendAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSFriendAPIVersionSettings"), sizeof(FEOSFriendAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings_Hash() { return 3193953461U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
