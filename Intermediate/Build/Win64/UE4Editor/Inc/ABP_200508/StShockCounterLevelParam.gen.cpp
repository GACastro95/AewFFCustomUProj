// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StShockCounterLevelParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStShockCounterLevelParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterLevelParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStShockCounterLevelParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStShockCounterLevelParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStShockCounterLevelParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStShockCounterLevelParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStShockCounterLevelParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StShockCounterLevelParam"), sizeof(FStShockCounterLevelParam), Get_Z_Construct_UScriptStruct_FStShockCounterLevelParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStShockCounterLevelParam>()
{
	return FStShockCounterLevelParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStShockCounterLevelParam(FStShockCounterLevelParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StShockCounterLevelParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterLevelParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterLevelParam()
	{
		UScriptStruct::DeferCppStructOps<FStShockCounterLevelParam>(FName(TEXT("StShockCounterLevelParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterLevelParam;
	struct Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingSec_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArenaSec_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArenaSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StShockCounterLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStShockCounterLevelParam>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec_Inner = { "RingSec", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterLevelParam" },
		{ "ModuleRelativePath", "Public/StShockCounterLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec = { "RingSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterLevelParam, RingSec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec_Inner = { "ArenaSec", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterLevelParam" },
		{ "ModuleRelativePath", "Public/StShockCounterLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec = { "ArenaSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterLevelParam, ArenaSec), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_RingSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::NewProp_ArenaSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StShockCounterLevelParam",
		sizeof(FStShockCounterLevelParam),
		alignof(FStShockCounterLevelParam),
		Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterLevelParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStShockCounterLevelParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StShockCounterLevelParam"), sizeof(FStShockCounterLevelParam), Get_Z_Construct_UScriptStruct_FStShockCounterLevelParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStShockCounterLevelParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStShockCounterLevelParam_Hash() { return 3608899279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
