// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSUseItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSUseItemParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSUseItemParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSUseItemParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSUseItemParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSUseItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSUseItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSUseItemParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSUseItemParam"), sizeof(FSSUseItemParam), Get_Z_Construct_UScriptStruct_FSSUseItemParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSUseItemParam>()
{
	return FSSUseItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSUseItemParam(FSSUseItemParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSUseItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSUseItemParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSUseItemParam()
	{
		UScriptStruct::DeferCppStructOps<FSSUseItemParam>(FName(TEXT("SSUseItemParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSUseItemParam;
	struct Z_Construct_UScriptStruct_FSSUseItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemSt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseItemSt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemLo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseItemLo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemEn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseItemEn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UseItemDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSUseItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSUseItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSUseItemParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemSt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSUseItemParam" },
		{ "ModuleRelativePath", "Public/SSUseItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemSt = { "UseItemSt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSUseItemParam, UseItemSt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemSt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemSt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemLo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSUseItemParam" },
		{ "ModuleRelativePath", "Public/SSUseItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemLo = { "UseItemLo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSUseItemParam, UseItemLo), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemLo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemLo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemEn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSUseItemParam" },
		{ "ModuleRelativePath", "Public/SSUseItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemEn = { "UseItemEn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSUseItemParam, UseItemEn), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemEn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemEn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSUseItemParam" },
		{ "ModuleRelativePath", "Public/SSUseItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemDelayTime = { "UseItemDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSUseItemParam, UseItemDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemDelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSUseItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemSt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemLo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemEn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSUseItemParam_Statics::NewProp_UseItemDelayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSUseItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSUseItemParam",
		sizeof(FSSUseItemParam),
		alignof(FSSUseItemParam),
		Z_Construct_UScriptStruct_FSSUseItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSUseItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSUseItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSUseItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSUseItemParam"), sizeof(FSSUseItemParam), Get_Z_Construct_UScriptStruct_FSSUseItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSUseItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSUseItemParam_Hash() { return 3581867306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
