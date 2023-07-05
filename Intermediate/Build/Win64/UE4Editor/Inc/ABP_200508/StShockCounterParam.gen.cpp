// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StShockCounterParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStShockCounterParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterDownParam();
// End Cross Module References

static_assert(std::is_polymorphic<FStShockCounterParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStShockCounterParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStShockCounterParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStShockCounterParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStShockCounterParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StShockCounterParam"), sizeof(FStShockCounterParam), Get_Z_Construct_UScriptStruct_FStShockCounterParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStShockCounterParam>()
{
	return FStShockCounterParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStShockCounterParam(FStShockCounterParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StShockCounterParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterParam()
	{
		UScriptStruct::DeferCppStructOps<FStShockCounterParam>(FName(TEXT("StShockCounterParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterParam;
	struct Z_Construct_UScriptStruct_FStShockCounterParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCounterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCounterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCounterValue_EX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCounterValue_EX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroggyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroggyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groggy_RepeatLimitSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Groggy_RepeatLimitSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownValueMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownValueMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterValue_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterValue_Default;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterValue_CornerGroggy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterValue_CornerGroggy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterValue_WakeUpTaunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterValue_WakeUpTaunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCounterValue_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCounterValue_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCounterValue_Arena_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCounterValue_Arena;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterDownParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CounterDownParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStShockCounterParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue = { "MaxCounterValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, MaxCounterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_EX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_EX = { "MaxCounterValue_EX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, MaxCounterValue_EX), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_EX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_EX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_GroggyValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_GroggyValue = { "GroggyValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, GroggyValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_GroggyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_GroggyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_Groggy_RepeatLimitSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_Groggy_RepeatLimitSec = { "Groggy_RepeatLimitSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, Groggy_RepeatLimitSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_Groggy_RepeatLimitSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_Groggy_RepeatLimitSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_DownValueMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_DownValueMax = { "DownValueMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, DownValueMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_DownValueMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_DownValueMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_Default = { "CounterValue_Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, CounterValue_Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_Default_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_CornerGroggy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_CornerGroggy = { "CounterValue_CornerGroggy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, CounterValue_CornerGroggy), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_CornerGroggy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_CornerGroggy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_WakeUpTaunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_WakeUpTaunt = { "CounterValue_WakeUpTaunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, CounterValue_WakeUpTaunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_WakeUpTaunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_WakeUpTaunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Ring = { "MinCounterValue_Ring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, MinCounterValue_Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Arena_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Arena = { "MinCounterValue_Arena", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, MinCounterValue_Arena), METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Arena_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Arena_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterDownParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterParam" },
		{ "ModuleRelativePath", "Public/StShockCounterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterDownParam = { "CounterDownParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterParam, CounterDownParam), Z_Construct_UScriptStruct_FStShockCounterDownParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterDownParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterDownParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStShockCounterParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MaxCounterValue_EX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_GroggyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_Groggy_RepeatLimitSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_DownValueMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_CornerGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterValue_WakeUpTaunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_MinCounterValue_Arena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterParam_Statics::NewProp_CounterDownParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStShockCounterParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StShockCounterParam",
		sizeof(FStShockCounterParam),
		alignof(FStShockCounterParam),
		Z_Construct_UScriptStruct_FStShockCounterParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStShockCounterParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StShockCounterParam"), sizeof(FStShockCounterParam), Get_Z_Construct_UScriptStruct_FStShockCounterParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStShockCounterParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStShockCounterParam_Hash() { return 452695191U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
