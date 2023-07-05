// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerVeryShortEventStockInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerVeryShortEventStockInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryCard();
// End Cross Module References
class UScriptStruct* FCareerVeryShortEventStockInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerVeryShortEventStockInfo"), sizeof(FCareerVeryShortEventStockInfo), Get_Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerVeryShortEventStockInfo>()
{
	return FCareerVeryShortEventStockInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerVeryShortEventStockInfo(FCareerVeryShortEventStockInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerVeryShortEventStockInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerVeryShortEventStockInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerVeryShortEventStockInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerVeryShortEventStockInfo>(FName(TEXT("CareerVeryShortEventStockInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerVeryShortEventStockInfo;
	struct Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Story_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Story;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryCard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoryCard;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoryDataTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoryDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerVeryShortEventStockInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerVeryShortEventStockInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_Story_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVeryShortEventStockInfo" },
		{ "ModuleRelativePath", "Public/CareerVeryShortEventStockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVeryShortEventStockInfo, Story), Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_Story_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_Story_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryCard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVeryShortEventStockInfo" },
		{ "ModuleRelativePath", "Public/CareerVeryShortEventStockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryCard = { "StoryCard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVeryShortEventStockInfo, StoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryCard_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable_Inner = { "StoryDataTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVeryShortEventStockInfo" },
		{ "ModuleRelativePath", "Public/CareerVeryShortEventStockInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable = { "StoryDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVeryShortEventStockInfo, StoryDataTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_Story,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryCard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::NewProp_StoryDataTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerVeryShortEventStockInfo",
		sizeof(FCareerVeryShortEventStockInfo),
		alignof(FCareerVeryShortEventStockInfo),
		Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerVeryShortEventStockInfo"), sizeof(FCareerVeryShortEventStockInfo), Get_Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo_Hash() { return 3239046557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
