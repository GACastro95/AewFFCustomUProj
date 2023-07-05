// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatSkillDefaultSettingsOld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatSkillDefaultSettingsOld() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHeatSkillDefaultSettingsOld>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHeatSkillDefaultSettingsOld cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHeatSkillDefaultSettingsOld::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatSkillDefaultSettingsOld"), sizeof(FSSHeatSkillDefaultSettingsOld), Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatSkillDefaultSettingsOld>()
{
	return FSSHeatSkillDefaultSettingsOld::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatSkillDefaultSettingsOld(FSSHeatSkillDefaultSettingsOld::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatSkillDefaultSettingsOld"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillDefaultSettingsOld
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillDefaultSettingsOld()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatSkillDefaultSettingsOld>(FName(TEXT("SSHeatSkillDefaultSettingsOld")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillDefaultSettingsOld;
	struct Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot05_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot05_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot05;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot10_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot10_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot10;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot15_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot15_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot15;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot20_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot20_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot20;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot25_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot25_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot25;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot30_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot30_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot30;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot35_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot35_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot35;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot40_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot40_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot40;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot45_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot45_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot45;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot50_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot50_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot50;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatSkillDefaultSettingsOld>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Category), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05 = { "Slot05", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot05), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10 = { "Slot10", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot10), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15 = { "Slot15", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot15), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20 = { "Slot20", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot20), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25 = { "Slot25", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot25), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30 = { "Slot30", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot30), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35 = { "Slot35", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot35), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40 = { "Slot40", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot40), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45 = { "Slot45", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot45), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillDefaultSettingsOld" },
		{ "ModuleRelativePath", "Public/SSHeatSkillDefaultSettingsOld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50 = { "Slot50", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillDefaultSettingsOld, Slot50), Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot15,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot20,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot25,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot30,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot35,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot40,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot45,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::NewProp_Slot50,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHeatSkillDefaultSettingsOld",
		sizeof(FSSHeatSkillDefaultSettingsOld),
		alignof(FSSHeatSkillDefaultSettingsOld),
		Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatSkillDefaultSettingsOld"), sizeof(FSSHeatSkillDefaultSettingsOld), Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettingsOld_Hash() { return 2469223976U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
