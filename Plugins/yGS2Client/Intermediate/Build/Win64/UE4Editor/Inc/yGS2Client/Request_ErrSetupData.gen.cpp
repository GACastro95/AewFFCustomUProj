// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/Request_ErrSetupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequest_ErrSetupData() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EErrDialogType();
// End Cross Module References
class UScriptStruct* FRequest_ErrSetupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FRequest_ErrSetupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequest_ErrSetupData, Z_Construct_UPackage__Script_yGS2Client(), TEXT("Request_ErrSetupData"), sizeof(FRequest_ErrSetupData), Get_Z_Construct_UScriptStruct_FRequest_ErrSetupData_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FRequest_ErrSetupData>()
{
	return FRequest_ErrSetupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequest_ErrSetupData(FRequest_ErrSetupData::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("Request_ErrSetupData"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFRequest_ErrSetupData
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFRequest_ErrSetupData()
	{
		UScriptStruct::DeferCppStructOps<FRequest_ErrSetupData>(FName(TEXT("Request_ErrSetupData")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFRequest_ErrSetupData;
	struct Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errAPI_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errAPI;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errDialogType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_errDialogType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Request_ErrSetupData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequest_ErrSetupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errAPI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Request_ErrSetupData" },
		{ "ModuleRelativePath", "Public/Request_ErrSetupData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errAPI = { "errAPI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequest_ErrSetupData, errAPI), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errAPI_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Request_ErrSetupData" },
		{ "ModuleRelativePath", "Public/Request_ErrSetupData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType = { "errDialogType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequest_ErrSetupData, errDialogType), Z_Construct_UEnum_yGS2Client_EErrDialogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::NewProp_errDialogType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"Request_ErrSetupData",
		sizeof(FRequest_ErrSetupData),
		alignof(FRequest_ErrSetupData),
		Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequest_ErrSetupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Request_ErrSetupData"), sizeof(FRequest_ErrSetupData), Get_Z_Construct_UScriptStruct_FRequest_ErrSetupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequest_ErrSetupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequest_ErrSetupData_Hash() { return 2345554150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
