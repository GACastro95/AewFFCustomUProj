// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMomentumMeterPartHighlightData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMomentumMeterPartHighlightData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References

static_assert(std::is_polymorphic<FELMomentumMeterPartHighlightData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMomentumMeterPartHighlightData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMomentumMeterPartHighlightData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMomentumMeterPartHighlightData"), sizeof(FELMomentumMeterPartHighlightData), Get_Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMomentumMeterPartHighlightData>()
{
	return FELMomentumMeterPartHighlightData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMomentumMeterPartHighlightData(FELMomentumMeterPartHighlightData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMomentumMeterPartHighlightData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterPartHighlightData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterPartHighlightData()
	{
		UScriptStruct::DeferCppStructOps<FELMomentumMeterPartHighlightData>(FName(TEXT("ELMomentumMeterPartHighlightData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterPartHighlightData;
	struct Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterPartHighlightData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMomentumMeterPartHighlightData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_HPPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterPartHighlightData" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterPartHighlightData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_HPPercent = { "HPPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterPartHighlightData, HPPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_HPPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_HPPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterPartHighlightData" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterPartHighlightData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterPartHighlightData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_HPPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMomentumMeterPartHighlightData",
		sizeof(FELMomentumMeterPartHighlightData),
		alignof(FELMomentumMeterPartHighlightData),
		Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMomentumMeterPartHighlightData"), sizeof(FELMomentumMeterPartHighlightData), Get_Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData_Hash() { return 1894263303U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
