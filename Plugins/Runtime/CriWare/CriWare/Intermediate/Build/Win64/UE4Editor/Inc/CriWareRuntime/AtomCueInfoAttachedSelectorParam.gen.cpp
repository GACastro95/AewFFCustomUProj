// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedSelectorParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoAttachedSelectorParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomCueInfoAttachedSelectorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedSelectorParam"), sizeof(FAtomCueInfoAttachedSelectorParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedSelectorParam>()
{
	return FAtomCueInfoAttachedSelectorParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoAttachedSelectorParam(FAtomCueInfoAttachedSelectorParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoAttachedSelectorParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedSelectorParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedSelectorParam()
	{
		UScriptStruct::DeferCppStructOps<FAtomCueInfoAttachedSelectorParam>(FName(TEXT("AtomCueInfoAttachedSelectorParam")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedSelectorParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedSelectorParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedSelectorParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedSelectorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoAttachedSelectorParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoAttachedSelectorParam",
		sizeof(FAtomCueInfoAttachedSelectorParam),
		alignof(FAtomCueInfoAttachedSelectorParam),
		Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoAttachedSelectorParam"), sizeof(FAtomCueInfoAttachedSelectorParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash() { return 2766743053U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
