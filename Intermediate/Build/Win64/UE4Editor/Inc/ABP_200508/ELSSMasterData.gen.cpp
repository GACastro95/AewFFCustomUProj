// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMasterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMasterData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterDataRawData_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterAdjust();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSArmorTypeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponCommonParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemBoxSpawnParamForRound();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundAdjustParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormFinalParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionAdjustParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionLevelParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttentionScoreParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotSpawnNumParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotItemCategoryParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotItemParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotWeaponParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillTreeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatMoveSet();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankRangeParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGeneralParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSSMasterData::execConvertDataTableToArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertDataTableToArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSMasterData::execOnChangeLevel)
	{
		P_GET_OBJECT(ULevel,Z_Param_inLevel);
		P_GET_OBJECT(UWorld,Z_Param_inWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeLevel(Z_Param_inLevel,Z_Param_inWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSMasterData::execOnDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSMasterData::execOnInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSMasterData::execSetRawData)
	{
		P_GET_OBJECT(UELSSMasterDataRawData,Z_Param_inData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRawData(Z_Param_inData);
		P_NATIVE_END;
	}
	void UELSSMasterData::StaticRegisterNativesUELSSMasterData()
	{
		UClass* Class = UELSSMasterData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertDataTableToArray", &UELSSMasterData::execConvertDataTableToArray },
			{ "OnChangeLevel", &UELSSMasterData::execOnChangeLevel },
			{ "OnDestroy", &UELSSMasterData::execOnDestroy },
			{ "OnInitialize", &UELSSMasterData::execOnInitialize },
			{ "SetRawData", &UELSSMasterData::execSetRawData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMasterData, nullptr, "ConvertDataTableToArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics
	{
		struct ELSSMasterData_eventOnChangeLevel_Parms
		{
			ULevel* inLevel;
			UWorld* inWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterData_eventOnChangeLevel_Parms, inLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::NewProp_inWorld = { "inWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterData_eventOnChangeLevel_Parms, inWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::NewProp_inLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::NewProp_inWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMasterData, nullptr, "OnChangeLevel", nullptr, nullptr, sizeof(ELSSMasterData_eventOnChangeLevel_Parms), Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMasterData_OnChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMasterData_OnChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSMasterData_OnDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMasterData_OnDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMasterData_OnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMasterData, nullptr, "OnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMasterData_OnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_OnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMasterData_OnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMasterData_OnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSMasterData_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMasterData_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMasterData_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMasterData, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMasterData_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMasterData_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMasterData_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics
	{
		struct ELSSMasterData_eventSetRawData_Parms
		{
			UELSSMasterDataRawData* inData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::NewProp_inData = { "inData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterData_eventSetRawData_Parms, inData), Z_Construct_UClass_UELSSMasterDataRawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::NewProp_inData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMasterData, nullptr, "SetRawData", nullptr, nullptr, sizeof(ELSSMasterData_eventSetRawData_Parms), Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMasterData_SetRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMasterData_SetRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSMasterData_NoRegister()
	{
		return UELSSMasterData::StaticClass();
	}
	struct Z_Construct_UClass_UELSSMasterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMasterData_MetaData[];
#endif
		static void NewProp_EnableMasterData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMasterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RawData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerTypeParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerTypeParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerTypeParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatLevelParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatLevelParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatLevelParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterAdjustArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAdjustArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAdjustArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorTypeParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorTypeParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmorTypeParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponCommonParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCommonParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponCommonParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoundParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemBoxSpawnParamForRoundArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBoxSpawnParamForRoundArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemBoxSpawnParamForRoundArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundAdjustParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundAdjustParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoundAdjustParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StormFinalParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormFinalParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StormFinalParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionAdjustParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionAdjustParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttentionAdjustParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionLevelParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionLevelParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttentionLevelParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttentionScoreParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionScoreParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttentionScoreParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LotSpawnNumParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotSpawnNumParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LotSpawnNumParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LotItemCategoryParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotItemCategoryParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LotItemCategoryParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LotItemParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotItemParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LotItemParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LotWeaponParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotWeaponParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LotWeaponParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatSkillTreeParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillTreeParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillTreeParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatMoveSetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatMoveSetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatMoveSetArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerRankRangeParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRankRangeParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerRankRangeParamArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneralParamArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralParamArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneralParamArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSMasterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSMasterData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSMasterData_ConvertDataTableToArray, "ConvertDataTableToArray" }, // 2885419835
		{ &Z_Construct_UFunction_UELSSMasterData_OnChangeLevel, "OnChangeLevel" }, // 4151917635
		{ &Z_Construct_UFunction_UELSSMasterData_OnDestroy, "OnDestroy" }, // 1773197685
		{ &Z_Construct_UFunction_UELSSMasterData_OnInitialize, "OnInitialize" }, // 2515051418
		{ &Z_Construct_UFunction_UELSSMasterData_SetRawData, "SetRawData" }, // 3493268349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMasterData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData_SetBit(void* Obj)
	{
		((UELSSMasterData*)Obj)->EnableMasterData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData = { "EnableMasterData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSMasterData), &Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RawData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, RawData), Z_Construct_UClass_UELSSMasterDataRawData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RawData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray_Inner = { "WrestlerTypeParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSWrestlerTypeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray = { "WrestlerTypeParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, WrestlerTypeParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray_Inner = { "HeatLevelParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatLevelParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray = { "HeatLevelParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, HeatLevelParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray_Inner = { "CharacterAdjustArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSCharacterAdjust, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray = { "CharacterAdjustArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, CharacterAdjustArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray_Inner = { "ArmorTypeParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSArmorTypeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray = { "ArmorTypeParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, ArmorTypeParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray_Inner = { "AttackParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray = { "AttackParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, AttackParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray_Inner = { "ItemParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray = { "ItemParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, ItemParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray_Inner = { "WeaponCommonParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSWeaponCommonParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray = { "WeaponCommonParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, WeaponCommonParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray_Inner = { "AbilityParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilityParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray = { "AbilityParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, AbilityParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray_Inner = { "RoundParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray = { "RoundParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, RoundParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray_Inner = { "ItemBoxSpawnParamForRoundArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSItemBoxSpawnParamForRound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray = { "ItemBoxSpawnParamForRoundArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, ItemBoxSpawnParamForRoundArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray_Inner = { "RoundAdjustParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSRoundAdjustParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray = { "RoundAdjustParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, RoundAdjustParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray_Inner = { "StormFinalParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSStormFinalParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray = { "StormFinalParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, StormFinalParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray_Inner = { "AttentionAdjustParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttentionAdjustParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray = { "AttentionAdjustParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, AttentionAdjustParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray_Inner = { "AttentionLevelParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttentionLevelParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray = { "AttentionLevelParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, AttentionLevelParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray_Inner = { "AttentionScoreParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttentionScoreParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray = { "AttentionScoreParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, AttentionScoreParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray_Inner = { "LotSpawnNumParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLotSpawnNumParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray = { "LotSpawnNumParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, LotSpawnNumParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray_Inner = { "LotItemCategoryParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLotItemCategoryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray = { "LotItemCategoryParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, LotItemCategoryParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray_Inner = { "LotItemParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLotItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray = { "LotItemParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, LotItemParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray_Inner = { "LotWeaponParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSLotWeaponParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray = { "LotWeaponParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, LotWeaponParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray_Inner = { "HeatSkillParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray = { "HeatSkillParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, HeatSkillParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray_Inner = { "HeatSkillTreeParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatSkillTreeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray = { "HeatSkillTreeParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, HeatSkillTreeParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray_Inner = { "HeatMoveSetArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatMoveSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray = { "HeatMoveSetArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, HeatMoveSetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray_Inner = { "PlayerRankRangeParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPlayerRankRangeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray = { "PlayerRankRangeParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, PlayerRankRangeParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray_Inner = { "GeneralParamArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSGeneralParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterData" },
		{ "ModuleRelativePath", "Public/ELSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray = { "GeneralParamArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSMasterData, GeneralParamArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_EnableMasterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WrestlerTypeParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatLevelParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_CharacterAdjustArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ArmorTypeParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttackParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_WeaponCommonParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AbilityParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_ItemBoxSpawnParamForRoundArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_RoundAdjustParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_StormFinalParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionAdjustParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionLevelParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_AttentionScoreParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotSpawnNumParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemCategoryParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotItemParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_LotWeaponParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatSkillTreeParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_HeatMoveSetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_PlayerRankRangeParamArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSMasterData_Statics::NewProp_GeneralParamArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSMasterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSMasterData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSMasterData_Statics::ClassParams = {
		&UELSSMasterData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSMasterData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSMasterData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMasterData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSMasterData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSMasterData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSMasterData, 873679104);
	template<> ABP_200508_API UClass* StaticClass<UELSSMasterData>()
	{
		return UELSSMasterData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSMasterData(Z_Construct_UClass_UELSSMasterData, &UELSSMasterData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSMasterData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSMasterData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
