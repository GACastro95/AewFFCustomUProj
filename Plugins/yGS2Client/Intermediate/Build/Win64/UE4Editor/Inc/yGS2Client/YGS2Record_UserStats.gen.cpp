// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Record_UserStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Record_UserStats() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_UserStats();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Record_UserStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_UserStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Record_UserStats, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Record_UserStats"), sizeof(FYGS2Record_UserStats), Get_Z_Construct_UScriptStruct_FYGS2Record_UserStats_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Record_UserStats>()
{
	return FYGS2Record_UserStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Record_UserStats(FYGS2Record_UserStats::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Record_UserStats"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_UserStats
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_UserStats()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Record_UserStats>(FName(TEXT("YGS2Record_UserStats")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_UserStats;
	struct Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Records_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Records_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Records;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserStats.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Record_UserStats>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_ValueProp = { "Records", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_Key_KeyProp = { "Records_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserStats" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserStats, Records), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserStats" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserStats, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Kind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserStats" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserStats, Kind), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Kind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Records,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::NewProp_Kind,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Record_UserStats",
		sizeof(FYGS2Record_UserStats),
		alignof(FYGS2Record_UserStats),
		Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_UserStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_UserStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Record_UserStats"), sizeof(FYGS2Record_UserStats), Get_Z_Construct_UScriptStruct_FYGS2Record_UserStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Record_UserStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_UserStats_Hash() { return 1165632968U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
