// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PSplitPacketCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PSplitPacketCache() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketData();
// End Cross Module References
class UScriptStruct* FEOSNatP2PSplitPacketCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSNatP2PSplitPacketCache"), sizeof(FEOSNatP2PSplitPacketCache), Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSNatP2PSplitPacketCache>()
{
	return FEOSNatP2PSplitPacketCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSNatP2PSplitPacketCache(FEOSNatP2PSplitPacketCache::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSNatP2PSplitPacketCache"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PSplitPacketCache
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PSplitPacketCache()
	{
		UScriptStruct::DeferCppStructOps<FEOSNatP2PSplitPacketCache>(FName(TEXT("EOSNatP2PSplitPacketCache")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSNatP2PSplitPacketCache;
	struct Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitPacketCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSNatP2PSplitPacketCache>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSplitPacketCache" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSplitPacketCache.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSNatP2PSplitPacketCache, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::NewProp_DataArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSNatP2PSplitPacketCache",
		sizeof(FEOSNatP2PSplitPacketCache),
		alignof(FEOSNatP2PSplitPacketCache),
		Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSNatP2PSplitPacketCache"), sizeof(FEOSNatP2PSplitPacketCache), Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSNatP2PSplitPacketCache_Hash() { return 1503163632U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
