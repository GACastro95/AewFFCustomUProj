// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttireParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttireParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttireParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttirePartPair();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttirePaintPair();
// End Cross Module References
class UScriptStruct* FSSAttireParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttireParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttireParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttireParam"), sizeof(FSSAttireParam), Get_Z_Construct_UScriptStruct_FSSAttireParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttireParam>()
{
	return FSSAttireParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttireParam(FSSAttireParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttireParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttireParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttireParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAttireParam>(FName(TEXT("SSAttireParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttireParam;
	struct Z_Construct_UScriptStruct_FSSAttireParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttireParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttireParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttireParam>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts_Inner = { "Parts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttirePartPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttireParam" },
		{ "ModuleRelativePath", "Public/SSAttireParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttireParam, Parts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints_Inner = { "Paints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAttirePaintPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttireParam" },
		{ "ModuleRelativePath", "Public/SSAttireParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints = { "Paints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttireParam, Paints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttireParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Parts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttireParam_Statics::NewProp_Paints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttireParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSAttireParam",
		sizeof(FSSAttireParam),
		alignof(FSSAttireParam),
		Z_Construct_UScriptStruct_FSSAttireParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttireParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttireParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttireParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttireParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttireParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttireParam"), sizeof(FSSAttireParam), Get_Z_Construct_UScriptStruct_FSSAttireParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttireParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttireParam_Hash() { return 1354195898U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
