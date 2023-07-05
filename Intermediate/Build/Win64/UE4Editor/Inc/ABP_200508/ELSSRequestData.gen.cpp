// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSRequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSRequestData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSRequestData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRequestVerbType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_WebRequestEvent__DelegateSignature();
// End Cross Module References
class UScriptStruct* FELSSRequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSRequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSRequestData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSRequestData"), sizeof(FELSSRequestData), Get_Z_Construct_UScriptStruct_FELSSRequestData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSRequestData>()
{
	return FELSSRequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSRequestData(FELSSRequestData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSRequestData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSRequestData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSRequestData()
	{
		UScriptStruct::DeferCppStructOps<FELSSRequestData>(FName(TEXT("ELSSRequestData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSRequestData;
	struct Z_Construct_UScriptStruct_FELSSRequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_requestVerbType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestVerbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_requestVerbType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestPostData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestPostData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestHeader_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestHeader_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_requestHeader;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestQuery_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestQuery_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_requestQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requestResultEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_requestResultEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSRequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSRequestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSRequestData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRequestData" },
		{ "ModuleRelativePath", "Public/ELSSRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType = { "requestVerbType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSRequestData, requestVerbType), Z_Construct_UEnum_ABP_200508_ESSRequestVerbType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestPostData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRequestData" },
		{ "ModuleRelativePath", "Public/ELSSRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestPostData = { "requestPostData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSRequestData, requestPostData), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestPostData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestPostData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_ValueProp = { "requestHeader", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_Key_KeyProp = { "requestHeader_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRequestData" },
		{ "ModuleRelativePath", "Public/ELSSRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader = { "requestHeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSRequestData, requestHeader), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_ValueProp = { "requestQuery", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_Key_KeyProp = { "requestQuery_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRequestData" },
		{ "ModuleRelativePath", "Public/ELSSRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery = { "requestQuery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSRequestData, requestQuery), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestResultEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRequestData" },
		{ "ModuleRelativePath", "Public/ELSSRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestResultEvent = { "requestResultEvent", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSRequestData, requestResultEvent), Z_Construct_UDelegateFunction_ABP_200508_WebRequestEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestResultEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestResultEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestVerbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestPostData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSRequestData_Statics::NewProp_requestResultEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSRequestData",
		sizeof(FELSSRequestData),
		alignof(FELSSRequestData),
		Z_Construct_UScriptStruct_FELSSRequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSRequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSRequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSRequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSRequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSRequestData"), sizeof(FELSSRequestData), Get_Z_Construct_UScriptStruct_FELSSRequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSRequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSRequestData_Hash() { return 4020485912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
