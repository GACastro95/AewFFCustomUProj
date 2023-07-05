// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMode_EOSTitleStorageFileParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMode_EOSTitleStorageFileParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSMode_EOSTitleStorageFileParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMode_EOSTitleStorageFileParam"), sizeof(FSSMode_EOSTitleStorageFileParam), Get_Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMode_EOSTitleStorageFileParam>()
{
	return FSSMode_EOSTitleStorageFileParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMode_EOSTitleStorageFileParam(FSSMode_EOSTitleStorageFileParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMode_EOSTitleStorageFileParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMode_EOSTitleStorageFileParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMode_EOSTitleStorageFileParam()
	{
		UScriptStruct::DeferCppStructOps<FSSMode_EOSTitleStorageFileParam>(FName(TEXT("SSMode_EOSTitleStorageFileParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMode_EOSTitleStorageFileParam;
	struct Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseReceived_MetaData[];
#endif
		static void NewProp_ResponseReceived_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResponseReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMode_EOSTitleStorageFileParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMode_EOSTitleStorageFileParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_FilePrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMode_EOSTitleStorageFileParam" },
		{ "ModuleRelativePath", "Public/SSMode_EOSTitleStorageFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_FilePrefix = { "FilePrefix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMode_EOSTitleStorageFileParam, FilePrefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_FilePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_FilePrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMode_EOSTitleStorageFileParam" },
		{ "ModuleRelativePath", "Public/SSMode_EOSTitleStorageFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMode_EOSTitleStorageFileParam, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMode_EOSTitleStorageFileParam" },
		{ "ModuleRelativePath", "Public/SSMode_EOSTitleStorageFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMode_EOSTitleStorageFileParam, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMode_EOSTitleStorageFileParam" },
		{ "ModuleRelativePath", "Public/SSMode_EOSTitleStorageFileParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMode_EOSTitleStorageFileParam, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMode_EOSTitleStorageFileParam" },
		{ "ModuleRelativePath", "Public/SSMode_EOSTitleStorageFileParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived_SetBit(void* Obj)
	{
		((FSSMode_EOSTitleStorageFileParam*)Obj)->ResponseReceived = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived = { "ResponseReceived", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMode_EOSTitleStorageFileParam), &Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_FilePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::NewProp_ResponseReceived,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSMode_EOSTitleStorageFileParam",
		sizeof(FSSMode_EOSTitleStorageFileParam),
		alignof(FSSMode_EOSTitleStorageFileParam),
		Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMode_EOSTitleStorageFileParam"), sizeof(FSSMode_EOSTitleStorageFileParam), Get_Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMode_EOSTitleStorageFileParam_Hash() { return 2622657016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
