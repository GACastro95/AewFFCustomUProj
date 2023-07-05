// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSFeaberScoreParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSFeaberScoreParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFeaberScoreParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSFeaberScoreParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSFeaberScoreParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSFeaberScoreParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSFeaberScoreParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSFeaberScoreParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSFeaberScoreParam"), sizeof(FSSFeaberScoreParam), Get_Z_Construct_UScriptStruct_FSSFeaberScoreParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSFeaberScoreParam>()
{
	return FSSFeaberScoreParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSFeaberScoreParam(FSSFeaberScoreParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSFeaberScoreParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSFeaberScoreParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSFeaberScoreParam()
	{
		UScriptStruct::DeferCppStructOps<FSSFeaberScoreParam>(FName(TEXT("SSFeaberScoreParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSFeaberScoreParam;
	struct Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeaberCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FeaberCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedeScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSFeaberScoreParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSFeaberScoreParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_FeaberCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFeaberScoreParam" },
		{ "ModuleRelativePath", "Public/SSFeaberScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_FeaberCount = { "FeaberCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFeaberScoreParam, FeaberCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_FeaberCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_FeaberCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_StampedeScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFeaberScoreParam" },
		{ "ModuleRelativePath", "Public/SSFeaberScoreParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_StampedeScore = { "StampedeScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFeaberScoreParam, StampedeScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_StampedeScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_StampedeScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_FeaberCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::NewProp_StampedeScore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSFeaberScoreParam",
		sizeof(FSSFeaberScoreParam),
		alignof(FSSFeaberScoreParam),
		Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSFeaberScoreParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSFeaberScoreParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSFeaberScoreParam"), sizeof(FSSFeaberScoreParam), Get_Z_Construct_UScriptStruct_FSSFeaberScoreParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSFeaberScoreParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSFeaberScoreParam_Hash() { return 2688667510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
