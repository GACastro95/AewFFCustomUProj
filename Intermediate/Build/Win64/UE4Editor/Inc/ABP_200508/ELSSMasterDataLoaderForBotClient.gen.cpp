// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMasterDataLoaderForBotClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMasterDataLoaderForBotClient() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoaderForBotClient();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoader();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSMasterData();
// End Cross Module References
	DEFINE_FUNCTION(AELSSMasterDataLoaderForBotClient::execRequestGetSSMasterData)
	{
		P_GET_UBOOL(Z_Param_inDataVersionOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetSSMasterData(Z_Param_inDataVersionOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoaderForBotClient::execSetVersionInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDataVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_inYGS2URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVersionInfo(Z_Param_inDataVersion,Z_Param_inYGS2URL);
		P_NATIVE_END;
	}
	static FName NAME_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData = FName(TEXT("OnError_GetSSMasterData"));
	void AELSSMasterDataLoaderForBotClient::OnError_GetSSMasterData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData),NULL);
	}
	static FName NAME_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion = FName(TEXT("OnError_GetSSMasterDataVersion"));
	void AELSSMasterDataLoaderForBotClient::OnError_GetSSMasterDataVersion()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion),NULL);
	}
	static FName NAME_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData = FName(TEXT("OnResponse_GetSSMasterData"));
	void AELSSMasterDataLoaderForBotClient::OnResponse_GetSSMasterData(bool inExistsData, FYGS2SSMasterData const& inResponseData)
	{
		ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterData_Parms Parms;
		Parms.inExistsData=inExistsData ? true : false;
		Parms.inResponseData=inResponseData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData),&Parms);
	}
	static FName NAME_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion = FName(TEXT("OnResponse_GetSSMasterDataVersion"));
	void AELSSMasterDataLoaderForBotClient::OnResponse_GetSSMasterDataVersion(bool inExistsData, FYGS2SSMasterData const& inResponseData)
	{
		ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterDataVersion_Parms Parms;
		Parms.inExistsData=inExistsData ? true : false;
		Parms.inResponseData=inResponseData;
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion),&Parms);
	}
	void AELSSMasterDataLoaderForBotClient::StaticRegisterNativesAELSSMasterDataLoaderForBotClient()
	{
		UClass* Class = AELSSMasterDataLoaderForBotClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestGetSSMasterData", &AELSSMasterDataLoaderForBotClient::execRequestGetSSMasterData },
			{ "SetVersionInfo", &AELSSMasterDataLoaderForBotClient::execSetVersionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, nullptr, "OnError_GetSSMasterData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, nullptr, "OnError_GetSSMasterDataVersion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics
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
	void Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inExistsData_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterData_Parms*)Obj)->inExistsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inExistsData = { "inExistsData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterData_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inExistsData_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inResponseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inResponseData = { "inResponseData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterData_Parms, inResponseData), Z_Construct_UScriptStruct_FYGS2SSMasterData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inExistsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::NewProp_inResponseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, nullptr, "OnResponse_GetSSMasterData", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterData_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics
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
	void Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inExistsData_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterDataVersion_Parms*)Obj)->inExistsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inExistsData = { "inExistsData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterDataVersion_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inExistsData_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inResponseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inResponseData = { "inResponseData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterDataVersion_Parms, inResponseData), Z_Construct_UScriptStruct_FYGS2SSMasterData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inExistsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::NewProp_inResponseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, nullptr, "OnResponse_GetSSMasterDataVersion", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForBotClient_eventOnResponse_GetSSMasterDataVersion_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics
	{
		struct ELSSMasterDataLoaderForBotClient_eventRequestGetSSMasterData_Parms
		{
			bool inDataVersionOnly;
			bool ReturnValue;
		};
		static void NewProp_inDataVersionOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDataVersionOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_inDataVersionOnly_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForBotClient_eventRequestGetSSMasterData_Parms*)Obj)->inDataVersionOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_inDataVersionOnly = { "inDataVersionOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForBotClient_eventRequestGetSSMasterData_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_inDataVersionOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSMasterDataLoaderForBotClient_eventRequestGetSSMasterData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoaderForBotClient_eventRequestGetSSMasterData_Parms), &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_inDataVersionOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, nullptr, "RequestGetSSMasterData", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForBotClient_eventRequestGetSSMasterData_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics
	{
		struct ELSSMasterDataLoaderForBotClient_eventSetVersionInfo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inDataVersion = { "inDataVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForBotClient_eventSetVersionInfo_Parms, inDataVersion), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inYGS2URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inYGS2URL = { "inYGS2URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoaderForBotClient_eventSetVersionInfo_Parms, inYGS2URL), METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inYGS2URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inYGS2URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inDataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::NewProp_inYGS2URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, nullptr, "SetVersionInfo", nullptr, nullptr, sizeof(ELSSMasterDataLoaderForBotClient_eventSetVersionInfo_Parms), Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_NoRegister()
	{
		return AELSSMasterDataLoaderForBotClient::StaticClass();
	}
	struct Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSMasterDataLoader,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterData, "OnError_GetSSMasterData" }, // 2121169927
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnError_GetSSMasterDataVersion, "OnError_GetSSMasterDataVersion" }, // 3959283190
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterData, "OnResponse_GetSSMasterData" }, // 3651480693
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_OnResponse_GetSSMasterDataVersion, "OnResponse_GetSSMasterDataVersion" }, // 2241491906
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_RequestGetSSMasterData, "RequestGetSSMasterData" }, // 3220993268
		{ &Z_Construct_UFunction_AELSSMasterDataLoaderForBotClient_SetVersionInfo, "SetVersionInfo" }, // 1321001848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMasterDataLoaderForBotClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_MaxRetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoaderForBotClient" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_MaxRetryCount = { "MaxRetryCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMasterDataLoaderForBotClient, MaxRetryCount), METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_MaxRetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_MaxRetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_DataVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoaderForBotClient" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoaderForBotClient.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMasterDataLoaderForBotClient, DataVersion), METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_DataVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_MaxRetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::NewProp_DataVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSMasterDataLoaderForBotClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::ClassParams = {
		&AELSSMasterDataLoaderForBotClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSMasterDataLoaderForBotClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSMasterDataLoaderForBotClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSMasterDataLoaderForBotClient, 3974919773);
	template<> ABP_200508_API UClass* StaticClass<AELSSMasterDataLoaderForBotClient>()
	{
		return AELSSMasterDataLoaderForBotClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSMasterDataLoaderForBotClient(Z_Construct_UClass_AELSSMasterDataLoaderForBotClient, &AELSSMasterDataLoaderForBotClient::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSMasterDataLoaderForBotClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSMasterDataLoaderForBotClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
