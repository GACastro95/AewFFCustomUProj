// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCommonParamUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCommonParamUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCommonParamUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCommonParamUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityKindParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSArmorType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionAdjustParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterAdjust();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCommonDatabase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameRuleParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatMoveSet();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerRankRange();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankRangeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundAdjustParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponCommonParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSSCommonParamUtility::execCalcSSAttentionLevelFromPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::CalcSSAttentionLevelFromPoint(Z_Param_WorldContextObject,Z_Param_inPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execCalcSSHeatLevelFromExp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::CalcSSHeatLevelFromExp(Z_Param_WorldContextObject,Z_Param_inExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execCalcSSPlayerRankDisconnectPenalty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FYGS2SSPlayerData,Z_Param_Out_InParam);
		P_GET_UBOOL(Z_Param_inIllegalCheck);
		P_GET_STRUCT_REF(FYGS2SSPlayerData,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::CalcSSPlayerRankDisconnectPenalty(Z_Param_WorldContextObject,Z_Param_Out_InParam,Z_Param_inIllegalCheck,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execCalcSSPlayerRankUpdate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inCurrentRankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAddPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::CalcSSPlayerRankUpdate(Z_Param_WorldContextObject,Z_Param_inCurrentRankPoint,Z_Param_inAddPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execCalcSSStampedeLevelFromExp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::CalcSSStampedeLevelFromExp(Z_Param_WorldContextObject,Z_Param_inExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAbilityCalcMethod)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSAbilityKind,Z_Param_Kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSAbilityCalcMethod*)Z_Param__Result=P_THIS->GetSSAbilityCalcMethod(Z_Param_WorldContextObject,ESSAbilityKind(Z_Param_Kind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAbilityIconTexture)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilityId);
		P_GET_UBOOL(Z_Param_inWithOutline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UELSSCommonParamUtility::GetSSAbilityIconTexture(Z_Param_WorldContextObject,Z_Param_inAbilityId,Z_Param_inWithOutline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAbilityKindParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSAbilityKind,Z_Param_Kind);
		P_GET_STRUCT_REF(FSSAbilityKindParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSAbilityKindParam(Z_Param_WorldContextObject,ESSAbilityKind(Z_Param_Kind),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAbilityParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSAbilityParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSAbilityParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSArmorType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSDamageReason,Z_Param_inDamageReason);
		P_GET_ENUM(ESSDamageReceiverState,Z_Param_inDamageReceiverState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSArmorType*)Z_Param__Result=UELSSCommonParamUtility::GetSSArmorType(Z_Param_WorldContextObject,ESSDamageReason(Z_Param_inDamageReason),ESSDamageReceiverState(Z_Param_inDamageReceiverState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAttackParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttackHitId);
		P_GET_STRUCT_REF(FSSAttackParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSAttackParam(Z_Param_WorldContextObject,Z_Param_MoveId,Z_Param_AttackHitId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAttackParamListFromMoveId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_TARRAY_REF(FSSAttackParam,Z_Param_Out_outRows);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSAttackParamListFromMoveId(Z_Param_WorldContextObject,Z_Param_MoveId,Z_Param_Out_outRows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAttentionAdjustParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSSAttentionAdjustParam,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSAttentionAdjustParam(Z_Param_WorldContextObject,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAttentionLevelParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionLevel);
		P_GET_STRUCT_REF(FSSAttentionLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSAttentionLevelParam(Z_Param_WorldContextObject,Z_Param_inAttentionLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSAttentionLevelPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSAttentionLevelPoint(Z_Param_WorldContextObject,Z_Param_inAttentionLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSCharacterAdjustParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSSCharacterAdjust,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSCharacterAdjustParam(Z_Param_WorldContextObject,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSCommonAttackParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSAttackParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSCommonAttackParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSCommonDatabase)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSCommonDatabase**)Z_Param__Result=UELSSCommonParamUtility::GetSSCommonDatabase(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSGameRuleParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSSGameRuleParam,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSGameRuleParam(Z_Param_WorldContextObject,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatLevelExp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatLevelExp(Z_Param_WorldContextObject,Z_Param_inHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatLevelParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_GET_STRUCT_REF(FSSHeatLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatLevelParam(Z_Param_WorldContextObject,Z_Param_inHeatLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatMoveSet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_ENUM(ESSMoveCommand,Z_Param_inMoveCommand);
		P_GET_STRUCT_REF(FSSHeatMoveSet,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatMoveSet(Z_Param_WorldContextObject,ESSWrestlerType(Z_Param_inWrestlerType),ESSMoveCommand(Z_Param_inMoveCommand),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatSkillDefaultSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeRow);
		P_GET_STRUCT_REF(FSSHeatSkillDefaultSettings,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatSkillDefaultSettings(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_inSkillTreeRow,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatSkillIconTexture)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatSkillIconTexture(Z_Param_WorldContextObject,Z_Param_inHeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatSkillIdAndLevelFromTree)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outHeatSkillId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outConditionHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSCommonParamUtility::GetSSHeatSkillIdAndLevelFromTree(Z_Param_WorldContextObject,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn,Z_Param_Out_outHeatSkillId,Z_Param_Out_outConditionHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatSkillIdFromTree)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatSkillIdFromTree(Z_Param_WorldContextObject,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSHeatSkillParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_GET_STRUCT_REF(FSSHeatSkillParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSHeatSkillParam(Z_Param_WorldContextObject,Z_Param_inHeatSkillId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSItemIdAll)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSItemIdAll(Z_Param_WorldContextObject,Z_Param_Out_outArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSItemParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSItemParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSItemParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSLoadoutPresetDefaultParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetNo);
		P_GET_STRUCT_REF(FSSLoadoutPresetDefaultParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSLoadoutPresetDefaultParam(Z_Param_WorldContextObject,Z_Param_inPresetNo,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSMoveParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSMoveParam(Z_Param_WorldContextObject,Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSMoveParamById)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSMoveParamById(Z_Param_WorldContextObject,Z_Param_MoveId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankDisconnectPenalty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankDisconnectPenalty(Z_Param_WorldContextObject,Z_Param_inPlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankIllegalPenalty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankIllegalPenalty(Z_Param_WorldContextObject,Z_Param_inPlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankMatchEntryCost)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankMatchEntryCost(Z_Param_WorldContextObject,Z_Param_inPlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRankPoint);
		P_GET_STRUCT_REF(FSSPlayerRankParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankParam(Z_Param_WorldContextObject,Z_Param_inRankPoint,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankParamAndNextInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRankPoint);
		P_GET_STRUCT_REF(FSSPlayerRankParam,Z_Param_Out_OutParam);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outExpToNext);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outExpRateToNext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankParamAndNextInfo(Z_Param_WorldContextObject,Z_Param_inRankPoint,Z_Param_Out_OutParam,Z_Param_Out_outExpToNext,Z_Param_Out_outExpRateToNext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankRangeParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSPlayerRankRange,Z_Param_InRange);
		P_GET_STRUCT_REF(FSSPlayerRankRangeParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankRangeParam(Z_Param_WorldContextObject,ESSPlayerRankRange(Z_Param_InRange),Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankRangeParamByRankPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRankPoint);
		P_GET_STRUCT_REF(FSSPlayerRankRangeParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankRangeParamByRankPoint(Z_Param_WorldContextObject,Z_Param_inRankPoint,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSPlayerRankResultBasePoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSCommonParamUtility::GetSSPlayerRankResultBasePoint(Z_Param_WorldContextObject,Z_Param_inPlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSRewardAbilityFromStampedeLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inOldLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_inNewLevel);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outAbilityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSSRewardAbilityFromStampedeLevel(Z_Param_WorldContextObject,Z_Param_inOldLevel,Z_Param_inNewLevel,Z_Param_Out_outAbilityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSRoundAdjustParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSSRoundAdjustParam,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSRoundAdjustParam(Z_Param_WorldContextObject,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSWeaponCommonParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponCommonParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSWeaponCommonParam(Z_Param_WorldContextObject,Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSWrestlerParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_STRUCT_REF(FSSWrestlerParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSWrestlerParam(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSWrestlerTypeParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSWrestlerTypeParam(Z_Param_WorldContextObject,ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonParamUtility::execGetSSWrestlerTypeResourceParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeResourceParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSCommonParamUtility::GetSSWrestlerTypeResourceParam(Z_Param_WorldContextObject,ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	void UELSSCommonParamUtility::StaticRegisterNativesUELSSCommonParamUtility()
	{
		UClass* Class = UELSSCommonParamUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcSSAttentionLevelFromPoint", &UELSSCommonParamUtility::execCalcSSAttentionLevelFromPoint },
			{ "CalcSSHeatLevelFromExp", &UELSSCommonParamUtility::execCalcSSHeatLevelFromExp },
			{ "CalcSSPlayerRankDisconnectPenalty", &UELSSCommonParamUtility::execCalcSSPlayerRankDisconnectPenalty },
			{ "CalcSSPlayerRankUpdate", &UELSSCommonParamUtility::execCalcSSPlayerRankUpdate },
			{ "CalcSSStampedeLevelFromExp", &UELSSCommonParamUtility::execCalcSSStampedeLevelFromExp },
			{ "GetSSAbilityCalcMethod", &UELSSCommonParamUtility::execGetSSAbilityCalcMethod },
			{ "GetSSAbilityIconTexture", &UELSSCommonParamUtility::execGetSSAbilityIconTexture },
			{ "GetSSAbilityKindParam", &UELSSCommonParamUtility::execGetSSAbilityKindParam },
			{ "GetSSAbilityParam", &UELSSCommonParamUtility::execGetSSAbilityParam },
			{ "GetSSArmorType", &UELSSCommonParamUtility::execGetSSArmorType },
			{ "GetSSAttackParam", &UELSSCommonParamUtility::execGetSSAttackParam },
			{ "GetSSAttackParamListFromMoveId", &UELSSCommonParamUtility::execGetSSAttackParamListFromMoveId },
			{ "GetSSAttentionAdjustParam", &UELSSCommonParamUtility::execGetSSAttentionAdjustParam },
			{ "GetSSAttentionLevelParam", &UELSSCommonParamUtility::execGetSSAttentionLevelParam },
			{ "GetSSAttentionLevelPoint", &UELSSCommonParamUtility::execGetSSAttentionLevelPoint },
			{ "GetSSCharacterAdjustParam", &UELSSCommonParamUtility::execGetSSCharacterAdjustParam },
			{ "GetSSCommonAttackParam", &UELSSCommonParamUtility::execGetSSCommonAttackParam },
			{ "GetSSCommonDatabase", &UELSSCommonParamUtility::execGetSSCommonDatabase },
			{ "GetSSGameRuleParam", &UELSSCommonParamUtility::execGetSSGameRuleParam },
			{ "GetSSHeatLevelExp", &UELSSCommonParamUtility::execGetSSHeatLevelExp },
			{ "GetSSHeatLevelParam", &UELSSCommonParamUtility::execGetSSHeatLevelParam },
			{ "GetSSHeatMoveSet", &UELSSCommonParamUtility::execGetSSHeatMoveSet },
			{ "GetSSHeatSkillDefaultSettings", &UELSSCommonParamUtility::execGetSSHeatSkillDefaultSettings },
			{ "GetSSHeatSkillIconTexture", &UELSSCommonParamUtility::execGetSSHeatSkillIconTexture },
			{ "GetSSHeatSkillIdAndLevelFromTree", &UELSSCommonParamUtility::execGetSSHeatSkillIdAndLevelFromTree },
			{ "GetSSHeatSkillIdFromTree", &UELSSCommonParamUtility::execGetSSHeatSkillIdFromTree },
			{ "GetSSHeatSkillParam", &UELSSCommonParamUtility::execGetSSHeatSkillParam },
			{ "GetSSItemIdAll", &UELSSCommonParamUtility::execGetSSItemIdAll },
			{ "GetSSItemParam", &UELSSCommonParamUtility::execGetSSItemParam },
			{ "GetSSLoadoutPresetDefaultParam", &UELSSCommonParamUtility::execGetSSLoadoutPresetDefaultParam },
			{ "GetSSMoveParam", &UELSSCommonParamUtility::execGetSSMoveParam },
			{ "GetSSMoveParamById", &UELSSCommonParamUtility::execGetSSMoveParamById },
			{ "GetSSPlayerRankDisconnectPenalty", &UELSSCommonParamUtility::execGetSSPlayerRankDisconnectPenalty },
			{ "GetSSPlayerRankIllegalPenalty", &UELSSCommonParamUtility::execGetSSPlayerRankIllegalPenalty },
			{ "GetSSPlayerRankMatchEntryCost", &UELSSCommonParamUtility::execGetSSPlayerRankMatchEntryCost },
			{ "GetSSPlayerRankParam", &UELSSCommonParamUtility::execGetSSPlayerRankParam },
			{ "GetSSPlayerRankParamAndNextInfo", &UELSSCommonParamUtility::execGetSSPlayerRankParamAndNextInfo },
			{ "GetSSPlayerRankRangeParam", &UELSSCommonParamUtility::execGetSSPlayerRankRangeParam },
			{ "GetSSPlayerRankRangeParamByRankPoint", &UELSSCommonParamUtility::execGetSSPlayerRankRangeParamByRankPoint },
			{ "GetSSPlayerRankResultBasePoint", &UELSSCommonParamUtility::execGetSSPlayerRankResultBasePoint },
			{ "GetSSRewardAbilityFromStampedeLevel", &UELSSCommonParamUtility::execGetSSRewardAbilityFromStampedeLevel },
			{ "GetSSRoundAdjustParam", &UELSSCommonParamUtility::execGetSSRoundAdjustParam },
			{ "GetSSWeaponCommonParam", &UELSSCommonParamUtility::execGetSSWeaponCommonParam },
			{ "GetSSWrestlerParam", &UELSSCommonParamUtility::execGetSSWrestlerParam },
			{ "GetSSWrestlerTypeParam", &UELSSCommonParamUtility::execGetSSWrestlerTypeParam },
			{ "GetSSWrestlerTypeResourceParam", &UELSSCommonParamUtility::execGetSSWrestlerTypeResourceParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics
	{
		struct ELSSCommonParamUtility_eventCalcSSAttentionLevelFromPoint_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSAttentionLevelFromPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_inPoint = { "inPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSAttentionLevelFromPoint_Parms, inPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSAttentionLevelFromPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_inPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "CalcSSAttentionLevelFromPoint", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventCalcSSAttentionLevelFromPoint_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics
	{
		struct ELSSCommonParamUtility_eventCalcSSHeatLevelFromExp_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSHeatLevelFromExp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_inExp = { "inExp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSHeatLevelFromExp_Parms, inExp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSHeatLevelFromExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_inExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "CalcSSHeatLevelFromExp", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventCalcSSHeatLevelFromExp_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics
	{
		struct ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms
		{
			const UObject* WorldContextObject;
			FYGS2SSPlayerData InParam;
			bool inIllegalCheck;
			FYGS2SSPlayerData OutParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static void NewProp_inIllegalCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIllegalCheck;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms, InParam), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_InParam_MetaData)) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_inIllegalCheck_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms*)Obj)->inIllegalCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_inIllegalCheck = { "inIllegalCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_inIllegalCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms, OutParam), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_InParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_inIllegalCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "CalcSSPlayerRankDisconnectPenalty", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventCalcSSPlayerRankDisconnectPenalty_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics
	{
		struct ELSSCommonParamUtility_eventCalcSSPlayerRankUpdate_Parms
		{
			const UObject* WorldContextObject;
			int32 inCurrentRankPoint;
			int32 inAddPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inCurrentRankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAddPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankUpdate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_inCurrentRankPoint = { "inCurrentRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankUpdate_Parms, inCurrentRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_inAddPoint = { "inAddPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankUpdate_Parms, inAddPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSPlayerRankUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_inCurrentRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_inAddPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "CalcSSPlayerRankUpdate", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventCalcSSPlayerRankUpdate_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics
	{
		struct ELSSCommonParamUtility_eventCalcSSStampedeLevelFromExp_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSStampedeLevelFromExp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_inExp = { "inExp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSStampedeLevelFromExp_Parms, inExp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventCalcSSStampedeLevelFromExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_inExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "CalcSSStampedeLevelFromExp", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventCalcSSStampedeLevelFromExp_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAbilityCalcMethod_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityCalcMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityCalcMethod_Parms, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityCalcMethod_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAbilityCalcMethod", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAbilityCalcMethod_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms
		{
			const UObject* WorldContextObject;
			int32 inAbilityId;
			bool inWithOutline;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilityId;
		static void NewProp_inWithOutline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inWithOutline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_inAbilityId = { "inAbilityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms, inAbilityId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_inWithOutline_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms*)Obj)->inWithOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_inWithOutline = { "inWithOutline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_inWithOutline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_inAbilityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_inWithOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAbilityIconTexture", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAbilityIconTexture_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityKindParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAbilityKindParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAbilityKindParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAbilityParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAbilityParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAbilityParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAbilityParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAbilityParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAbilityParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSArmorType_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSArmorType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReason = { "inDamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSArmorType_Parms, inDamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReceiverState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReceiverState = { "inDamageReceiverState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSArmorType_Parms, inDamageReceiverState), Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSArmorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReceiverState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_inDamageReceiverState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSArmorType", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSArmorType_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAttackParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParam_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParam_Parms, AttackHitId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAttackParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAttackParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAttackParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAttackParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_outRows_Inner = { "outRows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_outRows = { "outRows", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms, outRows), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_outRows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_outRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAttackParamListFromMoveId", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAttackParamListFromMoveId_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAttentionAdjustParam_Parms
		{
			const UObject* WorldContextObject;
			FSSAttentionAdjustParam outData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionAdjustParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionAdjustParam_Parms, outData), Z_Construct_UScriptStruct_FSSAttentionAdjustParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAttentionAdjustParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAttentionAdjustParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_outData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAttentionAdjustParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAttentionAdjustParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttentionLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAttentionLevelParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAttentionLevelParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSAttentionLevelPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 inAttentionLevel;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionLevelPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionLevelPoint_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSAttentionLevelPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSAttentionLevelPoint", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSAttentionLevelPoint_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSCharacterAdjustParam_Parms
		{
			const UObject* WorldContextObject;
			FSSCharacterAdjust outData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCharacterAdjustParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCharacterAdjustParam_Parms, outData), Z_Construct_UScriptStruct_FSSCharacterAdjust, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSCharacterAdjustParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSCharacterAdjustParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_outData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSCharacterAdjustParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSCharacterAdjustParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSCommonAttackParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSCommonAttackParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSCommonDatabase_Parms
		{
			const UObject* WorldContextObject;
			UELSSCommonDatabase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCommonDatabase_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSCommonDatabase_Parms, ReturnValue), Z_Construct_UClass_UELSSCommonDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSCommonDatabase", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSCommonDatabase_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSGameRuleParam_Parms
		{
			const UObject* WorldContextObject;
			FSSGameRuleParam outData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSGameRuleParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSGameRuleParam_Parms, outData), Z_Construct_UScriptStruct_FSSGameRuleParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSGameRuleParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSGameRuleParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_outData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSGameRuleParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSGameRuleParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatLevelExp_Parms
		{
			const UObject* WorldContextObject;
			int32 inHeatLevel;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatLevelExp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatLevelExp_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatLevelExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatLevelExp", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatLevelExp_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatLevelParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatLevelParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inMoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inMoveCommand = { "inMoveCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms, inMoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatMoveSet, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inMoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_inMoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatMoveSet", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatMoveSet_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_inSkillTreeRow = { "inSkillTreeRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms, inSkillTreeRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_inSkillTreeRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatSkillDefaultSettings", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillDefaultSettings_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatSkillIconTexture_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIconTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIconTexture_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_inHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatSkillIconTexture", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillIconTexture_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId = { "outHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms, outHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel = { "outConditionHeatLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms, outConditionHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatSkillIdAndLevelFromTree", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillIdAndLevelFromTree_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatSkillIdFromTree", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillIdFromTree_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_inHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSHeatSkillParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSHeatSkillParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSItemIdAll_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSItemIdAll_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_outArray_Inner = { "outArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_outArray = { "outArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSItemIdAll_Parms, outArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSItemIdAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSItemIdAll_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_outArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_outArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSItemIdAll", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSItemIdAll_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSItemParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSItemParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSItemParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSItemParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSItemParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSItemParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSItemParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSItemParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSItemParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetNo;
			FSSLoadoutPresetDefaultParam OutParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_inPresetNo = { "inPresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms, inPresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms, OutParam), Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_inPresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSLoadoutPresetDefaultParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSLoadoutPresetDefaultParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSMoveParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSMoveParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSMoveParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSMoveParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSMoveParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSMoveParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSMoveParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSMoveParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSMoveParamById_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSMoveParamById_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSMoveParamById_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSMoveParamById_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSMoveParamById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSMoveParamById_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSMoveParamById", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSMoveParamById_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankDisconnectPenalty_Parms
		{
			const UObject* WorldContextObject;
			int32 inPlayerRankPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPlayerRankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankDisconnectPenalty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_inPlayerRankPoint = { "inPlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankDisconnectPenalty_Parms, inPlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankDisconnectPenalty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_inPlayerRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankDisconnectPenalty", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankDisconnectPenalty_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankIllegalPenalty_Parms
		{
			const UObject* WorldContextObject;
			int32 inPlayerRankPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPlayerRankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankIllegalPenalty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_inPlayerRankPoint = { "inPlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankIllegalPenalty_Parms, inPlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankIllegalPenalty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_inPlayerRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankIllegalPenalty", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankIllegalPenalty_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankMatchEntryCost_Parms
		{
			const UObject* WorldContextObject;
			int32 inPlayerRankPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPlayerRankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankMatchEntryCost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_inPlayerRankPoint = { "inPlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankMatchEntryCost_Parms, inPlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankMatchEntryCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_inPlayerRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankMatchEntryCost", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankMatchEntryCost_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms
		{
			const UObject* WorldContextObject;
			int32 inRankPoint;
			FSSPlayerRankParam OutParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRankPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_inRankPoint = { "inRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms, inRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms, OutParam), Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_inRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms
		{
			const UObject* WorldContextObject;
			int32 inRankPoint;
			FSSPlayerRankParam OutParam;
			int32 outExpToNext;
			float outExpRateToNext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRankPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outExpToNext;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outExpRateToNext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_inRankPoint = { "inRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms, inRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms, OutParam), Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_outExpToNext = { "outExpToNext", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms, outExpToNext), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_outExpRateToNext = { "outExpRateToNext", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms, outExpRateToNext), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_inRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_outExpToNext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_outExpRateToNext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankParamAndNextInfo", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankParamAndNextInfo_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms
		{
			const UObject* WorldContextObject;
			ESSPlayerRankRange InRange;
			FSSPlayerRankRangeParam OutParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRange_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_InRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms, InRange), Z_Construct_UEnum_ABP_200508_ESSPlayerRankRange, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms, OutParam), Z_Construct_UScriptStruct_FSSPlayerRankRangeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_InRange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_InRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankRangeParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 inRankPoint;
			FSSPlayerRankRangeParam OutParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRankPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_inRankPoint = { "inRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms, inRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms, OutParam), Z_Construct_UScriptStruct_FSSPlayerRankRangeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_inRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankRangeParamByRankPoint", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankRangeParamByRankPoint_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSPlayerRankResultBasePoint_Parms
		{
			const UObject* WorldContextObject;
			int32 inPlayerRankPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPlayerRankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankResultBasePoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_inPlayerRankPoint = { "inPlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankResultBasePoint_Parms, inPlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSPlayerRankResultBasePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_inPlayerRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSPlayerRankResultBasePoint", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSPlayerRankResultBasePoint_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSRewardAbilityFromStampedeLevel_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSRewardAbilityFromStampedeLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_inOldLevel = { "inOldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSRewardAbilityFromStampedeLevel_Parms, inOldLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_inNewLevel = { "inNewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSRewardAbilityFromStampedeLevel_Parms, inNewLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId_Inner = { "outAbilityId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId = { "outAbilityId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSRewardAbilityFromStampedeLevel_Parms, outAbilityId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_inOldLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_inNewLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSRewardAbilityFromStampedeLevel", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSRewardAbilityFromStampedeLevel_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSRoundAdjustParam_Parms
		{
			const UObject* WorldContextObject;
			FSSRoundAdjustParam outData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSRoundAdjustParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSRoundAdjustParam_Parms, outData), Z_Construct_UScriptStruct_FSSRoundAdjustParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSRoundAdjustParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSRoundAdjustParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_outData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSRoundAdjustParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSRoundAdjustParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms
		{
			const UObject* WorldContextObject;
			int32 ID;
			FSSWeaponCommonParam OutRow;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponCommonParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSWeaponCommonParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSWeaponCommonParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSWrestlerParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSWrestlerParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSWrestlerTypeParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSWrestlerTypeParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics
	{
		struct ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms), &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonParamUtility, nullptr, "GetSSWrestlerTypeResourceParam", nullptr, nullptr, sizeof(ELSSCommonParamUtility_eventGetSSWrestlerTypeResourceParam_Parms), Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSCommonParamUtility_NoRegister()
	{
		return UELSSCommonParamUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCommonParamUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCommonParamUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSCommonParamUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSAttentionLevelFromPoint, "CalcSSAttentionLevelFromPoint" }, // 386612410
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSHeatLevelFromExp, "CalcSSHeatLevelFromExp" }, // 3922347851
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankDisconnectPenalty, "CalcSSPlayerRankDisconnectPenalty" }, // 1529497047
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSPlayerRankUpdate, "CalcSSPlayerRankUpdate" }, // 1119994634
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_CalcSSStampedeLevelFromExp, "CalcSSStampedeLevelFromExp" }, // 541540379
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityCalcMethod, "GetSSAbilityCalcMethod" }, // 1321094137
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityIconTexture, "GetSSAbilityIconTexture" }, // 3853368366
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityKindParam, "GetSSAbilityKindParam" }, // 3513738788
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAbilityParam, "GetSSAbilityParam" }, // 2615321861
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSArmorType, "GetSSArmorType" }, // 2262766540
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParam, "GetSSAttackParam" }, // 3357654516
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttackParamListFromMoveId, "GetSSAttackParamListFromMoveId" }, // 2484466853
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionAdjustParam, "GetSSAttentionAdjustParam" }, // 1041109931
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelParam, "GetSSAttentionLevelParam" }, // 1501432348
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSAttentionLevelPoint, "GetSSAttentionLevelPoint" }, // 2165923452
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCharacterAdjustParam, "GetSSCharacterAdjustParam" }, // 346900140
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonAttackParam, "GetSSCommonAttackParam" }, // 4145890954
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSCommonDatabase, "GetSSCommonDatabase" }, // 3489579532
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSGameRuleParam, "GetSSGameRuleParam" }, // 3205650479
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelExp, "GetSSHeatLevelExp" }, // 3804216991
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatLevelParam, "GetSSHeatLevelParam" }, // 4242332154
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatMoveSet, "GetSSHeatMoveSet" }, // 1510501632
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillDefaultSettings, "GetSSHeatSkillDefaultSettings" }, // 2159785638
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIconTexture, "GetSSHeatSkillIconTexture" }, // 2167006821
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdAndLevelFromTree, "GetSSHeatSkillIdAndLevelFromTree" }, // 457676424
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillIdFromTree, "GetSSHeatSkillIdFromTree" }, // 3065570130
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSHeatSkillParam, "GetSSHeatSkillParam" }, // 2208219479
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemIdAll, "GetSSItemIdAll" }, // 758216539
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSItemParam, "GetSSItemParam" }, // 2929568976
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSLoadoutPresetDefaultParam, "GetSSLoadoutPresetDefaultParam" }, // 1550436249
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParam, "GetSSMoveParam" }, // 3234187542
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSMoveParamById, "GetSSMoveParamById" }, // 2966912602
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankDisconnectPenalty, "GetSSPlayerRankDisconnectPenalty" }, // 464873646
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankIllegalPenalty, "GetSSPlayerRankIllegalPenalty" }, // 1698848508
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankMatchEntryCost, "GetSSPlayerRankMatchEntryCost" }, // 3831665595
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParam, "GetSSPlayerRankParam" }, // 282063722
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankParamAndNextInfo, "GetSSPlayerRankParamAndNextInfo" }, // 2593045452
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParam, "GetSSPlayerRankRangeParam" }, // 1209587124
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankRangeParamByRankPoint, "GetSSPlayerRankRangeParamByRankPoint" }, // 2182056074
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSPlayerRankResultBasePoint, "GetSSPlayerRankResultBasePoint" }, // 3782065358
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRewardAbilityFromStampedeLevel, "GetSSRewardAbilityFromStampedeLevel" }, // 3172708460
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSRoundAdjustParam, "GetSSRoundAdjustParam" }, // 3339575096
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWeaponCommonParam, "GetSSWeaponCommonParam" }, // 3067681188
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerParam, "GetSSWrestlerParam" }, // 799787281
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeParam, "GetSSWrestlerTypeParam" }, // 17006175
		{ &Z_Construct_UFunction_UELSSCommonParamUtility_GetSSWrestlerTypeResourceParam, "GetSSWrestlerTypeResourceParam" }, // 233149192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonParamUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSCommonParamUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCommonParamUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCommonParamUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCommonParamUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCommonParamUtility_Statics::ClassParams = {
		&UELSSCommonParamUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSCommonParamUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonParamUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCommonParamUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCommonParamUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCommonParamUtility, 1380286284);
	template<> ABP_200508_API UClass* StaticClass<UELSSCommonParamUtility>()
	{
		return UELSSCommonParamUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCommonParamUtility(Z_Construct_UClass_UELSSCommonParamUtility, &UELSSCommonParamUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCommonParamUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCommonParamUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
