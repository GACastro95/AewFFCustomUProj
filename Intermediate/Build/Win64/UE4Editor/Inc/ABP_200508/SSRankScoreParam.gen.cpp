// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSRankScoreParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSRankScoreParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRankScoreParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSRankScoreParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSRankScoreParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSRankScoreParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSRankScoreParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSRankScoreParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSRankScoreParam"), sizeof(FSSRankScoreParam), Get_Z_Construct_UScriptStruct_FSSRankScoreParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSRankScoreParam>()
{
	return FSSRankScoreParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSRankScoreParam(FSSRankScoreParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSRankScoreParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSRankScoreParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSRankScoreParam()
	{
		UScriptStruct::DeferCppStructOps<FSSRankScoreParam>(FName(TEXT("SSRankScoreParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSRankScoreParam;
	struct Z_Construct_UScriptStruct_FSSRankScoreParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedeScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSRankScoreParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSRankScoreParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_Rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRankScoreParam" },
		{ "ModuleRelativePath", "Public/SSRankScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRankScoreParam, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_StampedeScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRankScoreParam" },
		{ "ModuleRelativePath", "Public/SSRankScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_StampedeScore = { "StampedeScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRankScoreParam, StampedeScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_StampedeScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_StampedeScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRankScoreParam" },
		{ "ModuleRelativePath", "Public/SSRankScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRankScoreParam, PlayerScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_PlayerScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_StampedeScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::NewProp_PlayerScore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSRankScoreParam",
		sizeof(FSSRankScoreParam),
		alignof(FSSRankScoreParam),
		Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSRankScoreParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSRankScoreParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSRankScoreParam"), sizeof(FSSRankScoreParam), Get_Z_Construct_UScriptStruct_FSSRankScoreParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSRankScoreParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSRankScoreParam_Hash() { return 3613510996U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
