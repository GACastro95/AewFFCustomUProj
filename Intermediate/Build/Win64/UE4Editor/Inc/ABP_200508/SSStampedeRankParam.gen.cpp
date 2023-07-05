// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStampedeRankParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStampedeRankParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStampedeRankParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSStampedeRankParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSStampedeRankParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSStampedeRankParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStampedeRankParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStampedeRankParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStampedeRankParam"), sizeof(FSSStampedeRankParam), Get_Z_Construct_UScriptStruct_FSSStampedeRankParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStampedeRankParam>()
{
	return FSSStampedeRankParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStampedeRankParam(FSSStampedeRankParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStampedeRankParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStampedeRankParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStampedeRankParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStampedeRankParam>(FName(TEXT("SSStampedeRankParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStampedeRankParam;
	struct Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedeRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedePoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStampedeRankParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStampedeRankParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedeRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStampedeRankParam" },
		{ "ModuleRelativePath", "Public/SSStampedeRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedeRank = { "StampedeRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStampedeRankParam, StampedeRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedeRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedeRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStampedeRankParam" },
		{ "ModuleRelativePath", "Public/SSStampedeRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedePoint = { "StampedePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStampedeRankParam, StampedePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedePoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedeRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::NewProp_StampedePoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSStampedeRankParam",
		sizeof(FSSStampedeRankParam),
		alignof(FSSStampedeRankParam),
		Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStampedeRankParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStampedeRankParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStampedeRankParam"), sizeof(FSSStampedeRankParam), Get_Z_Construct_UScriptStruct_FSSStampedeRankParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStampedeRankParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStampedeRankParam_Hash() { return 3395852882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
