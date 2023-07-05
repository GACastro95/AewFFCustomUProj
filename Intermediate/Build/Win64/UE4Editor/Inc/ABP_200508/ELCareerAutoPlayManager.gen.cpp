// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerAutoPlayManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerAutoPlayManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAutoPlayManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAutoPlayManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerAutoPlayManager::execGetAutoPlayType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerDebug_AutoPlayType*)Z_Param__Result=P_THIS->GetAutoPlayType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAutoPlayManager::execGetScenarioDetailChoiceNo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TitleKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScenarioDetailChoiceNo(Z_Param_TitleKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAutoPlayManager::execGetScenarioDetailWinInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerAutoPlay_MatchResult*)Z_Param__Result=P_THIS->GetScenarioDetailWinInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAutoPlayManager::execSetDataTable_Scenario_Detail)
	{
		P_GET_ENUM(ECareerScenario,Z_Param_Index);
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Scenario_Detail(ECareerScenario(Z_Param_Index),Z_Param_pDataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAutoPlayManager::execSetDataTable_Scenario_Setting)
	{
		P_GET_OBJECT(UDataTable,Z_Param_pDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable_Scenario_Setting(Z_Param_pDataTable);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerAutoPlayManager_LoadDataTable = FName(TEXT("LoadDataTable"));
	void UELCareerAutoPlayManager::LoadDataTable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerAutoPlayManager_LoadDataTable),NULL);
	}
	void UELCareerAutoPlayManager::StaticRegisterNativesUELCareerAutoPlayManager()
	{
		UClass* Class = UELCareerAutoPlayManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAutoPlayType", &UELCareerAutoPlayManager::execGetAutoPlayType },
			{ "GetScenarioDetailChoiceNo", &UELCareerAutoPlayManager::execGetScenarioDetailChoiceNo },
			{ "GetScenarioDetailWinInfo", &UELCareerAutoPlayManager::execGetScenarioDetailWinInfo },
			{ "SetDataTable_Scenario_Detail", &UELCareerAutoPlayManager::execSetDataTable_Scenario_Detail },
			{ "SetDataTable_Scenario_Setting", &UELCareerAutoPlayManager::execSetDataTable_Scenario_Setting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics
	{
		struct ELCareerAutoPlayManager_eventGetAutoPlayType_Parms
		{
			ECareerDebug_AutoPlayType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventGetAutoPlayType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoPlayManager, nullptr, "GetAutoPlayType", nullptr, nullptr, sizeof(ELCareerAutoPlayManager_eventGetAutoPlayType_Parms), Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics
	{
		struct ELCareerAutoPlayManager_eventGetScenarioDetailChoiceNo_Parms
		{
			FString TitleKey;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_TitleKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_TitleKey = { "TitleKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventGetScenarioDetailChoiceNo_Parms, TitleKey), METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_TitleKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_TitleKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventGetScenarioDetailChoiceNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_TitleKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoPlayManager, nullptr, "GetScenarioDetailChoiceNo", nullptr, nullptr, sizeof(ELCareerAutoPlayManager_eventGetScenarioDetailChoiceNo_Parms), Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics
	{
		struct ELCareerAutoPlayManager_eventGetScenarioDetailWinInfo_Parms
		{
			ECareerAutoPlay_MatchResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventGetScenarioDetailWinInfo_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerAutoPlay_MatchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoPlayManager, nullptr, "GetScenarioDetailWinInfo", nullptr, nullptr, sizeof(ELCareerAutoPlayManager_eventGetScenarioDetailWinInfo_Parms), Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoPlayManager, nullptr, "LoadDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics
	{
		struct ELCareerAutoPlayManager_eventSetDataTable_Scenario_Detail_Parms
		{
			ECareerScenario Index;
			UDataTable* pDataTable;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::NewProp_Index_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventSetDataTable_Scenario_Detail_Parms, Index), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventSetDataTable_Scenario_Detail_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::NewProp_Index_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoPlayManager, nullptr, "SetDataTable_Scenario_Detail", nullptr, nullptr, sizeof(ELCareerAutoPlayManager_eventSetDataTable_Scenario_Detail_Parms), Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics
	{
		struct ELCareerAutoPlayManager_eventSetDataTable_Scenario_Setting_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::NewProp_pDataTable = { "pDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAutoPlayManager_eventSetDataTable_Scenario_Setting_Parms, pDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::NewProp_pDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAutoPlayManager, nullptr, "SetDataTable_Scenario_Setting", nullptr, nullptr, sizeof(ELCareerAutoPlayManager_eventSetDataTable_Scenario_Setting_Parms), Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerAutoPlayManager_NoRegister()
	{
		return UELCareerAutoPlayManager::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerAutoPlayManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataTable_AutoPlay_Scenario_Setting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DataTable_AutoPlay_Scenario_Setting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DataTable_AutoPlay_Scenario_Detail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DataTable_AutoPlay_Scenario_Detail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerAutoPlayManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerAutoPlayManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerAutoPlayManager_GetAutoPlayType, "GetAutoPlayType" }, // 1765097794
		{ &Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailChoiceNo, "GetScenarioDetailChoiceNo" }, // 793788270
		{ &Z_Construct_UFunction_UELCareerAutoPlayManager_GetScenarioDetailWinInfo, "GetScenarioDetailWinInfo" }, // 2347542056
		{ &Z_Construct_UFunction_UELCareerAutoPlayManager_LoadDataTable, "LoadDataTable" }, // 681778953
		{ &Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Detail, "SetDataTable_Scenario_Detail" }, // 1774909692
		{ &Z_Construct_UFunction_UELCareerAutoPlayManager_SetDataTable_Scenario_Setting, "SetDataTable_Scenario_Setting" }, // 3044519368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAutoPlayManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerAutoPlayManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Setting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAutoPlayManager" },
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Setting = { "m_DataTable_AutoPlay_Scenario_Setting", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAutoPlayManager, m_DataTable_AutoPlay_Scenario_Setting), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Setting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Setting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Detail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAutoPlayManager" },
		{ "ModuleRelativePath", "Public/ELCareerAutoPlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Detail = { "m_DataTable_AutoPlay_Scenario_Detail", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_DataTable_AutoPlay_Scenario_Detail, UELCareerAutoPlayManager), STRUCT_OFFSET(UELCareerAutoPlayManager, m_DataTable_AutoPlay_Scenario_Detail), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Detail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerAutoPlayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAutoPlayManager_Statics::NewProp_m_DataTable_AutoPlay_Scenario_Detail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerAutoPlayManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerAutoPlayManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerAutoPlayManager_Statics::ClassParams = {
		&UELCareerAutoPlayManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerAutoPlayManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAutoPlayManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerAutoPlayManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerAutoPlayManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerAutoPlayManager, 3494639864);
	template<> ABP_200508_API UClass* StaticClass<UELCareerAutoPlayManager>()
	{
		return UELCareerAutoPlayManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerAutoPlayManager(Z_Construct_UClass_UELCareerAutoPlayManager, &UELCareerAutoPlayManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerAutoPlayManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerAutoPlayManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
