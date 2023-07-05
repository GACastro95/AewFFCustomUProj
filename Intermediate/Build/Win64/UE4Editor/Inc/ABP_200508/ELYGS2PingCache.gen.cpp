// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELYGS2PingCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELYGS2PingCache() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELYGS2PingCache();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELYGS2PingCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELYGS2PingCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELYGS2PingCache, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELYGS2PingCache"), sizeof(FELYGS2PingCache), Get_Z_Construct_UScriptStruct_FELYGS2PingCache_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELYGS2PingCache>()
{
	return FELYGS2PingCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELYGS2PingCache(FELYGS2PingCache::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELYGS2PingCache"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELYGS2PingCache
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELYGS2PingCache()
	{
		UScriptStruct::DeferCppStructOps<FELYGS2PingCache>(FName(TEXT("ELYGS2PingCache")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELYGS2PingCache;
	struct Z_Construct_UScriptStruct_FELYGS2PingCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PingHistory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PingHistory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELYGS2PingCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELYGS2PingCache>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory_Inner = { "PingHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2PingCache" },
		{ "ModuleRelativePath", "Public/ELYGS2PingCache.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory = { "PingHistory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGS2PingCache, PingHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::NewProp_PingHistory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELYGS2PingCache",
		sizeof(FELYGS2PingCache),
		alignof(FELYGS2PingCache),
		Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELYGS2PingCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELYGS2PingCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELYGS2PingCache"), sizeof(FELYGS2PingCache), Get_Z_Construct_UScriptStruct_FELYGS2PingCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELYGS2PingCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELYGS2PingCache_Hash() { return 3563223297U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
