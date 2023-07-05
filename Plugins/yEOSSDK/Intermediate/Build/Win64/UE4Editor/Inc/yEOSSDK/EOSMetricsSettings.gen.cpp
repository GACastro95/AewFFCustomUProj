// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSMetricsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSMetricsSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSMetricsAccountIdType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSControlType();
// End Cross Module References
class UScriptStruct* FEOSMetricsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSMetricsSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSMetricsSettings"), sizeof(FEOSMetricsSettings), Get_Z_Construct_UScriptStruct_FEOSMetricsSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSMetricsSettings>()
{
	return FEOSMetricsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSMetricsSettings(FEOSMetricsSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSMetricsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSMetricsSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSMetricsSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSMetricsSettings>(FName(TEXT("EOSMetricsSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSMetricsSettings;
	struct Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameSessionId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControlType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSMetricsSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsSettings, AccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountDisplayName = { "AccountDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsSettings, AccountDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ServerIP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsSettings, ServerIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ServerIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_gameSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_gameSessionId = { "gameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsSettings, gameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_gameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_gameSessionId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsSettings, AccountType), Z_Construct_UEnum_yEOSSDK_EEOSMetricsAccountIdType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsSettings, ControlType), Z_Construct_UEnum_yEOSSDK_EEOSControlType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_gameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_AccountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::NewProp_ControlType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSMetricsSettings",
		sizeof(FEOSMetricsSettings),
		alignof(FEOSMetricsSettings),
		Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSMetricsSettings"), sizeof(FEOSMetricsSettings), Get_Z_Construct_UScriptStruct_FEOSMetricsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSMetricsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsSettings_Hash() { return 3479427965U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
