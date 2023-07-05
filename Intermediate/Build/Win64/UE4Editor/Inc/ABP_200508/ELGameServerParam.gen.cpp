// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameServerParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameServerParam() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameServerParam_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameServerParam();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELGameServerParam::execGetEOSEnvName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELGameServerParam::GetEOSEnvName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerParam::execGetSaveFileEncKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELGameServerParam::GetSaveFileEncKey();
		P_NATIVE_END;
	}
	void UELGameServerParam::StaticRegisterNativesUELGameServerParam()
	{
		UClass* Class = UELGameServerParam::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEOSEnvName", &UELGameServerParam::execGetEOSEnvName },
			{ "GetSaveFileEncKey", &UELGameServerParam::execGetSaveFileEncKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics
	{
		struct ELGameServerParam_eventGetEOSEnvName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerParam_eventGetEOSEnvName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerParam, nullptr, "GetEOSEnvName", nullptr, nullptr, sizeof(ELGameServerParam_eventGetEOSEnvName_Parms), Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics
	{
		struct ELGameServerParam_eventGetSaveFileEncKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerParam_eventGetSaveFileEncKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerParam, nullptr, "GetSaveFileEncKey", nullptr, nullptr, sizeof(ELGameServerParam_eventGetSaveFileEncKey_Parms), Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameServerParam_NoRegister()
	{
		return UELGameServerParam::StaticClass();
	}
	struct Z_Construct_UClass_UELGameServerParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnvironmentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SandboxID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SandboxID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeploymentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeploymentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecretKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncryptKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EncryptKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSApiBaseURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSApiBaseURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSIDHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSIDHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGS2TitleID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YGS2TitleID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGS2TitleVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YGS2TitleVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSubKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataSubKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataEncryptKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDataEncryptKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameServerParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameServerParam_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameServerParam_GetEOSEnvName, "GetEOSEnvName" }, // 2866787433
		{ &Z_Construct_UFunction_UELGameServerParam_GetSaveFileEncKey, "GetSaveFileEncKey" }, // 432599963
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameServerParam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EnvironmentName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EnvironmentName = { "EnvironmentName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, EnvironmentName), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EnvironmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EnvironmentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, ProductID), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SandboxID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SandboxID = { "SandboxID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, SandboxID), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SandboxID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SandboxID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DeploymentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DeploymentID = { "DeploymentID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, DeploymentID), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DeploymentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DeploymentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, ClientId), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, SecretKey), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SecretKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EncryptKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EncryptKey = { "EncryptKey", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, EncryptKey), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EncryptKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EncryptKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSApiBaseURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSApiBaseURL = { "EOSApiBaseURL", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, EOSApiBaseURL), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSApiBaseURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSApiBaseURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSIDHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSIDHash = { "EOSIDHash", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, EOSIDHash), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSIDHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSIDHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleID = { "YGS2TitleID", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, YGS2TitleID), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleVersion = { "YGS2TitleVersion", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, YGS2TitleVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataKey = { "DataKey", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, DataKey), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataSubKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataSubKey = { "DataSubKey", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, DataSubKey), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataSubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataSubKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SaveDataEncryptKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerParam" },
		{ "ModuleRelativePath", "Public/ELGameServerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SaveDataEncryptKey = { "SaveDataEncryptKey", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerParam, SaveDataEncryptKey), METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SaveDataEncryptKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SaveDataEncryptKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGameServerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EnvironmentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SandboxID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DeploymentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SecretKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EncryptKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSApiBaseURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_EOSIDHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_YGS2TitleVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_DataSubKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerParam_Statics::NewProp_SaveDataEncryptKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameServerParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameServerParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameServerParam_Statics::ClassParams = {
		&UELGameServerParam::StaticClass,
		"OnlineServer",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELGameServerParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UELGameServerParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameServerParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameServerParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameServerParam, 579061426);
	template<> ABP_200508_API UClass* StaticClass<UELGameServerParam>()
	{
		return UELGameServerParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameServerParam(Z_Construct_UClass_UELGameServerParam, &UELGameServerParam::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameServerParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameServerParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
