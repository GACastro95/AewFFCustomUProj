// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardStatDataCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardStatDataCache() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardStatDataCache();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardUserData();
// End Cross Module References
class UScriptStruct* FELLeaderboardStatDataCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELLeaderboardStatDataCache"), sizeof(FELLeaderboardStatDataCache), Get_Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELLeaderboardStatDataCache>()
{
	return FELLeaderboardStatDataCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELLeaderboardStatDataCache(FELLeaderboardStatDataCache::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELLeaderboardStatDataCache"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELLeaderboardStatDataCache
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELLeaderboardStatDataCache()
	{
		UScriptStruct::DeferCppStructOps<FELLeaderboardStatDataCache>(FName(TEXT("ELLeaderboardStatDataCache")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELLeaderboardStatDataCache;
	struct Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRequestDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRequestDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastQueryDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastQueryDateTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserRankData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserRankData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserRankData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardStatDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELLeaderboardStatDataCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastRequestDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardStatDataCache" },
		{ "ModuleRelativePath", "Public/ELLeaderboardStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastRequestDateTime = { "LastRequestDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELLeaderboardStatDataCache, LastRequestDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastRequestDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastRequestDateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastQueryDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardStatDataCache" },
		{ "ModuleRelativePath", "Public/ELLeaderboardStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastQueryDateTime = { "LastQueryDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELLeaderboardStatDataCache, LastQueryDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastQueryDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastQueryDateTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData_Inner = { "UserRankData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardStatDataCache" },
		{ "ModuleRelativePath", "Public/ELLeaderboardStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData = { "UserRankData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELLeaderboardStatDataCache, UserRankData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastRequestDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_LastQueryDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::NewProp_UserRankData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELLeaderboardStatDataCache",
		sizeof(FELLeaderboardStatDataCache),
		alignof(FELLeaderboardStatDataCache),
		Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardStatDataCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELLeaderboardStatDataCache"), sizeof(FELLeaderboardStatDataCache), Get_Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELLeaderboardStatDataCache_Hash() { return 368843462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
