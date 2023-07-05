// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StTauntParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStTauntParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStTauntParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStTauntParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStTauntParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStTauntParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStTauntParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStTauntParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StTauntParam"), sizeof(FStTauntParam), Get_Z_Construct_UScriptStruct_FStTauntParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStTauntParam>()
{
	return FStTauntParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStTauntParam(FStTauntParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StTauntParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStTauntParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStTauntParam()
	{
		UScriptStruct::DeferCppStructOps<FStTauntParam>(FName(TEXT("StTauntParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStTauntParam;
	struct Z_Construct_UScriptStruct_FStTauntParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CancelSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTauntParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StTauntParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStTauntParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStTauntParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_AddValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTauntParam" },
		{ "ModuleRelativePath", "Public/StTauntParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_AddValue = { "AddValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTauntParam, AddValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_AddValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_AddValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_CancelSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTauntParam" },
		{ "ModuleRelativePath", "Public/StTauntParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_CancelSec = { "CancelSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTauntParam, CancelSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_CancelSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_CancelSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_WaitSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StTauntParam" },
		{ "ModuleRelativePath", "Public/StTauntParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_WaitSec = { "WaitSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStTauntParam, WaitSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_WaitSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_WaitSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStTauntParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_AddValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_CancelSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStTauntParam_Statics::NewProp_WaitSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStTauntParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StTauntParam",
		sizeof(FStTauntParam),
		alignof(FStTauntParam),
		Z_Construct_UScriptStruct_FStTauntParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTauntParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStTauntParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStTauntParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStTauntParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStTauntParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StTauntParam"), sizeof(FStTauntParam), Get_Z_Construct_UScriptStruct_FStTauntParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStTauntParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStTauntParam_Hash() { return 2288256677U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
