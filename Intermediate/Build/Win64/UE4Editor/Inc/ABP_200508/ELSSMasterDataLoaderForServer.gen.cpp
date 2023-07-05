// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMasterDataLoaderForServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMasterDataLoaderForServer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoaderForServer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoaderForServer();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoader();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSMasterData();
// End Cross Module References
	DEFINE_FUNCTION(AELSSMasterDataLoaderForServer::execRequestGetSSMasterDataForServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetSSMasterDataForServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForServer::execSetVersionInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDataVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_inYGS2URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVersionInfo(Z_Param_inDataVersion,Z_Param_inYGS2URL);
		P_NATIVE_END;
	}
	static FName NAME_AELSSMasterDataLoaderForServer_OnEndRequest = FName(TEXT("OnEndRequest"));
	void AELSSMasterDataLoaderForServer::OnEndRequest(bool IsSuccess)
	{
		ELSSMasterDataLoaderForServer_eventOnEndRequest_Parms Parms;
		Parms.IsSuccess=IsSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForServer_OnEndRequest),&Parms);
	}
	static FName NAME_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer = FName(TEXT("OnError_GetSSMasterDataForServer"));
	void AELSSMasterDataLoaderForServer::OnError_GetSSMasterDataForServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer),NULL);
	}
	static FName NAME_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer = FName(TEXT("OnResponse_GetSSMasterDataForServer"));
	void AELSSMasterDataLoaderForServer::OnResponse_GetSSMasterDataForServer(bool inExistsData, FYGS2SSMasterData const& inResponseData)
	{
		ELSSMasterDataLoaderForServer_eventOnResponse_GetSSMasterDataForServer_Parms Parms;
		Parms.inExistsData=inExistsData ? true : false;
		Parms.inResponseData=inResponseData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer),&Parms);
	}
	void AELSSMasterDataLoaderForServer::StaticRegisterNativesAELSSMasterDataLoaderForServer()
	{
		UClass* Class = AELSSMasterDataLoaderForServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestGetSSMasterDataForServer", &AELSSMasterDataLoaderForServer::execRequestGetSSMasterDataForServer },
			{ "SetVersionInfo", &AELSSMasterDataLoaderForServer::execSetVersionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics
	{
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForServer_eventOnEndRequest_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForServer_eventOnEndRequest_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::NewProp_IsSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForServer, nullptr, "OnEndRequest", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForServer_eventOnEndRequest_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForServer, nullptr, "OnError_GetSSMasterDataForServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics
	{
		static void NewProp_inExistsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inExistsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inResponseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inResponseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inExistsData_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForServer_eventOnResponse_GetSSMasterDataForServer_Parms*)Obj)->inExistsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inExistsData = { "inExistsData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForServer_eventOnResponse_GetSSMasterDataForServer_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inExistsData_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inResponseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inResponseData = { "inResponseData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForServer_eventOnResponse_GetSSMasterDataForServer_Parms, inResponseData), Z_Construct_UScriptStruct_FYGS2SSMasterData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inExistsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::NewProp_inResponseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForServer, nullptr, "OnResponse_GetSSMasterDataForServer", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForServer_eventOnResponse_GetSSMasterDataForServer_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics
	{
		struct ELSSMasterDataLoaderForServer_eventRequestGetSSMasterDataForServer_Parms
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
	void Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForServer_eventRequestGetSSMasterDataForServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForServer_eventRequestGetSSMasterDataForServer_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForServer, nullptr, "RequestGetSSMasterDataForServer", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForServer_eventRequestGetSSMasterDataForServer_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics
	{
		struct ELSSMasterDataLoaderForServer_eventSetVersionInfo_Parms
		{
			int32 inDataVersion;
			FString inYGS2URL;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inYGS2URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inYGS2URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inDataVersion = { "inDataVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForServer_eventSetVersionInfo_Parms, inDataVersion), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inYGS2URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inYGS2URL = { "inYGS2URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForServer_eventSetVersionInfo_Parms, inYGS2URL), METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inYGS2URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inYGS2URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inDataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::NewProp_inYGS2URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForServer, nullptr, "SetVersionInfo", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForServer_eventSetVersionInfo_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSMasterDataLoaderForServer_NoRegister()
	{
		return AELSSMasterDataLoaderForServer::StaticClass();
	}
	struct Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRetryCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSMasterDataLoader,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnEndRequest, "OnEndRequest" }, // 252412299
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnError_GetSSMasterDataForServer, "OnError_GetSSMasterDataForServer" }, // 4015498222
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_OnResponse_GetSSMasterDataForServer, "OnResponse_GetSSMasterDataForServer" }, // 3464409927
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_RequestGetSSMasterDataForServer, "RequestGetSSMasterDataForServer" }, // 2331287297
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForServer_SetVersionInfo, "SetVersionInfo" }, // 1470102260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMasterDataLoaderForServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::NewProp_MaxRetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoaderForServer" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForServer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::NewProp_MaxRetryCount = { "MaxRetryCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMasterDataLoaderForServer, MaxRetryCount), METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::NewProp_MaxRetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::NewProp_MaxRetryCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::NewProp_MaxRetryCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSMasterDataLoaderForServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::ClassParams = {
		&AELSSMasterDataLoaderForServer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSMasterDataLoaderForServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSMasterDataLoaderForServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSMasterDataLoaderForServer, 839714282);
	template<> ABP_200508_API UClass* StaticClass<AELSSMasterDataLoaderForServer>()
	{
		return AELSSMasterDataLoaderForServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSMasterDataLoaderForServer(Z_Construct_UClass_AELSSMasterDataLoaderForServer, &AELSSMasterDataLoaderForServer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSMasterDataLoaderForServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSMasterDataLoaderForServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
