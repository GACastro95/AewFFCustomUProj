// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAWSErrorResponseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAWSErrorResponseData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSAWSErrorResponseData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSAWSErrorResponseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSAWSErrorResponseData"), sizeof(FELSSAWSErrorResponseData), Get_Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSAWSErrorResponseData>()
{
	return FELSSAWSErrorResponseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSAWSErrorResponseData(FELSSAWSErrorResponseData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSAWSErrorResponseData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSAWSErrorResponseData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSAWSErrorResponseData()
	{
		UScriptStruct::DeferCppStructOps<FELSSAWSErrorResponseData>(FName(TEXT("ELSSAWSErrorResponseData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSAWSErrorResponseData;
	struct Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSAWSErrorResponseData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSAWSErrorResponseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAWSErrorResponseData" },
		{ "ModuleRelativePath", "Public/ELSSAWSErrorResponseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorID = { "ErrorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSAWSErrorResponseData, ErrorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAWSErrorResponseData" },
		{ "ModuleRelativePath", "Public/ELSSAWSErrorResponseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSAWSErrorResponseData, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::NewProp_ErrorMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSAWSErrorResponseData",
		sizeof(FELSSAWSErrorResponseData),
		alignof(FELSSAWSErrorResponseData),
		Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSAWSErrorResponseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSAWSErrorResponseData"), sizeof(FELSSAWSErrorResponseData), Get_Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSAWSErrorResponseData_Hash() { return 3729802832U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
