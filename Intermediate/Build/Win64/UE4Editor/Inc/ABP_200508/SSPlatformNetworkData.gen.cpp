// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPlatformNetworkData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPlatformNetworkData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlatformNetworkData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELApplicationStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELServerType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSNetworkErrorInfo();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData();
// End Cross Module References
class UScriptStruct* FSSPlatformNetworkData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPlatformNetworkData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPlatformNetworkData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPlatformNetworkData"), sizeof(FSSPlatformNetworkData), Get_Z_Construct_UScriptStruct_FSSPlatformNetworkData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPlatformNetworkData>()
{
	return FSSPlatformNetworkData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPlatformNetworkData(FSSPlatformNetworkData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPlatformNetworkData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlatformNetworkData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlatformNetworkData()
	{
		UScriptStruct::DeferCppStructOps<FSSPlatformNetworkData>(FName(TEXT("SSPlatformNetworkData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPlatformNetworkData;
	struct Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetworkStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_networkInfo_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_networkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_networkInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_serverConnect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverConnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_serverConnect;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errDialogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errTmpID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errTmpID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPlatformNetworkData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus = { "AppStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, AppStatus), Z_Construct_UEnum_ABP_200508_EELApplicationStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus = { "NetworkStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, NetworkStatus), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo = { "networkInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, networkInfo), Z_Construct_UEnum_ABP_200508_EELNetworkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect = { "serverConnect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, serverConnect), Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, ServerType), Z_Construct_UEnum_ABP_200508_EELServerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errData = { "errData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, errData), Z_Construct_UScriptStruct_FSSNetworkErrorInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errDialogData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errDialogData = { "errDialogData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, errDialogData), Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errDialogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errTmpID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlatformNetworkData" },
		{ "ModuleRelativePath", "Public/SSPlatformNetworkData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errTmpID = { "errTmpID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlatformNetworkData, errTmpID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errTmpID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errTmpID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_AppStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_NetworkStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_networkInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_serverConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_ServerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errDialogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::NewProp_errTmpID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSPlatformNetworkData",
		sizeof(FSSPlatformNetworkData),
		alignof(FSSPlatformNetworkData),
		Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPlatformNetworkData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPlatformNetworkData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPlatformNetworkData"), sizeof(FSSPlatformNetworkData), Get_Z_Construct_UScriptStruct_FSSPlatformNetworkData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPlatformNetworkData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPlatformNetworkData_Hash() { return 2440416192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
