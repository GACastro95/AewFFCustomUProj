// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAIPlayerStampedeLevelParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAIPlayerStampedeLevelParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAIPlayerStampedeLevelParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAIPlayerStampedeLevelParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAIPlayerStampedeLevelParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAIPlayerStampedeLevelParam"), sizeof(FSSAIPlayerStampedeLevelParam), Get_Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAIPlayerStampedeLevelParam>()
{
	return FSSAIPlayerStampedeLevelParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAIPlayerStampedeLevelParam(FSSAIPlayerStampedeLevelParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAIPlayerStampedeLevelParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAIPlayerStampedeLevelParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAIPlayerStampedeLevelParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAIPlayerStampedeLevelParam>(FName(TEXT("SSAIPlayerStampedeLevelParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAIPlayerStampedeLevelParam;
	struct Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeLevelMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedeLevelMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeLevelMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StampedeLevelMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRankMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRankMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAIPlayerStampedeLevelParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerStampedeLevelParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerStampedeLevelParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_LotWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerStampedeLevelParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_LotWeight = { "LotWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerStampedeLevelParam, LotWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_LotWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_LotWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerStampedeLevelParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMin = { "StampedeLevelMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerStampedeLevelParam, StampedeLevelMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerStampedeLevelParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMax = { "StampedeLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerStampedeLevelParam, StampedeLevelMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerStampedeLevelParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMin = { "PlayerRankMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerStampedeLevelParam, PlayerRankMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerStampedeLevelParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerStampedeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMax = { "PlayerRankMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerStampedeLevelParam, PlayerRankMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_LotWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_StampedeLevelMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::NewProp_PlayerRankMax,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAIPlayerStampedeLevelParam",
		sizeof(FSSAIPlayerStampedeLevelParam),
		alignof(FSSAIPlayerStampedeLevelParam),
		Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAIPlayerStampedeLevelParam"), sizeof(FSSAIPlayerStampedeLevelParam), Get_Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam_Hash() { return 3859558016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif