// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAuth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAuth() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLoginStatus();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLoginType();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAuthEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAuth::execGetAuthLoginStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLoginStatus*)Z_Param__Result=P_THIS->GetAuthLoginStatus(Z_Param__strEpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetConnectLoginStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLoginStatus*)Z_Param__Result=P_THIS->GetConnectLoginStatus(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetLastCredentialType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSExternalCredentialType*)Z_Param__Result=P_THIS->GetLastCredentialType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetLastLoginType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLoginType*)Z_Param__Result=P_THIS->GetLastLoginType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetLoginExternalAccountId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLoginExternalAccountId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetLoginStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLoginStatus*)Z_Param__Result=P_THIS->GetLoginStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetLoginUserDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLoginUserDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetPinGrantInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSAuthPinGrantInfo*)Z_Param__Result=P_THIS->GetPinGrantInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execGetRefreshToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRefreshToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestAccountPortalLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestAccountPortalLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestConnectLinkAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestConnectLinkAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestConnectLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestConnectLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestConnectUnlinkAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestConnectUnlinkAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestCreateUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCreateUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestDevAuthLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__cID);
		P_GET_PROPERTY(FStrProperty,Z_Param__cToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDevAuthLogin(Z_Param__cID,Z_Param__cToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestDeviceCodeLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeviceCodeLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestExchangeCodeLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__cExchangeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestExchangeCodeLogin(Z_Param__cExchangeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestExternalAuthLogin)
	{
		P_GET_ENUM(EEOSExternalCredentialType,Z_Param__enType);
		P_GET_PROPERTY(FStrProperty,Z_Param__cToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestExternalAuthLogin(EEOSExternalCredentialType(Z_Param__enType),Z_Param__cToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestExternalAuthLoginWithBinaryToken)
	{
		P_GET_ENUM(EEOSExternalCredentialType,Z_Param__enType);
		P_GET_TARRAY_REF(uint8,Z_Param_Out__pcToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestExternalAuthLoginWithBinaryToken(EEOSExternalCredentialType(Z_Param__enType),Z_Param_Out__pcToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestExternalConnectLogin)
	{
		P_GET_ENUM(EEOSExternalCredentialType,Z_Param__enType);
		P_GET_PROPERTY(FStrProperty,Z_Param__cToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestExternalConnectLogin(EEOSExternalCredentialType(Z_Param__enType),Z_Param__cToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestExternalConnectLoginWithBinaryToken)
	{
		P_GET_ENUM(EEOSExternalCredentialType,Z_Param__enType);
		P_GET_TARRAY_REF(uint8,Z_Param_Out__pcToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestExternalConnectLoginWithBinaryToken(EEOSExternalCredentialType(Z_Param__enType),Z_Param_Out__pcToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestLinkEpicAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLinkEpicAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__cUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param__cPassword);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLogin(Z_Param__cUserID,Z_Param__cPassword);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestLogout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLogout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execRequestPersistentAuthLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__cToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestPersistentAuthLogin(Z_Param__cToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSAuthAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSAuth::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execSetLoginExternalAccountId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoginExternalAccountId(Z_Param__strExternalAccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAuth::execSetLoginUserDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoginUserDisplayName(Z_Param__strDisplayName);
		P_NATIVE_END;
	}
	void UEOSAuth::StaticRegisterNativesUEOSAuth()
	{
		UClass* Class = UEOSAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAuthLoginStatus", &UEOSAuth::execGetAuthLoginStatus },
			{ "GetConnectLoginStatus", &UEOSAuth::execGetConnectLoginStatus },
			{ "GetLastCredentialType", &UEOSAuth::execGetLastCredentialType },
			{ "GetLastLoginType", &UEOSAuth::execGetLastLoginType },
			{ "GetLoginExternalAccountId", &UEOSAuth::execGetLoginExternalAccountId },
			{ "GetLoginStatus", &UEOSAuth::execGetLoginStatus },
			{ "GetLoginUserDisplayName", &UEOSAuth::execGetLoginUserDisplayName },
			{ "GetPinGrantInfo", &UEOSAuth::execGetPinGrantInfo },
			{ "GetRefreshToken", &UEOSAuth::execGetRefreshToken },
			{ "IsConnected", &UEOSAuth::execIsConnected },
			{ "RequestAccountPortalLogin", &UEOSAuth::execRequestAccountPortalLogin },
			{ "RequestConnectLinkAccount", &UEOSAuth::execRequestConnectLinkAccount },
			{ "RequestConnectLogin", &UEOSAuth::execRequestConnectLogin },
			{ "RequestConnectUnlinkAccount", &UEOSAuth::execRequestConnectUnlinkAccount },
			{ "RequestCreateUser", &UEOSAuth::execRequestCreateUser },
			{ "RequestDevAuthLogin", &UEOSAuth::execRequestDevAuthLogin },
			{ "RequestDeviceCodeLogin", &UEOSAuth::execRequestDeviceCodeLogin },
			{ "RequestExchangeCodeLogin", &UEOSAuth::execRequestExchangeCodeLogin },
			{ "RequestExternalAuthLogin", &UEOSAuth::execRequestExternalAuthLogin },
			{ "RequestExternalAuthLoginWithBinaryToken", &UEOSAuth::execRequestExternalAuthLoginWithBinaryToken },
			{ "RequestExternalConnectLogin", &UEOSAuth::execRequestExternalConnectLogin },
			{ "RequestExternalConnectLoginWithBinaryToken", &UEOSAuth::execRequestExternalConnectLoginWithBinaryToken },
			{ "RequestLinkEpicAccount", &UEOSAuth::execRequestLinkEpicAccount },
			{ "RequestLogin", &UEOSAuth::execRequestLogin },
			{ "RequestLogout", &UEOSAuth::execRequestLogout },
			{ "RequestPersistentAuthLogin", &UEOSAuth::execRequestPersistentAuthLogin },
			{ "SetApiVersion", &UEOSAuth::execSetApiVersion },
			{ "SetLoginExternalAccountId", &UEOSAuth::execSetLoginExternalAccountId },
			{ "SetLoginUserDisplayName", &UEOSAuth::execSetLoginUserDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics
	{
		struct EOSAuth_eventGetAuthLoginStatus_Parms
		{
			FString _strEpicAccountID;
			EEOSLoginStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetAuthLoginStatus_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp__strEpicAccountID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetAuthLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetAuthLoginStatus", nullptr, nullptr, sizeof(EOSAuth_eventGetAuthLoginStatus_Parms), Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics
	{
		struct EOSAuth_eventGetConnectLoginStatus_Parms
		{
			FString _strProductUserID;
			EEOSLoginStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetConnectLoginStatus_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetConnectLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetConnectLoginStatus", nullptr, nullptr, sizeof(EOSAuth_eventGetConnectLoginStatus_Parms), Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics
	{
		struct EOSAuth_eventGetLastCredentialType_Parms
		{
			EEOSExternalCredentialType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetLastCredentialType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetLastCredentialType", nullptr, nullptr, sizeof(EOSAuth_eventGetLastCredentialType_Parms), Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetLastCredentialType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetLastCredentialType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics
	{
		struct EOSAuth_eventGetLastLoginType_Parms
		{
			EEOSLoginType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetLastLoginType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLoginType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetLastLoginType", nullptr, nullptr, sizeof(EOSAuth_eventGetLastLoginType_Parms), Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetLastLoginType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetLastLoginType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics
	{
		struct EOSAuth_eventGetLoginExternalAccountId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetLoginExternalAccountId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetLoginExternalAccountId", nullptr, nullptr, sizeof(EOSAuth_eventGetLoginExternalAccountId_Parms), Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics
	{
		struct EOSAuth_eventGetLoginStatus_Parms
		{
			EEOSLoginStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetLoginStatus", nullptr, nullptr, sizeof(EOSAuth_eventGetLoginStatus_Parms), Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics
	{
		struct EOSAuth_eventGetLoginUserDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetLoginUserDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetLoginUserDisplayName", nullptr, nullptr, sizeof(EOSAuth_eventGetLoginUserDisplayName_Parms), Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics
	{
		struct EOSAuth_eventGetPinGrantInfo_Parms
		{
			FEOSAuthPinGrantInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetPinGrantInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetPinGrantInfo", nullptr, nullptr, sizeof(EOSAuth_eventGetPinGrantInfo_Parms), Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics
	{
		struct EOSAuth_eventGetRefreshToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventGetRefreshToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "GetRefreshToken", nullptr, nullptr, sizeof(EOSAuth_eventGetRefreshToken_Parms), Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_GetRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_GetRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_IsConnected_Statics
	{
		struct EOSAuth_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventIsConnected_Parms), &Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "IsConnected", nullptr, nullptr, sizeof(EOSAuth_eventIsConnected_Parms), Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics
	{
		struct EOSAuth_eventRequestAccountPortalLogin_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestAccountPortalLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestAccountPortalLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestAccountPortalLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestAccountPortalLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics
	{
		struct EOSAuth_eventRequestConnectLinkAccount_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestConnectLinkAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestConnectLinkAccount_Parms), &Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestConnectLinkAccount", nullptr, nullptr, sizeof(EOSAuth_eventRequestConnectLinkAccount_Parms), Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics
	{
		struct EOSAuth_eventRequestConnectLogin_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestConnectLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestConnectLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestConnectLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestConnectLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestConnectLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestConnectLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics
	{
		struct EOSAuth_eventRequestConnectUnlinkAccount_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestConnectUnlinkAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestConnectUnlinkAccount_Parms), &Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestConnectUnlinkAccount", nullptr, nullptr, sizeof(EOSAuth_eventRequestConnectUnlinkAccount_Parms), Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics
	{
		struct EOSAuth_eventRequestCreateUser_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestCreateUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestCreateUser_Parms), &Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestCreateUser", nullptr, nullptr, sizeof(EOSAuth_eventRequestCreateUser_Parms), Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestCreateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestCreateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics
	{
		struct EOSAuth_eventRequestDevAuthLogin_Parms
		{
			FString _cID;
			FString _cToken;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cID = { "_cID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestDevAuthLogin_Parms, _cID), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cToken = { "_cToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestDevAuthLogin_Parms, _cToken), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cToken_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestDevAuthLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestDevAuthLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp__cToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestDevAuthLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestDevAuthLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics
	{
		struct EOSAuth_eventRequestDeviceCodeLogin_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestDeviceCodeLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestDeviceCodeLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestDeviceCodeLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestDeviceCodeLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics
	{
		struct EOSAuth_eventRequestExchangeCodeLogin_Parms
		{
			FString _cExchangeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cExchangeCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cExchangeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp__cExchangeCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp__cExchangeCode = { "_cExchangeCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExchangeCodeLogin_Parms, _cExchangeCode), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp__cExchangeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp__cExchangeCode_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestExchangeCodeLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestExchangeCodeLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp__cExchangeCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestExchangeCodeLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestExchangeCodeLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics
	{
		struct EOSAuth_eventRequestExternalAuthLogin_Parms
		{
			EEOSExternalCredentialType _enType;
			FString _cToken;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalAuthLogin_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__cToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__cToken = { "_cToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalAuthLogin_Parms, _cToken), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__cToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__cToken_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestExternalAuthLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestExternalAuthLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp__cToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestExternalAuthLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestExternalAuthLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics
	{
		struct EOSAuth_eventRequestExternalAuthLoginWithBinaryToken_Parms
		{
			EEOSExternalCredentialType _enType;
			TArray<uint8> _pcToken;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__pcToken_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalAuthLoginWithBinaryToken_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken_Inner = { "_pcToken", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken = { "_pcToken", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalAuthLoginWithBinaryToken_Parms, _pcToken), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestExternalAuthLoginWithBinaryToken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestExternalAuthLoginWithBinaryToken_Parms), &Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp__pcToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestExternalAuthLoginWithBinaryToken", nullptr, nullptr, sizeof(EOSAuth_eventRequestExternalAuthLoginWithBinaryToken_Parms), Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics
	{
		struct EOSAuth_eventRequestExternalConnectLogin_Parms
		{
			EEOSExternalCredentialType _enType;
			FString _cToken;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalConnectLogin_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__cToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__cToken = { "_cToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalConnectLogin_Parms, _cToken), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__cToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__cToken_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestExternalConnectLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestExternalConnectLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp__cToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestExternalConnectLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestExternalConnectLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics
	{
		struct EOSAuth_eventRequestExternalConnectLoginWithBinaryToken_Parms
		{
			EEOSExternalCredentialType _enType;
			TArray<uint8> _pcToken;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__pcToken_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalConnectLoginWithBinaryToken_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken_Inner = { "_pcToken", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken = { "_pcToken", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestExternalConnectLoginWithBinaryToken_Parms, _pcToken), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestExternalConnectLoginWithBinaryToken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestExternalConnectLoginWithBinaryToken_Parms), &Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp__pcToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestExternalConnectLoginWithBinaryToken", nullptr, nullptr, sizeof(EOSAuth_eventRequestExternalConnectLoginWithBinaryToken_Parms), Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics
	{
		struct EOSAuth_eventRequestLinkEpicAccount_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestLinkEpicAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestLinkEpicAccount_Parms), &Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestLinkEpicAccount", nullptr, nullptr, sizeof(EOSAuth_eventRequestLinkEpicAccount_Parms), Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics
	{
		struct EOSAuth_eventRequestLogin_Parms
		{
			FString _cUserID;
			FString _cPassword;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cPassword;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cUserID = { "_cUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestLogin_Parms, _cUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cPassword = { "_cPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestLogin_Parms, _cPassword), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cPassword_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp__cPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics
	{
		struct EOSAuth_eventRequestLogout_Parms
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
	void Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestLogout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestLogout_Parms), &Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestLogout", nullptr, nullptr, sizeof(EOSAuth_eventRequestLogout_Parms), Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestLogout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics
	{
		struct EOSAuth_eventRequestPersistentAuthLogin_Parms
		{
			FString _cToken;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp__cToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp__cToken = { "_cToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventRequestPersistentAuthLogin_Parms, _cToken), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp__cToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp__cToken_MetaData)) };
	void Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAuth_eventRequestPersistentAuthLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAuth_eventRequestPersistentAuthLogin_Parms), &Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp__cToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "RequestPersistentAuthLogin", nullptr, nullptr, sizeof(EOSAuth_eventRequestPersistentAuthLogin_Parms), Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics
	{
		struct EOSAuth_eventSetApiVersion_Parms
		{
			FEOSAuthAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSAuth_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics
	{
		struct EOSAuth_eventSetLoginExternalAccountId_Parms
		{
			FString _strExternalAccountId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExternalAccountId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::NewProp__strExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::NewProp__strExternalAccountId = { "_strExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventSetLoginExternalAccountId_Parms, _strExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::NewProp__strExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::NewProp__strExternalAccountId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::NewProp__strExternalAccountId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "SetLoginExternalAccountId", nullptr, nullptr, sizeof(EOSAuth_eventSetLoginExternalAccountId_Parms), Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics
	{
		struct EOSAuth_eventSetLoginUserDisplayName_Parms
		{
			FString _strDisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::NewProp__strDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::NewProp__strDisplayName = { "_strDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAuth_eventSetLoginUserDisplayName_Parms, _strDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::NewProp__strDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::NewProp__strDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::NewProp__strDisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAuth, nullptr, "SetLoginUserDisplayName", nullptr, nullptr, sizeof(EOSAuth_eventSetLoginUserDisplayName_Parms), Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAuth_NoRegister()
	{
		return UEOSAuth::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAuth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AuthEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stPinGrantInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_stPinGrantInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strRefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strRefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strUserDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strUserDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strExternalAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sConnectLoggingCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sConnectLoggingCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAuth_GetAuthLoginStatus, "GetAuthLoginStatus" }, // 3681394818
		{ &Z_Construct_UFunction_UEOSAuth_GetConnectLoginStatus, "GetConnectLoginStatus" }, // 1821638503
		{ &Z_Construct_UFunction_UEOSAuth_GetLastCredentialType, "GetLastCredentialType" }, // 953764369
		{ &Z_Construct_UFunction_UEOSAuth_GetLastLoginType, "GetLastLoginType" }, // 3962866105
		{ &Z_Construct_UFunction_UEOSAuth_GetLoginExternalAccountId, "GetLoginExternalAccountId" }, // 981714158
		{ &Z_Construct_UFunction_UEOSAuth_GetLoginStatus, "GetLoginStatus" }, // 3974380273
		{ &Z_Construct_UFunction_UEOSAuth_GetLoginUserDisplayName, "GetLoginUserDisplayName" }, // 3499592704
		{ &Z_Construct_UFunction_UEOSAuth_GetPinGrantInfo, "GetPinGrantInfo" }, // 3445931970
		{ &Z_Construct_UFunction_UEOSAuth_GetRefreshToken, "GetRefreshToken" }, // 1627381337
		{ &Z_Construct_UFunction_UEOSAuth_IsConnected, "IsConnected" }, // 4053429600
		{ &Z_Construct_UFunction_UEOSAuth_RequestAccountPortalLogin, "RequestAccountPortalLogin" }, // 3023299548
		{ &Z_Construct_UFunction_UEOSAuth_RequestConnectLinkAccount, "RequestConnectLinkAccount" }, // 2276970714
		{ &Z_Construct_UFunction_UEOSAuth_RequestConnectLogin, "RequestConnectLogin" }, // 3139589347
		{ &Z_Construct_UFunction_UEOSAuth_RequestConnectUnlinkAccount, "RequestConnectUnlinkAccount" }, // 2660006879
		{ &Z_Construct_UFunction_UEOSAuth_RequestCreateUser, "RequestCreateUser" }, // 2961234542
		{ &Z_Construct_UFunction_UEOSAuth_RequestDevAuthLogin, "RequestDevAuthLogin" }, // 451356223
		{ &Z_Construct_UFunction_UEOSAuth_RequestDeviceCodeLogin, "RequestDeviceCodeLogin" }, // 1977211208
		{ &Z_Construct_UFunction_UEOSAuth_RequestExchangeCodeLogin, "RequestExchangeCodeLogin" }, // 2476125397
		{ &Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLogin, "RequestExternalAuthLogin" }, // 1099948747
		{ &Z_Construct_UFunction_UEOSAuth_RequestExternalAuthLoginWithBinaryToken, "RequestExternalAuthLoginWithBinaryToken" }, // 611599890
		{ &Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLogin, "RequestExternalConnectLogin" }, // 1136162671
		{ &Z_Construct_UFunction_UEOSAuth_RequestExternalConnectLoginWithBinaryToken, "RequestExternalConnectLoginWithBinaryToken" }, // 3303144446
		{ &Z_Construct_UFunction_UEOSAuth_RequestLinkEpicAccount, "RequestLinkEpicAccount" }, // 4274917427
		{ &Z_Construct_UFunction_UEOSAuth_RequestLogin, "RequestLogin" }, // 1505060663
		{ &Z_Construct_UFunction_UEOSAuth_RequestLogout, "RequestLogout" }, // 3661984405
		{ &Z_Construct_UFunction_UEOSAuth_RequestPersistentAuthLogin, "RequestPersistentAuthLogin" }, // 2631358590
		{ &Z_Construct_UFunction_UEOSAuth_SetApiVersion, "SetApiVersion" }, // 4171047394
		{ &Z_Construct_UFunction_UEOSAuth_SetLoginExternalAccountId, "SetLoginExternalAccountId" }, // 993202690
		{ &Z_Construct_UFunction_UEOSAuth_SetLoginUserDisplayName, "SetLoginUserDisplayName" }, // 2792413809
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAuth.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::NewProp_AuthEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuth" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAuth_Statics::NewProp_AuthEventDispatcher = { "AuthEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAuth, AuthEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAuthEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::NewProp_AuthEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::NewProp_AuthEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_stPinGrantInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuth" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_stPinGrantInfo = { "m_stPinGrantInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAuth, m_stPinGrantInfo), Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo, METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_stPinGrantInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_stPinGrantInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strRefreshToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuth" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strRefreshToken = { "m_strRefreshToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAuth, m_strRefreshToken), METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strRefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strRefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strUserDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuth" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strUserDisplayName = { "m_strUserDisplayName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAuth, m_strUserDisplayName), METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strUserDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strUserDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strExternalAccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuth" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strExternalAccountId = { "m_strExternalAccountId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAuth, m_strExternalAccountId), METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strExternalAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_sConnectLoggingCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuth" },
		{ "ModuleRelativePath", "Public/EOSAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_sConnectLoggingCount = { "m_sConnectLoggingCount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAuth, m_sConnectLoggingCount), METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_sConnectLoggingCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_sConnectLoggingCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAuth_Statics::NewProp_AuthEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_stPinGrantInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strRefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strUserDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_strExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAuth_Statics::NewProp_m_sConnectLoggingCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAuth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAuth_Statics::ClassParams = {
		&UEOSAuth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAuth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAuth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAuth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAuth, 3305534600);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAuth>()
	{
		return UEOSAuth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAuth(Z_Construct_UClass_UEOSAuth, &UEOSAuth::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAuth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAuth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
