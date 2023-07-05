// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StRingEscapeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStRingEscapeData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStRingEscapeData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStRingEscapeData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStRingEscapeData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStRingEscapeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStRingEscapeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStRingEscapeData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StRingEscapeData"), sizeof(FStRingEscapeData), Get_Z_Construct_UScriptStruct_FStRingEscapeData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStRingEscapeData>()
{
	return FStRingEscapeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStRingEscapeData(FStRingEscapeData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StRingEscapeData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStRingEscapeData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStRingEscapeData()
	{
		UScriptStruct::DeferCppStructOps<FStRingEscapeData>(FName(TEXT("StRingEscapeData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStRingEscapeData;
	struct Z_Construct_UScriptStruct_FStRingEscapeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDownSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDownSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fRecoveryHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fRecoveryHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStRingEscapeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StRingEscapeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStRingEscapeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fDownSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StRingEscapeData" },
		{ "ModuleRelativePath", "Public/StRingEscapeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fDownSec = { "fDownSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStRingEscapeData, fDownSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fDownSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fDownSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fRecoveryHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StRingEscapeData" },
		{ "ModuleRelativePath", "Public/StRingEscapeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fRecoveryHP = { "fRecoveryHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStRingEscapeData, fRecoveryHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fRecoveryHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fRecoveryHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStRingEscapeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fDownSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStRingEscapeData_Statics::NewProp_fRecoveryHP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStRingEscapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StRingEscapeData",
		sizeof(FStRingEscapeData),
		alignof(FStRingEscapeData),
		Z_Construct_UScriptStruct_FStRingEscapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStRingEscapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStRingEscapeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStRingEscapeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StRingEscapeData"), sizeof(FStRingEscapeData), Get_Z_Construct_UScriptStruct_FStRingEscapeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStRingEscapeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStRingEscapeData_Hash() { return 2685736425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
