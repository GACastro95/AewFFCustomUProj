// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCharacterAdjust.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCharacterAdjust() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterAdjust();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCharacterAdjust>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCharacterAdjust cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCharacterAdjust::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCharacterAdjust_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCharacterAdjust, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCharacterAdjust"), sizeof(FSSCharacterAdjust), Get_Z_Construct_UScriptStruct_FSSCharacterAdjust_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCharacterAdjust>()
{
	return FSSCharacterAdjust::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCharacterAdjust(FSSCharacterAdjust::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCharacterAdjust"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterAdjust
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterAdjust()
	{
		UScriptStruct::DeferCppStructOps<FSSCharacterAdjust>(FName(TEXT("SSCharacterAdjust")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterAdjust;
	struct Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSavePredictFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovementSavePredictFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeOutRateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeOutRateThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopDurationWeak_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStopDurationWeak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopDurationMedium_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStopDurationMedium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopDurationStrong_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStopDurationStrong;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAttackMinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAttackMinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongPressThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LongPressThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractDistanceLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractDistanceLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunTargetLengthMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GunTargetLengthMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunTargetLengthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GunTargetLengthMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunTargetLengthDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GunTargetLengthDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetBlendDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimOffsetBlendDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimBeginningTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimBeginningTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimBeginningInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimBeginningInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoHpRecoverIntervalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoHpRecoverIntervalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireBottleDamageIntervalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireBottleDamageIntervalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardReduceDamagePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GuardReduceDamagePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolveDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvolveDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolveDamageFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvolveDamageFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterStandUpInvincibleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AfterStandUpInvincibleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackedToDownCountLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackedToDownCountLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDownAccumulationLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDownAccumulationLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDownAccumulationDecreaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDownAccumulationDecreaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDownAccumulationAddValueStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDownAccumulationAddValueStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDownAccumulationAddValueWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDownAccumulationAddValueWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDownBlowPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDownBlowPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDownBlowAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDownBlowAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoHPPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KoHPPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoDamageCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KoDamageCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoDamageRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KoDamageRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeeThroughDistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeeThroughDistanceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipDefaultSettingsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipDefaultSettingsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceTeleportZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceTeleportZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncInterpLocationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncInterpLocationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncInterpLocationTimeLocalFinisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncInterpLocationTimeLocalFinisher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshParamOnEveryTick_MetaData[];
#endif
		static void NewProp_RefreshParamOnEveryTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RefreshParamOnEveryTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCharacterAdjust>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementSavePredictFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementSavePredictFrame = { "MovementSavePredictFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, MovementSavePredictFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementSavePredictFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementSavePredictFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOutRateThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOutRateThreshold = { "MovementTimeOutRateThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, MovementTimeOutRateThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOutRateThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOutRateThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOut = { "MovementTimeOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, MovementTimeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationWeak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationWeak = { "HitStopDurationWeak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, HitStopDurationWeak), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationWeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationWeak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationMedium_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationMedium = { "HitStopDurationMedium", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, HitStopDurationMedium), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationMedium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationMedium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationStrong_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationStrong = { "HitStopDurationStrong", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, HitStopDurationStrong), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationStrong_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationStrong_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AirAttackMinHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AirAttackMinHeight = { "AirAttackMinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AirAttackMinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AirAttackMinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AirAttackMinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_LongPressThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_LongPressThreshold = { "LongPressThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, LongPressThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_LongPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_LongPressThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InteractDistanceLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InteractDistanceLimit = { "InteractDistanceLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, InteractDistanceLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InteractDistanceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InteractDistanceLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMin = { "GunTargetLengthMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, GunTargetLengthMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMax = { "GunTargetLengthMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, GunTargetLengthMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthDefault = { "GunTargetLengthDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, GunTargetLengthDefault), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimOffsetBlendDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimOffsetBlendDuration = { "AimOffsetBlendDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AimOffsetBlendDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimOffsetBlendDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimOffsetBlendDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningTime = { "AimBeginningTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AimBeginningTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningInterpSpeed = { "AimBeginningInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AimBeginningInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AutoHpRecoverIntervalTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AutoHpRecoverIntervalTime = { "AutoHpRecoverIntervalTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AutoHpRecoverIntervalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AutoHpRecoverIntervalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AutoHpRecoverIntervalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_FireBottleDamageIntervalTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_FireBottleDamageIntervalTime = { "FireBottleDamageIntervalTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, FireBottleDamageIntervalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_FireBottleDamageIntervalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_FireBottleDamageIntervalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GuardReduceDamagePercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GuardReduceDamagePercent = { "GuardReduceDamagePercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, GuardReduceDamagePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GuardReduceDamagePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GuardReduceDamagePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamage = { "InvolveDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, InvolveDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamageFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamageFeedback = { "InvolveDamageFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, InvolveDamageFeedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamageFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamageFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AfterStandUpInvincibleTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AfterStandUpInvincibleTime = { "AfterStandUpInvincibleTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AfterStandUpInvincibleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AfterStandUpInvincibleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AfterStandUpInvincibleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AttackedToDownCountLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AttackedToDownCountLimit = { "AttackedToDownCountLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, AttackedToDownCountLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AttackedToDownCountLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AttackedToDownCountLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationLimit = { "ForceDownAccumulationLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceDownAccumulationLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationDecreaseSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationDecreaseSpeed = { "ForceDownAccumulationDecreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceDownAccumulationDecreaseSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationDecreaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationDecreaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueStrike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueStrike = { "ForceDownAccumulationAddValueStrike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceDownAccumulationAddValueStrike), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueStrike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueWeapon = { "ForceDownAccumulationAddValueWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceDownAccumulationAddValueWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowPower = { "ForceDownBlowPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceDownBlowPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowAngle = { "ForceDownBlowAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceDownBlowAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoHPPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoHPPercent = { "KoHPPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, KoHPPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoHPPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoHPPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageCycle = { "KoDamageCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, KoDamageCycle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageRate = { "KoDamageRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, KoDamageRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SeeThroughDistanceMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SeeThroughDistanceMin = { "SeeThroughDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, SeeThroughDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SeeThroughDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SeeThroughDistanceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_EquipDefaultSettingsId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_EquipDefaultSettingsId = { "EquipDefaultSettingsId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, EquipDefaultSettingsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_EquipDefaultSettingsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_EquipDefaultSettingsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceTeleportZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceTeleportZ = { "ForceTeleportZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, ForceTeleportZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceTeleportZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceTeleportZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTime = { "SyncInterpLocationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, SyncInterpLocationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTimeLocalFinisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTimeLocalFinisher = { "SyncInterpLocationTimeLocalFinisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterAdjust, SyncInterpLocationTimeLocalFinisher), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTimeLocalFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTimeLocalFinisher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterAdjust" },
		{ "ModuleRelativePath", "Public/SSCharacterAdjust.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick_SetBit(void* Obj)
	{
		((FSSCharacterAdjust*)Obj)->RefreshParamOnEveryTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick = { "RefreshParamOnEveryTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterAdjust), &Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementSavePredictFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOutRateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_MovementTimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationWeak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationMedium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_HitStopDurationStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AirAttackMinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_LongPressThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InteractDistanceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GunTargetLengthDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimOffsetBlendDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AimBeginningInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AutoHpRecoverIntervalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_FireBottleDamageIntervalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_GuardReduceDamagePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_InvolveDamageFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AfterStandUpInvincibleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_AttackedToDownCountLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationDecreaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownAccumulationAddValueWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceDownBlowAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoHPPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_KoDamageRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SeeThroughDistanceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_EquipDefaultSettingsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_ForceTeleportZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_SyncInterpLocationTimeLocalFinisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::NewProp_RefreshParamOnEveryTick,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCharacterAdjust",
		sizeof(FSSCharacterAdjust),
		alignof(FSSCharacterAdjust),
		Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterAdjust()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCharacterAdjust_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCharacterAdjust"), sizeof(FSSCharacterAdjust), Get_Z_Construct_UScriptStruct_FSSCharacterAdjust_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCharacterAdjust_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCharacterAdjust_Hash() { return 1510593826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
