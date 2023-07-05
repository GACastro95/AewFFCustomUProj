// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2ClientCacheParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2ClientCacheParam() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientCacheParam();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2ClientCacheParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2ClientCacheParam, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2ClientCacheParam"), sizeof(FYGS2ClientCacheParam), Get_Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2ClientCacheParam>()
{
	return FYGS2ClientCacheParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2ClientCacheParam(FYGS2ClientCacheParam::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2ClientCacheParam"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2ClientCacheParam
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2ClientCacheParam()
	{
		UScriptStruct::DeferCppStructOps<FYGS2ClientCacheParam>(FName(TEXT("YGS2ClientCacheParam")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2ClientCacheParam;
	struct Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAuthServerEnvName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastAuthServerEnvName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EpicAccountID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Agent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppAuthKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppAuthKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppAuthSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppAuthSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAuthKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserAuthKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAuthSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserAuthSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cookie_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cookie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalURLArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalURLArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDefaultAgent_MetaData[];
#endif
		static void NewProp_UseDefaultAgent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDefaultAgent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_Session_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Debug_Session_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_Session_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Debug_Session_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2ClientCacheParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_LastAuthServerEnvName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_LastAuthServerEnvName = { "LastAuthServerEnvName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, LastAuthServerEnvName), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_LastAuthServerEnvName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_LastAuthServerEnvName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_EpicAccountID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_EpicAccountID = { "EpicAccountID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, EpicAccountID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_EpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_EpicAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Agent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, Agent), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Agent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Agent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthKey = { "AppAuthKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, AppAuthKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthSecret = { "AppAuthSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, AppAuthSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthKey = { "UserAuthKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, UserAuthKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthSecret = { "UserAuthSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, UserAuthSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AuthToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, AuthToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AuthToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_CustomData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, CustomData), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Cookie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Cookie = { "Cookie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, Cookie), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Cookie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Cookie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_OptionalURLArguments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_OptionalURLArguments = { "OptionalURLArguments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, OptionalURLArguments), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_OptionalURLArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_OptionalURLArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent_SetBit(void* Obj)
	{
		((FYGS2ClientCacheParam*)Obj)->UseDefaultAgent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent = { "UseDefaultAgent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FYGS2ClientCacheParam), &Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Type = { "Debug_Session_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, Debug_Session_Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2ClientCacheParam" },
		{ "ModuleRelativePath", "Public/YGS2ClientCacheParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Key = { "Debug_Session_Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2ClientCacheParam, Debug_Session_Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_LastAuthServerEnvName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_EpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AppAuthSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserAuthSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_AuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Cookie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_OptionalURLArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_UseDefaultAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::NewProp_Debug_Session_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2ClientCacheParam",
		sizeof(FYGS2ClientCacheParam),
		alignof(FYGS2ClientCacheParam),
		Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientCacheParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2ClientCacheParam"), sizeof(FYGS2ClientCacheParam), Get_Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2ClientCacheParam_Hash() { return 2571474286U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
