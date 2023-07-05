// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_GetInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_GetInfo() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetInfo_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetInfo();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_GetInfo::execGetPermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetInfo::execGetServerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetInfo::execGetServerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetInfo::execGetServerVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetInfo::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EYGS2GetInfoStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetInfo::execSetAccountInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EpicAccountID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_EOSIDHash);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccountInfo(Z_Param_EpicAccountID,Z_Param_ProductUserID,Z_Param_EOSIDHash);
		P_NATIVE_END;
	}
	void UYGS2Req_GetInfo::StaticRegisterNativesUYGS2Req_GetInfo()
	{
		UClass* Class = UYGS2Req_GetInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPermission", &UYGS2Req_GetInfo::execGetPermission },
			{ "GetServerId", &UYGS2Req_GetInfo::execGetServerId },
			{ "GetServerName", &UYGS2Req_GetInfo::execGetServerName },
			{ "GetServerVersion", &UYGS2Req_GetInfo::execGetServerVersion },
			{ "GetStatus", &UYGS2Req_GetInfo::execGetStatus },
			{ "SetAccountInfo", &UYGS2Req_GetInfo::execSetAccountInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics
	{
		struct YGS2Req_GetInfo_eventGetPermission_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventGetPermission_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetInfo, nullptr, "GetPermission", nullptr, nullptr, sizeof(YGS2Req_GetInfo_eventGetPermission_Parms), Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics
	{
		struct YGS2Req_GetInfo_eventGetServerId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventGetServerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetInfo, nullptr, "GetServerId", nullptr, nullptr, sizeof(YGS2Req_GetInfo_eventGetServerId_Parms), Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics
	{
		struct YGS2Req_GetInfo_eventGetServerName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventGetServerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetInfo, nullptr, "GetServerName", nullptr, nullptr, sizeof(YGS2Req_GetInfo_eventGetServerName_Parms), Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics
	{
		struct YGS2Req_GetInfo_eventGetServerVersion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventGetServerVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetInfo, nullptr, "GetServerVersion", nullptr, nullptr, sizeof(YGS2Req_GetInfo_eventGetServerVersion_Parms), Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics
	{
		struct YGS2Req_GetInfo_eventGetStatus_Parms
		{
			EYGS2GetInfoStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetInfo, nullptr, "GetStatus", nullptr, nullptr, sizeof(YGS2Req_GetInfo_eventGetStatus_Parms), Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics
	{
		struct YGS2Req_GetInfo_eventSetAccountInfo_Parms
		{
			FString EpicAccountID;
			FString ProductUserID;
			FString EOSIDHash;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EpicAccountID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSIDHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSIDHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EpicAccountID = { "EpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventSetAccountInfo_Parms, EpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EpicAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventSetAccountInfo_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EOSIDHash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EOSIDHash = { "EOSIDHash", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetInfo_eventSetAccountInfo_Parms, EOSIDHash), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EOSIDHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EOSIDHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::NewProp_EOSIDHash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetInfo, nullptr, "SetAccountInfo", nullptr, nullptr, sizeof(YGS2Req_GetInfo_eventSetAccountInfo_Parms), Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_GetInfo_NoRegister()
	{
		return UYGS2Req_GetInfo::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_GetInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_GetInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_GetInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_GetInfo_GetPermission, "GetPermission" }, // 1726922254
		{ &Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerId, "GetServerId" }, // 2985020105
		{ &Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerName, "GetServerName" }, // 111232424
		{ &Z_Construct_UFunction_UYGS2Req_GetInfo_GetServerVersion, "GetServerVersion" }, // 3400950138
		{ &Z_Construct_UFunction_UYGS2Req_GetInfo_GetStatus, "GetStatus" }, // 3594787126
		{ &Z_Construct_UFunction_UYGS2Req_GetInfo_SetAccountInfo, "SetAccountInfo" }, // 587651600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_GetInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_GetInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_GetInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_GetInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_GetInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_GetInfo_Statics::ClassParams = {
		&UYGS2Req_GetInfo::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_GetInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_GetInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_GetInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_GetInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_GetInfo, 2473959727);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_GetInfo>()
	{
		return UYGS2Req_GetInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_GetInfo(Z_Construct_UClass_UYGS2Req_GetInfo, &UYGS2Req_GetInfo::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_GetInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_GetInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
