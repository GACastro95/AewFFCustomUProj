// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerBalanceAdjustParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerBalanceAdjustParam() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerBalanceAdjustParam_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerBalanceAdjustParam();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDiningType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetKey_Dining_Reward_Description)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetKey_Dining_Reward_Description(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetRate_Hospital_Reward_EnagyHealPercent)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRate_Hospital_Reward_EnagyHealPercent(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetRate_Hospital_Reward_NeedCareerMoney)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRate_Hospital_Reward_NeedCareerMoney(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetRate_Hospital_Reward_SuccessRate)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRate_Hospital_Reward_SuccessRate(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetRate_WorkOut_Reward_SuccessRate)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRate_WorkOut_Reward_SuccessRate(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetType_Dining_Reward_DiningType)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerDiningType*)Z_Param__Result=P_THIS->GetType_Dining_Reward_DiningType(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetValue_Dining_Reward_EnagyHealValue)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValue_Dining_Reward_EnagyHealValue(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetValue_Records_Scenario_PercentValue)
	{
		P_GET_ENUM(ECareerScenarioMatchTiming,Z_Param__ScenarioPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue_Records_Scenario_PercentValue(ECareerScenarioMatchTiming(Z_Param__ScenarioPart));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetValue_Records_ScoreStar_HalfStarBool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__ScoreValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValue_Records_ScoreStar_HalfStarBool(Z_Param__ScoreValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetValue_Records_ScoreStar_StarValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__ScoreValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValue_Records_ScoreStar_StarValue(Z_Param__ScoreValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetValue_WorkOut_Reward_ChangeEnagy)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValue_WorkOut_Reward_ChangeEnagy(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execGetValue_WorkOut_Reward_ChangeSkillPoint)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__CommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValue_WorkOut_Reward_ChangeSkillPoint(ECareerPostCommandEventType(Z_Param__CommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Records_BestScoreStar)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Records_BestScoreStar(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Records_ScenarioPercent)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Records_ScenarioPercent(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_Dining)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_Dining(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_Energy)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_Energy(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_Hospital)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_Hospital(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_Motivation)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_Motivation(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_ScoreBonus_CareerMoney)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_ScoreBonus_CareerMoney(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_ScoreBonus_SkillPoint)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_ScoreBonus_SkillPoint(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_WinBonus_CareerMoney)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_WinBonus_CareerMoney(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_Reward_WinBonus_SkillPoint)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Reward_WinBonus_SkillPoint(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_WorkOut_Reward_Energy)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_WorkOut_Reward_Energy(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_WorkOut_Reward_SkillPoint)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_WorkOut_Reward_SkillPoint(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerBalanceAdjustParam::execSetDataTable_WorkOut_Reward_SuccessRate)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_WorkOut_Reward_SuccessRate(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	void AELCareerBalanceAdjustParam::StaticRegisterNativesAELCareerBalanceAdjustParam()
	{
		UClass* Class = AELCareerBalanceAdjustParam::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKey_Dining_Reward_Description", &AELCareerBalanceAdjustParam::execGetKey_Dining_Reward_Description },
			{ "GetRate_Hospital_Reward_EnagyHealPercent", &AELCareerBalanceAdjustParam::execGetRate_Hospital_Reward_EnagyHealPercent },
			{ "GetRate_Hospital_Reward_NeedCareerMoney", &AELCareerBalanceAdjustParam::execGetRate_Hospital_Reward_NeedCareerMoney },
			{ "GetRate_Hospital_Reward_SuccessRate", &AELCareerBalanceAdjustParam::execGetRate_Hospital_Reward_SuccessRate },
			{ "GetRate_WorkOut_Reward_SuccessRate", &AELCareerBalanceAdjustParam::execGetRate_WorkOut_Reward_SuccessRate },
			{ "GetType_Dining_Reward_DiningType", &AELCareerBalanceAdjustParam::execGetType_Dining_Reward_DiningType },
			{ "GetValue_Dining_Reward_EnagyHealValue", &AELCareerBalanceAdjustParam::execGetValue_Dining_Reward_EnagyHealValue },
			{ "GetValue_Records_Scenario_PercentValue", &AELCareerBalanceAdjustParam::execGetValue_Records_Scenario_PercentValue },
			{ "GetValue_Records_ScoreStar_HalfStarBool", &AELCareerBalanceAdjustParam::execGetValue_Records_ScoreStar_HalfStarBool },
			{ "GetValue_Records_ScoreStar_StarValue", &AELCareerBalanceAdjustParam::execGetValue_Records_ScoreStar_StarValue },
			{ "GetValue_WorkOut_Reward_ChangeEnagy", &AELCareerBalanceAdjustParam::execGetValue_WorkOut_Reward_ChangeEnagy },
			{ "GetValue_WorkOut_Reward_ChangeSkillPoint", &AELCareerBalanceAdjustParam::execGetValue_WorkOut_Reward_ChangeSkillPoint },
			{ "SetDataTable_Records_BestScoreStar", &AELCareerBalanceAdjustParam::execSetDataTable_Records_BestScoreStar },
			{ "SetDataTable_Records_ScenarioPercent", &AELCareerBalanceAdjustParam::execSetDataTable_Records_ScenarioPercent },
			{ "SetDataTable_Reward_Dining", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_Dining },
			{ "SetDataTable_Reward_Energy", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_Energy },
			{ "SetDataTable_Reward_Hospital", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_Hospital },
			{ "SetDataTable_Reward_Motivation", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_Motivation },
			{ "SetDataTable_Reward_ScoreBonus_CareerMoney", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_ScoreBonus_CareerMoney },
			{ "SetDataTable_Reward_ScoreBonus_SkillPoint", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_ScoreBonus_SkillPoint },
			{ "SetDataTable_Reward_WinBonus_CareerMoney", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_WinBonus_CareerMoney },
			{ "SetDataTable_Reward_WinBonus_SkillPoint", &AELCareerBalanceAdjustParam::execSetDataTable_Reward_WinBonus_SkillPoint },
			{ "SetDataTable_WorkOut_Reward_Energy", &AELCareerBalanceAdjustParam::execSetDataTable_WorkOut_Reward_Energy },
			{ "SetDataTable_WorkOut_Reward_SkillPoint", &AELCareerBalanceAdjustParam::execSetDataTable_WorkOut_Reward_SkillPoint },
			{ "SetDataTable_WorkOut_Reward_SuccessRate", &AELCareerBalanceAdjustParam::execSetDataTable_WorkOut_Reward_SuccessRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetKey_Dining_Reward_Description_Parms
		{
			ECareerPostCommandEventType _CommandType;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetKey_Dining_Reward_Description_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetKey_Dining_Reward_Description_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetKey_Dining_Reward_Description", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetKey_Dining_Reward_Description_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_EnagyHealPercent_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_EnagyHealPercent_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_EnagyHealPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetRate_Hospital_Reward_EnagyHealPercent", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_EnagyHealPercent_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_NeedCareerMoney_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_NeedCareerMoney_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_NeedCareerMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetRate_Hospital_Reward_NeedCareerMoney", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_NeedCareerMoney_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_SuccessRate_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_SuccessRate_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_SuccessRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetRate_Hospital_Reward_SuccessRate", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetRate_Hospital_Reward_SuccessRate_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetRate_WorkOut_Reward_SuccessRate_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_WorkOut_Reward_SuccessRate_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetRate_WorkOut_Reward_SuccessRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetRate_WorkOut_Reward_SuccessRate", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetRate_WorkOut_Reward_SuccessRate_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetType_Dining_Reward_DiningType_Parms
		{
			ECareerPostCommandEventType _CommandType;
			ECareerDiningType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetType_Dining_Reward_DiningType_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetType_Dining_Reward_DiningType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerDiningType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetType_Dining_Reward_DiningType", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetType_Dining_Reward_DiningType_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetValue_Dining_Reward_EnagyHealValue_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Dining_Reward_EnagyHealValue_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Dining_Reward_EnagyHealValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetValue_Dining_Reward_EnagyHealValue", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetValue_Dining_Reward_EnagyHealValue_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetValue_Records_Scenario_PercentValue_Parms
		{
			ECareerScenarioMatchTiming _ScenarioPart;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ScenarioPart_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ScenarioPart;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::NewProp__ScenarioPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::NewProp__ScenarioPart = { "_ScenarioPart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Records_Scenario_PercentValue_Parms, _ScenarioPart), Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Records_Scenario_PercentValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::NewProp__ScenarioPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::NewProp__ScenarioPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetValue_Records_Scenario_PercentValue", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetValue_Records_Scenario_PercentValue_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_HalfStarBool_Parms
		{
			int32 _ScoreValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ScoreValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::NewProp__ScoreValue = { "_ScoreValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_HalfStarBool_Parms, _ScoreValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_HalfStarBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_HalfStarBool_Parms), &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::NewProp__ScoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetValue_Records_ScoreStar_HalfStarBool", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_HalfStarBool_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_StarValue_Parms
		{
			int32 _ScoreValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ScoreValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::NewProp__ScoreValue = { "_ScoreValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_StarValue_Parms, _ScoreValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_StarValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::NewProp__ScoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetValue_Records_ScoreStar_StarValue", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetValue_Records_ScoreStar_StarValue_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeEnagy_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeEnagy_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeEnagy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetValue_WorkOut_Reward_ChangeEnagy", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeEnagy_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics
	{
		struct ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeSkillPoint_Parms
		{
			ECareerPostCommandEventType _CommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__CommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__CommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::NewProp__CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::NewProp__CommandType = { "_CommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeSkillPoint_Parms, _CommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeSkillPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::NewProp__CommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::NewProp__CommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "GetValue_WorkOut_Reward_ChangeSkillPoint", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventGetValue_WorkOut_Reward_ChangeSkillPoint_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Records_BestScoreStar_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Records_BestScoreStar_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Records_BestScoreStar", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Records_BestScoreStar_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Records_ScenarioPercent_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Records_ScenarioPercent_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Records_ScenarioPercent", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Records_ScenarioPercent_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Dining_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Dining_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_Dining", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Dining_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Energy_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Energy_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_Energy", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Energy_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Hospital_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Hospital_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_Hospital", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Hospital_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Motivation_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Motivation_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_Motivation", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_Motivation_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_ScoreBonus_CareerMoney_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_ScoreBonus_CareerMoney_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_ScoreBonus_CareerMoney", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_ScoreBonus_CareerMoney_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_ScoreBonus_SkillPoint_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_ScoreBonus_SkillPoint_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_ScoreBonus_SkillPoint", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_ScoreBonus_SkillPoint_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_WinBonus_CareerMoney_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_WinBonus_CareerMoney_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_WinBonus_CareerMoney", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_WinBonus_CareerMoney_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_Reward_WinBonus_SkillPoint_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_WinBonus_SkillPoint_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_Reward_WinBonus_SkillPoint", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_Reward_WinBonus_SkillPoint_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_Energy_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_Energy_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_WorkOut_Reward_Energy", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_Energy_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_SkillPoint_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_SkillPoint_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_WorkOut_Reward_SkillPoint", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_SkillPoint_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics
	{
		struct ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_SuccessRate_Parms
		{
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_SuccessRate_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerBalanceAdjustParam, nullptr, "SetDataTable_WorkOut_Reward_SuccessRate", nullptr, nullptr, sizeof(ELCareerBalanceAdjustParam_eventSetDataTable_WorkOut_Reward_SuccessRate_Parms), Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerBalanceAdjustParam_NoRegister()
	{
		return AELCareerBalanceAdjustParam::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetKey_Dining_Reward_Description, "GetKey_Dining_Reward_Description" }, // 2545155951
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_EnagyHealPercent, "GetRate_Hospital_Reward_EnagyHealPercent" }, // 3266155481
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_NeedCareerMoney, "GetRate_Hospital_Reward_NeedCareerMoney" }, // 4098771274
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_Hospital_Reward_SuccessRate, "GetRate_Hospital_Reward_SuccessRate" }, // 3174882665
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetRate_WorkOut_Reward_SuccessRate, "GetRate_WorkOut_Reward_SuccessRate" }, // 1615231016
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetType_Dining_Reward_DiningType, "GetType_Dining_Reward_DiningType" }, // 4241221915
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Dining_Reward_EnagyHealValue, "GetValue_Dining_Reward_EnagyHealValue" }, // 3862743758
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_Scenario_PercentValue, "GetValue_Records_Scenario_PercentValue" }, // 1343860677
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_HalfStarBool, "GetValue_Records_ScoreStar_HalfStarBool" }, // 3673827361
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_Records_ScoreStar_StarValue, "GetValue_Records_ScoreStar_StarValue" }, // 4029518234
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeEnagy, "GetValue_WorkOut_Reward_ChangeEnagy" }, // 3806841533
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_GetValue_WorkOut_Reward_ChangeSkillPoint, "GetValue_WorkOut_Reward_ChangeSkillPoint" }, // 3932915548
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_BestScoreStar, "SetDataTable_Records_BestScoreStar" }, // 319418853
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Records_ScenarioPercent, "SetDataTable_Records_ScenarioPercent" }, // 3183361649
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Dining, "SetDataTable_Reward_Dining" }, // 2615890335
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Energy, "SetDataTable_Reward_Energy" }, // 618866268
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Hospital, "SetDataTable_Reward_Hospital" }, // 2484176451
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_Motivation, "SetDataTable_Reward_Motivation" }, // 760877647
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_CareerMoney, "SetDataTable_Reward_ScoreBonus_CareerMoney" }, // 3450847749
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_ScoreBonus_SkillPoint, "SetDataTable_Reward_ScoreBonus_SkillPoint" }, // 146319076
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_CareerMoney, "SetDataTable_Reward_WinBonus_CareerMoney" }, // 1445509594
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_Reward_WinBonus_SkillPoint, "SetDataTable_Reward_WinBonus_SkillPoint" }, // 1487680083
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_Energy, "SetDataTable_WorkOut_Reward_Energy" }, // 3591169890
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SkillPoint, "SetDataTable_WorkOut_Reward_SkillPoint" }, // 3097411624
		{ &Z_Construct_UFunction_AELCareerBalanceAdjustParam_SetDataTable_WorkOut_Reward_SuccessRate, "SetDataTable_WorkOut_Reward_SuccessRate" }, // 242998502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerBalanceAdjustParam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerBalanceAdjustParam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerBalanceAdjustParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::ClassParams = {
		&AELCareerBalanceAdjustParam::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerBalanceAdjustParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerBalanceAdjustParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerBalanceAdjustParam, 1838609655);
	template<> ABP_200508_API UClass* StaticClass<AELCareerBalanceAdjustParam>()
	{
		return AELCareerBalanceAdjustParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerBalanceAdjustParam(Z_Construct_UClass_AELCareerBalanceAdjustParam, &AELCareerBalanceAdjustParam::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerBalanceAdjustParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerBalanceAdjustParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
