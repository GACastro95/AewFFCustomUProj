// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAttenuationDistanceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAttenuationDistanceParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAttenuationDistanceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAttenuationDistanceParam"), sizeof(FAtomAttenuationDistanceParam), Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAttenuationDistanceParam>()
{
	return FAtomAttenuationDistanceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAttenuationDistanceParam(FAtomAttenuationDistanceParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAttenuationDistanceParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAttenuationDistanceParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAttenuationDistanceParam()
	{
		UScriptStruct::DeferCppStructOps<FAtomAttenuationDistanceParam>(FName(TEXT("AtomAttenuationDistanceParam")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAttenuationDistanceParam;
	struct Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationDistanceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAttenuationDistanceParam" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAttenuationDistanceParam" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAttenuationDistanceParam",
		sizeof(FAtomAttenuationDistanceParam),
		alignof(FAtomAttenuationDistanceParam),
		Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAttenuationDistanceParam"), sizeof(FAtomAttenuationDistanceParam), Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash() { return 2829348451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
