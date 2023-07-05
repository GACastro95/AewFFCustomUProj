// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMasterDataLoaderForClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMasterDataLoaderForClient() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoaderForClient_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoaderForClient();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoader();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
// End Cross Module References
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execGetDataVersionFromResponse)
	{
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_inRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataVersionFromResponse(Z_Param_inRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execGetDataVersionFromYGS2Response)
	{
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_inRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataVersionFromYGS2Response(Z_Param_inRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execImportMasterDataFromResponse)
	{
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_inRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportMasterDataFromResponse(Z_Param_inRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execImportMasterDataFromYGS2Response)
	{
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_inRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportMasterDataFromYGS2Response(Z_Param_inRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execOnErrorResponse_GetSSMasterData)
	{
		P_GET_STRUCT_REF(FRequest_ErrSetupData,Z_Param_Out_apiErrData);
		P_GET_PROPERTY(FIntProperty,Z_Param_errRetryCnt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnErrorResponse_GetSSMasterData(Z_Param_Out_apiErrData,Z_Param_errRetryCnt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execOnErrorResponse_GetSSMasterDataVersion)
	{
		P_GET_STRUCT_REF(FRequest_ErrSetupData,Z_Param_Out_apiErrData);
		P_GET_PROPERTY(FIntProperty,Z_Param_errRetryCnt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnErrorResponse_GetSSMasterDataVersion(Z_Param_Out_apiErrData,Z_Param_errRetryCnt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execRequest_GetSSMasterData)
	{
		P_GET_UBOOL(Z_Param_inDataVersionOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_inRetryCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UYGS2RequestBase**)Z_Param__Result=P_THIS->Request_GetSSMasterData(Z_Param_inDataVersionOnly,Z_Param_inRetryCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForClient::execRequest_GetSSMasterDataVersion)
	{
		P_GET_UBOOL(Z_Param_inDataVersionOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UYGS2RequestBase**)Z_Param__Result=P_THIS->Request_GetSSMasterDataVersion(Z_Param_inDataVersionOnly);
		P_NATIVE_END;
	}
	static FName NAME_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData = FName(TEXT("OnComplete_GetSSMasterData"));
	void AELSSMasterDataLoaderForClient::OnComplete_GetSSMasterData(bool inSuccess, UYGS2RequestBase* inRequest)
	{
		ELSSMasterDataLoaderForClient_eventOnComplete_GetSSMasterData_Parms Parms;
		Parms.inSuccess=inSuccess ? true : false;
		Parms.inRequest=inRequest;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData),&Parms);
	}
	static FName NAME_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData = FName(TEXT("OnResponse_GetSSMasterData"));
	void AELSSMasterDataLoaderForClient::OnResponse_GetSSMasterData(EYGS2ErrorType inYGS2ErrorType, UYGS2RequestBase* inRequest)
	{
		ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterData_Parms Parms;
		Parms.inYGS2ErrorType=inYGS2ErrorType;
		Parms.inRequest=inRequest;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData),&Parms);
	}
	static FName NAME_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion = FName(TEXT("OnResponse_GetSSMasterDataVersion"));
	void AELSSMasterDataLoaderForClient::OnResponse_GetSSMasterDataVersion(EYGS2ErrorType inYGS2ErrorType, UYGS2RequestBase* inRequest)
	{
		ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterDataVersion_Parms Parms;
		Parms.inYGS2ErrorType=inYGS2ErrorType;
		Parms.inRequest=inRequest;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion),&Parms);
	}
	void AELSSMasterDataLoaderForClient::StaticRegisterNativesAELSSMasterDataLoaderForClient()
	{
		UClass* Class = AELSSMasterDataLoaderForClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataVersionFromResponse", &AELSSMasterDataLoaderForClient::execGetDataVersionFromResponse },
			{ "GetDataVersionFromYGS2Response", &AELSSMasterDataLoaderForClient::execGetDataVersionFromYGS2Response },
			{ "ImportMasterDataFromResponse", &AELSSMasterDataLoaderForClient::execImportMasterDataFromResponse },
			{ "ImportMasterDataFromYGS2Response", &AELSSMasterDataLoaderForClient::execImportMasterDataFromYGS2Response },
			{ "OnErrorResponse_GetSSMasterData", &AELSSMasterDataLoaderForClient::execOnErrorResponse_GetSSMasterData },
			{ "OnErrorResponse_GetSSMasterDataVersion", &AELSSMasterDataLoaderForClient::execOnErrorResponse_GetSSMasterDataVersion },
			{ "Request_GetSSMasterData", &AELSSMasterDataLoaderForClient::execRequest_GetSSMasterData },
			{ "Request_GetSSMasterDataVersion", &AELSSMasterDataLoaderForClient::execRequest_GetSSMasterDataVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventGetDataVersionFromResponse_Parms
		{
			UYGS2RequestBase* inRequest;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventGetDataVersionFromResponse_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventGetDataVersionFromResponse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::NewProp_inRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "GetDataVersionFromResponse", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventGetDataVersionFromResponse_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventGetDataVersionFromYGS2Response_Parms
		{
			UYGS2RequestBase* inRequest;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventGetDataVersionFromYGS2Response_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventGetDataVersionFromYGS2Response_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::NewProp_inRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "GetDataVersionFromYGS2Response", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventGetDataVersionFromYGS2Response_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventImportMasterDataFromResponse_Parms
		{
			UYGS2RequestBase* inRequest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventImportMasterDataFromResponse_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::NewProp_inRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "ImportMasterDataFromResponse", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventImportMasterDataFromResponse_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventImportMasterDataFromYGS2Response_Parms
		{
			UYGS2RequestBase* inRequest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventImportMasterDataFromYGS2Response_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::NewProp_inRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "ImportMasterDataFromYGS2Response", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventImportMasterDataFromYGS2Response_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics
	{
		static void NewProp_inSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::NewProp_inSuccess_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForClient_eventOnComplete_GetSSMasterData_Parms*)Obj)->inSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::NewProp_inSuccess = { "inSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForClient_eventOnComplete_GetSSMasterData_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::NewProp_inSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnComplete_GetSSMasterData_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::NewProp_inSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::NewProp_inRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "OnComplete_GetSSMasterData", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventOnComplete_GetSSMasterData_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_apiErrData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_apiErrData = { "apiErrData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterData_Parms, apiErrData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_apiErrData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_apiErrData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_errRetryCnt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_errRetryCnt = { "errRetryCnt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterData_Parms, errRetryCnt), METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_errRetryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_errRetryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_apiErrData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::NewProp_errRetryCnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "OnErrorResponse_GetSSMasterData", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterData_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterDataVersion_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_apiErrData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_apiErrData = { "apiErrData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterDataVersion_Parms, apiErrData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_apiErrData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_apiErrData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_errRetryCnt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_errRetryCnt = { "errRetryCnt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterDataVersion_Parms, errRetryCnt), METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_errRetryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_errRetryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_apiErrData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::NewProp_errRetryCnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "OnErrorResponse_GetSSMasterDataVersion", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventOnErrorResponse_GetSSMasterDataVersion_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::NewProp_inYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::NewProp_inYGS2ErrorType = { "inYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterData_Parms, inYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterData_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::NewProp_inYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::NewProp_inYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::NewProp_inRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "OnResponse_GetSSMasterData", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterData_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inYGS2ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inYGS2ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inYGS2ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inYGS2ErrorType = { "inYGS2ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterDataVersion_Parms, inYGS2ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterDataVersion_Parms, inRequest), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inYGS2ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inYGS2ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "OnResponse_GetSSMasterDataVersion", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventOnResponse_GetSSMasterDataVersion_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterData_Parms
		{
			bool inDataVersionOnly;
			int32 inRetryCount;
			UYGS2RequestBase* ReturnValue;
		};
		static void NewProp_inDataVersionOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDataVersionOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inRetryCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_inDataVersionOnly_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterData_Parms*)Obj)->inDataVersionOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_inDataVersionOnly = { "inDataVersionOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterData_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_inDataVersionOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_inRetryCount = { "inRetryCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterData_Parms, inRetryCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterData_Parms, ReturnValue), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_inDataVersionOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_inRetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "Request_GetSSMasterData", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterData_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics
	{
		struct ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterDataVersion_Parms
		{
			bool inDataVersionOnly;
			UYGS2RequestBase* ReturnValue;
		};
		static void NewProp_inDataVersionOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDataVersionOnly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::NewProp_inDataVersionOnly_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterDataVersion_Parms*)Obj)->inDataVersionOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::NewProp_inDataVersionOnly = { "inDataVersionOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterDataVersion_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::NewProp_inDataVersionOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterDataVersion_Parms, ReturnValue), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::NewProp_inDataVersionOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForClient, nullptr, "Request_GetSSMasterDataVersion", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForClient_eventRequest_GetSSMasterDataVersion_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSMasterDataLoaderForClient_NoRegister()
	{
		return AELSSMasterDataLoaderForClient::StaticClass();
	}
	struct Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSMasterDataLoader,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromResponse, "GetDataVersionFromResponse" }, // 3575558034
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_GetDataVersionFromYGS2Response, "GetDataVersionFromYGS2Response" }, // 942189978
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromResponse, "ImportMasterDataFromResponse" }, // 199366198
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_ImportMasterDataFromYGS2Response, "ImportMasterDataFromYGS2Response" }, // 3231487705
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnComplete_GetSSMasterData, "OnComplete_GetSSMasterData" }, // 1327288730
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterData, "OnErrorResponse_GetSSMasterData" }, // 3399221703
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnErrorResponse_GetSSMasterDataVersion, "OnErrorResponse_GetSSMasterDataVersion" }, // 3972610293
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterData, "OnResponse_GetSSMasterData" }, // 3277541892
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_OnResponse_GetSSMasterDataVersion, "OnResponse_GetSSMasterDataVersion" }, // 2916628536
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterData, "Request_GetSSMasterData" }, // 3926810599
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForClient_Request_GetSSMasterDataVersion, "Request_GetSSMasterDataVersion" }, // 3953152023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMasterDataLoaderForClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSMasterDataLoaderForClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::ClassParams = {
		&AELSSMasterDataLoaderForClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSMasterDataLoaderForClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSMasterDataLoaderForClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSMasterDataLoaderForClient, 1049172655);
	template<> ABP_200508_API UClass* StaticClass<AELSSMasterDataLoaderForClient>()
	{
		return AELSSMasterDataLoaderForClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSMasterDataLoaderForClient(Z_Construct_UClass_AELSSMasterDataLoaderForClient, &AELSSMasterDataLoaderForClient::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSMasterDataLoaderForClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSMasterDataLoaderForClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
