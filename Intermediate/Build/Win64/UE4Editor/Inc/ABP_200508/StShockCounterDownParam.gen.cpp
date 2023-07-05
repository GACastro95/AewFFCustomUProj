// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StShockCounterDownParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStShockCounterDownParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterDownParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterLevelParam();
// End Cross Module References

static_assert(std::is_polymorphic<FStShockCounterDownParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStShockCounterDownParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStShockCounterDownParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStShockCounterDownParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStShockCounterDownParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StShockCounterDownParam"), sizeof(FStShockCounterDownParam), Get_Z_Construct_UScriptStruct_FStShockCounterDownParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStShockCounterDownParam>()
{
	return FStShockCounterDownParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStShockCounterDownParam(FStShockCounterDownParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StShockCounterDownParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterDownParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterDownParam()
	{
		UScriptStruct::DeferCppStructOps<FStShockCounterDownParam>(FName(TEXT("StShockCounterDownParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStShockCounterDownParam;
	struct Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShockLevelTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShockLevelTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShockLevelTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HPLevelTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPLevelTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HPLevelTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StShockCounterDownParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStShockCounterDownParam>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable_Inner = { "ShockLevelTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterDownParam" },
		{ "ModuleRelativePath", "Public/StShockCounterDownParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable = { "ShockLevelTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterDownParam, ShockLevelTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable_Inner = { "HPLevelTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStShockCounterLevelParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StShockCounterDownParam" },
		{ "ModuleRelativePath", "Public/StShockCounterDownParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable = { "HPLevelTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStShockCounterDownParam, HPLevelTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_ShockLevelTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::NewProp_HPLevelTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StShockCounterDownParam",
		sizeof(FStShockCounterDownParam),
		alignof(FStShockCounterDownParam),
		Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterDownParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStShockCounterDownParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StShockCounterDownParam"), sizeof(FStShockCounterDownParam), Get_Z_Construct_UScriptStruct_FStShockCounterDownParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStShockCounterDownParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStShockCounterDownParam_Hash() { return 57515314U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
