// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttentionLevelParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttentionLevelParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAttentionLevelParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAttentionLevelParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAttentionLevelParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttentionLevelParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttentionLevelParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttentionLevelParam"), sizeof(FSSAttentionLevelParam), Get_Z_Construct_UScriptStruct_FSSAttentionLevelParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttentionLevelParam>()
{
	return FSSAttentionLevelParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttentionLevelParam(FSSAttentionLevelParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttentionLevelParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionLevelParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionLevelParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAttentionLevelParam>(FName(TEXT("SSAttentionLevelParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionLevelParam;
	struct Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverTimeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeverTimeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpItemPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemLotGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpItemLotGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemPointRate_Fever_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpItemPointRate_Fever;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemLotGroupID_Fever_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpItemLotGroupID_Fever;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttentionLevelParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionPoint = { "AttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, AttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_FeverTimeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_FeverTimeDuration = { "FeverTimeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, FeverTimeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_FeverTimeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_FeverTimeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate = { "ExpItemPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, ExpItemPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID = { "ExpItemLotGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, ExpItemLotGroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_Fever_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_Fever = { "ExpItemPointRate_Fever", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, ExpItemPointRate_Fever), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_Fever_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_Fever_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_Fever_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_Fever = { "ExpItemLotGroupID_Fever", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, ExpItemLotGroupID_Fever), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_Fever_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_Fever_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionLevelParam" },
		{ "ModuleRelativePath", "Public/SSAttentionLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionIcon = { "AttentionIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionLevelParam, AttentionIcon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_FeverTimeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemPointRate_Fever,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_ExpItemLotGroupID_Fever,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::NewProp_AttentionIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAttentionLevelParam",
		sizeof(FSSAttentionLevelParam),
		alignof(FSSAttentionLevelParam),
		Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttentionLevelParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttentionLevelParam"), sizeof(FSSAttentionLevelParam), Get_Z_Construct_UScriptStruct_FSSAttentionLevelParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttentionLevelParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttentionLevelParam_Hash() { return 2327351353U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
