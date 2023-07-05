// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDatabase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDatabase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDatabase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardReactionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSResultGradeABC();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAIPlayerParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttachParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageReactionParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSEffectParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFallParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGuardReactionParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitEffectType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHitEffectParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemResourceParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSShieldParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSUseItemParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVictoryCutsceneParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponGunParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponMeleeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponThrowParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponTrapParam();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGuardConditionParam();
// End Cross Module References
	DEFINE_FUNCTION(AELSSDatabase::execCalcGuardReactionType)
	{
		P_GET_ENUM(ESSGuardBreakerType,Z_Param_inGuardBreakerType);
		P_GET_PROPERTY(FIntProperty,Z_Param_inGuardLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSGuardReactionType*)Z_Param__Result=P_THIS->CalcGuardReactionType(ESSGuardBreakerType(Z_Param_inGuardBreakerType),Z_Param_inGuardLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execCalcResultAEWCash)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalcResultAEWCash(Z_Param_inScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execCalcResultGradeFromAttentionPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSResultGradeABC*)Z_Param__Result=P_THIS->CalcResultGradeFromAttentionPoint(Z_Param_inAttentionPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execCalcResultGradeFromFeverCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inFeverCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSResultGradeABC*)Z_Param__Result=P_THIS->CalcResultGradeFromFeverCount(Z_Param_inFeverCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execCalcResultGradeFromKillCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inKillCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSResultGradeABC*)Z_Param__Result=P_THIS->CalcResultGradeFromKillCount(Z_Param_inKillCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execCalcResultStarGrade)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalcResultStarGrade(Z_Param_inScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetAIPlayerParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSAIPlayerParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAIPlayerParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetAIPlayerStampedeLevelParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSAIPlayerStampedeLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAIPlayerStampedeLevelParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetAttachParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSAttachParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttachParam(Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetDamageReactionParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSDamageReactionParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDamageReactionParam(Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetEffectParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSEffectParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEffectParam(Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetFallParam)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inHeightDiff);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxLandLevel);
		P_GET_STRUCT_REF(FSSFallParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFallParam(Z_Param_inHeightDiff,Z_Param_inMaxLandLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetGuardReactionParam)
	{
		P_GET_ENUM(ESSGuardReactionType,Z_Param_inGuardReaction);
		P_GET_STRUCT_REF(FSSGuardReactionParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGuardReactionParam(ESSGuardReactionType(Z_Param_inGuardReaction),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetHitEffectParam)
	{
		P_GET_ENUM(ESSHitEffectType,Z_Param_Type);
		P_GET_STRUCT_REF(FSSHitEffectParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitEffectParam(ESSHitEffectType(Z_Param_Type),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetItemResourceParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSItemResourceParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemResourceParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetShieldParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSShieldParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShieldParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetSystemMotionParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSSystemMotionParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSystemMotionParam(Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetUseItemParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSUseItemParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseItemParam(Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetVehicleParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSVehicleParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVehicleParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetVictoryCutsceneParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSVictoryCutsceneParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVictoryCutsceneParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetWeaponGunParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponGunParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponGunParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetWeaponMeleeParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponMeleeParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponMeleeParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetWeaponParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetWeaponThrowParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponThrowParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponThrowParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSDatabase::execGetWeaponTrapParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponTrapParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponTrapParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	void AELSSDatabase::StaticRegisterNativesAELSSDatabase()
	{
		UClass* Class = AELSSDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcGuardReactionType", &AELSSDatabase::execCalcGuardReactionType },
			{ "CalcResultAEWCash", &AELSSDatabase::execCalcResultAEWCash },
			{ "CalcResultGradeFromAttentionPoint", &AELSSDatabase::execCalcResultGradeFromAttentionPoint },
			{ "CalcResultGradeFromFeverCount", &AELSSDatabase::execCalcResultGradeFromFeverCount },
			{ "CalcResultGradeFromKillCount", &AELSSDatabase::execCalcResultGradeFromKillCount },
			{ "CalcResultStarGrade", &AELSSDatabase::execCalcResultStarGrade },
			{ "GetAIPlayerParam", &AELSSDatabase::execGetAIPlayerParam },
			{ "GetAIPlayerStampedeLevelParam", &AELSSDatabase::execGetAIPlayerStampedeLevelParam },
			{ "GetAttachParam", &AELSSDatabase::execGetAttachParam },
			{ "GetDamageReactionParam", &AELSSDatabase::execGetDamageReactionParam },
			{ "GetEffectParam", &AELSSDatabase::execGetEffectParam },
			{ "GetFallParam", &AELSSDatabase::execGetFallParam },
			{ "GetGuardReactionParam", &AELSSDatabase::execGetGuardReactionParam },
			{ "GetHitEffectParam", &AELSSDatabase::execGetHitEffectParam },
			{ "GetItemResourceParam", &AELSSDatabase::execGetItemResourceParam },
			{ "GetShieldParam", &AELSSDatabase::execGetShieldParam },
			{ "GetSystemMotionParam", &AELSSDatabase::execGetSystemMotionParam },
			{ "GetUseItemParam", &AELSSDatabase::execGetUseItemParam },
			{ "GetVehicleParam", &AELSSDatabase::execGetVehicleParam },
			{ "GetVictoryCutsceneParam", &AELSSDatabase::execGetVictoryCutsceneParam },
			{ "GetWeaponGunParam", &AELSSDatabase::execGetWeaponGunParam },
			{ "GetWeaponMeleeParam", &AELSSDatabase::execGetWeaponMeleeParam },
			{ "GetWeaponParam", &AELSSDatabase::execGetWeaponParam },
			{ "GetWeaponThrowParam", &AELSSDatabase::execGetWeaponThrowParam },
			{ "GetWeaponTrapParam", &AELSSDatabase::execGetWeaponTrapParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics
	{
		struct ELSSDatabase_eventCalcGuardReactionType_Parms
		{
			ESSGuardBreakerType inGuardBreakerType;
			int32 inGuardLevel;
			ESSGuardReactionType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inGuardBreakerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inGuardBreakerType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inGuardLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType = { "inGuardBreakerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcGuardReactionType_Parms, inGuardBreakerType), Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_inGuardLevel = { "inGuardLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcGuardReactionType_Parms, inGuardLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcGuardReactionType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_inGuardLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "CalcGuardReactionType", nullptr, nullptr, sizeof(ELSSDatabase_eventCalcGuardReactionType_Parms), Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics
	{
		struct ELSSDatabase_eventCalcResultAEWCash_Parms
		{
			int32 inScore;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inScore;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::NewProp_inScore = { "inScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultAEWCash_Parms, inScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultAEWCash_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::NewProp_inScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "CalcResultAEWCash", nullptr, nullptr, sizeof(ELSSDatabase_eventCalcResultAEWCash_Parms), Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics
	{
		struct ELSSDatabase_eventCalcResultGradeFromAttentionPoint_Parms
		{
			int32 inAttentionPoint;
			ESSResultGradeABC ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultGradeFromAttentionPoint_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultGradeFromAttentionPoint_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::NewProp_inAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "CalcResultGradeFromAttentionPoint", nullptr, nullptr, sizeof(ELSSDatabase_eventCalcResultGradeFromAttentionPoint_Parms), Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics
	{
		struct ELSSDatabase_eventCalcResultGradeFromFeverCount_Parms
		{
			int32 inFeverCount;
			ESSResultGradeABC ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFeverCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::NewProp_inFeverCount = { "inFeverCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultGradeFromFeverCount_Parms, inFeverCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultGradeFromFeverCount_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::NewProp_inFeverCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "CalcResultGradeFromFeverCount", nullptr, nullptr, sizeof(ELSSDatabase_eventCalcResultGradeFromFeverCount_Parms), Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics
	{
		struct ELSSDatabase_eventCalcResultGradeFromKillCount_Parms
		{
			int32 inKillCount;
			ESSResultGradeABC ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inKillCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::NewProp_inKillCount = { "inKillCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultGradeFromKillCount_Parms, inKillCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultGradeFromKillCount_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::NewProp_inKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "CalcResultGradeFromKillCount", nullptr, nullptr, sizeof(ELSSDatabase_eventCalcResultGradeFromKillCount_Parms), Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics
	{
		struct ELSSDatabase_eventCalcResultStarGrade_Parms
		{
			int32 inScore;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inScore;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::NewProp_inScore = { "inScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultStarGrade_Parms, inScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventCalcResultStarGrade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::NewProp_inScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "CalcResultStarGrade", nullptr, nullptr, sizeof(ELSSDatabase_eventCalcResultStarGrade_Parms), Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics
	{
		struct ELSSDatabase_eventGetAIPlayerParam_Parms
		{
			int32 ID;
			FSSAIPlayerParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetAIPlayerParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetAIPlayerParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAIPlayerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetAIPlayerParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetAIPlayerParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetAIPlayerParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetAIPlayerParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics
	{
		struct ELSSDatabase_eventGetAIPlayerStampedeLevelParam_Parms
		{
			int32 ID;
			FSSAIPlayerStampedeLevelParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetAIPlayerStampedeLevelParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetAIPlayerStampedeLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetAIPlayerStampedeLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetAIPlayerStampedeLevelParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetAIPlayerStampedeLevelParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetAIPlayerStampedeLevelParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics
	{
		struct ELSSDatabase_eventGetAttachParam_Parms
		{
			FName RowName;
			FSSAttachParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetAttachParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetAttachParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttachParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetAttachParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetAttachParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetAttachParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetAttachParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetAttachParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetAttachParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics
	{
		struct ELSSDatabase_eventGetDamageReactionParam_Parms
		{
			FName RowName;
			FSSDamageReactionParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetDamageReactionParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetDamageReactionParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSDamageReactionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetDamageReactionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetDamageReactionParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetDamageReactionParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetDamageReactionParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics
	{
		struct ELSSDatabase_eventGetEffectParam_Parms
		{
			FName RowName;
			FSSEffectParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetEffectParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetEffectParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSEffectParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetEffectParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetEffectParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetEffectParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetEffectParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetEffectParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetEffectParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics
	{
		struct ELSSDatabase_eventGetFallParam_Parms
		{
			float inHeightDiff;
			int32 inMaxLandLevel;
			FSSFallParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inHeightDiff;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxLandLevel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_inHeightDiff = { "inHeightDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetFallParam_Parms, inHeightDiff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_inMaxLandLevel = { "inMaxLandLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetFallParam_Parms, inMaxLandLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetFallParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSFallParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetFallParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetFallParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_inHeightDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_inMaxLandLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetFallParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetFallParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetFallParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetFallParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics
	{
		struct ELSSDatabase_eventGetGuardReactionParam_Parms
		{
			ESSGuardReactionType inGuardReaction;
			FSSGuardReactionParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inGuardReaction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inGuardReaction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_inGuardReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_inGuardReaction = { "inGuardReaction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetGuardReactionParam_Parms, inGuardReaction), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetGuardReactionParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSGuardReactionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetGuardReactionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetGuardReactionParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_inGuardReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_inGuardReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetGuardReactionParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetGuardReactionParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics
	{
		struct ELSSDatabase_eventGetHitEffectParam_Parms
		{
			ESSHitEffectType Type;
			FSSHitEffectParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetHitEffectParam_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSHitEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetHitEffectParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHitEffectParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetHitEffectParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetHitEffectParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetHitEffectParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetHitEffectParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics
	{
		struct ELSSDatabase_eventGetItemResourceParam_Parms
		{
			int32 ID;
			FSSItemResourceParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetItemResourceParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetItemResourceParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSItemResourceParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetItemResourceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetItemResourceParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetItemResourceParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetItemResourceParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics
	{
		struct ELSSDatabase_eventGetShieldParam_Parms
		{
			int32 ID;
			FSSShieldParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetShieldParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetShieldParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSShieldParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetShieldParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetShieldParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetShieldParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetShieldParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetShieldParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetShieldParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics
	{
		struct ELSSDatabase_eventGetSystemMotionParam_Parms
		{
			FName RowName;
			FSSSystemMotionParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetSystemMotionParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetSystemMotionParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSSystemMotionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetSystemMotionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetSystemMotionParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetSystemMotionParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetSystemMotionParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics
	{
		struct ELSSDatabase_eventGetUseItemParam_Parms
		{
			FName RowName;
			FSSUseItemParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetUseItemParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetUseItemParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSUseItemParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetUseItemParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetUseItemParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetUseItemParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetUseItemParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetUseItemParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetUseItemParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics
	{
		struct ELSSDatabase_eventGetVehicleParam_Parms
		{
			int32 ID;
			FSSVehicleParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetVehicleParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetVehicleParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSVehicleParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetVehicleParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetVehicleParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetVehicleParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetVehicleParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetVehicleParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetVehicleParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics
	{
		struct ELSSDatabase_eventGetVictoryCutsceneParam_Parms
		{
			int32 ID;
			FSSVictoryCutsceneParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetVictoryCutsceneParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetVictoryCutsceneParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSVictoryCutsceneParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetVictoryCutsceneParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetVictoryCutsceneParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetVictoryCutsceneParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetVictoryCutsceneParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics
	{
		struct ELSSDatabase_eventGetWeaponGunParam_Parms
		{
			int32 ID;
			FSSWeaponGunParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponGunParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponGunParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponGunParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetWeaponGunParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetWeaponGunParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetWeaponGunParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetWeaponGunParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics
	{
		struct ELSSDatabase_eventGetWeaponMeleeParam_Parms
		{
			int32 ID;
			FSSWeaponMeleeParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponMeleeParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponMeleeParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponMeleeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetWeaponMeleeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetWeaponMeleeParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetWeaponMeleeParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetWeaponMeleeParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics
	{
		struct ELSSDatabase_eventGetWeaponParam_Parms
		{
			int32 ID;
			FSSWeaponParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetWeaponParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetWeaponParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetWeaponParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetWeaponParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetWeaponParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetWeaponParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics
	{
		struct ELSSDatabase_eventGetWeaponThrowParam_Parms
		{
			int32 ID;
			FSSWeaponThrowParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponThrowParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponThrowParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponThrowParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetWeaponThrowParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetWeaponThrowParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetWeaponThrowParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetWeaponThrowParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics
	{
		struct ELSSDatabase_eventGetWeaponTrapParam_Parms
		{
			int32 ID;
			FSSWeaponTrapParam OutRow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponTrapParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDatabase_eventGetWeaponTrapParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponTrapParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDatabase_eventGetWeaponTrapParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDatabase_eventGetWeaponTrapParam_Parms), &Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSDatabase, nullptr, "GetWeaponTrapParam", nullptr, nullptr, sizeof(ELSSDatabase_eventGetWeaponTrapParam_Parms), Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSDatabase_NoRegister()
	{
		return AELSSDatabase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitEffectParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemResourceParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemResourceParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseItemParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMeleeParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMeleeParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponGunParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponGunParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponThrowParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponThrowParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTrapParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponTrapParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnParamForRoundTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleSpawnParamForRoundTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleSpawnParamForRoundArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSpawnParamForRoundArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleSpawnParamForRoundArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemMotionParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemMotionParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageReactionParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageReactionParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPlayerParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPlayerParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIPlayerParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPlayerParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIPlayerParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPlayerStampedeLevelParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPlayerStampedeLevelParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIPlayerStampedeLevelParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPlayerStampedeLevelParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIPlayerStampedeLevelParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardReactionParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardReactionParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GuardReactionParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardReactionParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GuardReactionParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardConditionParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardConditionParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GuardConditionParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardConditionParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GuardConditionParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FallParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FallParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FallParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultKillCountGradeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultKillCountGradeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultAttentionGradeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultAttentionGradeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultFeverGradeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultFeverGradeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStarGradeTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultStarGradeTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryCutsceneParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictoryCutsceneParamTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSDatabase_CalcGuardReactionType, "CalcGuardReactionType" }, // 2696150431
		{ &Z_Construct_UFunction_AELSSDatabase_CalcResultAEWCash, "CalcResultAEWCash" }, // 3774009528
		{ &Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromAttentionPoint, "CalcResultGradeFromAttentionPoint" }, // 3598060498
		{ &Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromFeverCount, "CalcResultGradeFromFeverCount" }, // 1805749280
		{ &Z_Construct_UFunction_AELSSDatabase_CalcResultGradeFromKillCount, "CalcResultGradeFromKillCount" }, // 2590460980
		{ &Z_Construct_UFunction_AELSSDatabase_CalcResultStarGrade, "CalcResultStarGrade" }, // 2314791452
		{ &Z_Construct_UFunction_AELSSDatabase_GetAIPlayerParam, "GetAIPlayerParam" }, // 3645454297
		{ &Z_Construct_UFunction_AELSSDatabase_GetAIPlayerStampedeLevelParam, "GetAIPlayerStampedeLevelParam" }, // 3784907104
		{ &Z_Construct_UFunction_AELSSDatabase_GetAttachParam, "GetAttachParam" }, // 529910557
		{ &Z_Construct_UFunction_AELSSDatabase_GetDamageReactionParam, "GetDamageReactionParam" }, // 1142313163
		{ &Z_Construct_UFunction_AELSSDatabase_GetEffectParam, "GetEffectParam" }, // 1259637810
		{ &Z_Construct_UFunction_AELSSDatabase_GetFallParam, "GetFallParam" }, // 2744590089
		{ &Z_Construct_UFunction_AELSSDatabase_GetGuardReactionParam, "GetGuardReactionParam" }, // 3881633841
		{ &Z_Construct_UFunction_AELSSDatabase_GetHitEffectParam, "GetHitEffectParam" }, // 1279077202
		{ &Z_Construct_UFunction_AELSSDatabase_GetItemResourceParam, "GetItemResourceParam" }, // 4258402421
		{ &Z_Construct_UFunction_AELSSDatabase_GetShieldParam, "GetShieldParam" }, // 261248391
		{ &Z_Construct_UFunction_AELSSDatabase_GetSystemMotionParam, "GetSystemMotionParam" }, // 3596018429
		{ &Z_Construct_UFunction_AELSSDatabase_GetUseItemParam, "GetUseItemParam" }, // 1227063910
		{ &Z_Construct_UFunction_AELSSDatabase_GetVehicleParam, "GetVehicleParam" }, // 4275958966
		{ &Z_Construct_UFunction_AELSSDatabase_GetVictoryCutsceneParam, "GetVictoryCutsceneParam" }, // 1346428721
		{ &Z_Construct_UFunction_AELSSDatabase_GetWeaponGunParam, "GetWeaponGunParam" }, // 2035382410
		{ &Z_Construct_UFunction_AELSSDatabase_GetWeaponMeleeParam, "GetWeaponMeleeParam" }, // 1368824594
		{ &Z_Construct_UFunction_AELSSDatabase_GetWeaponParam, "GetWeaponParam" }, // 4174877078
		{ &Z_Construct_UFunction_AELSSDatabase_GetWeaponThrowParam, "GetWeaponThrowParam" }, // 1632469011
		{ &Z_Construct_UFunction_AELSSDatabase_GetWeaponTrapParam, "GetWeaponTrapParam" }, // 1815516528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_EffectParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_EffectParamTable = { "EffectParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, EffectParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_EffectParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_EffectParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_HitEffectParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_HitEffectParamTable = { "HitEffectParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, HitEffectParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_HitEffectParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_HitEffectParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ItemResourceParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ItemResourceParamTable = { "ItemResourceParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, ItemResourceParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ItemResourceParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ItemResourceParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_UseItemParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_UseItemParamTable = { "UseItemParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, UseItemParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_UseItemParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_UseItemParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ShieldParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ShieldParamTable = { "ShieldParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, ShieldParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ShieldParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ShieldParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponParamTable = { "WeaponParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, WeaponParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponMeleeParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponMeleeParamTable = { "WeaponMeleeParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, WeaponMeleeParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponMeleeParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponMeleeParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponGunParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponGunParamTable = { "WeaponGunParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, WeaponGunParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponGunParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponGunParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponThrowParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponThrowParamTable = { "WeaponThrowParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, WeaponThrowParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponThrowParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponThrowParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponTrapParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponTrapParamTable = { "WeaponTrapParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, WeaponTrapParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponTrapParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponTrapParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleParamTable = { "VehicleParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, VehicleParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundTable = { "VehicleSpawnParamForRoundTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, VehicleSpawnParamForRoundTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray_Inner = { "VehicleSpawnParamForRoundArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray = { "VehicleSpawnParamForRoundArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, VehicleSpawnParamForRoundArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AttachParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AttachParamTable = { "AttachParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, AttachParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AttachParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AttachParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_SystemMotionParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_SystemMotionParamTable = { "SystemMotionParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, SystemMotionParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_SystemMotionParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_SystemMotionParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_DamageReactionParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_DamageReactionParamTable = { "DamageReactionParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, DamageReactionParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_DamageReactionParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_DamageReactionParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamTable = { "AIPlayerParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, AIPlayerParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray_Inner = { "AIPlayerParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAIPlayerParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray = { "AIPlayerParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, AIPlayerParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamTable = { "AIPlayerStampedeLevelParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, AIPlayerStampedeLevelParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray_Inner = { "AIPlayerStampedeLevelParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAIPlayerStampedeLevelParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray = { "AIPlayerStampedeLevelParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, AIPlayerStampedeLevelParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamTable = { "GuardReactionParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, GuardReactionParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray_Inner = { "GuardReactionParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSGuardReactionParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray = { "GuardReactionParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, GuardReactionParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamTable = { "GuardConditionParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, GuardConditionParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray_Inner = { "GuardConditionParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSGuardConditionParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray = { "GuardConditionParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, GuardConditionParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamTable = { "FallParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, FallParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray_Inner = { "FallParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSFallParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray = { "FallParamArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, FallParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultKillCountGradeTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultKillCountGradeTable = { "ResultKillCountGradeTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, ResultKillCountGradeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultKillCountGradeTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultKillCountGradeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultAttentionGradeTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultAttentionGradeTable = { "ResultAttentionGradeTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, ResultAttentionGradeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultAttentionGradeTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultAttentionGradeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultFeverGradeTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultFeverGradeTable = { "ResultFeverGradeTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, ResultFeverGradeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultFeverGradeTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultFeverGradeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultStarGradeTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultStarGradeTable = { "ResultStarGradeTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, ResultStarGradeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultStarGradeTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultStarGradeTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VictoryCutsceneParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDatabase" },
		{ "ModuleRelativePath", "Public/ELSSDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VictoryCutsceneParamTable = { "VictoryCutsceneParamTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSDatabase, VictoryCutsceneParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VictoryCutsceneParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VictoryCutsceneParamTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_EffectParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_HitEffectParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ItemResourceParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_UseItemParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ShieldParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponMeleeParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponGunParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponThrowParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_WeaponTrapParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VehicleSpawnParamForRoundArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AttachParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_SystemMotionParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_DamageReactionParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_AIPlayerStampedeLevelParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardReactionParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_GuardConditionParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_FallParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultKillCountGradeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultAttentionGradeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultFeverGradeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_ResultStarGradeTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSDatabase_Statics::NewProp_VictoryCutsceneParamTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSDatabase_Statics::ClassParams = {
		&AELSSDatabase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSDatabase, 3901440559);
	template<> ABP_200508_API UClass* StaticClass<AELSSDatabase>()
	{
		return AELSSDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSDatabase(Z_Construct_UClass_AELSSDatabase, &AELSSDatabase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
