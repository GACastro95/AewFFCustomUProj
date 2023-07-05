// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/BodyHomingParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyHomingParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBodyHomingParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBodyHomingParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBodyHomingParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBodyHomingParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FBodyHomingParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyHomingParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("BodyHomingParam"), sizeof(FBodyHomingParam), Get_Z_Construct_UScriptStruct_FBodyHomingParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FBodyHomingParam>()
{
	return FBodyHomingParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyHomingParam(FBodyHomingParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("BodyHomingParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFBodyHomingParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFBodyHomingParam()
	{
		UScriptStruct::DeferCppStructOps<FBodyHomingParam>(FName(TEXT("BodyHomingParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFBodyHomingParam;
	struct Z_Construct_UScriptStruct_FBodyHomingParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuickStartSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QuickStartSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyHomingParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyHomingParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyHomingParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyHomingParam" },
		{ "ModuleRelativePath", "Public/BodyHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyHomingParam, InterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_QuickStartSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodyHomingParam" },
		{ "ModuleRelativePath", "Public/BodyHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_QuickStartSec = { "QuickStartSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyHomingParam, QuickStartSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_QuickStartSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_QuickStartSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyHomingParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyHomingParam_Statics::NewProp_QuickStartSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyHomingParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BodyHomingParam",
		sizeof(FBodyHomingParam),
		alignof(FBodyHomingParam),
		Z_Construct_UScriptStruct_FBodyHomingParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyHomingParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyHomingParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyHomingParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyHomingParam"), sizeof(FBodyHomingParam), Get_Z_Construct_UScriptStruct_FBodyHomingParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyHomingParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyHomingParam_Hash() { return 3989298008U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
