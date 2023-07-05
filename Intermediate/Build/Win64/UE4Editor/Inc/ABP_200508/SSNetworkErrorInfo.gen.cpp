// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSNetworkErrorInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSNetworkErrorInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSNetworkErrorInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorNetDriverTempData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eErrorID();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType();
// End Cross Module References
class UScriptStruct* FSSNetworkErrorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSNetworkErrorInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSNetworkErrorInfo"), sizeof(FSSNetworkErrorInfo), Get_Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSNetworkErrorInfo>()
{
	return FSSNetworkErrorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSNetworkErrorInfo(FSSNetworkErrorInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSNetworkErrorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSNetworkErrorInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSNetworkErrorInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSNetworkErrorInfo>(FName(TEXT("SSNetworkErrorInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSNetworkErrorInfo;
	struct Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_errWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errNetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errNetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errTypeStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errTypeStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errTextMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_errTextMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errAPIresponseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errAPIresponseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errAPIType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errAPIType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errResponseID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errResponseID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errResponseIDtoAWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errResponseIDtoAWS;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_errID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errOnlineType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errOnlineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_errOnlineType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errCodeForPlatformDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errCodeForPlatformDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errTextForPlatformDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errTextForPlatformDialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSNetworkErrorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errWorld_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errWorld = { "errWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNetDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNetDriver = { "errNetDriver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errNetDriver), Z_Construct_UScriptStruct_FSSErrorNetDriverTempData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMessage = { "errMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTypeStr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTypeStr = { "errTypeStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errTypeStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTypeStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTypeStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errText = { "errText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNo = { "errNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMax = { "errMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextMsg = { "errTextMsg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errTextMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIresponseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIresponseData = { "errAPIresponseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errAPIresponseData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIresponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIresponseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIType = { "errAPIType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errAPIType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseID = { "errResponseID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errResponseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseIDtoAWS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseIDtoAWS = { "errResponseIDtoAWS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errResponseIDtoAWS), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseIDtoAWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseIDtoAWS_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID = { "errID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errID), Z_Construct_UEnum_ABP_200508_eErrorID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType = { "errOnlineType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errOnlineType), Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errCodeForPlatformDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errCodeForPlatformDialog = { "errCodeForPlatformDialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errCodeForPlatformDialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errCodeForPlatformDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errCodeForPlatformDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextForPlatformDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNetworkErrorInfo" },
		{ "ModuleRelativePath", "Public/SSNetworkErrorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextForPlatformDialog = { "errTextForPlatformDialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNetworkErrorInfo, errTextForPlatformDialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextForPlatformDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextForPlatformDialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTypeStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIresponseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errAPIType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errResponseIDtoAWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errOnlineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errCodeForPlatformDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::NewProp_errTextForPlatformDialog,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSNetworkErrorInfo",
		sizeof(FSSNetworkErrorInfo),
		alignof(FSSNetworkErrorInfo),
		Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSNetworkErrorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSNetworkErrorInfo"), sizeof(FSSNetworkErrorInfo), Get_Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSNetworkErrorInfo_Hash() { return 1895074438U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
