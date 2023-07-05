// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserInfoAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserInfoAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSUserInfoAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSUserInfoAPIVersionSettings"), sizeof(FEOSUserInfoAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSUserInfoAPIVersionSettings>()
{
	return FEOSUserInfoAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSUserInfoAPIVersionSettings(FEOSUserInfoAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSUserInfoAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserInfoAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserInfoAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSUserInfoAPIVersionSettings>(FName(TEXT("EOSUserInfoAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserInfoAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryUserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryUserInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyUserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyUserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSUserInfoAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSUserInfoAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_QueryUserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserInfoAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserInfoAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_QueryUserInfo = { "QueryUserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserInfoAPIVersionSettings, QueryUserInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_QueryUserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_QueryUserInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_CopyUserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserInfoAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserInfoAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_CopyUserInfo = { "CopyUserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserInfoAPIVersionSettings, CopyUserInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_CopyUserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_CopyUserInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_QueryUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::NewProp_CopyUserInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSUserInfoAPIVersionSettings",
		sizeof(FEOSUserInfoAPIVersionSettings),
		alignof(FEOSUserInfoAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSUserInfoAPIVersionSettings"), sizeof(FEOSUserInfoAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings_Hash() { return 973497321U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
