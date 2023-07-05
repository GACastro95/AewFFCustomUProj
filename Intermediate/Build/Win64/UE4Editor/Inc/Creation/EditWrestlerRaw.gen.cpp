// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditWrestlerRaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerRaw() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerRaw();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCommonWrestlerRaw();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameString();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBasicWrestlerParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerSettings();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FNamedPresetParam();
// End Cross Module References
class UScriptStruct* FEditWrestlerRaw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerRaw_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditWrestlerRaw, Z_Construct_UPackage__Script_Creation(), TEXT("EditWrestlerRaw"), sizeof(FEditWrestlerRaw), Get_Z_Construct_UScriptStruct_FEditWrestlerRaw_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditWrestlerRaw>()
{
	return FEditWrestlerRaw::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditWrestlerRaw(FEditWrestlerRaw::StaticStruct, TEXT("/Script/Creation"), TEXT("EditWrestlerRaw"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditWrestlerRaw
{
	FScriptStruct_Creation_StaticRegisterNativesFEditWrestlerRaw()
	{
		UScriptStruct::DeferCppStructOps<FEditWrestlerRaw>(FName(TEXT("EditWrestlerRaw")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditWrestlerRaw;
	struct Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreateDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMMON_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMMON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasicParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainClothes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlainClothes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Personality_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Personality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchRecordsWrestlerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchRecordsWrestlerInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThumbnailData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThumbnailData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditWrestlerRaw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_CreateDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, CreateDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_CreateDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_CreateDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_COMMON_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_COMMON = { "COMMON", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, COMMON), Z_Construct_UScriptStruct_FCommonWrestlerRaw, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_COMMON_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_COMMON_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameString, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_WrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_BasicParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_BasicParam = { "BasicParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, BasicParam), Z_Construct_UScriptStruct_FBasicWrestlerParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_BasicParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_BasicParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Bodies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Bodies = { "Bodies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, Bodies), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Bodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Bodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_PlainClothes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_PlainClothes = { "PlainClothes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, PlainClothes), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_PlainClothes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_PlainClothes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Personality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Personality = { "Personality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, Personality), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Personality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Personality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Skills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, Skills), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Skills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Skills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, Settings), Z_Construct_UScriptStruct_FEditWrestlerSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_MatchRecordsWrestlerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_MatchRecordsWrestlerInfo = { "MatchRecordsWrestlerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, MatchRecordsWrestlerInfo), Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_MatchRecordsWrestlerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_MatchRecordsWrestlerInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedPresetParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData_Inner = { "ThumbnailData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerRaw" },
		{ "ModuleRelativePath", "Public/EditWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData = { "ThumbnailData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerRaw, ThumbnailData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_CreateDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_COMMON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_BasicParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Bodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_PlainClothes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Personality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Skills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_MatchRecordsWrestlerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_Presets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::NewProp_ThumbnailData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditWrestlerRaw",
		sizeof(FEditWrestlerRaw),
		alignof(FEditWrestlerRaw),
		Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerRaw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerRaw_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditWrestlerRaw"), sizeof(FEditWrestlerRaw), Get_Z_Construct_UScriptStruct_FEditWrestlerRaw_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditWrestlerRaw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerRaw_Hash() { return 2103981436U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
