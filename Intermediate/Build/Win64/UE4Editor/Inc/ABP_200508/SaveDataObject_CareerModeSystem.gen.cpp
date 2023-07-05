// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_CareerModeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_CareerModeSystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_CareerModeSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_CareerModeSystem();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerGameParam_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_CareerModeSystem::execGetSnapshotParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FCareerSnapshotParam,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSnapshotParam(Z_Param_Index,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerModeSystem::execGetSnapshotParams)
	{
		P_GET_TARRAY_REF(FCareerSnapshotParam,Z_Param_Out_OutParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSnapshotParams(Z_Param_Out_OutParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerModeSystem::execSetCareerGameParamToSaveData)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__careerGameParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCareerGameParamToSaveData(Z_Param__careerGameParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerModeSystem::execSetSaveDataToCareerGameParam)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__careerGameParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSaveDataToCareerGameParam(Z_Param__careerGameParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerModeSystem::execSetSnapshotParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FCareerSnapshotParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerModeSystem::execSetSnapshotParams)
	{
		P_GET_TARRAY_REF(FCareerSnapshotParam,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotParams(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	void USaveDataObject_CareerModeSystem::StaticRegisterNativesUSaveDataObject_CareerModeSystem()
	{
		UClass* Class = USaveDataObject_CareerModeSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSnapshotParam", &USaveDataObject_CareerModeSystem::execGetSnapshotParam },
			{ "GetSnapshotParams", &USaveDataObject_CareerModeSystem::execGetSnapshotParams },
			{ "SetCareerGameParamToSaveData", &USaveDataObject_CareerModeSystem::execSetCareerGameParamToSaveData },
			{ "SetSaveDataToCareerGameParam", &USaveDataObject_CareerModeSystem::execSetSaveDataToCareerGameParam },
			{ "SetSnapshotParam", &USaveDataObject_CareerModeSystem::execSetSnapshotParam },
			{ "SetSnapshotParams", &USaveDataObject_CareerModeSystem::execSetSnapshotParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics
	{
		struct SaveDataObject_CareerModeSystem_eventGetSnapshotParam_Parms
		{
			int32 Index;
			FCareerSnapshotParam OutParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventGetSnapshotParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventGetSnapshotParam_Parms, OutParam), Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerModeSystem_eventGetSnapshotParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerModeSystem_eventGetSnapshotParam_Parms), &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_OutParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerModeSystem, nullptr, "GetSnapshotParam", nullptr, nullptr, sizeof(SaveDataObject_CareerModeSystem_eventGetSnapshotParam_Parms), Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics
	{
		struct SaveDataObject_CareerModeSystem_eventGetSnapshotParams_Parms
		{
			TArray<FCareerSnapshotParam> OutParams;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParams_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_OutParams_Inner = { "OutParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_OutParams = { "OutParams", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventGetSnapshotParams_Parms, OutParams), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerModeSystem_eventGetSnapshotParams_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerModeSystem_eventGetSnapshotParams_Parms), &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_OutParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_OutParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerModeSystem, nullptr, "GetSnapshotParams", nullptr, nullptr, sizeof(SaveDataObject_CareerModeSystem_eventGetSnapshotParams_Parms), Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics
	{
		struct SaveDataObject_CareerModeSystem_eventSetCareerGameParamToSaveData_Parms
		{
			UELCareerGameParam* _careerGameParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__careerGameParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::NewProp__careerGameParam = { "_careerGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventSetCareerGameParamToSaveData_Parms, _careerGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerModeSystem_eventSetCareerGameParamToSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerModeSystem_eventSetCareerGameParamToSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::NewProp__careerGameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerModeSystem, nullptr, "SetCareerGameParamToSaveData", nullptr, nullptr, sizeof(SaveDataObject_CareerModeSystem_eventSetCareerGameParamToSaveData_Parms), Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics
	{
		struct SaveDataObject_CareerModeSystem_eventSetSaveDataToCareerGameParam_Parms
		{
			UELCareerGameParam* _careerGameParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__careerGameParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::NewProp__careerGameParam = { "_careerGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventSetSaveDataToCareerGameParam_Parms, _careerGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerModeSystem_eventSetSaveDataToCareerGameParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerModeSystem_eventSetSaveDataToCareerGameParam_Parms), &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::NewProp__careerGameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerModeSystem, nullptr, "SetSaveDataToCareerGameParam", nullptr, nullptr, sizeof(SaveDataObject_CareerModeSystem_eventSetSaveDataToCareerGameParam_Parms), Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics
	{
		struct SaveDataObject_CareerModeSystem_eventSetSnapshotParam_Parms
		{
			int32 Index;
			FCareerSnapshotParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventSetSnapshotParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventSetSnapshotParam_Parms, Param), Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerModeSystem, nullptr, "SetSnapshotParam", nullptr, nullptr, sizeof(SaveDataObject_CareerModeSystem_eventSetSnapshotParam_Parms), Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics
	{
		struct SaveDataObject_CareerModeSystem_eventSetSnapshotParams_Parms
		{
			TArray<FCareerSnapshotParam> Params;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerModeSystem_eventSetSnapshotParams_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerModeSystem, nullptr, "SetSnapshotParams", nullptr, nullptr, sizeof(SaveDataObject_CareerModeSystem_eventSetSnapshotParams_Parms), Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_CareerModeSystem_NoRegister()
	{
		return USaveDataObject_CareerModeSystem::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParam, "GetSnapshotParam" }, // 1130640786
		{ &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_GetSnapshotParams, "GetSnapshotParams" }, // 2699962740
		{ &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetCareerGameParamToSaveData, "SetCareerGameParamToSaveData" }, // 3158698284
		{ &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSaveDataToCareerGameParam, "SetSaveDataToCareerGameParam" }, // 1317628580
		{ &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParam, "SetSnapshotParam" }, // 658093140
		{ &Z_Construct_UFunction_USaveDataObject_CareerModeSystem_SetSnapshotParams, "SetSnapshotParams" }, // 3978165032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_CareerModeSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_CareerModeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::ClassParams = {
		&USaveDataObject_CareerModeSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_CareerModeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_CareerModeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_CareerModeSystem, 1095089520);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_CareerModeSystem>()
	{
		return USaveDataObject_CareerModeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_CareerModeSystem(Z_Construct_UClass_USaveDataObject_CareerModeSystem, &USaveDataObject_CareerModeSystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_CareerModeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_CareerModeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
