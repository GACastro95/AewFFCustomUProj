// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELYGS2RequestFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELYGS2RequestFunction() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELYGS2RequestFunction();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELYGS2RequestFunctionType();
// End Cross Module References
class UScriptStruct* FELYGS2RequestFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELYGS2RequestFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELYGS2RequestFunction, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELYGS2RequestFunction"), sizeof(FELYGS2RequestFunction), Get_Z_Construct_UScriptStruct_FELYGS2RequestFunction_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELYGS2RequestFunction>()
{
	return FELYGS2RequestFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELYGS2RequestFunction(FELYGS2RequestFunction::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELYGS2RequestFunction"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELYGS2RequestFunction
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELYGS2RequestFunction()
	{
		UScriptStruct::DeferCppStructOps<FELYGS2RequestFunction>(FName(TEXT("ELYGS2RequestFunction")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELYGS2RequestFunction;
	struct Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELYGS2RequestFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELYGS2RequestFunction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_RequestBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2RequestFunction" },
		{ "ModuleRelativePath", "Public/ELYGS2RequestFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_RequestBase = { "RequestBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGS2RequestFunction, RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_RequestBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_RequestBase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2RequestFunction" },
		{ "ModuleRelativePath", "Public/ELYGS2RequestFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGS2RequestFunction, FunctionType), Z_Construct_UEnum_ABP_200508_EELYGS2RequestFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_RequestBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::NewProp_FunctionType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELYGS2RequestFunction",
		sizeof(FELYGS2RequestFunction),
		alignof(FELYGS2RequestFunction),
		Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELYGS2RequestFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELYGS2RequestFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELYGS2RequestFunction"), sizeof(FELYGS2RequestFunction), Get_Z_Construct_UScriptStruct_FELYGS2RequestFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELYGS2RequestFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELYGS2RequestFunction_Hash() { return 1588524135U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
