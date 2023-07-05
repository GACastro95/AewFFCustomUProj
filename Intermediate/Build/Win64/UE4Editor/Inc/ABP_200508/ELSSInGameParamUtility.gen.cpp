// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInGameParamUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInGameParamUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameParamUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameParamUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardReactionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSResultGradeABC();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityKindParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSArmorType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttachParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageReactionParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSDatabase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSEffectParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFallParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGuardReactionParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatMoveSet();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitEffectType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHitEffectParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FJukeBoxParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSShieldParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionParam();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSUseItemParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVictoryCutsceneParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponGunParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponMeleeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponThrowParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponTrapParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcAttentionLevelFromPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::CalcAttentionLevelFromPoint(Z_Param_WorldContextObject,Z_Param_inPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcGuardReactionType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSGuardBreakerType,Z_Param_inGuardBreakerType);
		P_GET_PROPERTY(FIntProperty,Z_Param_inGuardLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSGuardReactionType*)Z_Param__Result=UELSSInGameParamUtility::CalcGuardReactionType(Z_Param_WorldContextObject,ESSGuardBreakerType(Z_Param_inGuardBreakerType),Z_Param_inGuardLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcHeatLevelFromExp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::CalcHeatLevelFromExp(Z_Param_WorldContextObject,Z_Param_inExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcResultAEWCash)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::CalcResultAEWCash(Z_Param_WorldContextObject,Z_Param_inScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcResultGradeFromAttentionPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSResultGradeABC*)Z_Param__Result=UELSSInGameParamUtility::CalcResultGradeFromAttentionPoint(Z_Param_WorldContextObject,Z_Param_inAttentionPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcResultGradeFromFeverCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inFeverCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSResultGradeABC*)Z_Param__Result=UELSSInGameParamUtility::CalcResultGradeFromFeverCount(Z_Param_WorldContextObject,Z_Param_inFeverCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcResultGradeFromKillCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inKillCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSResultGradeABC*)Z_Param__Result=UELSSInGameParamUtility::CalcResultGradeFromKillCount(Z_Param_WorldContextObject,Z_Param_inKillCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execCalcResultStarGrade)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSInGameParamUtility::CalcResultStarGrade(Z_Param_WorldContextObject,Z_Param_inScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAbilityCalcMethod)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSAbilityKind,Z_Param_Kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSAbilityCalcMethod*)Z_Param__Result=UELSSInGameParamUtility::GetAbilityCalcMethod(Z_Param_WorldContextObject,ESSAbilityKind(Z_Param_Kind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAbilityKindParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSAbilityKind,Z_Param_Kind);
		P_GET_STRUCT_REF(FSSAbilityKindParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetAbilityKindParam(Z_Param_WorldContextObject,ESSAbilityKind(Z_Param_Kind),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAbilityParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSAbilityParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetAbilityParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetArmorType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSDamageReason,Z_Param_inDamageReason);
		P_GET_ENUM(ESSDamageReceiverState,Z_Param_inDamageReceiverState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSArmorType*)Z_Param__Result=UELSSInGameParamUtility::GetArmorType(Z_Param_WorldContextObject,ESSDamageReason(Z_Param_inDamageReason),ESSDamageReceiverState(Z_Param_inDamageReceiverState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAttachParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSAttachParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetAttachParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAttackParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttackHitId);
		P_GET_STRUCT_REF(FSSAttackParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetAttackParam(Z_Param_WorldContextObject,Z_Param_MoveId,Z_Param_AttackHitId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAttackParamListFromMoveId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_TARRAY_REF(FSSAttackParam,Z_Param_Out_outRows);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetAttackParamListFromMoveId(Z_Param_WorldContextObject,Z_Param_MoveId,Z_Param_Out_outRows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAttentionLevelParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionLevel);
		P_GET_STRUCT_REF(FSSAttentionLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetAttentionLevelParam(Z_Param_WorldContextObject,Z_Param_inAttentionLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetAttentionLevelPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObjectint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::GetAttentionLevelPoint(Z_Param_WorldContextObjectint,Z_Param_inAttentionLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetCommonAttackParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSAttackParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetCommonAttackParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetDamageReactionParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSDamageReactionParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetDamageReactionParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetDatabase)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSDatabase**)Z_Param__Result=UELSSInGameParamUtility::GetDatabase(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetEffectParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSEffectParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetEffectParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetFallParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inHeightDiff);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxLandingLevel);
		P_GET_STRUCT_REF(FSSFallParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetFallParam(Z_Param_WorldContextObject,Z_Param_inHeightDiff,Z_Param_inMaxLandingLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetGuardReactionParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSGuardReactionType,Z_Param_inGuardReaction);
		P_GET_STRUCT_REF(FSSGuardReactionParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetGuardReactionParam(Z_Param_WorldContextObject,ESSGuardReactionType(Z_Param_inGuardReaction),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatLevelExp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObjectint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::GetHeatLevelExp(Z_Param_WorldContextObjectint,Z_Param_inHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatLevelParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_GET_STRUCT_REF(FSSHeatLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetHeatLevelParam(Z_Param_WorldContextObject,Z_Param_inHeatLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatMoveSet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_ENUM(ESSMoveCommand,Z_Param_inMoveCommand);
		P_GET_STRUCT_REF(FSSHeatMoveSet,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetHeatMoveSet(Z_Param_WorldContextObject,ESSWrestlerType(Z_Param_inWrestlerType),ESSMoveCommand(Z_Param_inMoveCommand),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatSkillDefaultSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeRow);
		P_GET_STRUCT_REF(FSSHeatSkillDefaultSettings,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetHeatSkillDefaultSettings(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_inSkillTreeRow,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatSkillIconTexture)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UELSSInGameParamUtility::GetHeatSkillIconTexture(Z_Param_WorldContextObject,Z_Param_inHeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatSkillIdAndLevelFromTree)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outHeatSkillId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outConditionHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameParamUtility::GetHeatSkillIdAndLevelFromTree(Z_Param_WorldContextObject,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn,Z_Param_Out_outHeatSkillId,Z_Param_Out_outConditionHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatSkillIdFromTree)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::GetHeatSkillIdFromTree(Z_Param_WorldContextObject,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHeatSkillParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_GET_STRUCT_REF(FSSHeatSkillParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetHeatSkillParam(Z_Param_WorldContextObject,Z_Param_inHeatSkillId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetHitEffectParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSHitEffectType,Z_Param_Type);
		P_GET_STRUCT_REF(FSSHitEffectParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetHitEffectParam(Z_Param_WorldContextObject,ESSHitEffectType(Z_Param_Type),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetItemIdAll)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetItemIdAll(Z_Param_WorldContextObject,Z_Param_Out_outArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetItemParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSItemParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetItemParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetJukeBoxParamFromWrestlerId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDataTable,Z_Param_inTable);
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_STRUCT_REF(FJukeBoxParam,Z_Param_Out_OutRow);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_outRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetJukeBoxParamFromWrestlerId(Z_Param_WorldContextObject,Z_Param_inTable,EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_Out_OutRow,Z_Param_Out_outRowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetMoveParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetMoveParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetMoveParamById)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetMoveParamById(Z_Param_WorldContextObject,Z_Param_MoveId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetRewardAbilityFromStampedeLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inOldLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_inNewLevel);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outAbilityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameParamUtility::GetRewardAbilityFromStampedeLevel(Z_Param_WorldContextObject,Z_Param_inOldLevel,Z_Param_inNewLevel,Z_Param_Out_outAbilityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetShieldParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSShieldParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetShieldParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetSystemMotionParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSSystemMotionParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetSystemMotionParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetTauntMontage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=UELSSInGameParamUtility::GetTauntMontage(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_inWrestlerId),ESSWrestlerType(Z_Param_inWrestlerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetUseItemParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSUseItemParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetUseItemParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetVehicleParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSVehicleParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetVehicleParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetVictoryCutsceneId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSInGameParamUtility::GetVictoryCutsceneId(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_inWrestlerId),ESSWrestlerType(Z_Param_inWrestlerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetVictoryCutsceneParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSVictoryCutsceneParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetVictoryCutsceneParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWeaponGunParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponGunParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWeaponGunParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWeaponMeleeParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponMeleeParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWeaponMeleeParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWeaponParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWeaponParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWeaponThrowParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponThrowParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWeaponThrowParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWeaponTrapParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponTrapParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWeaponTrapParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWrestlerParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_STRUCT_REF(FSSWrestlerParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWrestlerParam(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWrestlerTypeParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWrestlerTypeParam(Z_Param_WorldContextObject,ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameParamUtility::execGetWrestlerTypeResourceParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeResourceParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameParamUtility::GetWrestlerTypeResourceParam(Z_Param_WorldContextObject,ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	void UELSSInGameParamUtility::StaticRegisterNativesUELSSInGameParamUtility()
	{
		UClass* Class = UELSSInGameParamUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcAttentionLevelFromPoint", &UELSSInGameParamUtility::execCalcAttentionLevelFromPoint },
			{ "CalcGuardReactionType", &UELSSInGameParamUtility::execCalcGuardReactionType },
			{ "CalcHeatLevelFromExp", &UELSSInGameParamUtility::execCalcHeatLevelFromExp },
			{ "CalcResultAEWCash", &UELSSInGameParamUtility::execCalcResultAEWCash },
			{ "CalcResultGradeFromAttentionPoint", &UELSSInGameParamUtility::execCalcResultGradeFromAttentionPoint },
			{ "CalcResultGradeFromFeverCount", &UELSSInGameParamUtility::execCalcResultGradeFromFeverCount },
			{ "CalcResultGradeFromKillCount", &UELSSInGameParamUtility::execCalcResultGradeFromKillCount },
			{ "CalcResultStarGrade", &UELSSInGameParamUtility::execCalcResultStarGrade },
			{ "GetAbilityCalcMethod", &UELSSInGameParamUtility::execGetAbilityCalcMethod },
			{ "GetAbilityKindParam", &UELSSInGameParamUtility::execGetAbilityKindParam },
			{ "GetAbilityParam", &UELSSInGameParamUtility::execGetAbilityParam },
			{ "GetArmorType", &UELSSInGameParamUtility::execGetArmorType },
			{ "GetAttachParam", &UELSSInGameParamUtility::execGetAttachParam },
			{ "GetAttackParam", &UELSSInGameParamUtility::execGetAttackParam },
			{ "GetAttackParamListFromMoveId", &UELSSInGameParamUtility::execGetAttackParamListFromMoveId },
			{ "GetAttentionLevelParam", &UELSSInGameParamUtility::execGetAttentionLevelParam },
			{ "GetAttentionLevelPoint", &UELSSInGameParamUtility::execGetAttentionLevelPoint },
			{ "GetCommonAttackParam", &UELSSInGameParamUtility::execGetCommonAttackParam },
			{ "GetDamageReactionParam", &UELSSInGameParamUtility::execGetDamageReactionParam },
			{ "GetDatabase", &UELSSInGameParamUtility::execGetDatabase },
			{ "GetEffectParam", &UELSSInGameParamUtility::execGetEffectParam },
			{ "GetFallParam", &UELSSInGameParamUtility::execGetFallParam },
			{ "GetGuardReactionParam", &UELSSInGameParamUtility::execGetGuardReactionParam },
			{ "GetHeatLevelExp", &UELSSInGameParamUtility::execGetHeatLevelExp },
			{ "GetHeatLevelParam", &UELSSInGameParamUtility::execGetHeatLevelParam },
			{ "GetHeatMoveSet", &UELSSInGameParamUtility::execGetHeatMoveSet },
			{ "GetHeatSkillDefaultSettings", &UELSSInGameParamUtility::execGetHeatSkillDefaultSettings },
			{ "GetHeatSkillIconTexture", &UELSSInGameParamUtility::execGetHeatSkillIconTexture },
			{ "GetHeatSkillIdAndLevelFromTree", &UELSSInGameParamUtility::execGetHeatSkillIdAndLevelFromTree },
			{ "GetHeatSkillIdFromTree", &UELSSInGameParamUtility::execGetHeatSkillIdFromTree },
			{ "GetHeatSkillParam", &UELSSInGameParamUtility::execGetHeatSkillParam },
			{ "GetHitEffectParam", &UELSSInGameParamUtility::execGetHitEffectParam },
			{ "GetItemIdAll", &UELSSInGameParamUtility::execGetItemIdAll },
			{ "GetItemParam", &UELSSInGameParamUtility::execGetItemParam },
			{ "GetJukeBoxParamFromWrestlerId", &UELSSInGameParamUtility::execGetJukeBoxParamFromWrestlerId },
			{ "GetMoveParam", &UELSSInGameParamUtility::execGetMoveParam },
			{ "GetMoveParamById", &UELSSInGameParamUtility::execGetMoveParamById },
			{ "GetRewardAbilityFromStampedeLevel", &UELSSInGameParamUtility::execGetRewardAbilityFromStampedeLevel },
			{ "GetShieldParam", &UELSSInGameParamUtility::execGetShieldParam },
			{ "GetSystemMotionParam", &UELSSInGameParamUtility::execGetSystemMotionParam },
			{ "GetTauntMontage", &UELSSInGameParamUtility::execGetTauntMontage },
			{ "GetUseItemParam", &UELSSInGameParamUtility::execGetUseItemParam },
			{ "GetVehicleParam", &UELSSInGameParamUtility::execGetVehicleParam },
			{ "GetVictoryCutsceneId", &UELSSInGameParamUtility::execGetVictoryCutsceneId },
			{ "GetVictoryCutsceneParam", &UELSSInGameParamUtility::execGetVictoryCutsceneParam },
			{ "GetWeaponGunParam", &UELSSInGameParamUtility::execGetWeaponGunParam },
			{ "GetWeaponMeleeParam", &UELSSInGameParamUtility::execGetWeaponMeleeParam },
			{ "GetWeaponParam", &UELSSInGameParamUtility::execGetWeaponParam },
			{ "GetWeaponThrowParam", &UELSSInGameParamUtility::execGetWeaponThrowParam },
			{ "GetWeaponTrapParam", &UELSSInGameParamUtility::execGetWeaponTrapParam },
			{ "GetWrestlerParam", &UELSSInGameParamUtility::execGetWrestlerParam },
			{ "GetWrestlerTypeParam", &UELSSInGameParamUtility::execGetWrestlerTypeParam },
			{ "GetWrestlerTypeResourceParam", &UELSSInGameParamUtility::execGetWrestlerTypeResourceParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics
	{
		struct ELSSInGameParamUtility_eventCalcAttentionLevelFromPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 inPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcAttentionLevelFromPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_inPoint = { "inPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcAttentionLevelFromPoint_Parms, inPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcAttentionLevelFromPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_inPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcAttentionLevelFromPoint", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcAttentionLevelFromPoint_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics
	{
		struct ELSSInGameParamUtility_eventCalcGuardReactionType_Parms
		{
			const UObject* WorldContextObject;
			ESSGuardBreakerType inGuardBreakerType;
			int32 inGuardLevel;
			ESSGuardReactionType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcGuardReactionType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType = { "inGuardBreakerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcGuardReactionType_Parms, inGuardBreakerType), Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_inGuardLevel = { "inGuardLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcGuardReactionType_Parms, inGuardLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcGuardReactionType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_inGuardBreakerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_inGuardLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcGuardReactionType", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcGuardReactionType_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics
	{
		struct ELSSInGameParamUtility_eventCalcHeatLevelFromExp_Parms
		{
			const UObject* WorldContextObject;
			int32 inExp;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inExp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcHeatLevelFromExp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_inExp = { "inExp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcHeatLevelFromExp_Parms, inExp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcHeatLevelFromExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_inExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcHeatLevelFromExp", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcHeatLevelFromExp_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics
	{
		struct ELSSInGameParamUtility_eventCalcResultAEWCash_Parms
		{
			const UObject* WorldContextObject;
			int32 inScore;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inScore;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultAEWCash_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_inScore = { "inScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultAEWCash_Parms, inScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultAEWCash_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_inScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcResultAEWCash", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcResultAEWCash_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics
	{
		struct ELSSInGameParamUtility_eventCalcResultGradeFromAttentionPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 inAttentionPoint;
			ESSResultGradeABC ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromAttentionPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_inAttentionPoint = { "inAttentionPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromAttentionPoint_Parms, inAttentionPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromAttentionPoint_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_inAttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcResultGradeFromAttentionPoint", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcResultGradeFromAttentionPoint_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics
	{
		struct ELSSInGameParamUtility_eventCalcResultGradeFromFeverCount_Parms
		{
			const UObject* WorldContextObject;
			int32 inFeverCount;
			ESSResultGradeABC ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFeverCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromFeverCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_inFeverCount = { "inFeverCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromFeverCount_Parms, inFeverCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromFeverCount_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_inFeverCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcResultGradeFromFeverCount", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcResultGradeFromFeverCount_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics
	{
		struct ELSSInGameParamUtility_eventCalcResultGradeFromKillCount_Parms
		{
			const UObject* WorldContextObject;
			int32 inKillCount;
			ESSResultGradeABC ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inKillCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromKillCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_inKillCount = { "inKillCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromKillCount_Parms, inKillCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultGradeFromKillCount_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSResultGradeABC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_inKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcResultGradeFromKillCount", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcResultGradeFromKillCount_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics
	{
		struct ELSSInGameParamUtility_eventCalcResultStarGrade_Parms
		{
			const UObject* WorldContextObject;
			int32 inScore;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inScore;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultStarGrade_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_inScore = { "inScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultStarGrade_Parms, inScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventCalcResultStarGrade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_inScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "CalcResultStarGrade", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventCalcResultStarGrade_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics
	{
		struct ELSSInGameParamUtility_eventGetAbilityCalcMethod_Parms
		{
			const UObject* WorldContextObject;
			ESSAbilityKind Kind;
			ESSAbilityCalcMethod ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityCalcMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityCalcMethod_Parms, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityCalcMethod_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAbilityCalcMethod", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAbilityCalcMethod_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetAbilityKindParam_Parms
		{
			const UObject* WorldContextObject;
			ESSAbilityKind Kind;
			FSSAbilityKindParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityKindParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityKindParam_Parms, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityKindParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityKindParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetAbilityKindParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetAbilityKindParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAbilityKindParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAbilityKindParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetAbilityParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSAbilityParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAbilityParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetAbilityParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetAbilityParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAbilityParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAbilityParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics
	{
		struct ELSSInGameParamUtility_eventGetArmorType_Parms
		{
			const UObject* WorldContextObject;
			ESSDamageReason inDamageReason;
			ESSDamageReceiverState inDamageReceiverState;
			ESSArmorType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inDamageReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inDamageReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inDamageReceiverState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inDamageReceiverState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetArmorType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReason = { "inDamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetArmorType_Parms, inDamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReceiverState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReceiverState = { "inDamageReceiverState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetArmorType_Parms, inDamageReceiverState), Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetArmorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReceiverState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_inDamageReceiverState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetArmorType", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetArmorType_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetAttachParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSAttachParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttachParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttachParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttachParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttachParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetAttachParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetAttachParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAttachParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAttachParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetAttackParam_Parms
		{
			const UObject* WorldContextObject;
			int32 MoveId;
			int32 AttackHitId;
			FSSAttackParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackHitId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParam_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParam_Parms, AttackHitId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetAttackParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetAttackParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAttackParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAttackParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics
	{
		struct ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms
		{
			const UObject* WorldContextObject;
			int32 MoveId;
			TArray<FSSAttackParam> outRows;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outRows_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outRows;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_outRows_Inner = { "outRows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_outRows = { "outRows", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms, outRows), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_outRows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_outRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAttackParamListFromMoveId", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAttackParamListFromMoveId_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms
		{
			const UObject* WorldContextObject;
			int32 inAttentionLevel;
			FSSAttentionLevelParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionLevel;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttentionLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAttentionLevelParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAttentionLevelParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics
	{
		struct ELSSInGameParamUtility_eventGetAttentionLevelPoint_Parms
		{
			const UObject* WorldContextObjectint;
			int32 inAttentionLevel;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObjectint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObjectint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_WorldContextObjectint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_WorldContextObjectint = { "WorldContextObjectint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttentionLevelPoint_Parms, WorldContextObjectint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_WorldContextObjectint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_WorldContextObjectint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttentionLevelPoint_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetAttentionLevelPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_WorldContextObjectint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObjectint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetAttentionLevelPoint", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetAttentionLevelPoint_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetCommonAttackParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSAttackParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetCommonAttackParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetCommonAttackParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetCommonAttackParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetCommonAttackParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetCommonAttackParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetCommonAttackParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetCommonAttackParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetDamageReactionParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSDamageReactionParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetDamageReactionParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetDamageReactionParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetDamageReactionParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSDamageReactionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetDamageReactionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetDamageReactionParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetDamageReactionParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetDamageReactionParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics
	{
		struct ELSSInGameParamUtility_eventGetDatabase_Parms
		{
			const UObject* WorldContextObject;
			AELSSDatabase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetDatabase_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetDatabase_Parms, ReturnValue), Z_Construct_UClass_AELSSDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetDatabase", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetDatabase_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetEffectParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSEffectParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetEffectParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetEffectParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetEffectParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSEffectParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetEffectParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetEffectParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetEffectParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetEffectParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetFallParam_Parms
		{
			const UObject* WorldContextObject;
			float inHeightDiff;
			int32 inMaxLandingLevel;
			FSSFallParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inHeightDiff;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxLandingLevel;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetFallParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_inHeightDiff = { "inHeightDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetFallParam_Parms, inHeightDiff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_inMaxLandingLevel = { "inMaxLandingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetFallParam_Parms, inMaxLandingLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetFallParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSFallParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetFallParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetFallParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_inHeightDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_inMaxLandingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetFallParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetFallParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetGuardReactionParam_Parms
		{
			const UObject* WorldContextObject;
			ESSGuardReactionType inGuardReaction;
			FSSGuardReactionParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetGuardReactionParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_inGuardReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_inGuardReaction = { "inGuardReaction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetGuardReactionParam_Parms, inGuardReaction), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetGuardReactionParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSGuardReactionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetGuardReactionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetGuardReactionParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_inGuardReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_inGuardReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetGuardReactionParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetGuardReactionParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatLevelExp_Parms
		{
			const UObject* WorldContextObjectint;
			int32 inHeatLevel;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObjectint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObjectint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_WorldContextObjectint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_WorldContextObjectint = { "WorldContextObjectint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatLevelExp_Parms, WorldContextObjectint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_WorldContextObjectint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_WorldContextObjectint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatLevelExp_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatLevelExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_WorldContextObjectint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObjectint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatLevelExp", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatLevelExp_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatLevelParam_Parms
		{
			const UObject* WorldContextObject;
			int32 inHeatLevel;
			FSSHeatLevelParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatLevelParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatLevelParam_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetHeatLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetHeatLevelParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatLevelParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatLevelParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatMoveSet_Parms
		{
			const UObject* WorldContextObject;
			ESSWrestlerType inWrestlerType;
			ESSMoveCommand inMoveCommand;
			FSSHeatMoveSet OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inMoveCommand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inMoveCommand;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatMoveSet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatMoveSet_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inMoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inMoveCommand = { "inMoveCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatMoveSet_Parms, inMoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatMoveSet_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatMoveSet, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetHeatMoveSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetHeatMoveSet_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inMoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_inMoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatMoveSet", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatMoveSet_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			int32 inSkillTreeRow;
			FSSHeatSkillDefaultSettings OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillTreeRow;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_inSkillTreeRow = { "inSkillTreeRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms, inSkillTreeRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_inSkillTreeRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatSkillDefaultSettings", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatSkillDefaultSettings_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatSkillIconTexture_Parms
		{
			const UObject* WorldContextObject;
			int32 inHeatSkillId;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatSkillId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIconTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIconTexture_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_inHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatSkillIconTexture", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatSkillIconTexture_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms
		{
			const UObject* WorldContextObject;
			ESSHeatSkillCategory inCategory;
			int32 inRow;
			int32 inColumn;
			int32 outHeatSkillId;
			int32 outConditionHeatLevel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inColumn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outHeatSkillId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outConditionHeatLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId = { "outHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms, outHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel = { "outConditionHeatLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms, outConditionHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatSkillIdAndLevelFromTree", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatSkillIdAndLevelFromTree_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms
		{
			const UObject* WorldContextObject;
			ESSHeatSkillCategory inCategory;
			int32 inRow;
			int32 inColumn;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRow;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inColumn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatSkillIdFromTree", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatSkillIdFromTree_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetHeatSkillParam_Parms
		{
			const UObject* WorldContextObject;
			int32 inHeatSkillId;
			FSSHeatSkillParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatSkillId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillParam_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHeatSkillParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetHeatSkillParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetHeatSkillParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_inHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHeatSkillParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHeatSkillParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetHitEffectParam_Parms
		{
			const UObject* WorldContextObject;
			ESSHitEffectType Type;
			FSSHitEffectParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHitEffectParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHitEffectParam_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSHitEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetHitEffectParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHitEffectParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetHitEffectParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetHitEffectParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetHitEffectParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetHitEffectParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics
	{
		struct ELSSInGameParamUtility_eventGetItemIdAll_Parms
		{
			const UObject* WorldContextObject;
			TArray<int32> outArray;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetItemIdAll_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_outArray_Inner = { "outArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_outArray = { "outArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetItemIdAll_Parms, outArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetItemIdAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetItemIdAll_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_outArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_outArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetItemIdAll", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetItemIdAll_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetItemParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSItemParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetItemParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetItemParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetItemParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSItemParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetItemParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetItemParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetItemParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetItemParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics
	{
		struct ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms
		{
			const UObject* WorldContextObject;
			UDataTable* inTable;
			EWrestlerID_N inWrestlerId;
			FJukeBoxParam OutRow;
			FName outRowName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_outRowName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_inTable = { "inTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms, inTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms, OutRow), Z_Construct_UScriptStruct_FJukeBoxParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_outRowName = { "outRowName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms, outRowName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_inTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_outRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetJukeBoxParamFromWrestlerId", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetJukeBoxParamFromWrestlerId_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetMoveParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSMoveParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetMoveParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetMoveParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetMoveParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetMoveParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetMoveParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetMoveParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetMoveParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics
	{
		struct ELSSInGameParamUtility_eventGetMoveParamById_Parms
		{
			const UObject* WorldContextObject;
			int32 MoveId;
			FSSMoveParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetMoveParamById_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetMoveParamById_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetMoveParamById_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetMoveParamById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetMoveParamById_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetMoveParamById", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetMoveParamById_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics
	{
		struct ELSSInGameParamUtility_eventGetRewardAbilityFromStampedeLevel_Parms
		{
			const UObject* WorldContextObject;
			int32 inOldLevel;
			int32 inNewLevel;
			TArray<int32> outAbilityId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inOldLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNewLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outAbilityId_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outAbilityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetRewardAbilityFromStampedeLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inOldLevel = { "inOldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetRewardAbilityFromStampedeLevel_Parms, inOldLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inNewLevel = { "inNewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetRewardAbilityFromStampedeLevel_Parms, inNewLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId_Inner = { "outAbilityId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId = { "outAbilityId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetRewardAbilityFromStampedeLevel_Parms, outAbilityId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inOldLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inNewLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetRewardAbilityFromStampedeLevel", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetRewardAbilityFromStampedeLevel_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetShieldParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSShieldParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetShieldParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetShieldParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetShieldParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSShieldParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetShieldParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetShieldParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetShieldParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetShieldParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetSystemMotionParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSSystemMotionParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetSystemMotionParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetSystemMotionParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetSystemMotionParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSSystemMotionParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetSystemMotionParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetSystemMotionParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetSystemMotionParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetSystemMotionParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics
	{
		struct ELSSInGameParamUtility_eventGetTauntMontage_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N inWrestlerId;
			ESSWrestlerType inWrestlerType;
			UAnimMontage* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetTauntMontage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetTauntMontage_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetTauntMontage_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetTauntMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetTauntMontage", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetTauntMontage_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetUseItemParam_Parms
		{
			const UObject* WorldContextObject;
			FName RowName;
			FSSUseItemParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetUseItemParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetUseItemParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetUseItemParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSUseItemParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetUseItemParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetUseItemParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetUseItemParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetUseItemParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetVehicleParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSVehicleParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVehicleParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVehicleParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVehicleParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSVehicleParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetVehicleParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetVehicleParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetVehicleParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetVehicleParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics
	{
		struct ELSSInGameParamUtility_eventGetVictoryCutsceneId_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N inWrestlerId;
			ESSWrestlerType inWrestlerType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneId_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneId_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetVictoryCutsceneId", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetVictoryCutsceneId_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSVictoryCutsceneParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSVictoryCutsceneParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetVictoryCutsceneParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetVictoryCutsceneParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWeaponGunParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSWeaponGunParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponGunParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponGunParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponGunParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponGunParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWeaponGunParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWeaponGunParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWeaponGunParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWeaponGunParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSWeaponMeleeParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponMeleeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWeaponMeleeParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWeaponMeleeParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWeaponParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSWeaponParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWeaponParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWeaponParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWeaponParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWeaponParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSWeaponThrowParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponThrowParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWeaponThrowParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWeaponThrowParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSWeaponTrapParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponTrapParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWeaponTrapParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWeaponTrapParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWrestlerParam_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N inWrestlerId;
			FSSWrestlerParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerParam_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWrestlerParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWrestlerParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWrestlerParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWrestlerParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms
		{
			const UObject* WorldContextObject;
			ESSWrestlerType inWrestlerType;
			FSSWrestlerTypeParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerType;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWrestlerTypeParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWrestlerTypeParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics
	{
		struct ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms
		{
			const UObject* WorldContextObject;
			ESSWrestlerType inWrestlerType;
			FSSWrestlerTypeResourceParam OutRow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerType;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms), &Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameParamUtility, nullptr, "GetWrestlerTypeResourceParam", nullptr, nullptr, sizeof(ELSSInGameParamUtility_eventGetWrestlerTypeResourceParam_Parms), Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSInGameParamUtility_NoRegister()
	{
		return UELSSInGameParamUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInGameParamUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInGameParamUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSInGameParamUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcAttentionLevelFromPoint, "CalcAttentionLevelFromPoint" }, // 3609357507
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcGuardReactionType, "CalcGuardReactionType" }, // 1022333979
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcHeatLevelFromExp, "CalcHeatLevelFromExp" }, // 303202086
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultAEWCash, "CalcResultAEWCash" }, // 3270048806
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromAttentionPoint, "CalcResultGradeFromAttentionPoint" }, // 1621517910
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromFeverCount, "CalcResultGradeFromFeverCount" }, // 3710656951
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultGradeFromKillCount, "CalcResultGradeFromKillCount" }, // 1471056243
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_CalcResultStarGrade, "CalcResultStarGrade" }, // 3688201459
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityCalcMethod, "GetAbilityCalcMethod" }, // 3246867402
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityKindParam, "GetAbilityKindParam" }, // 604906303
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAbilityParam, "GetAbilityParam" }, // 83168445
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetArmorType, "GetArmorType" }, // 812330560
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttachParam, "GetAttachParam" }, // 2467889207
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParam, "GetAttackParam" }, // 1204105759
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttackParamListFromMoveId, "GetAttackParamListFromMoveId" }, // 60497080
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelParam, "GetAttentionLevelParam" }, // 3963294484
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetAttentionLevelPoint, "GetAttentionLevelPoint" }, // 3511051374
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetCommonAttackParam, "GetCommonAttackParam" }, // 4043838825
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetDamageReactionParam, "GetDamageReactionParam" }, // 422135148
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetDatabase, "GetDatabase" }, // 220776096
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetEffectParam, "GetEffectParam" }, // 4202011175
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetFallParam, "GetFallParam" }, // 1849670158
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetGuardReactionParam, "GetGuardReactionParam" }, // 786948562
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelExp, "GetHeatLevelExp" }, // 711429618
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatLevelParam, "GetHeatLevelParam" }, // 1075129692
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatMoveSet, "GetHeatMoveSet" }, // 1725127863
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillDefaultSettings, "GetHeatSkillDefaultSettings" }, // 1786923452
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIconTexture, "GetHeatSkillIconTexture" }, // 2113776619
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdAndLevelFromTree, "GetHeatSkillIdAndLevelFromTree" }, // 487852846
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillIdFromTree, "GetHeatSkillIdFromTree" }, // 845774056
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHeatSkillParam, "GetHeatSkillParam" }, // 1250754236
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetHitEffectParam, "GetHitEffectParam" }, // 2369606285
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetItemIdAll, "GetItemIdAll" }, // 2761686403
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetItemParam, "GetItemParam" }, // 2170954774
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetJukeBoxParamFromWrestlerId, "GetJukeBoxParamFromWrestlerId" }, // 3263740276
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParam, "GetMoveParam" }, // 2889028834
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetMoveParamById, "GetMoveParamById" }, // 1325672123
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetRewardAbilityFromStampedeLevel, "GetRewardAbilityFromStampedeLevel" }, // 2842339557
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetShieldParam, "GetShieldParam" }, // 1472296566
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetSystemMotionParam, "GetSystemMotionParam" }, // 1634488718
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetTauntMontage, "GetTauntMontage" }, // 2137500762
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetUseItemParam, "GetUseItemParam" }, // 995032545
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetVehicleParam, "GetVehicleParam" }, // 2075017148
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneId, "GetVictoryCutsceneId" }, // 4066905888
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetVictoryCutsceneParam, "GetVictoryCutsceneParam" }, // 955458021
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponGunParam, "GetWeaponGunParam" }, // 1852034625
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponMeleeParam, "GetWeaponMeleeParam" }, // 2321786756
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponParam, "GetWeaponParam" }, // 1340050553
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponThrowParam, "GetWeaponThrowParam" }, // 3094841615
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWeaponTrapParam, "GetWeaponTrapParam" }, // 1848069921
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerParam, "GetWrestlerParam" }, // 173529111
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeParam, "GetWrestlerTypeParam" }, // 3613734906
		{ &Z_Construct_UFunction_UELSSInGameParamUtility_GetWrestlerTypeResourceParam, "GetWrestlerTypeResourceParam" }, // 3128011056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInGameParamUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSInGameParamUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInGameParamUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInGameParamUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSInGameParamUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInGameParamUtility_Statics::ClassParams = {
		&UELSSInGameParamUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSInGameParamUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInGameParamUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInGameParamUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInGameParamUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInGameParamUtility, 915812917);
	template<> ABP_200508_API UClass* StaticClass<UELSSInGameParamUtility>()
	{
		return UELSSInGameParamUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInGameParamUtility(Z_Construct_UClass_UELSSInGameParamUtility, &UELSSInGameParamUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInGameParamUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInGameParamUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
