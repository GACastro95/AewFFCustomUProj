// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSchedule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSchedule() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSchedule_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSchedule();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSchedule();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerSchedule::execAddCareerScheduleData)
	{
		P_GET_STRUCT(FCareerSchedule,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerScheduleData(Z_Param__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execCareerInitSaveScheduleParam)
	{
		P_GET_ENUM(ECareerScenario,Z_Param__Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CareerInitSaveScheduleParam(ECareerScenario(Z_Param__Scenario));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetCareerScheduleTableBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerSchedule>*)Z_Param__Result=P_THIS->GetCareerScheduleTableBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetCurrentScheduleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerSchedule*)Z_Param__Result=P_THIS->GetCurrentScheduleData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetCurrentWeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentWeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetPostCommandEventTableIndex)
	{
		P_GET_ENUM(ECareerScenarioNo,Z_Param_eScenarioNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPostCommandEventTableIndex(ECareerScenarioNo(Z_Param_eScenarioNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetProgressScenarioTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetProgressScenarioTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerScenario*)Z_Param__Result=P_THIS->GetScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetScheduleTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScheduleTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execGetScheduleTurnMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScheduleTurnMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execIsChangeScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChangeScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execIsDynamite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execIsFirstWeekStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstWeekStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execIsPrologue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPrologue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execIsWeekStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWeekStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execSetScenario)
	{
		P_GET_ENUM(ECareerScenario,Z_Param__Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScenario(ECareerScenario(Z_Param__Scenario));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSchedule::execSetScenarioTable)
	{
		P_GET_ENUM(ECareerScenario,Z_Param__Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScenarioTable(ECareerScenario(Z_Param__Scenario));
		P_NATIVE_END;
	}
	static FName NAME_AELCareerSchedule_SetupCareerPostCommandEventList = FName(TEXT("SetupCareerPostCommandEventList"));
	void AELCareerSchedule::SetupCareerPostCommandEventList(ECareerScenarioNo eScenarioNo)
	{
		ELCareerSchedule_eventSetupCareerPostCommandEventList_Parms Parms;
		Parms.eScenarioNo=eScenarioNo;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerSchedule_SetupCareerPostCommandEventList),&Parms);
	}
	void AELCareerSchedule::StaticRegisterNativesAELCareerSchedule()
	{
		UClass* Class = AELCareerSchedule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCareerScheduleData", &AELCareerSchedule::execAddCareerScheduleData },
			{ "CareerInitSaveScheduleParam", &AELCareerSchedule::execCareerInitSaveScheduleParam },
			{ "GetCareerScheduleTableBase", &AELCareerSchedule::execGetCareerScheduleTableBase },
			{ "GetCurrentScheduleData", &AELCareerSchedule::execGetCurrentScheduleData },
			{ "GetCurrentWeek", &AELCareerSchedule::execGetCurrentWeek },
			{ "GetPostCommandEventTableIndex", &AELCareerSchedule::execGetPostCommandEventTableIndex },
			{ "GetProgressScenarioTurn", &AELCareerSchedule::execGetProgressScenarioTurn },
			{ "GetScenario", &AELCareerSchedule::execGetScenario },
			{ "GetScheduleTurn", &AELCareerSchedule::execGetScheduleTurn },
			{ "GetScheduleTurnMax", &AELCareerSchedule::execGetScheduleTurnMax },
			{ "IsChangeScenario", &AELCareerSchedule::execIsChangeScenario },
			{ "IsDynamite", &AELCareerSchedule::execIsDynamite },
			{ "IsFirstWeekStart", &AELCareerSchedule::execIsFirstWeekStart },
			{ "IsPrologue", &AELCareerSchedule::execIsPrologue },
			{ "IsWeekStart", &AELCareerSchedule::execIsWeekStart },
			{ "SetScenario", &AELCareerSchedule::execSetScenario },
			{ "SetScenarioTable", &AELCareerSchedule::execSetScenarioTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics
	{
		struct ELCareerSchedule_eventAddCareerScheduleData_Parms
		{
			FCareerSchedule _Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventAddCareerScheduleData_Parms, _Data), Z_Construct_UScriptStruct_FCareerSchedule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "AddCareerScheduleData", nullptr, nullptr, sizeof(ELCareerSchedule_eventAddCareerScheduleData_Parms), Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics
	{
		struct ELCareerSchedule_eventCareerInitSaveScheduleParam_Parms
		{
			ECareerScenario _Scenario;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::NewProp__Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::NewProp__Scenario = { "_Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventCareerInitSaveScheduleParam_Parms, _Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::NewProp__Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::NewProp__Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "CareerInitSaveScheduleParam", nullptr, nullptr, sizeof(ELCareerSchedule_eventCareerInitSaveScheduleParam_Parms), Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics
	{
		struct ELCareerSchedule_eventGetCareerScheduleTableBase_Parms
		{
			TArray<FCareerSchedule> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSchedule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetCareerScheduleTableBase_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetCareerScheduleTableBase", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetCareerScheduleTableBase_Parms), Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics
	{
		struct ELCareerSchedule_eventGetCurrentScheduleData_Parms
		{
			FCareerSchedule ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetCurrentScheduleData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerSchedule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetCurrentScheduleData", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetCurrentScheduleData_Parms), Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics
	{
		struct ELCareerSchedule_eventGetCurrentWeek_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetCurrentWeek_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetCurrentWeek", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetCurrentWeek_Parms), Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics
	{
		struct ELCareerSchedule_eventGetPostCommandEventTableIndex_Parms
		{
			ECareerScenarioNo eScenarioNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eScenarioNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eScenarioNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::NewProp_eScenarioNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::NewProp_eScenarioNo = { "eScenarioNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetPostCommandEventTableIndex_Parms, eScenarioNo), Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetPostCommandEventTableIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::NewProp_eScenarioNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::NewProp_eScenarioNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetPostCommandEventTableIndex", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetPostCommandEventTableIndex_Parms), Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics
	{
		struct ELCareerSchedule_eventGetProgressScenarioTurn_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetProgressScenarioTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetProgressScenarioTurn", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetProgressScenarioTurn_Parms), Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics
	{
		struct ELCareerSchedule_eventGetScenario_Parms
		{
			ECareerScenario ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetScenario_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetScenario", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetScenario_Parms), Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics
	{
		struct ELCareerSchedule_eventGetScheduleTurn_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetScheduleTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetScheduleTurn", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetScheduleTurn_Parms), Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics
	{
		struct ELCareerSchedule_eventGetScheduleTurnMax_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventGetScheduleTurnMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "GetScheduleTurnMax", nullptr, nullptr, sizeof(ELCareerSchedule_eventGetScheduleTurnMax_Parms), Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics
	{
		struct ELCareerSchedule_eventIsChangeScenario_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSchedule_eventIsChangeScenario_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSchedule_eventIsChangeScenario_Parms), &Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "IsChangeScenario", nullptr, nullptr, sizeof(ELCareerSchedule_eventIsChangeScenario_Parms), Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics
	{
		struct ELCareerSchedule_eventIsDynamite_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSchedule_eventIsDynamite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSchedule_eventIsDynamite_Parms), &Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "IsDynamite", nullptr, nullptr, sizeof(ELCareerSchedule_eventIsDynamite_Parms), Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_IsDynamite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_IsDynamite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics
	{
		struct ELCareerSchedule_eventIsFirstWeekStart_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSchedule_eventIsFirstWeekStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSchedule_eventIsFirstWeekStart_Parms), &Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "IsFirstWeekStart", nullptr, nullptr, sizeof(ELCareerSchedule_eventIsFirstWeekStart_Parms), Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics
	{
		struct ELCareerSchedule_eventIsPrologue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSchedule_eventIsPrologue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSchedule_eventIsPrologue_Parms), &Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "IsPrologue", nullptr, nullptr, sizeof(ELCareerSchedule_eventIsPrologue_Parms), Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_IsPrologue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_IsPrologue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics
	{
		struct ELCareerSchedule_eventIsWeekStart_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSchedule_eventIsWeekStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSchedule_eventIsWeekStart_Parms), &Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "IsWeekStart", nullptr, nullptr, sizeof(ELCareerSchedule_eventIsWeekStart_Parms), Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_IsWeekStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_IsWeekStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics
	{
		struct ELCareerSchedule_eventSetScenario_Parms
		{
			ECareerScenario _Scenario;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::NewProp__Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::NewProp__Scenario = { "_Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventSetScenario_Parms, _Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::NewProp__Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::NewProp__Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "SetScenario", nullptr, nullptr, sizeof(ELCareerSchedule_eventSetScenario_Parms), Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_SetScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_SetScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics
	{
		struct ELCareerSchedule_eventSetScenarioTable_Parms
		{
			ECareerScenario _Scenario;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::NewProp__Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::NewProp__Scenario = { "_Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventSetScenarioTable_Parms, _Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::NewProp__Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::NewProp__Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "SetScenarioTable", nullptr, nullptr, sizeof(ELCareerSchedule_eventSetScenarioTable_Parms), Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eScenarioNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eScenarioNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::NewProp_eScenarioNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::NewProp_eScenarioNo = { "eScenarioNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSchedule_eventSetupCareerPostCommandEventList_Parms, eScenarioNo), Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::NewProp_eScenarioNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::NewProp_eScenarioNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSchedule, nullptr, "SetupCareerPostCommandEventList", nullptr, nullptr, sizeof(ELCareerSchedule_eventSetupCareerPostCommandEventList_Parms), Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerSchedule_NoRegister()
	{
		return AELCareerSchedule::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerSchedule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CareerScheduleTableBase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerScheduleTableBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CareerScheduleTableBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerSchedule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerSchedule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerSchedule_AddCareerScheduleData, "AddCareerScheduleData" }, // 2363250653
		{ &Z_Construct_UFunction_AELCareerSchedule_CareerInitSaveScheduleParam, "CareerInitSaveScheduleParam" }, // 1426094817
		{ &Z_Construct_UFunction_AELCareerSchedule_GetCareerScheduleTableBase, "GetCareerScheduleTableBase" }, // 850800175
		{ &Z_Construct_UFunction_AELCareerSchedule_GetCurrentScheduleData, "GetCurrentScheduleData" }, // 3086583292
		{ &Z_Construct_UFunction_AELCareerSchedule_GetCurrentWeek, "GetCurrentWeek" }, // 2625954081
		{ &Z_Construct_UFunction_AELCareerSchedule_GetPostCommandEventTableIndex, "GetPostCommandEventTableIndex" }, // 2458688687
		{ &Z_Construct_UFunction_AELCareerSchedule_GetProgressScenarioTurn, "GetProgressScenarioTurn" }, // 959673754
		{ &Z_Construct_UFunction_AELCareerSchedule_GetScenario, "GetScenario" }, // 758288826
		{ &Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurn, "GetScheduleTurn" }, // 2350289443
		{ &Z_Construct_UFunction_AELCareerSchedule_GetScheduleTurnMax, "GetScheduleTurnMax" }, // 4062259318
		{ &Z_Construct_UFunction_AELCareerSchedule_IsChangeScenario, "IsChangeScenario" }, // 3002640465
		{ &Z_Construct_UFunction_AELCareerSchedule_IsDynamite, "IsDynamite" }, // 3819350443
		{ &Z_Construct_UFunction_AELCareerSchedule_IsFirstWeekStart, "IsFirstWeekStart" }, // 3064952641
		{ &Z_Construct_UFunction_AELCareerSchedule_IsPrologue, "IsPrologue" }, // 3496860560
		{ &Z_Construct_UFunction_AELCareerSchedule_IsWeekStart, "IsWeekStart" }, // 508135950
		{ &Z_Construct_UFunction_AELCareerSchedule_SetScenario, "SetScenario" }, // 3857375654
		{ &Z_Construct_UFunction_AELCareerSchedule_SetScenarioTable, "SetScenarioTable" }, // 3408051739
		{ &Z_Construct_UFunction_AELCareerSchedule_SetupCareerPostCommandEventList, "SetupCareerPostCommandEventList" }, // 2944676189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSchedule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSchedule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase_Inner = { "m_CareerScheduleTableBase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSchedule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSchedule" },
		{ "ModuleRelativePath", "Public/ELCareerSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase = { "m_CareerScheduleTableBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSchedule, m_CareerScheduleTableBase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerSchedule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSchedule_Statics::NewProp_m_CareerScheduleTableBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerSchedule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerSchedule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerSchedule_Statics::ClassParams = {
		&AELCareerSchedule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerSchedule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSchedule_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerSchedule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSchedule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerSchedule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerSchedule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerSchedule, 2186704790);
	template<> ABP_200508_API UClass* StaticClass<AELCareerSchedule>()
	{
		return AELCareerSchedule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerSchedule(Z_Construct_UClass_AELCareerSchedule, &AELCareerSchedule::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerSchedule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerSchedule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
