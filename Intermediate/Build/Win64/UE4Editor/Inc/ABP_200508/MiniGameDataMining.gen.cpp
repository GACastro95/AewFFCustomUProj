// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGameDataMining.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameDataMining() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameDataMining();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayCountInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreInfo();
// End Cross Module References
class UScriptStruct* FMiniGameDataMining::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGameDataMining_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGameDataMining, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGameDataMining"), sizeof(FMiniGameDataMining), Get_Z_Construct_UScriptStruct_FMiniGameDataMining_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGameDataMining>()
{
	return FMiniGameDataMining::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGameDataMining(FMiniGameDataMining::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGameDataMining"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameDataMining
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameDataMining()
	{
		UScriptStruct::DeferCppStructOps<FMiniGameDataMining>(FName(TEXT("MiniGameDataMining")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameDataMining;
	struct Z_Construct_UScriptStruct_FMiniGameDataMining_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayCountByCareer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllPlayCountByCareer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllPlayCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayCategoryOnline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCategoryOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCategoryOnline;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayCategoryOffline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCategoryOffline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCategoryOffline;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayCountOnline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCountOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCountOnline;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayCountOffline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCountOffline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCountOffline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayLevelInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayLevelInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayLevelInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayCountDifficulty_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCountDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCountDifficulty;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuitCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuitCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnlineScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnlineScores;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfflineScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfflineScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OfflineScores;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectBat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectBat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectBat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGameDataMining>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCountByCareer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCountByCareer = { "AllPlayCountByCareer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, AllPlayCountByCareer), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCountByCareer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCountByCareer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCount = { "AllPlayCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, AllPlayCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayTime = { "PlayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayTime_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline_Inner = { "PlayCategoryOnline", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline = { "PlayCategoryOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayCategoryOnline), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline_Inner = { "PlayCategoryOffline", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline = { "PlayCategoryOffline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayCategoryOffline), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount_Inner = { "PlayCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount = { "PlayCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline_Inner = { "PlayCountOnline", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline = { "PlayCountOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayCountOnline), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline_Inner = { "PlayCountOffline", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline = { "PlayCountOffline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayCountOffline), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo_Inner = { "PlayLevelInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGamePlayInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo = { "PlayLevelInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayLevelInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty_Inner = { "PlayCountDifficulty", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGamePlayCountInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty = { "PlayCountDifficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, PlayCountDifficulty), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount_Inner = { "QuitCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount = { "QuitCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, QuitCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores_Inner = { "OnlineScores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores = { "OnlineScores", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, OnlineScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores_Inner = { "OfflineScores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores = { "OfflineScores", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, OfflineScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat_Inner = { "SelectBat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameDataMining" },
		{ "ModuleRelativePath", "Public/MiniGameDataMining.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat = { "SelectBat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameDataMining, SelectBat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCountByCareer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_AllPlayCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCategoryOffline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountOffline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayLevelInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_PlayCountDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_QuitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OnlineScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_OfflineScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::NewProp_SelectBat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGameDataMining",
		sizeof(FMiniGameDataMining),
		alignof(FMiniGameDataMining),
		Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGameDataMining()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGameDataMining_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGameDataMining"), sizeof(FMiniGameDataMining), Get_Z_Construct_UScriptStruct_FMiniGameDataMining_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGameDataMining_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGameDataMining_Hash() { return 338830961U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
