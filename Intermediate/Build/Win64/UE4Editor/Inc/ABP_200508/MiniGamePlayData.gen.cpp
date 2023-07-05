// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGamePlayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGamePlayData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameWrestlerData();
// End Cross Module References

static_assert(std::is_polymorphic<FMiniGamePlayData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMiniGamePlayData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMiniGamePlayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGamePlayData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGamePlayData"), sizeof(FMiniGamePlayData), Get_Z_Construct_UScriptStruct_FMiniGamePlayData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGamePlayData>()
{
	return FMiniGamePlayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGamePlayData(FMiniGamePlayData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGamePlayData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayData()
	{
		UScriptStruct::DeferCppStructOps<FMiniGamePlayData>(FName(TEXT("MiniGamePlayData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayData;
	struct Z_Construct_UScriptStruct_FMiniGamePlayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BuildNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiniGameType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LanguageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Authdata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGamePlayData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_BuildNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_BuildNo = { "BuildNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, BuildNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_BuildNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_BuildNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_MiniGameType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_MiniGameType = { "MiniGameType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, MiniGameType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_MiniGameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_MiniGameType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Difficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, Difficulty), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList_Inner = { "WrestlerDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameWrestlerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList = { "WrestlerDataList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, WrestlerDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_PlatformID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_PlatformID = { "PlatformID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, PlatformID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_PlatformID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_PlatformID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_LanguageID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_LanguageID = { "LanguageID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, LanguageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_LanguageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_LanguageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Authdata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayData" },
		{ "ModuleRelativePath", "Public/MiniGamePlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Authdata = { "Authdata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayData, Authdata), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Authdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Authdata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_BuildNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_MiniGameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_WrestlerDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_PlatformID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_LanguageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::NewProp_Authdata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MiniGamePlayData",
		sizeof(FMiniGamePlayData),
		alignof(FMiniGamePlayData),
		Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGamePlayData"), sizeof(FMiniGamePlayData), Get_Z_Construct_UScriptStruct_FMiniGamePlayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGamePlayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayData_Hash() { return 1097068181U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
