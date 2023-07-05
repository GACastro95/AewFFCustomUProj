// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttentionScoreParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttentionScoreParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionScoreParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAttentionScoreParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAttentionScoreParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAttentionScoreParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttentionScoreParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttentionScoreParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttentionScoreParam"), sizeof(FSSAttentionScoreParam), Get_Z_Construct_UScriptStruct_FSSAttentionScoreParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttentionScoreParam>()
{
	return FSSAttentionScoreParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttentionScoreParam(FSSAttentionScoreParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttentionScoreParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionScoreParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionScoreParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAttentionScoreParam>(FName(TEXT("SSAttentionScoreParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionScoreParam;
	struct Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperAttention_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpperAttention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerAttention_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LowerAttention;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttentionScoreParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttentionScoreParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_UpperAttention_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionScoreParam" },
		{ "ModuleRelativePath", "Public/SSAttentionScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_UpperAttention = { "UpperAttention", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionScoreParam, UpperAttention), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_UpperAttention_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_UpperAttention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_LowerAttention_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionScoreParam" },
		{ "ModuleRelativePath", "Public/SSAttentionScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_LowerAttention = { "LowerAttention", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionScoreParam, LowerAttention), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_LowerAttention_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_LowerAttention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_StampedeScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionScoreParam" },
		{ "ModuleRelativePath", "Public/SSAttentionScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_StampedeScore = { "StampedeScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionScoreParam, StampedeScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_StampedeScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_StampedeScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionScoreParam" },
		{ "ModuleRelativePath", "Public/SSAttentionScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionScoreParam, PlayerScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_PlayerScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_UpperAttention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_LowerAttention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_StampedeScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::NewProp_PlayerScore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAttentionScoreParam",
		sizeof(FSSAttentionScoreParam),
		alignof(FSSAttentionScoreParam),
		Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionScoreParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttentionScoreParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttentionScoreParam"), sizeof(FSSAttentionScoreParam), Get_Z_Construct_UScriptStruct_FSSAttentionScoreParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttentionScoreParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttentionScoreParam_Hash() { return 4049994693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
