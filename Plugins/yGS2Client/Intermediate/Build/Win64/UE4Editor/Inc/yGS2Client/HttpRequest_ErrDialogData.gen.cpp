// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/HttpRequest_ErrDialogData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpRequest_ErrDialogData() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FRequest_ErrSetupData();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_RequestErrorDialogEvent__DelegateSignature();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature();
// End Cross Module References
class UScriptStruct* FHttpRequest_ErrDialogData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData, Z_Construct_UPackage__Script_yGS2Client(), TEXT("HttpRequest_ErrDialogData"), sizeof(FHttpRequest_ErrDialogData), Get_Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FHttpRequest_ErrDialogData>()
{
	return FHttpRequest_ErrDialogData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHttpRequest_ErrDialogData(FHttpRequest_ErrDialogData::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("HttpRequest_ErrDialogData"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFHttpRequest_ErrDialogData
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFHttpRequest_ErrDialogData()
	{
		UScriptStruct::DeferCppStructOps<FHttpRequest_ErrDialogData>(FName(TEXT("HttpRequest_ErrDialogData")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFHttpRequest_ErrDialogData;
	struct Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errDialogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_errDialogEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errRetryEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_errRetryEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errDialogOpenRetryCnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_errDialogOpenRetryCnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HttpRequest_ErrDialogData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpRequest_ErrDialogData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HttpRequest_ErrDialogData" },
		{ "ModuleRelativePath", "Public/HttpRequest_ErrDialogData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogData = { "errDialogData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpRequest_ErrDialogData, errDialogData), Z_Construct_UScriptStruct_FRequest_ErrSetupData, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HttpRequest_ErrDialogData" },
		{ "ModuleRelativePath", "Public/HttpRequest_ErrDialogData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogEvent = { "errDialogEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpRequest_ErrDialogData, errDialogEvent), Z_Construct_UDelegateFunction_yGS2Client_RequestErrorDialogEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errRetryEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HttpRequest_ErrDialogData" },
		{ "ModuleRelativePath", "Public/HttpRequest_ErrDialogData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errRetryEvent = { "errRetryEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpRequest_ErrDialogData, errRetryEvent), Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errRetryEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errRetryEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogOpenRetryCnt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HttpRequest_ErrDialogData" },
		{ "ModuleRelativePath", "Public/HttpRequest_ErrDialogData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogOpenRetryCnt = { "errDialogOpenRetryCnt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHttpRequest_ErrDialogData, errDialogOpenRetryCnt), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogOpenRetryCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogOpenRetryCnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errRetryEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::NewProp_errDialogOpenRetryCnt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"HttpRequest_ErrDialogData",
		sizeof(FHttpRequest_ErrDialogData),
		alignof(FHttpRequest_ErrDialogData),
		Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HttpRequest_ErrDialogData"), sizeof(FHttpRequest_ErrDialogData), Get_Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData_Hash() { return 2922344326U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
