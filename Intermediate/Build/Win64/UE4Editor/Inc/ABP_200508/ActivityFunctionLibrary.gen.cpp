// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActivityFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivityFunctionLibrary() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActivityFunctionLibrary_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActivityFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EOutCome();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_BackMenuDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UActivityFunctionLibrary::execAvailabilityChangeActivity)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_GET_UBOOL(Z_Param__isEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::AvailabilityChangeActivity(Z_Param_ActivityId,Z_Param__isEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execAvailabilityChangeAllCareerActivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::AvailabilityChangeAllCareerActivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execClearBackMenuDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::ClearBackMenuDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execConvertActivityId)
	{
		P_GET_ENUM(ECareerScenario,Z_Param_Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UActivityFunctionLibrary::ConvertActivityId(ECareerScenario(Z_Param_Scenario));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execEndActivity)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_GET_ENUM(EOutCome,Z_Param_Outcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::EndActivity(Z_Param_ActivityId,EOutCome(Z_Param_Outcome));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execGameIntentsInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::GameIntentsInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execGetGameIntentActivityId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UActivityFunctionLibrary::GetGameIntentActivityId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execGetGameIntentScenario)
	{
		P_GET_UBOOL_REF(Z_Param_Out_isGameIntent);
		P_GET_ENUM_REF(ECareerScenario,Z_Param_Out_Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::GetGameIntentScenario(Z_Param_Out_isGameIntent,(ECareerScenario&)(Z_Param_Out_Scenario));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execIsExistCustomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActivityFunctionLibrary::IsExistCustomData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execIsFirstReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActivityFunctionLibrary::IsFirstReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execIsLaunchActivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActivityFunctionLibrary::IsLaunchActivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execIsNoticeScreenSkip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActivityFunctionLibrary::IsNoticeScreenSkip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execResetReceivedGameIntent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::ResetReceivedGameIntent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execSetBackMenuDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_backMenuDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::SetBackMenuDelegate(FBackMenuDelegate(Z_Param_backMenuDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execSetCurrentActivityId)
	{
		P_GET_ENUM(ECareerScenario,Z_Param_Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::SetCurrentActivityId(ECareerScenario(Z_Param_Scenario));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execSetGameIntentScenario)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_scenarioActivityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::SetGameIntentScenario(Z_Param_scenarioActivityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivityFunctionLibrary::execStartActivity)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActivityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActivityFunctionLibrary::StartActivity(Z_Param_ActivityId);
		P_NATIVE_END;
	}
	void UActivityFunctionLibrary::StaticRegisterNativesUActivityFunctionLibrary()
	{
		UClass* Class = UActivityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AvailabilityChangeActivity", &UActivityFunctionLibrary::execAvailabilityChangeActivity },
			{ "AvailabilityChangeAllCareerActivity", &UActivityFunctionLibrary::execAvailabilityChangeAllCareerActivity },
			{ "ClearBackMenuDelegate", &UActivityFunctionLibrary::execClearBackMenuDelegate },
			{ "ConvertActivityId", &UActivityFunctionLibrary::execConvertActivityId },
			{ "EndActivity", &UActivityFunctionLibrary::execEndActivity },
			{ "GameIntentsInit", &UActivityFunctionLibrary::execGameIntentsInit },
			{ "GetGameIntentActivityId", &UActivityFunctionLibrary::execGetGameIntentActivityId },
			{ "GetGameIntentScenario", &UActivityFunctionLibrary::execGetGameIntentScenario },
			{ "IsExistCustomData", &UActivityFunctionLibrary::execIsExistCustomData },
			{ "IsFirstReceived", &UActivityFunctionLibrary::execIsFirstReceived },
			{ "IsLaunchActivity", &UActivityFunctionLibrary::execIsLaunchActivity },
			{ "IsNoticeScreenSkip", &UActivityFunctionLibrary::execIsNoticeScreenSkip },
			{ "ResetReceivedGameIntent", &UActivityFunctionLibrary::execResetReceivedGameIntent },
			{ "SetBackMenuDelegate", &UActivityFunctionLibrary::execSetBackMenuDelegate },
			{ "SetCurrentActivityId", &UActivityFunctionLibrary::execSetCurrentActivityId },
			{ "SetGameIntentScenario", &UActivityFunctionLibrary::execSetGameIntentScenario },
			{ "StartActivity", &UActivityFunctionLibrary::execStartActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics
	{
		struct ActivityFunctionLibrary_eventAvailabilityChangeActivity_Parms
		{
			FString ActivityId;
			bool _isEnable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEnable_MetaData[];
#endif
		static void NewProp__isEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp_ActivityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventAvailabilityChangeActivity_Parms, ActivityId), METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp_ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp_ActivityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable_SetBit(void* Obj)
	{
		((ActivityFunctionLibrary_eventAvailabilityChangeActivity_Parms*)Obj)->_isEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable = { "_isEnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivityFunctionLibrary_eventAvailabilityChangeActivity_Parms), &Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp_ActivityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::NewProp__isEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "AvailabilityChangeActivity", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventAvailabilityChangeActivity_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "AvailabilityChangeAllCareerActivity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "ClearBackMenuDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics
	{
		struct ActivityFunctionLibrary_eventConvertActivityId_Parms
		{
			ECareerScenario Scenario;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scenario;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::NewProp_Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::NewProp_Scenario = { "Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventConvertActivityId_Parms, Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventConvertActivityId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::NewProp_Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::NewProp_Scenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "ConvertActivityId", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventConvertActivityId_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics
	{
		struct ActivityFunctionLibrary_eventEndActivity_Parms
		{
			FString ActivityId;
			EOutCome Outcome;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_ActivityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventEndActivity_Parms, ActivityId), METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_ActivityId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventEndActivity_Parms, Outcome), Z_Construct_UEnum_ABP_200508_EOutCome, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_ActivityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::NewProp_Outcome,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "EndActivity", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventEndActivity_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "GameIntentsInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics
	{
		struct ActivityFunctionLibrary_eventGetGameIntentActivityId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventGetGameIntentActivityId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "GetGameIntentActivityId", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventGetGameIntentActivityId_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics
	{
		struct ActivityFunctionLibrary_eventGetGameIntentScenario_Parms
		{
			bool isGameIntent;
			ECareerScenario Scenario;
		};
		static void NewProp_isGameIntent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGameIntent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_isGameIntent_SetBit(void* Obj)
	{
		((ActivityFunctionLibrary_eventGetGameIntentScenario_Parms*)Obj)->isGameIntent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_isGameIntent = { "isGameIntent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivityFunctionLibrary_eventGetGameIntentScenario_Parms), &Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_isGameIntent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_Scenario = { "Scenario", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventGetGameIntentScenario_Parms, Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_isGameIntent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::NewProp_Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "GetGameIntentScenario", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventGetGameIntentScenario_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics
	{
		struct ActivityFunctionLibrary_eventIsExistCustomData_Parms
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
	void Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivityFunctionLibrary_eventIsExistCustomData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivityFunctionLibrary_eventIsExistCustomData_Parms), &Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "IsExistCustomData", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventIsExistCustomData_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics
	{
		struct ActivityFunctionLibrary_eventIsFirstReceived_Parms
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
	void Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivityFunctionLibrary_eventIsFirstReceived_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivityFunctionLibrary_eventIsFirstReceived_Parms), &Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "IsFirstReceived", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventIsFirstReceived_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics
	{
		struct ActivityFunctionLibrary_eventIsLaunchActivity_Parms
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
	void Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivityFunctionLibrary_eventIsLaunchActivity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivityFunctionLibrary_eventIsLaunchActivity_Parms), &Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "IsLaunchActivity", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventIsLaunchActivity_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics
	{
		struct ActivityFunctionLibrary_eventIsNoticeScreenSkip_Parms
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
	void Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivityFunctionLibrary_eventIsNoticeScreenSkip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivityFunctionLibrary_eventIsNoticeScreenSkip_Parms), &Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "IsNoticeScreenSkip", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventIsNoticeScreenSkip_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "ResetReceivedGameIntent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics
	{
		struct ActivityFunctionLibrary_eventSetBackMenuDelegate_Parms
		{
			FScriptDelegate backMenuDelegate;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_backMenuDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::NewProp_backMenuDelegate = { "backMenuDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventSetBackMenuDelegate_Parms, backMenuDelegate), Z_Construct_UDelegateFunction_ABP_200508_BackMenuDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::NewProp_backMenuDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "SetBackMenuDelegate", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventSetBackMenuDelegate_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics
	{
		struct ActivityFunctionLibrary_eventSetCurrentActivityId_Parms
		{
			ECareerScenario Scenario;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::NewProp_Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::NewProp_Scenario = { "Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventSetCurrentActivityId_Parms, Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::NewProp_Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::NewProp_Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "SetCurrentActivityId", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventSetCurrentActivityId_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics
	{
		struct ActivityFunctionLibrary_eventSetGameIntentScenario_Parms
		{
			FString scenarioActivityId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scenarioActivityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scenarioActivityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::NewProp_scenarioActivityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::NewProp_scenarioActivityId = { "scenarioActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventSetGameIntentScenario_Parms, scenarioActivityId), METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::NewProp_scenarioActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::NewProp_scenarioActivityId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::NewProp_scenarioActivityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "SetGameIntentScenario", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventSetGameIntentScenario_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics
	{
		struct ActivityFunctionLibrary_eventStartActivity_Parms
		{
			FString ActivityId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::NewProp_ActivityId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivityFunctionLibrary_eventStartActivity_Parms, ActivityId), METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::NewProp_ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::NewProp_ActivityId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::NewProp_ActivityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivityFunctionLibrary, nullptr, "StartActivity", nullptr, nullptr, sizeof(ActivityFunctionLibrary_eventStartActivity_Parms), Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivityFunctionLibrary_NoRegister()
	{
		return UActivityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UActivityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeActivity, "AvailabilityChangeActivity" }, // 1765639962
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_AvailabilityChangeAllCareerActivity, "AvailabilityChangeAllCareerActivity" }, // 4243758456
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_ClearBackMenuDelegate, "ClearBackMenuDelegate" }, // 1228644387
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_ConvertActivityId, "ConvertActivityId" }, // 3512178459
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_EndActivity, "EndActivity" }, // 4126162729
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_GameIntentsInit, "GameIntentsInit" }, // 3695378508
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentActivityId, "GetGameIntentActivityId" }, // 3849598551
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_GetGameIntentScenario, "GetGameIntentScenario" }, // 2113680023
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_IsExistCustomData, "IsExistCustomData" }, // 923666508
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_IsFirstReceived, "IsFirstReceived" }, // 508975543
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_IsLaunchActivity, "IsLaunchActivity" }, // 247855806
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_IsNoticeScreenSkip, "IsNoticeScreenSkip" }, // 1530686670
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_ResetReceivedGameIntent, "ResetReceivedGameIntent" }, // 245855834
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_SetBackMenuDelegate, "SetBackMenuDelegate" }, // 3138919905
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_SetCurrentActivityId, "SetCurrentActivityId" }, // 3672780632
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_SetGameIntentScenario, "SetGameIntentScenario" }, // 1879233623
		{ &Z_Construct_UFunction_UActivityFunctionLibrary_StartActivity, "StartActivity" }, // 2003870931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActivityFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActivityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivityFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivityFunctionLibrary_Statics::ClassParams = {
		&UActivityFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActivityFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivityFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivityFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivityFunctionLibrary, 2524995938);
	template<> ABP_200508_API UClass* StaticClass<UActivityFunctionLibrary>()
	{
		return UActivityFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivityFunctionLibrary(Z_Construct_UClass_UActivityFunctionLibrary, &UActivityFunctionLibrary::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActivityFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivityFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
