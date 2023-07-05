// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAuthAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAuthAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSAuthAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSAuthAPIVersionSettings"), sizeof(FEOSAuthAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSAuthAPIVersionSettings>()
{
	return FEOSAuthAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSAuthAPIVersionSettings(FEOSAuthAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSAuthAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAuthAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAuthAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSAuthAPIVersionSettings>(FName(TEXT("EOSAuthAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAuthAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthCredentials_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthCredentials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthLogin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthLinkAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthLinkAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthLogout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthLogout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthExpiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthExpiration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthCopyUserAuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthCopyUserAuthToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthDeletePresistentAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthDeletePresistentAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectCredentials_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectCredentials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectLogin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectCreaqteUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectCreaqteUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthLoginStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AuthLoginStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectLoginStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectLoginStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectLinkAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectLinkAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectUnlinkAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectUnlinkAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserLoginInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserLoginInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSAuthAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCredentials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCredentials = { "AuthCredentials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthCredentials), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCredentials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCredentials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogin = { "AuthLogin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthLogin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLinkAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLinkAccount = { "AuthLinkAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthLinkAccount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLinkAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLinkAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogout = { "AuthLogout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthLogout), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthExpiration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthExpiration = { "AuthExpiration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthExpiration), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthExpiration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthExpiration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCopyUserAuthToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCopyUserAuthToken = { "AuthCopyUserAuthToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthCopyUserAuthToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCopyUserAuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCopyUserAuthToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthDeletePresistentAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthDeletePresistentAuth = { "AuthDeletePresistentAuth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthDeletePresistentAuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthDeletePresistentAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthDeletePresistentAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCredentials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCredentials = { "ConnectCredentials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, ConnectCredentials), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCredentials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCredentials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLogin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLogin = { "ConnectLogin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, ConnectLogin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCreaqteUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCreaqteUser = { "ConnectCreaqteUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, ConnectCreaqteUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCreaqteUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCreaqteUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLoginStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLoginStatusChanged = { "AuthLoginStatusChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, AuthLoginStatusChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLoginStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLoginStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLoginStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLoginStatusChanged = { "ConnectLoginStatusChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, ConnectLoginStatusChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLoginStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLoginStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLinkAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLinkAccount = { "ConnectLinkAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, ConnectLinkAccount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLinkAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLinkAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectUnlinkAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectUnlinkAccount = { "ConnectUnlinkAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, ConnectUnlinkAccount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectUnlinkAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectUnlinkAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_UserLoginInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAuthAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_UserLoginInfo = { "UserLoginInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthAPIVersionSettings, UserLoginInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_UserLoginInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_UserLoginInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCredentials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLinkAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLogout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthExpiration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthCopyUserAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthDeletePresistentAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCredentials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectCreaqteUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_AuthLoginStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLoginStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectLinkAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_ConnectUnlinkAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::NewProp_UserLoginInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSAuthAPIVersionSettings",
		sizeof(FEOSAuthAPIVersionSettings),
		alignof(FEOSAuthAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSAuthAPIVersionSettings"), sizeof(FEOSAuthAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSAuthAPIVersionSettings_Hash() { return 3869536696U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
