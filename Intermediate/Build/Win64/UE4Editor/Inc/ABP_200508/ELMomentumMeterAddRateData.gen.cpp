// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMomentumMeterAddRateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMomentumMeterAddRateData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterAddRateData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMomentumMeterAddRateData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMomentumMeterAddRateData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMomentumMeterAddRateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMomentumMeterAddRateData"), sizeof(FELMomentumMeterAddRateData), Get_Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMomentumMeterAddRateData>()
{
	return FELMomentumMeterAddRateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMomentumMeterAddRateData(FELMomentumMeterAddRateData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMomentumMeterAddRateData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterAddRateData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterAddRateData()
	{
		UScriptStruct::DeferCppStructOps<FELMomentumMeterAddRateData>(FName(TEXT("ELMomentumMeterAddRateData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterAddRateData;
	struct Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterAddRateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMomentumMeterAddRateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_AddSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterAddRateData" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterAddRateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_AddSpeed = { "AddSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterAddRateData, AddSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_AddSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_AddSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_SubSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterAddRateData" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterAddRateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_SubSpeed = { "SubSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterAddRateData, SubSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_SubSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_SubSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_WaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterAddRateData" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterAddRateData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterAddRateData, WaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_WaitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_AddSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_SubSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::NewProp_WaitTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMomentumMeterAddRateData",
		sizeof(FELMomentumMeterAddRateData),
		alignof(FELMomentumMeterAddRateData),
		Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterAddRateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMomentumMeterAddRateData"), sizeof(FELMomentumMeterAddRateData), Get_Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterAddRateData_Hash() { return 529481919U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
