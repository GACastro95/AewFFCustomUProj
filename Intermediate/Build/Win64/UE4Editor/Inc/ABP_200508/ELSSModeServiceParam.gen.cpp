// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSModeServiceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSModeServiceParam() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeServiceParam_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeServiceParam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSModeServiceState();
// End Cross Module References
	DEFINE_FUNCTION(UELSSModeServiceParam::execGetBody)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBody(Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execGetMaintenanceInTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_outDateTime);
		P_GET_UBOOL(Z_Param_checkEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMaintenanceInTime(Z_Param_Out_outDateTime,Z_Param_checkEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execGetMaintenanceOutTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_outDateTime);
		P_GET_UBOOL(Z_Param_checkEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMaintenanceOutTime(Z_Param_Out_outDateTime,Z_Param_checkEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSModeServiceState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execGetTitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTitle(Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execIsEndSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEndSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execIsIgnoreMaintenance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIgnoreMaintenance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSModeServiceParam::execSetup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param_Data);
		P_NATIVE_END;
	}
	void UELSSModeServiceParam::StaticRegisterNativesUELSSModeServiceParam()
	{
		UClass* Class = UELSSModeServiceParam::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBody", &UELSSModeServiceParam::execGetBody },
			{ "GetMaintenanceInTime", &UELSSModeServiceParam::execGetMaintenanceInTime },
			{ "GetMaintenanceOutTime", &UELSSModeServiceParam::execGetMaintenanceOutTime },
			{ "GetState", &UELSSModeServiceParam::execGetState },
			{ "GetTitle", &UELSSModeServiceParam::execGetTitle },
			{ "IsEndSetup", &UELSSModeServiceParam::execIsEndSetup },
			{ "IsIgnoreMaintenance", &UELSSModeServiceParam::execIsIgnoreMaintenance },
			{ "Setup", &UELSSModeServiceParam::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics
	{
		struct ELSSModeServiceParam_eventGetBody_Parms
		{
			FString Language;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetBody_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetBody_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "GetBody", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventGetBody_Parms), Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_GetBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_GetBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics
	{
		struct ELSSModeServiceParam_eventGetMaintenanceInTime_Parms
		{
			FDateTime outDateTime;
			bool checkEnabled;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outDateTime;
		static void NewProp_checkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_outDateTime = { "outDateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetMaintenanceInTime_Parms, outDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_checkEnabled_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventGetMaintenanceInTime_Parms*)Obj)->checkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_checkEnabled = { "checkEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventGetMaintenanceInTime_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_checkEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventGetMaintenanceInTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventGetMaintenanceInTime_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_outDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_checkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "GetMaintenanceInTime", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventGetMaintenanceInTime_Parms), Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics
	{
		struct ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms
		{
			FDateTime outDateTime;
			bool checkEnabled;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outDateTime;
		static void NewProp_checkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_outDateTime = { "outDateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms, outDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_checkEnabled_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms*)Obj)->checkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_checkEnabled = { "checkEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_checkEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_outDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_checkEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "GetMaintenanceOutTime", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventGetMaintenanceOutTime_Parms), Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics
	{
		struct ELSSModeServiceParam_eventGetState_Parms
		{
			ESSModeServiceState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSModeServiceState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "GetState", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventGetState_Parms), Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics
	{
		struct ELSSModeServiceParam_eventGetTitle_Parms
		{
			FString Language;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetTitle_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventGetTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "GetTitle", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventGetTitle_Parms), Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_GetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_GetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics
	{
		struct ELSSModeServiceParam_eventIsEndSetup_Parms
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
	void Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventIsEndSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventIsEndSetup_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "IsEndSetup", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventIsEndSetup_Parms), Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics
	{
		struct ELSSModeServiceParam_eventIsIgnoreMaintenance_Parms
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
	void Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventIsIgnoreMaintenance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventIsIgnoreMaintenance_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "IsIgnoreMaintenance", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventIsIgnoreMaintenance_Parms), Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics
	{
		struct ELSSModeServiceParam_eventSetup_Parms
		{
			FString Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSModeServiceParam_eventSetup_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSModeServiceParam_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeServiceParam_eventSetup_Parms), &Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeServiceParam, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSModeServiceParam_eventSetup_Parms), Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeServiceParam_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeServiceParam_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSModeServiceParam_NoRegister()
	{
		return UELSSModeServiceParam::StaticClass();
	}
	struct Z_Construct_UClass_UELSSModeServiceParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSModeServiceParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSModeServiceParam_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSModeServiceParam_GetBody, "GetBody" }, // 535745899
		{ &Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceInTime, "GetMaintenanceInTime" }, // 695762487
		{ &Z_Construct_UFunction_UELSSModeServiceParam_GetMaintenanceOutTime, "GetMaintenanceOutTime" }, // 3604887822
		{ &Z_Construct_UFunction_UELSSModeServiceParam_GetState, "GetState" }, // 336234173
		{ &Z_Construct_UFunction_UELSSModeServiceParam_GetTitle, "GetTitle" }, // 48125294
		{ &Z_Construct_UFunction_UELSSModeServiceParam_IsEndSetup, "IsEndSetup" }, // 743587631
		{ &Z_Construct_UFunction_UELSSModeServiceParam_IsIgnoreMaintenance, "IsIgnoreMaintenance" }, // 996895715
		{ &Z_Construct_UFunction_UELSSModeServiceParam_Setup, "Setup" }, // 3619284594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeServiceParam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSModeServiceParam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSModeServiceParam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSModeServiceParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSModeServiceParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSModeServiceParam_Statics::ClassParams = {
		&UELSSModeServiceParam::StaticClass,
		"OnlineServer",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSModeServiceParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeServiceParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSModeServiceParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSModeServiceParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSModeServiceParam, 247471600);
	template<> ABP_200508_API UClass* StaticClass<UELSSModeServiceParam>()
	{
		return UELSSModeServiceParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSModeServiceParam(Z_Construct_UClass_UELSSModeServiceParam, &UELSSModeServiceParam::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSModeServiceParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSModeServiceParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
