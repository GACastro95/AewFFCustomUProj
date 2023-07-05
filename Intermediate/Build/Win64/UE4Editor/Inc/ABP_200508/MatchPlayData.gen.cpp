// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MatchPlayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchPlayData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchPlayData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerPlayData();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchPlayData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMatchPlayData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMatchPlayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMatchPlayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchPlayData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MatchPlayData"), sizeof(FMatchPlayData), Get_Z_Construct_UScriptStruct_FMatchPlayData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMatchPlayData>()
{
	return FMatchPlayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchPlayData(FMatchPlayData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MatchPlayData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMatchPlayData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMatchPlayData()
	{
		UScriptStruct::DeferCppStructOps<FMatchPlayData>(FName(TEXT("MatchPlayData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMatchPlayData;
	struct Z_Construct_UScriptStruct_FMatchPlayData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchResult;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchPlayData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_BuildNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_BuildNo = { "BuildNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, BuildNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_BuildNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_BuildNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, MatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, MatchType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchNum = { "MatchNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, MatchNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchResult = { "MatchResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, MatchResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList_Inner = { "WrestlerDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWrestlerPlayData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList = { "WrestlerDataList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, WrestlerDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlatformID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlatformID = { "PlatformID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, PlatformID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlatformID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlatformID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_LanguageID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_LanguageID = { "LanguageID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, LanguageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_LanguageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_LanguageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Authdata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPlayData" },
		{ "ModuleRelativePath", "Public/MatchPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Authdata = { "Authdata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPlayData, Authdata), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Authdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Authdata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_BuildNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_MatchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_WrestlerDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_PlatformID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_LanguageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPlayData_Statics::NewProp_Authdata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchPlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MatchPlayData",
		sizeof(FMatchPlayData),
		alignof(FMatchPlayData),
		Z_Construct_UScriptStruct_FMatchPlayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPlayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPlayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchPlayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchPlayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchPlayData"), sizeof(FMatchPlayData), Get_Z_Construct_UScriptStruct_FMatchPlayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchPlayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchPlayData_Hash() { return 2740824502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
