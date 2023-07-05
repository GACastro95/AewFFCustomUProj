// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2ClientSetupParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2ClientSetupParam() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientSetupParam();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2ClientSetupParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2ClientSetupParam, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2ClientSetupParam"), sizeof(FYGS2ClientSetupParam), Get_Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2ClientSetupParam>()
{
	return FYGS2ClientSetupParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2ClientSetupParam(FYGS2ClientSetupParam::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2ClientSetupParam"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2ClientSetupParam
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2ClientSetupParam()
	{
		UScriptStruct::DeferCppStructOps<FYGS2ClientSetupParam>(FName(TEXT("YGS2ClientSetupParam")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2ClientSetupParam;
	struct Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ApiVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleVer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleVer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineVer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OnlineVer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSIDHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSIDHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSSandboxID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSSandboxID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSDeploymentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSDeploymentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSClientID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSClientID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSServerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EOSServerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecryptKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DecryptKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecryptIV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DecryptIV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncryptKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EncryptKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncryptIV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EncryptIV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2ClientSetupParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_AppKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_AppKey = { "AppKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, AppKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_AppKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_AppKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_RootURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_RootURL = { "RootURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, RootURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_RootURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_RootURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_ApiVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_ApiVersion = { "ApiVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, ApiVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_ApiVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_ApiVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleID = { "TitleID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, TitleID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleVer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleVer = { "TitleVer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, TitleVer), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleVer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleVer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_BuildVer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_BuildVer = { "BuildVer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, BuildVer), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_BuildVer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_BuildVer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_OnlineVer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_OnlineVer = { "OnlineVer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, OnlineVer), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_OnlineVer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_OnlineVer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSIDHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSIDHash = { "EOSIDHash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EOSIDHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSIDHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSIDHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSProductID = { "EOSProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EOSProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSSandboxID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSSandboxID = { "EOSSandboxID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EOSSandboxID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSSandboxID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSSandboxID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSDeploymentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSDeploymentID = { "EOSDeploymentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EOSDeploymentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSDeploymentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSDeploymentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSClientID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSClientID = { "EOSClientID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EOSClientID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSClientID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSClientID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSServerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSServerID = { "EOSServerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EOSServerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSServerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSServerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptKey = { "DecryptKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, DecryptKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptIV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptIV = { "DecryptIV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, DecryptIV), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptIV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptIV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptKey = { "EncryptKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EncryptKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptIV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientSetupParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptIV = { "EncryptIV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientSetupParam, EncryptIV), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptIV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptIV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_AppKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_RootURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_ApiVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_TitleVer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_BuildVer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_OnlineVer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSIDHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSSandboxID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSDeploymentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSClientID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EOSServerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_DecryptIV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::NewProp_EncryptIV,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2ClientSetupParam",
		sizeof(FYGS2ClientSetupParam),
		alignof(FYGS2ClientSetupParam),
		Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientSetupParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2ClientSetupParam"), sizeof(FYGS2ClientSetupParam), Get_Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2ClientSetupParam_Hash() { return 1624735160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
