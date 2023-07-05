// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YJIRAAccessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYJIRAAccessor() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYJIRAAccessor_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYJIRAAccessor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchCondition();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRATaskParam();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASearchParam();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FJIRASetupParam();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_JIRASearchEventDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_JIRAAccessorEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYJIRAAccessor::execCreateYJIRAAccessor)
	{
		P_GET_OBJECT_REF(UYJIRAAccessor,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYJIRAAccessor::CreateYJIRAAccessor(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execGenerateJIRAQueryLanguage)
	{
		P_GET_TARRAY_REF(FJIRASearchCondition,Z_Param_Out__cConditions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UYJIRAAccessor::GenerateJIRAQueryLanguage(Z_Param_Out__cConditions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execRequestAppendTask)
	{
		P_GET_STRUCT_REF(FJIRATaskParam,Z_Param_Out__stTaskParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestAppendTask(Z_Param_Out__stTaskParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execRequestDeleteTask)
	{
		P_GET_STRUCT_REF(FJIRATaskParam,Z_Param_Out__stTaskParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeleteTask(Z_Param_Out__stTaskParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execRequestGetTask)
	{
		P_GET_STRUCT_REF(FJIRATaskParam,Z_Param_Out__stTaskParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetTask(Z_Param_Out__stTaskParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execRequestSearchTask)
	{
		P_GET_STRUCT_REF(FJIRASearchParam,Z_Param_Out__stSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSearchTask(Z_Param_Out__stSearch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execRequestUpdateTask)
	{
		P_GET_STRUCT_REF(FJIRATaskParam,Z_Param_Out__stTaskParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUpdateTask(Z_Param_Out__stTaskParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYJIRAAccessor::execSetup)
	{
		P_GET_STRUCT_REF(FJIRASetupParam,Z_Param_Out__pstSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out__pstSetupParam);
		P_NATIVE_END;
	}
	void UYJIRAAccessor::StaticRegisterNativesUYJIRAAccessor()
	{
		UClass* Class = UYJIRAAccessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateYJIRAAccessor", &UYJIRAAccessor::execCreateYJIRAAccessor },
			{ "GenerateJIRAQueryLanguage", &UYJIRAAccessor::execGenerateJIRAQueryLanguage },
			{ "RequestAppendTask", &UYJIRAAccessor::execRequestAppendTask },
			{ "RequestDeleteTask", &UYJIRAAccessor::execRequestDeleteTask },
			{ "RequestGetTask", &UYJIRAAccessor::execRequestGetTask },
			{ "RequestSearchTask", &UYJIRAAccessor::execRequestSearchTask },
			{ "RequestUpdateTask", &UYJIRAAccessor::execRequestUpdateTask },
			{ "Setup", &UYJIRAAccessor::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics
	{
		struct YJIRAAccessor_eventCreateYJIRAAccessor_Parms
		{
			UYJIRAAccessor* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventCreateYJIRAAccessor_Parms, _pcInst), Z_Construct_UClass_UYJIRAAccessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAAccessor_eventCreateYJIRAAccessor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAAccessor_eventCreateYJIRAAccessor_Parms), &Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "CreateYJIRAAccessor", nullptr, nullptr, sizeof(YJIRAAccessor_eventCreateYJIRAAccessor_Parms), Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics
	{
		struct YJIRAAccessor_eventGenerateJIRAQueryLanguage_Parms
		{
			TArray<FJIRASearchCondition> _cConditions;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cConditions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions_Inner = { "_cConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJIRASearchCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions = { "_cConditions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventGenerateJIRAQueryLanguage_Parms, _cConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventGenerateJIRAQueryLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp__cConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "GenerateJIRAQueryLanguage", nullptr, nullptr, sizeof(YJIRAAccessor_eventGenerateJIRAQueryLanguage_Parms), Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics
	{
		struct YJIRAAccessor_eventRequestAppendTask_Parms
		{
			FJIRATaskParam _stTaskParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stTaskParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTaskParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp__stTaskParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp__stTaskParam = { "_stTaskParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventRequestAppendTask_Parms, _stTaskParam), Z_Construct_UScriptStruct_FJIRATaskParam, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp__stTaskParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp__stTaskParam_MetaData)) };
	void Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAAccessor_eventRequestAppendTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAAccessor_eventRequestAppendTask_Parms), &Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp__stTaskParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "RequestAppendTask", nullptr, nullptr, sizeof(YJIRAAccessor_eventRequestAppendTask_Parms), Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics
	{
		struct YJIRAAccessor_eventRequestDeleteTask_Parms
		{
			FJIRATaskParam _stTaskParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stTaskParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTaskParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp__stTaskParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp__stTaskParam = { "_stTaskParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventRequestDeleteTask_Parms, _stTaskParam), Z_Construct_UScriptStruct_FJIRATaskParam, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp__stTaskParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp__stTaskParam_MetaData)) };
	void Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAAccessor_eventRequestDeleteTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAAccessor_eventRequestDeleteTask_Parms), &Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp__stTaskParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "RequestDeleteTask", nullptr, nullptr, sizeof(YJIRAAccessor_eventRequestDeleteTask_Parms), Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics
	{
		struct YJIRAAccessor_eventRequestGetTask_Parms
		{
			FJIRATaskParam _stTaskParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stTaskParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTaskParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp__stTaskParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp__stTaskParam = { "_stTaskParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventRequestGetTask_Parms, _stTaskParam), Z_Construct_UScriptStruct_FJIRATaskParam, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp__stTaskParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp__stTaskParam_MetaData)) };
	void Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAAccessor_eventRequestGetTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAAccessor_eventRequestGetTask_Parms), &Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp__stTaskParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "RequestGetTask", nullptr, nullptr, sizeof(YJIRAAccessor_eventRequestGetTask_Parms), Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics
	{
		struct YJIRAAccessor_eventRequestSearchTask_Parms
		{
			FJIRASearchParam _stSearch;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSearch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp__stSearch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp__stSearch = { "_stSearch", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventRequestSearchTask_Parms, _stSearch), Z_Construct_UScriptStruct_FJIRASearchParam, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp__stSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp__stSearch_MetaData)) };
	void Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAAccessor_eventRequestSearchTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAAccessor_eventRequestSearchTask_Parms), &Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp__stSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "RequestSearchTask", nullptr, nullptr, sizeof(YJIRAAccessor_eventRequestSearchTask_Parms), Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics
	{
		struct YJIRAAccessor_eventRequestUpdateTask_Parms
		{
			FJIRATaskParam _stTaskParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stTaskParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTaskParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp__stTaskParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp__stTaskParam = { "_stTaskParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventRequestUpdateTask_Parms, _stTaskParam), Z_Construct_UScriptStruct_FJIRATaskParam, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp__stTaskParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp__stTaskParam_MetaData)) };
	void Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YJIRAAccessor_eventRequestUpdateTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YJIRAAccessor_eventRequestUpdateTask_Parms), &Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp__stTaskParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "RequestUpdateTask", nullptr, nullptr, sizeof(YJIRAAccessor_eventRequestUpdateTask_Parms), Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics
	{
		struct YJIRAAccessor_eventSetup_Parms
		{
			FJIRASetupParam _pstSetupParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pstSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pstSetupParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::NewProp__pstSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::NewProp__pstSetupParam = { "_pstSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YJIRAAccessor_eventSetup_Parms, _pstSetupParam), Z_Construct_UScriptStruct_FJIRASetupParam, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::NewProp__pstSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::NewProp__pstSetupParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::NewProp__pstSetupParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYJIRAAccessor, nullptr, "Setup", nullptr, nullptr, sizeof(YJIRAAccessor_eventSetup_Parms), Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYJIRAAccessor_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYJIRAAccessor_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYJIRAAccessor_NoRegister()
	{
		return UYJIRAAccessor::StaticClass();
	}
	struct Z_Construct_UClass_UYJIRAAccessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JIRASearchEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_JIRASearchEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JIRAAccessorEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_JIRAAccessorEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYJIRAAccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYJIRAAccessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYJIRAAccessor_CreateYJIRAAccessor, "CreateYJIRAAccessor" }, // 2829563378
		{ &Z_Construct_UFunction_UYJIRAAccessor_GenerateJIRAQueryLanguage, "GenerateJIRAQueryLanguage" }, // 755704553
		{ &Z_Construct_UFunction_UYJIRAAccessor_RequestAppendTask, "RequestAppendTask" }, // 3950896717
		{ &Z_Construct_UFunction_UYJIRAAccessor_RequestDeleteTask, "RequestDeleteTask" }, // 3379093113
		{ &Z_Construct_UFunction_UYJIRAAccessor_RequestGetTask, "RequestGetTask" }, // 2656501611
		{ &Z_Construct_UFunction_UYJIRAAccessor_RequestSearchTask, "RequestSearchTask" }, // 737811552
		{ &Z_Construct_UFunction_UYJIRAAccessor_RequestUpdateTask, "RequestUpdateTask" }, // 909791210
		{ &Z_Construct_UFunction_UYJIRAAccessor_Setup, "Setup" }, // 2235915400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYJIRAAccessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YJIRAAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRASearchEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAAccessor" },
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRASearchEventDispatcher = { "JIRASearchEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYJIRAAccessor, JIRASearchEventDispatcher), Z_Construct_UDelegateFunction_yDebug_JIRASearchEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRASearchEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRASearchEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRAAccessorEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YJIRAAccessor" },
		{ "ModuleRelativePath", "Public/YJIRAAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRAAccessorEventDispatcher = { "JIRAAccessorEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYJIRAAccessor, JIRAAccessorEventDispatcher), Z_Construct_UDelegateFunction_yDebug_JIRAAccessorEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRAAccessorEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRAAccessorEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYJIRAAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRASearchEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYJIRAAccessor_Statics::NewProp_JIRAAccessorEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYJIRAAccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYJIRAAccessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYJIRAAccessor_Statics::ClassParams = {
		&UYJIRAAccessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYJIRAAccessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYJIRAAccessor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYJIRAAccessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYJIRAAccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYJIRAAccessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYJIRAAccessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYJIRAAccessor, 2327164775);
	template<> YDEBUG_API UClass* StaticClass<UYJIRAAccessor>()
	{
		return UYJIRAAccessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYJIRAAccessor(Z_Construct_UClass_UYJIRAAccessor, &UYJIRAAccessor::StaticClass, TEXT("/Script/yDebug"), TEXT("UYJIRAAccessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYJIRAAccessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
