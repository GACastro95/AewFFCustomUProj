// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCommonDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCommonDatabase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCommonDatabase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCommonDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityKindParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSArmorType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatMoveSet();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilitySortType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponCommonParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityResourceParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillIcon();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStampedeRankParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankRangeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameRuleParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSActionStateClassInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELSSCommonDatabase::execCalcAttentionLevelFromPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalcAttentionLevelFromPoint(Z_Param_inPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execCalcHeatLevelFromExp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inExp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalcHeatLevelFromExp(Z_Param_inExp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execConvertDataTableToArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertDataTableToArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAbilityCalcMethod)
	{
		P_GET_ENUM(ESSAbilityKind,Z_Param_Kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSAbilityCalcMethod*)Z_Param__Result=P_THIS->GetAbilityCalcMethod(ESSAbilityKind(Z_Param_Kind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAbilityIconTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilityId);
		P_GET_UBOOL(Z_Param_inWithOutline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetAbilityIconTexture(Z_Param_inAbilityId,Z_Param_inWithOutline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAbilityKindParam)
	{
		P_GET_ENUM(ESSAbilityKind,Z_Param_Kind);
		P_GET_STRUCT_REF(FSSAbilityKindParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAbilityKindParam(ESSAbilityKind(Z_Param_Kind),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAbilityParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSAbilityParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAbilityParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetArmorType)
	{
		P_GET_ENUM(ESSDamageReason,Z_Param_inDamageReason);
		P_GET_ENUM(ESSDamageReceiverState,Z_Param_inDamageReceiverState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSArmorType*)Z_Param__Result=P_THIS->GetArmorType(ESSDamageReason(Z_Param_inDamageReason),ESSDamageReceiverState(Z_Param_inDamageReceiverState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAttackParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttackHitId);
		P_GET_STRUCT_REF(FSSAttackParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttackParam(Z_Param_MoveId,Z_Param_AttackHitId,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAttackParamListFromMoveId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_TARRAY_REF(FSSAttackParam,Z_Param_Out_outRows);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttackParamListFromMoveId(Z_Param_MoveId,Z_Param_Out_outRows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAttentionLevelParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionLevel);
		P_GET_STRUCT_REF(FSSAttentionLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttentionLevelParam(Z_Param_inAttentionLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetAttentionLevelPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inAttentionLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttentionLevelPoint(Z_Param_inAttentionLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetCommonAttackParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSAttackParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCommonAttackParam(Z_Param_Out_RowName,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatLevelExp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeatLevelExp(Z_Param_inHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatLevelParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatLevel);
		P_GET_STRUCT_REF(FSSHeatLevelParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHeatLevelParam(Z_Param_inHeatLevel,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatMoveSet)
	{
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_ENUM(ESSMoveCommand,Z_Param_inMoveCommand);
		P_GET_STRUCT_REF(FSSHeatMoveSet,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHeatMoveSet(ESSWrestlerType(Z_Param_inWrestlerType),ESSMoveCommand(Z_Param_inMoveCommand),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatSkillDefaultSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeRow);
		P_GET_STRUCT_REF(FSSHeatSkillDefaultSettings,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHeatSkillDefaultSettings(Z_Param_ID,Z_Param_inSkillTreeRow,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatSkillIconTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetHeatSkillIconTexture(Z_Param_inHeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatSkillIdAndLevelFromTree)
	{
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outHeatSkillId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outConditionHeatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHeatSkillIdAndLevelFromTree(ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn,Z_Param_Out_outHeatSkillId,Z_Param_Out_outConditionHeatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatSkillIdFromTree)
	{
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_inColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeatSkillIdFromTree(ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inRow,Z_Param_inColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetHeatSkillParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSHeatSkillParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHeatSkillParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetItemParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSItemParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetMoveParam)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMoveParam(Z_Param_Out_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetMoveParamById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveId);
		P_GET_STRUCT_REF(FSSMoveParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMoveParamById(Z_Param_MoveId,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetRewardAbilityFromStampedeLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inOldLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_inNewLevel);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outAbilityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRewardAbilityFromStampedeLevel(Z_Param_inOldLevel,Z_Param_inNewLevel,Z_Param_Out_outAbilityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetSortedAbilityParamArray)
	{
		P_GET_ENUM(ESSAbilitySortType,Z_Param_inSortType);
		P_GET_TARRAY_REF(FSSAbilityParam,Z_Param_Out_outAbilityParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSortedAbilityParamArray(ESSAbilitySortType(Z_Param_inSortType),Z_Param_Out_outAbilityParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetWeaponCommonParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FSSWeaponCommonParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponCommonParam(Z_Param_ID,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetWrestlerParam)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_inWrestlerId);
		P_GET_STRUCT_REF(FSSWrestlerParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWrestlerParam(EWrestlerID_N(Z_Param_inWrestlerId),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetWrestlerTypeParam)
	{
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWrestlerTypeParam(ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execGetWrestlerTypeResourceParam)
	{
		P_GET_ENUM(ESSWrestlerType,Z_Param_inWrestlerType);
		P_GET_STRUCT_REF(FSSWrestlerTypeResourceParam,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWrestlerTypeResourceParam(ESSWrestlerType(Z_Param_inWrestlerType),Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCommonDatabase::execMakeSortedAbilityParamArray)
	{
		P_GET_ENUM(ESSAbilitySortType,Z_Param_inSortType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeSortedAbilityParamArray(ESSAbilitySortType(Z_Param_inSortType));
		P_NATIVE_END;
	}
	void UELSSCommonDatabase::StaticRegisterNativesUELSSCommonDatabase()
	{
		UClass* Class = UELSSCommonDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcAttentionLevelFromPoint", &UELSSCommonDatabase::execCalcAttentionLevelFromPoint },
			{ "CalcHeatLevelFromExp", &UELSSCommonDatabase::execCalcHeatLevelFromExp },
			{ "ConvertDataTableToArray", &UELSSCommonDatabase::execConvertDataTableToArray },
			{ "GetAbilityCalcMethod", &UELSSCommonDatabase::execGetAbilityCalcMethod },
			{ "GetAbilityIconTexture", &UELSSCommonDatabase::execGetAbilityIconTexture },
			{ "GetAbilityKindParam", &UELSSCommonDatabase::execGetAbilityKindParam },
			{ "GetAbilityParam", &UELSSCommonDatabase::execGetAbilityParam },
			{ "GetArmorType", &UELSSCommonDatabase::execGetArmorType },
			{ "GetAttackParam", &UELSSCommonDatabase::execGetAttackParam },
			{ "GetAttackParamListFromMoveId", &UELSSCommonDatabase::execGetAttackParamListFromMoveId },
			{ "GetAttentionLevelParam", &UELSSCommonDatabase::execGetAttentionLevelParam },
			{ "GetAttentionLevelPoint", &UELSSCommonDatabase::execGetAttentionLevelPoint },
			{ "GetCommonAttackParam", &UELSSCommonDatabase::execGetCommonAttackParam },
			{ "GetHeatLevelExp", &UELSSCommonDatabase::execGetHeatLevelExp },
			{ "GetHeatLevelParam", &UELSSCommonDatabase::execGetHeatLevelParam },
			{ "GetHeatMoveSet", &UELSSCommonDatabase::execGetHeatMoveSet },
			{ "GetHeatSkillDefaultSettings", &UELSSCommonDatabase::execGetHeatSkillDefaultSettings },
			{ "GetHeatSkillIconTexture", &UELSSCommonDatabase::execGetHeatSkillIconTexture },
			{ "GetHeatSkillIdAndLevelFromTree", &UELSSCommonDatabase::execGetHeatSkillIdAndLevelFromTree },
			{ "GetHeatSkillIdFromTree", &UELSSCommonDatabase::execGetHeatSkillIdFromTree },
			{ "GetHeatSkillParam", &UELSSCommonDatabase::execGetHeatSkillParam },
			{ "GetItemParam", &UELSSCommonDatabase::execGetItemParam },
			{ "GetMoveParam", &UELSSCommonDatabase::execGetMoveParam },
			{ "GetMoveParamById", &UELSSCommonDatabase::execGetMoveParamById },
			{ "GetRewardAbilityFromStampedeLevel", &UELSSCommonDatabase::execGetRewardAbilityFromStampedeLevel },
			{ "GetSortedAbilityParamArray", &UELSSCommonDatabase::execGetSortedAbilityParamArray },
			{ "GetWeaponCommonParam", &UELSSCommonDatabase::execGetWeaponCommonParam },
			{ "GetWrestlerParam", &UELSSCommonDatabase::execGetWrestlerParam },
			{ "GetWrestlerTypeParam", &UELSSCommonDatabase::execGetWrestlerTypeParam },
			{ "GetWrestlerTypeResourceParam", &UELSSCommonDatabase::execGetWrestlerTypeResourceParam },
			{ "Initialize", &UELSSCommonDatabase::execInitialize },
			{ "MakeSortedAbilityParamArray", &UELSSCommonDatabase::execMakeSortedAbilityParamArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics
	{
		struct ELSSCommonDatabase_eventCalcAttentionLevelFromPoint_Parms
		{
			int32 inPoint;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::NewProp_inPoint = { "inPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventCalcAttentionLevelFromPoint_Parms, inPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventCalcAttentionLevelFromPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::NewProp_inPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "CalcAttentionLevelFromPoint", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventCalcAttentionLevelFromPoint_Parms), Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics
	{
		struct ELSSCommonDatabase_eventCalcHeatLevelFromExp_Parms
		{
			int32 inExp;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inExp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::NewProp_inExp = { "inExp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventCalcHeatLevelFromExp_Parms, inExp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventCalcHeatLevelFromExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::NewProp_inExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "CalcHeatLevelFromExp", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventCalcHeatLevelFromExp_Parms), Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "ConvertDataTableToArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics
	{
		struct ELSSCommonDatabase_eventGetAbilityCalcMethod_Parms
		{
			ESSAbilityKind Kind;
			ESSAbilityCalcMethod ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityCalcMethod_Parms, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityCalcMethod_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSAbilityCalcMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAbilityCalcMethod", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAbilityCalcMethod_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics
	{
		struct ELSSCommonDatabase_eventGetAbilityIconTexture_Parms
		{
			int32 inAbilityId;
			bool inWithOutline;
			UTexture2D* ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_inAbilityId = { "inAbilityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityIconTexture_Parms, inAbilityId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_inWithOutline_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetAbilityIconTexture_Parms*)Obj)->inWithOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_inWithOutline = { "inWithOutline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetAbilityIconTexture_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_inWithOutline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_inAbilityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_inWithOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAbilityIconTexture", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAbilityIconTexture_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics
	{
		struct ELSSCommonDatabase_eventGetAbilityKindParam_Parms
		{
			ESSAbilityKind Kind;
			FSSAbilityKindParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityKindParam_Parms, Kind), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityKindParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityKindParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetAbilityKindParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetAbilityKindParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAbilityKindParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAbilityKindParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics
	{
		struct ELSSCommonDatabase_eventGetAbilityParam_Parms
		{
			int32 ID;
			FSSAbilityParam OutRow;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAbilityParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetAbilityParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetAbilityParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAbilityParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAbilityParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics
	{
		struct ELSSCommonDatabase_eventGetArmorType_Parms
		{
			ESSDamageReason inDamageReason;
			ESSDamageReceiverState inDamageReceiverState;
			ESSArmorType ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReason = { "inDamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetArmorType_Parms, inDamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReceiverState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReceiverState = { "inDamageReceiverState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetArmorType_Parms, inDamageReceiverState), Z_Construct_UEnum_ABP_200508_ESSDamageReceiverState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetArmorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSArmorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReceiverState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_inDamageReceiverState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetArmorType", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetArmorType_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics
	{
		struct ELSSCommonDatabase_eventGetAttackParam_Parms
		{
			int32 MoveId;
			int32 AttackHitId;
			FSSAttackParam OutParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackHitId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttackParam_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttackParam_Parms, AttackHitId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttackParam_Parms, OutParam), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetAttackParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetAttackParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAttackParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAttackParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics
	{
		struct ELSSCommonDatabase_eventGetAttackParamListFromMoveId_Parms
		{
			int32 MoveId;
			TArray<FSSAttackParam> outRows;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttackParamListFromMoveId_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_outRows_Inner = { "outRows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_outRows = { "outRows", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttackParamListFromMoveId_Parms, outRows), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetAttackParamListFromMoveId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetAttackParamListFromMoveId_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_outRows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_outRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAttackParamListFromMoveId", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAttackParamListFromMoveId_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics
	{
		struct ELSSCommonDatabase_eventGetAttentionLevelParam_Parms
		{
			int32 inAttentionLevel;
			FSSAttentionLevelParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttentionLevelParam_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttentionLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSAttentionLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetAttentionLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetAttentionLevelParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAttentionLevelParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAttentionLevelParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics
	{
		struct ELSSCommonDatabase_eventGetAttentionLevelPoint_Parms
		{
			int32 inAttentionLevel;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAttentionLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::NewProp_inAttentionLevel = { "inAttentionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttentionLevelPoint_Parms, inAttentionLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetAttentionLevelPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::NewProp_inAttentionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetAttentionLevelPoint", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetAttentionLevelPoint_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics
	{
		struct ELSSCommonDatabase_eventGetCommonAttackParam_Parms
		{
			FName RowName;
			FSSAttackParam OutParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetCommonAttackParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetCommonAttackParam_Parms, OutParam), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetCommonAttackParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetCommonAttackParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetCommonAttackParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetCommonAttackParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatLevelExp_Parms
		{
			int32 inHeatLevel;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatLevelExp_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatLevelExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatLevelExp", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatLevelExp_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatLevelParam_Parms
		{
			int32 inHeatLevel;
			FSSHeatLevelParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_inHeatLevel = { "inHeatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatLevelParam_Parms, inHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatLevelParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatLevelParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetHeatLevelParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetHeatLevelParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_inHeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatLevelParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatLevelParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatMoveSet_Parms
		{
			ESSWrestlerType inWrestlerType;
			ESSMoveCommand inMoveCommand;
			FSSHeatMoveSet OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatMoveSet_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inMoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inMoveCommand = { "inMoveCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatMoveSet_Parms, inMoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatMoveSet_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatMoveSet, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetHeatMoveSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetHeatMoveSet_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inMoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_inMoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatMoveSet", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatMoveSet_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms
		{
			int32 ID;
			int32 inSkillTreeRow;
			FSSHeatSkillDefaultSettings OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_inSkillTreeRow = { "inSkillTreeRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms, inSkillTreeRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_inSkillTreeRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatSkillDefaultSettings", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatSkillDefaultSettings_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatSkillIconTexture_Parms
		{
			int32 inHeatSkillId;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatSkillId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIconTexture_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIconTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::NewProp_inHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatSkillIconTexture", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatSkillIconTexture_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms
		{
			ESSHeatSkillCategory inCategory;
			int32 inRow;
			int32 inColumn;
			int32 outHeatSkillId;
			int32 outConditionHeatLevel;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId = { "outHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, outHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel = { "outConditionHeatLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms, outConditionHeatLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outHeatSkillId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::NewProp_outConditionHeatLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatSkillIdAndLevelFromTree", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatSkillIdAndLevelFromTree_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatSkillIdFromTree_Parms
		{
			ESSHeatSkillCategory inCategory;
			int32 inRow;
			int32 inColumn;
			int32 ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdFromTree_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inRow = { "inRow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdFromTree_Parms, inRow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inColumn = { "inColumn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdFromTree_Parms, inColumn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillIdFromTree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_inColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatSkillIdFromTree", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatSkillIdFromTree_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics
	{
		struct ELSSCommonDatabase_eventGetHeatSkillParam_Parms
		{
			int32 ID;
			FSSHeatSkillParam OutRow;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetHeatSkillParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSHeatSkillParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetHeatSkillParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetHeatSkillParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetHeatSkillParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetHeatSkillParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics
	{
		struct ELSSCommonDatabase_eventGetItemParam_Parms
		{
			int32 ID;
			FSSItemParam OutRow;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetItemParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetItemParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSItemParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetItemParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetItemParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetItemParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetItemParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics
	{
		struct ELSSCommonDatabase_eventGetMoveParam_Parms
		{
			FName RowName;
			FSSMoveParam OutRow;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetMoveParam_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetMoveParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetMoveParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetMoveParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetMoveParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetMoveParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics
	{
		struct ELSSCommonDatabase_eventGetMoveParamById_Parms
		{
			int32 MoveId;
			FSSMoveParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetMoveParamById_Parms, MoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetMoveParamById_Parms, OutRow), Z_Construct_UScriptStruct_FSSMoveParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetMoveParamById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetMoveParamById_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetMoveParamById", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetMoveParamById_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics
	{
		struct ELSSCommonDatabase_eventGetRewardAbilityFromStampedeLevel_Parms
		{
			int32 inOldLevel;
			int32 inNewLevel;
			TArray<int32> outAbilityId;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inOldLevel = { "inOldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetRewardAbilityFromStampedeLevel_Parms, inOldLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inNewLevel = { "inNewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetRewardAbilityFromStampedeLevel_Parms, inNewLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId_Inner = { "outAbilityId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId = { "outAbilityId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetRewardAbilityFromStampedeLevel_Parms, outAbilityId), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inOldLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_inNewLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::NewProp_outAbilityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetRewardAbilityFromStampedeLevel", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetRewardAbilityFromStampedeLevel_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics
	{
		struct ELSSCommonDatabase_eventGetSortedAbilityParamArray_Parms
		{
			ESSAbilitySortType inSortType;
			TArray<FSSAbilityParam> outAbilityParam;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inSortType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inSortType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outAbilityParam_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outAbilityParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType = { "inSortType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetSortedAbilityParamArray_Parms, inSortType), Z_Construct_UEnum_ABP_200508_ESSAbilitySortType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam_Inner = { "outAbilityParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam = { "outAbilityParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetSortedAbilityParamArray_Parms, outAbilityParam), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_inSortType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::NewProp_outAbilityParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetSortedAbilityParamArray", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetSortedAbilityParamArray_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics
	{
		struct ELSSCommonDatabase_eventGetWeaponCommonParam_Parms
		{
			int32 ID;
			FSSWeaponCommonParam OutRow;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWeaponCommonParam_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWeaponCommonParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWeaponCommonParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetWeaponCommonParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetWeaponCommonParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetWeaponCommonParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetWeaponCommonParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics
	{
		struct ELSSCommonDatabase_eventGetWrestlerParam_Parms
		{
			EWrestlerID_N inWrestlerId;
			FSSWrestlerParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWrestlerParam_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWrestlerParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetWrestlerParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetWrestlerParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetWrestlerParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetWrestlerParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics
	{
		struct ELSSCommonDatabase_eventGetWrestlerTypeParam_Parms
		{
			ESSWrestlerType inWrestlerType;
			FSSWrestlerTypeParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWrestlerTypeParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWrestlerTypeParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetWrestlerTypeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetWrestlerTypeParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetWrestlerTypeParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetWrestlerTypeParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics
	{
		struct ELSSCommonDatabase_eventGetWrestlerTypeResourceParam_Parms
		{
			ESSWrestlerType inWrestlerType;
			FSSWrestlerTypeResourceParam OutRow;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType = { "inWrestlerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWrestlerTypeResourceParam_Parms, inWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventGetWrestlerTypeResourceParam_Parms, OutRow), Z_Construct_UScriptStruct_FSSWrestlerTypeResourceParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCommonDatabase_eventGetWrestlerTypeResourceParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCommonDatabase_eventGetWrestlerTypeResourceParam_Parms), &Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_inWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "GetWrestlerTypeResourceParam", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventGetWrestlerTypeResourceParam_Parms), Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics
	{
		struct ELSSCommonDatabase_eventMakeSortedAbilityParamArray_Parms
		{
			ESSAbilitySortType inSortType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inSortType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inSortType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::NewProp_inSortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::NewProp_inSortType = { "inSortType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCommonDatabase_eventMakeSortedAbilityParamArray_Parms, inSortType), Z_Construct_UEnum_ABP_200508_ESSAbilitySortType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::NewProp_inSortType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::NewProp_inSortType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCommonDatabase, nullptr, "MakeSortedAbilityParamArray", nullptr, nullptr, sizeof(ELSSCommonDatabase_eventMakeSortedAbilityParamArray_Parms), Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSCommonDatabase_NoRegister()
	{
		return UELSSCommonDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCommonDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityResourceParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityResourceParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityResourceParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityResourceParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityResourceParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedAbilityParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedAbilityParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedAbilityParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityKindParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityKindParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityKindParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityKindParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityKindParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrestlerParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerTypeResourceParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WrestlerTypeResourceParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillDefaultSettingsTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatSkillDefaultSettingsTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillDefaultSettingsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillDefaultSettingsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillDefaultSettingsArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillIconTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatSkillIconTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillIconArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillIconArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillIconArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonAttackParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonAttackParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeRankParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StampedeRankParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StampedeRankParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StampedeRankParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StampedeRankParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRankParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRankParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerRankParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankRangeParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRankRangeParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRankRangeParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankRangeParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerRankRangeParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutPresetDefaultParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutPresetDefaultParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadoutPresetDefaultParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutPresetDefaultParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadoutPresetDefaultParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRuleParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameRuleParamTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameRuleParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRuleParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameRuleParamArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateInfoTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateInfoTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateInfoParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateInfoParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateInfoParamArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCommonDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSCommonDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSCommonDatabase_CalcAttentionLevelFromPoint, "CalcAttentionLevelFromPoint" }, // 3482360015
		{ &Z_Construct_UFunction_UELSSCommonDatabase_CalcHeatLevelFromExp, "CalcHeatLevelFromExp" }, // 3379889612
		{ &Z_Construct_UFunction_UELSSCommonDatabase_ConvertDataTableToArray, "ConvertDataTableToArray" }, // 2346015620
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityCalcMethod, "GetAbilityCalcMethod" }, // 1686644696
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityIconTexture, "GetAbilityIconTexture" }, // 4059034888
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityKindParam, "GetAbilityKindParam" }, // 71860586
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAbilityParam, "GetAbilityParam" }, // 3463152616
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetArmorType, "GetArmorType" }, // 1444309774
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParam, "GetAttackParam" }, // 3963759160
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAttackParamListFromMoveId, "GetAttackParamListFromMoveId" }, // 2569869341
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelParam, "GetAttentionLevelParam" }, // 2742938500
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetAttentionLevelPoint, "GetAttentionLevelPoint" }, // 150248270
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetCommonAttackParam, "GetCommonAttackParam" }, // 3802978307
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelExp, "GetHeatLevelExp" }, // 1191358729
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatLevelParam, "GetHeatLevelParam" }, // 2859891247
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatMoveSet, "GetHeatMoveSet" }, // 1954036385
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillDefaultSettings, "GetHeatSkillDefaultSettings" }, // 710855006
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIconTexture, "GetHeatSkillIconTexture" }, // 1613705989
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdAndLevelFromTree, "GetHeatSkillIdAndLevelFromTree" }, // 666262332
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillIdFromTree, "GetHeatSkillIdFromTree" }, // 3372738482
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetHeatSkillParam, "GetHeatSkillParam" }, // 3462549222
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetItemParam, "GetItemParam" }, // 3686200037
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParam, "GetMoveParam" }, // 853450308
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetMoveParamById, "GetMoveParamById" }, // 4171494475
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetRewardAbilityFromStampedeLevel, "GetRewardAbilityFromStampedeLevel" }, // 2000900459
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetSortedAbilityParamArray, "GetSortedAbilityParamArray" }, // 1772544636
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetWeaponCommonParam, "GetWeaponCommonParam" }, // 1352946899
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerParam, "GetWrestlerParam" }, // 4041904491
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeParam, "GetWrestlerTypeParam" }, // 3648151164
		{ &Z_Construct_UFunction_UELSSCommonDatabase_GetWrestlerTypeResourceParam, "GetWrestlerTypeResourceParam" }, // 1971481013
		{ &Z_Construct_UFunction_UELSSCommonDatabase_Initialize, "Initialize" }, // 3763280430
		{ &Z_Construct_UFunction_UELSSCommonDatabase_MakeSortedAbilityParamArray, "MakeSortedAbilityParamArray" }, // 1817024175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSCommonDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MasterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MasterData = { "MasterData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, MasterData), Z_Construct_UClass_UELSSMasterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MasterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MasterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamTable = { "AbilityResourceParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, AbilityResourceParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray_Inner = { "AbilityResourceParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityResourceParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray = { "AbilityResourceParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, AbilityResourceParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray_Inner = { "SortedAbilityParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray = { "SortedAbilityParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, SortedAbilityParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamTable = { "AbilityKindParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, AbilityKindParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray_Inner = { "AbilityKindParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityKindParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray = { "AbilityKindParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, AbilityKindParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerParamTable = { "WrestlerParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, WrestlerParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerTypeResourceParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerTypeResourceParamTable = { "WrestlerTypeResourceParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, WrestlerTypeResourceParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerTypeResourceParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerTypeResourceParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsTable = { "HeatSkillDefaultSettingsTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillDefaultSettingsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray_Inner = { "HeatSkillDefaultSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillDefaultSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray = { "HeatSkillDefaultSettingsArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillDefaultSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconTable = { "HeatSkillIconTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillIconTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray_Inner = { "HeatSkillIconArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillIcon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray = { "HeatSkillIconArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, HeatSkillIconArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_CommonAttackParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_CommonAttackParamTable = { "CommonAttackParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, CommonAttackParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_CommonAttackParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_CommonAttackParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MoveParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MoveParamTable = { "MoveParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, MoveParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MoveParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MoveParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamTable = { "StampedeRankParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, StampedeRankParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray_Inner = { "StampedeRankParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSStampedeRankParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray = { "StampedeRankParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, StampedeRankParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamTable = { "PlayerRankParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray_Inner = { "PlayerRankParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray = { "PlayerRankParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamTable = { "PlayerRankRangeParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankRangeParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray_Inner = { "PlayerRankRangeParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPlayerRankRangeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray = { "PlayerRankRangeParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, PlayerRankRangeParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamTable = { "LoadoutPresetDefaultParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, LoadoutPresetDefaultParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray_Inner = { "LoadoutPresetDefaultParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLoadoutPresetDefaultParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray = { "LoadoutPresetDefaultParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, LoadoutPresetDefaultParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamTable = { "GameRuleParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, GameRuleParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray_Inner = { "GameRuleParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSGameRuleParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray = { "GameRuleParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, GameRuleParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoTable = { "StateInfoTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, StateInfoTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray_Inner = { "StateInfoParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSActionStateClassInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCommonDatabase" },
		{ "ModuleRelativePath", "Public/ELSSCommonDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray = { "StateInfoParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCommonDatabase, StateInfoParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSCommonDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MasterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityResourceParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_SortedAbilityParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_AbilityKindParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_WrestlerTypeResourceParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillDefaultSettingsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_HeatSkillIconArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_CommonAttackParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_MoveParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StampedeRankParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_PlayerRankRangeParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_LoadoutPresetDefaultParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_GameRuleParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCommonDatabase_Statics::NewProp_StateInfoParamArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCommonDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCommonDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCommonDatabase_Statics::ClassParams = {
		&UELSSCommonDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSCommonDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCommonDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCommonDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCommonDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCommonDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCommonDatabase, 1086058106);
	template<> ABP_200508_API UClass* StaticClass<UELSSCommonDatabase>()
	{
		return UELSSCommonDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCommonDatabase(Z_Construct_UClass_UELSSCommonDatabase, &UELSSCommonDatabase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCommonDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCommonDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
