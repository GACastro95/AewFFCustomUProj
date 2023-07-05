// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftPriorityConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftPriorityConfiguration() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FGameLiftPriorityConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftPriorityConfiguration"), sizeof(FGameLiftPriorityConfiguration), Get_Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftPriorityConfiguration>()
{
	return FGameLiftPriorityConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftPriorityConfiguration(FGameLiftPriorityConfiguration::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftPriorityConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPriorityConfiguration
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPriorityConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftPriorityConfiguration>(FName(TEXT("GameLiftPriorityConfiguration")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftPriorityConfiguration;
	struct Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_priorityOrder_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_priorityOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_priorityOrder;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_locationOrder_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_locationOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_locationOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftPriorityConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftPriorityConfiguration>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder_Inner = { "priorityOrder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPriorityConfiguration" },
		{ "ModuleRelativePath", "Public/GameLiftPriorityConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder = { "priorityOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPriorityConfiguration, priorityOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder_Inner = { "locationOrder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftPriorityConfiguration" },
		{ "ModuleRelativePath", "Public/GameLiftPriorityConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder = { "locationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftPriorityConfiguration, locationOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_priorityOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::NewProp_locationOrder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftPriorityConfiguration",
		sizeof(FGameLiftPriorityConfiguration),
		alignof(FGameLiftPriorityConfiguration),
		Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftPriorityConfiguration"), sizeof(FGameLiftPriorityConfiguration), Get_Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftPriorityConfiguration_Hash() { return 1413006593U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
