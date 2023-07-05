// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttentionAdjustParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttentionAdjustParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionAdjustParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAttentionAdjustParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAttentionAdjustParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAttentionAdjustParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttentionAdjustParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttentionAdjustParam"), sizeof(FSSAttentionAdjustParam), Get_Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttentionAdjustParam>()
{
	return FSSAttentionAdjustParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttentionAdjustParam(FSSAttentionAdjustParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttentionAdjustParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionAdjustParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionAdjustParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAttentionAdjustParam>(FName(TEXT("SSAttentionAdjustParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttentionAdjustParam;
	struct Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionLevelMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionLevelMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPointMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPointMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpItemIntervalPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpItemIntervalPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionGaugePointMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionGaugePointMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionSubGaugeNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionSubGaugeNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativePenaltyBeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativePenaltyBeginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativePenaltyDownValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NegativePenaltyDownValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativePenaltyDownInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativePenaltyDownInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverTimeConditionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FeverTimeConditionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverTimeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeverTimeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverTimeExpItemInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeverTimeExpItemInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_HitAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_HitAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_Throw_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_Throw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_Destructible_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_Destructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_KO_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_KO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_Finisher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_Taunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_Taunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_VehicleMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_VehicleMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttentionIntervalWhenVehicleMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddAttentionIntervalWhenVehicleMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_VehicleMovingSpeedKph_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddAttention_VehicleMovingSpeedKph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_HorseMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddAttention_HorseMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttentionIntervalWhenHorseMoving_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddAttentionIntervalWhenHorseMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddAttention_HorseMovingSpeedKph_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddAttention_HorseMovingSpeedKph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnounceAttentionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnnounceAttentionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionCoolTimeByTaunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionCoolTimeByTaunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnounceAttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnnounceAttentionPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttentionAdjustParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionLevelMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionLevelMax = { "AttentionLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AttentionLevelMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionLevelMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionLevelMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionPointMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionPointMax = { "AttentionPointMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AttentionPointMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionPointMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionPointMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_ExpItemIntervalPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_ExpItemIntervalPoint = { "ExpItemIntervalPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, ExpItemIntervalPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_ExpItemIntervalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_ExpItemIntervalPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionGaugePointMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionGaugePointMax = { "AttentionGaugePointMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AttentionGaugePointMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionGaugePointMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionGaugePointMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionSubGaugeNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionSubGaugeNum = { "AttentionSubGaugeNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AttentionSubGaugeNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionSubGaugeNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionSubGaugeNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyBeginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyBeginTime = { "NegativePenaltyBeginTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, NegativePenaltyBeginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyBeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyBeginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownValue = { "NegativePenaltyDownValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, NegativePenaltyDownValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownInterval = { "NegativePenaltyDownInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, NegativePenaltyDownInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeConditionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeConditionLevel = { "FeverTimeConditionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, FeverTimeConditionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeConditionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeConditionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeDuration = { "FeverTimeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, FeverTimeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeExpItemInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeExpItemInterval = { "FeverTimeExpItemInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, FeverTimeExpItemInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeExpItemInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeExpItemInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HitAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HitAttack = { "AddAttention_HitAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_HitAttack), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HitAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HitAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Throw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Throw = { "AddAttention_Throw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_Throw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Throw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Throw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Destructible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Destructible = { "AddAttention_Destructible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_Destructible), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Destructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Destructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_KO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_KO = { "AddAttention_KO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_KO), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_KO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_KO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Finisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Finisher = { "AddAttention_Finisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_Finisher), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Finisher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Taunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Taunt = { "AddAttention_Taunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_Taunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Taunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Taunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMoving = { "AddAttention_VehicleMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_VehicleMoving), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenVehicleMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenVehicleMoving = { "AddAttentionIntervalWhenVehicleMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttentionIntervalWhenVehicleMoving), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenVehicleMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenVehicleMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMovingSpeedKph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMovingSpeedKph = { "AddAttention_VehicleMovingSpeedKph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_VehicleMovingSpeedKph), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMovingSpeedKph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMovingSpeedKph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMoving = { "AddAttention_HorseMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_HorseMoving), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenHorseMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenHorseMoving = { "AddAttentionIntervalWhenHorseMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttentionIntervalWhenHorseMoving), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenHorseMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenHorseMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMovingSpeedKph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMovingSpeedKph = { "AddAttention_HorseMovingSpeedKph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AddAttention_HorseMovingSpeedKph), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMovingSpeedKph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMovingSpeedKph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionLevel = { "AnnounceAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AnnounceAttentionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionCoolTimeByTaunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionCoolTimeByTaunt = { "AttentionCoolTimeByTaunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AttentionCoolTimeByTaunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionCoolTimeByTaunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionCoolTimeByTaunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttentionAdjustParam" },
		{ "ModuleRelativePath", "Public/SSAttentionAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionPoint = { "AnnounceAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttentionAdjustParam, AnnounceAttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionLevelMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionPointMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_ExpItemIntervalPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionGaugePointMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionSubGaugeNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyBeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_NegativePenaltyDownInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeConditionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_FeverTimeExpItemInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HitAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Throw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Destructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_KO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_Taunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenVehicleMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_VehicleMovingSpeedKph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttentionIntervalWhenHorseMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AddAttention_HorseMovingSpeedKph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AttentionCoolTimeByTaunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::NewProp_AnnounceAttentionPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAttentionAdjustParam",
		sizeof(FSSAttentionAdjustParam),
		alignof(FSSAttentionAdjustParam),
		Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionAdjustParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttentionAdjustParam"), sizeof(FSSAttentionAdjustParam), Get_Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttentionAdjustParam_Hash() { return 2711936142U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
