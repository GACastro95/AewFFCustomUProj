// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchScore_EvaluationParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchScore_EvaluationParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType();
// End Cross Module References

static_assert(std::is_polymorphic<FELMatchScore_EvaluationParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMatchScore_EvaluationParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMatchScore_EvaluationParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMatchScore_EvaluationParam"), sizeof(FELMatchScore_EvaluationParam), Get_Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMatchScore_EvaluationParam>()
{
	return FELMatchScore_EvaluationParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchScore_EvaluationParam(FELMatchScore_EvaluationParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMatchScore_EvaluationParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_EvaluationParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_EvaluationParam()
	{
		UScriptStruct::DeferCppStructOps<FELMatchScore_EvaluationParam>(FName(TEXT("ELMatchScore_EvaluationParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_EvaluationParam;
	struct Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HPRate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HPRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeSec_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeSec;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesPoint_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MovesPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchEvaluation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchEvaluation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MatchEvaluation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchScore_EvaluationParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchScore_EvaluationParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_EvaluationParam" },
		{ "ModuleRelativePath", "Public/ELMatchScore_EvaluationParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_EvaluationParam, MatchType), Z_Construct_UEnum_ABP_200508_EELMatchScore_MatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate_Inner = { "HPRate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_EvaluationParam" },
		{ "ModuleRelativePath", "Public/ELMatchScore_EvaluationParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate = { "HPRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_EvaluationParam, HPRate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec_Inner = { "TimeSec", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_EvaluationParam" },
		{ "ModuleRelativePath", "Public/ELMatchScore_EvaluationParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_EvaluationParam, TimeSec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint_Inner = { "MovesPoint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_EvaluationParam" },
		{ "ModuleRelativePath", "Public/ELMatchScore_EvaluationParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint = { "MovesPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_EvaluationParam, MovesPoint), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation_Inner = { "MatchEvaluation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_EvaluationParam" },
		{ "ModuleRelativePath", "Public/ELMatchScore_EvaluationParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation = { "MatchEvaluation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_EvaluationParam, MatchEvaluation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_HPRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MovesPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::NewProp_MatchEvaluation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMatchScore_EvaluationParam",
		sizeof(FELMatchScore_EvaluationParam),
		alignof(FELMatchScore_EvaluationParam),
		Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchScore_EvaluationParam"), sizeof(FELMatchScore_EvaluationParam), Get_Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_EvaluationParam_Hash() { return 4057151014U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
