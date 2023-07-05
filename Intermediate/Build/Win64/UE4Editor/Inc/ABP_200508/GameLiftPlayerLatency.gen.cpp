// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftPlayerLatency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftPlayerLatency() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerLatency();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FGameLiftPlayerLatency::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftPlayerLatency, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftPlayerLatency"), sizeof(FGameLiftPlayerLatency), Get_Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftPlayerLatency>()
{
	return FGameLiftPlayerLatency::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftPlayerLatency(FGameLiftPlayerLatency::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftPlayerLatency"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlayerLatency
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlayerLatency()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftPlayerLatency>(FName(TEXT("GameLiftPlayerLatency")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPlayerLatency;
	struct Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_regionIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_latencyInMilliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_latencyInMilliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerLatency.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftPlayerLatency>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerLatency" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerLatency.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerLatency, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_regionIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerLatency" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerLatency.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_regionIdentifier = { "regionIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerLatency, regionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_regionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_regionIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_latencyInMilliseconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPlayerLatency" },
		{ "ModuleRelativePath", "Public/GameLiftPlayerLatency.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_latencyInMilliseconds = { "latencyInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPlayerLatency, latencyInMilliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_latencyInMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_latencyInMilliseconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_regionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::NewProp_latencyInMilliseconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftPlayerLatency",
		sizeof(FGameLiftPlayerLatency),
		alignof(FGameLiftPlayerLatency),
		Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPlayerLatency()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftPlayerLatency"), sizeof(FGameLiftPlayerLatency), Get_Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftPlayerLatency_Hash() { return 1738985084U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
