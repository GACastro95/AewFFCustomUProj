// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSStormZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSStormZone() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStormZone_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStormZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormSchedule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AELSSStormZone::execAddSchedule)
	{
		P_GET_STRUCT(FSSStormSchedule,Z_Param_schedule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSchedule_Implementation(Z_Param_schedule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execCalcDamageAreaSELocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inPlayerLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalcDamageAreaSELocation(Z_Param_Out_inPlayerLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execCheckOutside)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckOutside(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execGetLatestSchedulePhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLatestSchedulePhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execOnRep_CurrentSchedule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentSchedule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execOnRep_TimeSinceStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TimeSinceStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execSetTimeSinceStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeSinceStart(Z_Param_Sec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execUpdateCurrentSchedule)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_phaseLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentSchedule(Z_Param_phaseLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStormZone::execUpdateTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTransform();
		P_NATIVE_END;
	}
	static FName NAME_AELSSStormZone_AddSchedule = FName(TEXT("AddSchedule"));
	void AELSSStormZone::AddSchedule(FSSStormSchedule const& schedule)
	{
		ELSSStormZone_eventAddSchedule_Parms Parms;
		Parms.schedule=schedule;
		ProcessEvent(FindFunctionChecked(NAME_AELSSStormZone_AddSchedule),&Parms);
	}
	void AELSSStormZone::StaticRegisterNativesAELSSStormZone()
	{
		UClass* Class = AELSSStormZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSchedule", &AELSSStormZone::execAddSchedule },
			{ "CalcDamageAreaSELocation", &AELSSStormZone::execCalcDamageAreaSELocation },
			{ "CheckOutside", &AELSSStormZone::execCheckOutside },
			{ "GetLatestSchedulePhase", &AELSSStormZone::execGetLatestSchedulePhase },
			{ "GetRadius", &AELSSStormZone::execGetRadius },
			{ "OnRep_CurrentSchedule", &AELSSStormZone::execOnRep_CurrentSchedule },
			{ "OnRep_TimeSinceStart", &AELSSStormZone::execOnRep_TimeSinceStart },
			{ "SetTimeSinceStart", &AELSSStormZone::execSetTimeSinceStart },
			{ "UpdateCurrentSchedule", &AELSSStormZone::execUpdateCurrentSchedule },
			{ "UpdateTransform", &AELSSStormZone::execUpdateTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_schedule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_schedule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::NewProp_schedule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::NewProp_schedule = { "schedule", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventAddSchedule_Parms, schedule), Z_Construct_UScriptStruct_FSSStormSchedule, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::NewProp_schedule_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::NewProp_schedule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::NewProp_schedule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "AddSchedule", nullptr, nullptr, sizeof(ELSSStormZone_eventAddSchedule_Parms), Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_AddSchedule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_AddSchedule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics
	{
		struct ELSSStormZone_eventCalcDamageAreaSELocation_Parms
		{
			FVector inPlayerLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inPlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inPlayerLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_inPlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_inPlayerLocation = { "inPlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventCalcDamageAreaSELocation_Parms, inPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_inPlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_inPlayerLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventCalcDamageAreaSELocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_inPlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "CalcDamageAreaSELocation", nullptr, nullptr, sizeof(ELSSStormZone_eventCalcDamageAreaSELocation_Parms), Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics
	{
		struct ELSSStormZone_eventCheckOutside_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventCheckOutside_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSStormZone_eventCheckOutside_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStormZone_eventCheckOutside_Parms), &Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "CheckOutside", nullptr, nullptr, sizeof(ELSSStormZone_eventCheckOutside_Parms), Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_CheckOutside()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_CheckOutside_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics
	{
		struct ELSSStormZone_eventGetLatestSchedulePhase_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventGetLatestSchedulePhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "GetLatestSchedulePhase", nullptr, nullptr, sizeof(ELSSStormZone_eventGetLatestSchedulePhase_Parms), Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics
	{
		struct ELSSStormZone_eventGetRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "GetRadius", nullptr, nullptr, sizeof(ELSSStormZone_eventGetRadius_Parms), Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "OnRep_CurrentSchedule", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "OnRep_TimeSinceStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics
	{
		struct ELSSStormZone_eventSetTimeSinceStart_Parms
		{
			float Sec;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::NewProp_Sec = { "Sec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventSetTimeSinceStart_Parms, Sec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::NewProp_Sec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "SetTimeSinceStart", nullptr, nullptr, sizeof(ELSSStormZone_eventSetTimeSinceStart_Parms), Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics
	{
		struct ELSSStormZone_eventUpdateCurrentSchedule_Parms
		{
			int32 phaseLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phaseLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::NewProp_phaseLevel = { "phaseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStormZone_eventUpdateCurrentSchedule_Parms, phaseLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::NewProp_phaseLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "UpdateCurrentSchedule", nullptr, nullptr, sizeof(ELSSStormZone_eventUpdateCurrentSchedule_Parms), Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStormZone_UpdateTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStormZone_UpdateTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStormZone_UpdateTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStormZone, nullptr, "UpdateTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStormZone_UpdateTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStormZone_UpdateTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStormZone_UpdateTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStormZone_UpdateTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSStormZone_NoRegister()
	{
		return AELSSStormZone::StaticClass();
	}
	struct Z_Construct_UClass_AELSSStormZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentSchedule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentSchedule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeSinceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceStart;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_schedules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_schedules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_schedules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSStormZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSStormZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSStormZone_AddSchedule, "AddSchedule" }, // 485449873
		{ &Z_Construct_UFunction_AELSSStormZone_CalcDamageAreaSELocation, "CalcDamageAreaSELocation" }, // 3154880497
		{ &Z_Construct_UFunction_AELSSStormZone_CheckOutside, "CheckOutside" }, // 863867249
		{ &Z_Construct_UFunction_AELSSStormZone_GetLatestSchedulePhase, "GetLatestSchedulePhase" }, // 424687092
		{ &Z_Construct_UFunction_AELSSStormZone_GetRadius, "GetRadius" }, // 1762994871
		{ &Z_Construct_UFunction_AELSSStormZone_OnRep_CurrentSchedule, "OnRep_CurrentSchedule" }, // 3199202742
		{ &Z_Construct_UFunction_AELSSStormZone_OnRep_TimeSinceStart, "OnRep_TimeSinceStart" }, // 1915753204
		{ &Z_Construct_UFunction_AELSSStormZone_SetTimeSinceStart, "SetTimeSinceStart" }, // 621111791
		{ &Z_Construct_UFunction_AELSSStormZone_UpdateCurrentSchedule, "UpdateCurrentSchedule" }, // 3221411427
		{ &Z_Construct_UFunction_AELSSStormZone_UpdateTransform, "UpdateTransform" }, // 2434720002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormZone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSStormZone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormZone_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStormZone" },
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStormZone_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStormZone, Radius), METADATA_PARAMS(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormZone_Statics::NewProp_currentSchedule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStormZone" },
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStormZone_Statics::NewProp_currentSchedule = { "currentSchedule", "OnRep_CurrentSchedule", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStormZone, currentSchedule), Z_Construct_UScriptStruct_FSSStormSchedule, METADATA_PARAMS(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_currentSchedule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_currentSchedule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormZone_Statics::NewProp_timeSinceStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStormZone" },
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStormZone_Statics::NewProp_timeSinceStart = { "timeSinceStart", "OnRep_TimeSinceStart", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStormZone, timeSinceStart), METADATA_PARAMS(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_timeSinceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_timeSinceStart_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules_Inner = { "schedules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSStormSchedule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStormZone" },
		{ "ModuleRelativePath", "Public/ELSSStormZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules = { "schedules", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStormZone, schedules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSStormZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormZone_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormZone_Statics::NewProp_currentSchedule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormZone_Statics::NewProp_timeSinceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStormZone_Statics::NewProp_schedules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSStormZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSStormZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSStormZone_Statics::ClassParams = {
		&AELSSStormZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSStormZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSStormZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStormZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSStormZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSStormZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSStormZone, 575954478);
	template<> ABP_200508_API UClass* StaticClass<AELSSStormZone>()
	{
		return AELSSStormZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSStormZone(Z_Construct_UClass_AELSSStormZone, &AELSSStormZone::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSStormZone"), false, nullptr, nullptr, nullptr);

	void AELSSStormZone::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_currentSchedule(TEXT("currentSchedule"));
		static const FName Name_timeSinceStart(TEXT("timeSinceStart"));

		const bool bIsValid = true
			&& Name_currentSchedule == ClassReps[(int32)ENetFields_Private::currentSchedule].Property->GetFName()
			&& Name_timeSinceStart == ClassReps[(int32)ENetFields_Private::timeSinceStart].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSStormZone"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSStormZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
