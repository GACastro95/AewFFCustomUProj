// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLeaderboardsUserScoreData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboardsUserScoreData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSLeaderboardsUserScoreData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSLeaderboardsUserScoreData"), sizeof(FEOSLeaderboardsUserScoreData), Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSLeaderboardsUserScoreData>()
{
	return FEOSLeaderboardsUserScoreData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSLeaderboardsUserScoreData(FEOSLeaderboardsUserScoreData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSLeaderboardsUserScoreData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsUserScoreData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsUserScoreData()
	{
		UScriptStruct::DeferCppStructOps<FEOSLeaderboardsUserScoreData>(FName(TEXT("EOSLeaderboardsUserScoreData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardsUserScoreData;
	struct Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserScoreData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSLeaderboardsUserScoreData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsUserScoreData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsUserScoreData, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardsUserScoreData" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardsUserScoreData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardsUserScoreData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::NewProp_Score,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSLeaderboardsUserScoreData",
		sizeof(FEOSLeaderboardsUserScoreData),
		alignof(FEOSLeaderboardsUserScoreData),
		Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSLeaderboardsUserScoreData"), sizeof(FEOSLeaderboardsUserScoreData), Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData_Hash() { return 840248091U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
