// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPlayerRankRangeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPlayerRankRangeParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankRangeParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerRankRange();
// End Cross Module References

static_assert(std::is_polymorphic<FSSPlayerRankRangeParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSPlayerRankRangeParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSPlayerRankRangeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPlayerRankRangeParam"), sizeof(FSSPlayerRankRangeParam), Get_Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPlayerRankRangeParam>()
{
	return FSSPlayerRankRangeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPlayerRankRangeParam(FSSPlayerRankRangeParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPlayerRankRangeParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerRankRangeParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerRankRangeParam()
	{
		UScriptStruct::DeferCppStructOps<FSSPlayerRankRangeParam>(FName(TEXT("SSPlayerRankRangeParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerRankRangeParam;
	struct Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRankRange_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRankRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchEntryCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchEntryCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRankPointBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResultRankPointBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectPenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisconnectPenalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IllegalPenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IllegalPenalty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPlayerRankRangeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPlayerRankRangeParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankRangeParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange = { "PlayerRankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankRangeParam, PlayerRankRange), Z_Construct_UEnum_ABP_200508_ESSPlayerRankRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_MatchEntryCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankRangeParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_MatchEntryCost = { "MatchEntryCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankRangeParam, MatchEntryCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_MatchEntryCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_MatchEntryCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_ResultRankPointBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankRangeParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_ResultRankPointBase = { "ResultRankPointBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankRangeParam, ResultRankPointBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_ResultRankPointBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_ResultRankPointBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_DisconnectPenalty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankRangeParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_DisconnectPenalty = { "DisconnectPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankRangeParam, DisconnectPenalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_DisconnectPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_DisconnectPenalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_IllegalPenalty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankRangeParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_IllegalPenalty = { "IllegalPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankRangeParam, IllegalPenalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_IllegalPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_IllegalPenalty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_PlayerRankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_MatchEntryCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_ResultRankPointBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_DisconnectPenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::NewProp_IllegalPenalty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSPlayerRankRangeParam",
		sizeof(FSSPlayerRankRangeParam),
		alignof(FSSPlayerRankRangeParam),
		Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankRangeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPlayerRankRangeParam"), sizeof(FSSPlayerRankRangeParam), Get_Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPlayerRankRangeParam_Hash() { return 3750645366U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
