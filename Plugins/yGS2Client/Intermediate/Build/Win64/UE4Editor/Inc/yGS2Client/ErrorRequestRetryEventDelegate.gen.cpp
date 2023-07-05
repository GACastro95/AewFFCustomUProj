// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/ErrorRequestRetryEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrorRequestRetryEventDelegate() {}
// Cross Module References
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics
	{
		struct _Script_yGS2Client_eventErrorRequestRetryEvent_Parms
		{
			FRequest_ErrSetupData apiErrData;
			int32 errRetryCnt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiErrData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_apiErrData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errRetryCnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errRetryCnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_apiErrData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_apiErrData = { "apiErrData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yGS2Client_eventErrorRequestRetryEvent_Parms, apiErrData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_apiErrData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_apiErrData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_errRetryCnt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_errRetryCnt = { "errRetryCnt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_yGS2Client_eventErrorRequestRetryEvent_Parms, errRetryCnt), METADATA_PARAMS(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_errRetryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_errRetryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_apiErrData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::NewProp_errRetryCnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ErrorRequestRetryEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_yGS2Client, nullptr, "ErrorRequestRetryEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_yGS2Client_eventErrorRequestRetryEvent_Parms), Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
