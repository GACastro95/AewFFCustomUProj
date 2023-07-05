// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftGameSessionQueueDestination.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftGameSessionQueueDestination() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FGameLiftGameSessionQueueDestination::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftGameSessionQueueDestination"), sizeof(FGameLiftGameSessionQueueDestination), Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftGameSessionQueueDestination>()
{
	return FGameLiftGameSessionQueueDestination::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftGameSessionQueueDestination(FGameLiftGameSessionQueueDestination::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftGameSessionQueueDestination"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionQueueDestination
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionQueueDestination()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftGameSessionQueueDestination>(FName(TEXT("GameLiftGameSessionQueueDestination")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftGameSessionQueueDestination;
	struct Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destinationArn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_destinationArn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueueDestination.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftGameSessionQueueDestination>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::NewProp_destinationArn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftGameSessionQueueDestination" },
		{ "ModuleRelativePath", "Public/GameLiftGameSessionQueueDestination.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::NewProp_destinationArn = { "destinationArn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftGameSessionQueueDestination, destinationArn), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::NewProp_destinationArn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::NewProp_destinationArn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::NewProp_destinationArn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftGameSessionQueueDestination",
		sizeof(FGameLiftGameSessionQueueDestination),
		alignof(FGameLiftGameSessionQueueDestination),
		Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftGameSessionQueueDestination"), sizeof(FGameLiftGameSessionQueueDestination), Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftGameSessionQueueDestination_Hash() { return 2894352436U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
