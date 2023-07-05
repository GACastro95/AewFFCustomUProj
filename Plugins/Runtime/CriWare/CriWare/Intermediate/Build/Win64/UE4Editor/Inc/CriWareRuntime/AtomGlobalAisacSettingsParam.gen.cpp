// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomGlobalAisacSettingsParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGlobalAisacSettingsParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomGlobalAisacSettingsParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomGlobalAisacSettingsParam"), sizeof(FAtomGlobalAisacSettingsParam), Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomGlobalAisacSettingsParam>()
{
	return FAtomGlobalAisacSettingsParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomGlobalAisacSettingsParam(FAtomGlobalAisacSettingsParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomGlobalAisacSettingsParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGlobalAisacSettingsParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGlobalAisacSettingsParam()
	{
		UScriptStruct::DeferCppStructOps<FAtomGlobalAisacSettingsParam>(FName(TEXT("AtomGlobalAisacSettingsParam")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGlobalAisacSettingsParam;
	struct Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomGlobalAisacSettingsParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomGlobalAisacSettingsParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomGlobalAisacSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomGlobalAisacSettingsParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomGlobalAisacSettingsParam, AisacControl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomGlobalAisacSettingsParam",
		sizeof(FAtomGlobalAisacSettingsParam),
		alignof(FAtomGlobalAisacSettingsParam),
		Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomGlobalAisacSettingsParam"), sizeof(FAtomGlobalAisacSettingsParam), Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash() { return 1303965096U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
