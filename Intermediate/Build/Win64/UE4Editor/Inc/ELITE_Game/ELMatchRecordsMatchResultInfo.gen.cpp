// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsMatchResultInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsMatchResultInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FELMatchRecordsMatchResultInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsMatchResultInfo"), sizeof(FELMatchRecordsMatchResultInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsMatchResultInfo>()
{
	return FELMatchRecordsMatchResultInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsMatchResultInfo(FELMatchRecordsMatchResultInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsMatchResultInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsMatchResultInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsMatchResultInfo()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsMatchResultInfo>(FName(TEXT("ELMatchRecordsMatchResultInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsMatchResultInfo;
	struct Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMatchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalMatchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfWins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfWins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfLoses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfLoses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfDraws_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfDraws;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsMatchResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsMatchResultInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_TotalMatchCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsMatchResultInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsMatchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_TotalMatchCount = { "TotalMatchCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsMatchResultInfo, TotalMatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_TotalMatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_TotalMatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfWins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsMatchResultInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsMatchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfWins = { "NumberOfWins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsMatchResultInfo, NumberOfWins), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfWins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfWins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfLoses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsMatchResultInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsMatchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfLoses = { "NumberOfLoses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsMatchResultInfo, NumberOfLoses), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfLoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfLoses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfDraws_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsMatchResultInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsMatchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfDraws = { "NumberOfDraws", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsMatchResultInfo, NumberOfDraws), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfDraws_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfDraws_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_TotalMatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfWins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfLoses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::NewProp_NumberOfDraws,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsMatchResultInfo",
		sizeof(FELMatchRecordsMatchResultInfo),
		alignof(FELMatchRecordsMatchResultInfo),
		Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsMatchResultInfo"), sizeof(FELMatchRecordsMatchResultInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo_Hash() { return 1892133025U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
