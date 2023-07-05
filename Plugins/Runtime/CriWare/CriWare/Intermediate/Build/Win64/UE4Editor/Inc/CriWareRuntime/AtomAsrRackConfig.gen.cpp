// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRackConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfig() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAsrRackConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfig, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfig"), sizeof(FAtomAsrRackConfig), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfig>()
{
	return FAtomAsrRackConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAsrRackConfig(FAtomAsrRackConfig::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAsrRackConfig"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig()
	{
		UScriptStruct::DeferCppStructOps<FAtomAsrRackConfig>(FName(TEXT("AtomAsrRackConfig")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig;
	struct Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundRendererType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfig, SoundRendererType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfig" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfig, ElementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAsrRackConfig",
		sizeof(FAtomAsrRackConfig),
		alignof(FAtomAsrRackConfig),
		Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAsrRackConfig"), sizeof(FAtomAsrRackConfig), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash() { return 4249712132U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
