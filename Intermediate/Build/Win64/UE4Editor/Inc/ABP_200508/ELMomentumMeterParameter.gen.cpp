// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMomentumMeterParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMomentumMeterParameter() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterParameter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterAddRateData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData();
// End Cross Module References

static_assert(std::is_polymorphic<FELMomentumMeterParameter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMomentumMeterParameter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMomentumMeterParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMomentumMeterParameter, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMomentumMeterParameter"), sizeof(FELMomentumMeterParameter), Get_Z_Construct_UScriptStruct_FELMomentumMeterParameter_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMomentumMeterParameter>()
{
	return FELMomentumMeterParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMomentumMeterParameter(FELMomentumMeterParameter::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMomentumMeterParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterParameter
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterParameter()
	{
		UScriptStruct::DeferCppStructOps<FELMomentumMeterParameter>(FName(TEXT("ELMomentumMeterParameter")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMomentumMeterParameter;
	struct Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkAnimStartRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlinkAnimStartRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkAnimSpeedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlinkAnimSpeedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlinkAnimSpeedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlinkAnimSpeedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffusionAnimStartRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffusionAnimStartRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffusionAnimSpeedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffusionAnimSpeedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffusionAnimSpeedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffusionAnimSpeedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTimeBlinkAnimStartRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingTimeBlinkAnimStartRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTimeBlinkAnimSpeedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingTimeBlinkAnimSpeedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTimeBlinkAnimSpeedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingTimeBlinkAnimSpeedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTimeDiffusionAnimStartRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingTimeDiffusionAnimStartRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTimeDiffusionAnimSpeedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingTimeDiffusionAnimSpeedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingTimeDiffusionAnimSpeedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingTimeDiffusionAnimSpeedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddRateMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddRateMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddRateMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddRateMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartDamage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeChangeWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaugeChangeWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaugeChangeSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMomentumMeterParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimStartRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimStartRate = { "BlinkAnimStartRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, BlinkAnimStartRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimStartRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimStartRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMin = { "BlinkAnimSpeedMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, BlinkAnimSpeedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMax = { "BlinkAnimSpeedMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, BlinkAnimSpeedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimStartRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimStartRate = { "DiffusionAnimStartRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, DiffusionAnimStartRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimStartRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimStartRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMin = { "DiffusionAnimSpeedMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, DiffusionAnimSpeedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMax = { "DiffusionAnimSpeedMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, DiffusionAnimSpeedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimStartRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimStartRate = { "RingTimeBlinkAnimStartRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, RingTimeBlinkAnimStartRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimStartRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimStartRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMin = { "RingTimeBlinkAnimSpeedMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, RingTimeBlinkAnimSpeedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMax = { "RingTimeBlinkAnimSpeedMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, RingTimeBlinkAnimSpeedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimStartRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimStartRate = { "RingTimeDiffusionAnimStartRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, RingTimeDiffusionAnimStartRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimStartRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimStartRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMin = { "RingTimeDiffusionAnimSpeedMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, RingTimeDiffusionAnimSpeedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMax = { "RingTimeDiffusionAnimSpeedMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, RingTimeDiffusionAnimSpeedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMin = { "AddRateMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, AddRateMin), Z_Construct_UScriptStruct_FELMomentumMeterAddRateData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMax = { "AddRateMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, AddRateMax), Z_Construct_UScriptStruct_FELMomentumMeterAddRateData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_WaveSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_WaveSize = { "WaveSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, WaveSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_WaveSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_WaveSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage_Inner = { "PartDamage", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMomentumMeterPartHighlightData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage = { "PartDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, PartDamage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeWaitTime = { "GaugeChangeWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, GaugeChangeWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMomentumMeterParameter" },
		{ "ModuleRelativePath", "Public/ELMomentumMeterParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeSpeed = { "GaugeChangeSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMomentumMeterParameter, GaugeChangeSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimStartRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_BlinkAnimSpeedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimStartRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_DiffusionAnimSpeedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimStartRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeBlinkAnimSpeedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimStartRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_RingTimeDiffusionAnimSpeedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_AddRateMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_WaveSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_PartDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::NewProp_GaugeChangeSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMomentumMeterParameter",
		sizeof(FELMomentumMeterParameter),
		alignof(FELMomentumMeterParameter),
		Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMomentumMeterParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMomentumMeterParameter"), sizeof(FELMomentumMeterParameter), Get_Z_Construct_UScriptStruct_FELMomentumMeterParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMomentumMeterParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMomentumMeterParameter_Hash() { return 2789072576U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
