// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DataMiningUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataMiningUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UDataMiningUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UDataMiningUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchPlayData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayData();
// End Cross Module References
	DEFINE_FUNCTION(UDataMiningUtility::execSendCareerPlayData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FCareerPlayData,Z_Param_Out__SendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataMiningUtility::SendCareerPlayData(Z_Param_WorldContextObject,Z_Param_Out__SendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataMiningUtility::execSendMatchPlayData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FMatchPlayData,Z_Param_Out__SendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataMiningUtility::SendMatchPlayData(Z_Param_WorldContextObject,Z_Param_Out__SendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataMiningUtility::execSendMiniGamePlayData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FMiniGamePlayData,Z_Param_Out__SendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataMiningUtility::SendMiniGamePlayData(Z_Param_WorldContextObject,Z_Param_Out__SendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataMiningUtility::execWriteCareerPlayData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FCareerPlayData,Z_Param_Out_SendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataMiningUtility::WriteCareerPlayData(Z_Param_WorldContextObject,Z_Param_Out_SendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataMiningUtility::execWriteMatchPlayData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FMatchPlayData,Z_Param_Out_SendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataMiningUtility::WriteMatchPlayData(Z_Param_WorldContextObject,Z_Param_Out_SendData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataMiningUtility::execWriteMiniGamePlayData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FMiniGamePlayData,Z_Param_Out_SendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataMiningUtility::WriteMiniGamePlayData(Z_Param_WorldContextObject,Z_Param_Out_SendData);
		P_NATIVE_END;
	}
	void UDataMiningUtility::StaticRegisterNativesUDataMiningUtility()
	{
		UClass* Class = UDataMiningUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendCareerPlayData", &UDataMiningUtility::execSendCareerPlayData },
			{ "SendMatchPlayData", &UDataMiningUtility::execSendMatchPlayData },
			{ "SendMiniGamePlayData", &UDataMiningUtility::execSendMiniGamePlayData },
			{ "WriteCareerPlayData", &UDataMiningUtility::execWriteCareerPlayData },
			{ "WriteMatchPlayData", &UDataMiningUtility::execWriteMatchPlayData },
			{ "WriteMiniGamePlayData", &UDataMiningUtility::execWriteMiniGamePlayData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics
	{
		struct DataMiningUtility_eventSendCareerPlayData_Parms
		{
			const UObject* WorldContextObject;
			FCareerPlayData _SendData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventSendCareerPlayData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp__SendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp__SendData = { "_SendData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventSendCareerPlayData_Parms, _SendData), Z_Construct_UScriptStruct_FCareerPlayData, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp__SendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp__SendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::NewProp__SendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataMiningUtility, nullptr, "SendCareerPlayData", nullptr, nullptr, sizeof(DataMiningUtility_eventSendCareerPlayData_Parms), Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics
	{
		struct DataMiningUtility_eventSendMatchPlayData_Parms
		{
			const UObject* WorldContextObject;
			FMatchPlayData _SendData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventSendMatchPlayData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp__SendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp__SendData = { "_SendData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventSendMatchPlayData_Parms, _SendData), Z_Construct_UScriptStruct_FMatchPlayData, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp__SendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp__SendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::NewProp__SendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataMiningUtility, nullptr, "SendMatchPlayData", nullptr, nullptr, sizeof(DataMiningUtility_eventSendMatchPlayData_Parms), Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics
	{
		struct DataMiningUtility_eventSendMiniGamePlayData_Parms
		{
			const UObject* WorldContextObject;
			FMiniGamePlayData _SendData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventSendMiniGamePlayData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp__SendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp__SendData = { "_SendData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventSendMiniGamePlayData_Parms, _SendData), Z_Construct_UScriptStruct_FMiniGamePlayData, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp__SendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp__SendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::NewProp__SendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataMiningUtility, nullptr, "SendMiniGamePlayData", nullptr, nullptr, sizeof(DataMiningUtility_eventSendMiniGamePlayData_Parms), Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics
	{
		struct DataMiningUtility_eventWriteCareerPlayData_Parms
		{
			const UObject* WorldContextObject;
			FCareerPlayData SendData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventWriteCareerPlayData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_SendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_SendData = { "SendData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventWriteCareerPlayData_Parms, SendData), Z_Construct_UScriptStruct_FCareerPlayData, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_SendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_SendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::NewProp_SendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataMiningUtility, nullptr, "WriteCareerPlayData", nullptr, nullptr, sizeof(DataMiningUtility_eventWriteCareerPlayData_Parms), Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics
	{
		struct DataMiningUtility_eventWriteMatchPlayData_Parms
		{
			const UObject* WorldContextObject;
			FMatchPlayData SendData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventWriteMatchPlayData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_SendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_SendData = { "SendData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventWriteMatchPlayData_Parms, SendData), Z_Construct_UScriptStruct_FMatchPlayData, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_SendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_SendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::NewProp_SendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataMiningUtility, nullptr, "WriteMatchPlayData", nullptr, nullptr, sizeof(DataMiningUtility_eventWriteMatchPlayData_Parms), Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics
	{
		struct DataMiningUtility_eventWriteMiniGamePlayData_Parms
		{
			const UObject* WorldContextObject;
			FMiniGamePlayData SendData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SendData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventWriteMiniGamePlayData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_SendData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_SendData = { "SendData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataMiningUtility_eventWriteMiniGamePlayData_Parms, SendData), Z_Construct_UScriptStruct_FMiniGamePlayData, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_SendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_SendData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::NewProp_SendData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataMiningUtility, nullptr, "WriteMiniGamePlayData", nullptr, nullptr, sizeof(DataMiningUtility_eventWriteMiniGamePlayData_Parms), Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataMiningUtility_NoRegister()
	{
		return UDataMiningUtility::StaticClass();
	}
	struct Z_Construct_UClass_UDataMiningUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataMiningUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataMiningUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataMiningUtility_SendCareerPlayData, "SendCareerPlayData" }, // 1233950144
		{ &Z_Construct_UFunction_UDataMiningUtility_SendMatchPlayData, "SendMatchPlayData" }, // 2689193331
		{ &Z_Construct_UFunction_UDataMiningUtility_SendMiniGamePlayData, "SendMiniGamePlayData" }, // 292488806
		{ &Z_Construct_UFunction_UDataMiningUtility_WriteCareerPlayData, "WriteCareerPlayData" }, // 3044470836
		{ &Z_Construct_UFunction_UDataMiningUtility_WriteMatchPlayData, "WriteMatchPlayData" }, // 1136237732
		{ &Z_Construct_UFunction_UDataMiningUtility_WriteMiniGamePlayData, "WriteMiniGamePlayData" }, // 3603786495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataMiningUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataMiningUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataMiningUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataMiningUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataMiningUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataMiningUtility_Statics::ClassParams = {
		&UDataMiningUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataMiningUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataMiningUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataMiningUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataMiningUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataMiningUtility, 1955040640);
	template<> ABP_200508_API UClass* StaticClass<UDataMiningUtility>()
	{
		return UDataMiningUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataMiningUtility(Z_Construct_UClass_UDataMiningUtility, &UDataMiningUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UDataMiningUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataMiningUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
