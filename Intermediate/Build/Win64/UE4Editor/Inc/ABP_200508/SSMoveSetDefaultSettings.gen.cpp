// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveSetDefaultSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveSetDefaultSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory();
// End Cross Module References

static_assert(std::is_polymorphic<FSSMoveSetDefaultSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSMoveSetDefaultSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSMoveSetDefaultSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveSetDefaultSettings"), sizeof(FSSMoveSetDefaultSettings), Get_Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveSetDefaultSettings>()
{
	return FSSMoveSetDefaultSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveSetDefaultSettings(FSSMoveSetDefaultSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveSetDefaultSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetDefaultSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetDefaultSettings()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveSetDefaultSettings>(FName(TEXT("SSMoveSetDefaultSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetDefaultSettings;
	struct Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv05_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv05_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv05;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv10_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv10_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv10;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv15_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv15_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv15;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv20_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv20_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv20;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv25_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv25_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv25;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv30_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv30_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv30;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv35_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv35_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv35;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv40_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv40_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv40;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv45_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv45_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv45;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotLv50_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotLv50_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotLv50;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveSetDefaultSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05 = { "SlotLv05", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv05), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10 = { "SlotLv10", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv10), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15 = { "SlotLv15", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv15), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20 = { "SlotLv20", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv20), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25 = { "SlotLv25", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv25), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30 = { "SlotLv30", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv30), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35 = { "SlotLv35", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv35), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40 = { "SlotLv40", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv40), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45 = { "SlotLv45", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv45), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetDefaultSettings" },
		{ "ModuleRelativePath", "Public/SSMoveSetDefaultSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50 = { "SlotLv50", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetDefaultSettings, SlotLv50), Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv15,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv20,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv25,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv30,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv35,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv40,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv45,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::NewProp_SlotLv50,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSMoveSetDefaultSettings",
		sizeof(FSSMoveSetDefaultSettings),
		alignof(FSSMoveSetDefaultSettings),
		Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveSetDefaultSettings"), sizeof(FSSMoveSetDefaultSettings), Get_Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetDefaultSettings_Hash() { return 676211183U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
