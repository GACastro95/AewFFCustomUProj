// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPlayerRankParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPlayerRankParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerRankRange();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerRank();
// End Cross Module References

static_assert(std::is_polymorphic<FSSPlayerRankParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSPlayerRankParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSPlayerRankParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPlayerRankParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPlayerRankParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPlayerRankParam"), sizeof(FSSPlayerRankParam), Get_Z_Construct_UScriptStruct_FSSPlayerRankParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPlayerRankParam>()
{
	return FSSPlayerRankParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPlayerRankParam(FSSPlayerRankParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPlayerRankParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerRankParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerRankParam()
	{
		UScriptStruct::DeferCppStructOps<FSSPlayerRankParam>(FName(TEXT("SSPlayerRankParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerRankParam;
	struct Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerRank_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromotionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PromotionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemotionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DemotionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromotionRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PromotionRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemotionRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DemotionRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPlayerRankParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange = { "PlayerRankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankParam, PlayerRankRange), Z_Construct_UEnum_ABP_200508_ESSPlayerRankRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank = { "PlayerRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankParam, PlayerRank), Z_Construct_UEnum_ABP_200508_ESSPlayerRank, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionPoint = { "PromotionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankParam, PromotionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionPoint = { "DemotionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankParam, DemotionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionRank = { "PromotionRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankParam, PromotionRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerRankParam" },
		{ "ModuleRelativePath", "Public/SSPlayerRankParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionRank = { "DemotionRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerRankParam, DemotionRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionRank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_PromotionRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::NewProp_DemotionRank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSPlayerRankParam",
		sizeof(FSSPlayerRankParam),
		alignof(FSSPlayerRankParam),
		Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPlayerRankParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPlayerRankParam"), sizeof(FSSPlayerRankParam), Get_Z_Construct_UScriptStruct_FSSPlayerRankParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPlayerRankParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPlayerRankParam_Hash() { return 1120986424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
