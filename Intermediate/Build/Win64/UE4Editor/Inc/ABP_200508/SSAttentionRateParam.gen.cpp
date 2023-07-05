// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttentionRateParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttentionRateParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionRateParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAttentionRateParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAttentionRateParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAttentionRateParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttentionRateParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttentionRateParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttentionRateParam"), sizeof(FSSAttentionRateParam), Get_Z_Construct_UScriptStruct_FSSAttentionRateParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttentionRateParam>()
{
	return FSSAttentionRateParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttentionRateParam(FSSAttentionRateParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttentionRateParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionRateParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionRateParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAttentionRateParam>(FName(TEXT("SSAttentionRateParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionRateParam;
	struct Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheerPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheerPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttentionRateParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttentionRateParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_CheerPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionRateParam" },
		{ "ModuleRelativePath", "Public/SSAttentionRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_CheerPoint = { "CheerPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionRateParam, CheerPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_CheerPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_CheerPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionRateParam" },
		{ "ModuleRelativePath", "Public/SSAttentionRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionRate = { "AttentionRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionRateParam, AttentionRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionRateParam" },
		{ "ModuleRelativePath", "Public/SSAttentionRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionIcon = { "AttentionIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionRateParam, AttentionIcon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_CheerPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::NewProp_AttentionIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAttentionRateParam",
		sizeof(FSSAttentionRateParam),
		alignof(FSSAttentionRateParam),
		Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionRateParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttentionRateParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttentionRateParam"), sizeof(FSSAttentionRateParam), Get_Z_Construct_UScriptStruct_FSSAttentionRateParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttentionRateParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttentionRateParam_Hash() { return 1345514450U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
