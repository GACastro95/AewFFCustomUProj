// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAisacControlParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacControlParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAisacControlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacControlParam>()
{
	return FAtomAisacControlParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAisacControlParam(FAtomAisacControlParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAisacControlParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam()
	{
		UScriptStruct::DeferCppStructOps<FAtomAisacControlParam>(FName(TEXT("AtomAisacControlParam")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam;
	struct Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlParam, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAisacControlParam",
		sizeof(FAtomAisacControlParam),
		alignof(FAtomAisacControlParam),
		Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash() { return 4135228800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
