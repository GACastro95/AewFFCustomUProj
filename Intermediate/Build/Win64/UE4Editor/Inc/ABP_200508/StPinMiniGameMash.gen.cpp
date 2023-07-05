// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPinMiniGameMash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPinMiniGameMash() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinMiniGameMash();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStPinMiniGameMash>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPinMiniGameMash cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPinMiniGameMash::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPinMiniGameMash_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPinMiniGameMash, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPinMiniGameMash"), sizeof(FStPinMiniGameMash), Get_Z_Construct_UScriptStruct_FStPinMiniGameMash_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPinMiniGameMash>()
{
	return FStPinMiniGameMash::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPinMiniGameMash(FStPinMiniGameMash::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPinMiniGameMash"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPinMiniGameMash
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPinMiniGameMash()
	{
		UScriptStruct::DeferCppStructOps<FStPinMiniGameMash>(FName(TEXT("StPinMiniGameMash")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPinMiniGameMash;
	struct Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MashSpeedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MashSpeedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MashSpeedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MashSpeedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MomentumBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MomentumBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecreasedSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecreasedSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDecreasedSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalDecreasedSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPinMiniGameMash.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPinMiniGameMash>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinMiniGameMash" },
		{ "ModuleRelativePath", "Public/StPinMiniGameMash.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMin = { "MashSpeedMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinMiniGameMash, MashSpeedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinMiniGameMash" },
		{ "ModuleRelativePath", "Public/StPinMiniGameMash.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMax = { "MashSpeedMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinMiniGameMash, MashSpeedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MomentumBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinMiniGameMash" },
		{ "ModuleRelativePath", "Public/StPinMiniGameMash.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MomentumBonus = { "MomentumBonus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinMiniGameMash, MomentumBonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MomentumBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MomentumBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_DecreasedSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinMiniGameMash" },
		{ "ModuleRelativePath", "Public/StPinMiniGameMash.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_DecreasedSeconds = { "DecreasedSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinMiniGameMash, DecreasedSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_DecreasedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_DecreasedSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_AdditionalDecreasedSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinMiniGameMash" },
		{ "ModuleRelativePath", "Public/StPinMiniGameMash.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_AdditionalDecreasedSeconds = { "AdditionalDecreasedSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinMiniGameMash, AdditionalDecreasedSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_AdditionalDecreasedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_AdditionalDecreasedSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MashSpeedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_MomentumBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_DecreasedSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::NewProp_AdditionalDecreasedSeconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPinMiniGameMash",
		sizeof(FStPinMiniGameMash),
		alignof(FStPinMiniGameMash),
		Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPinMiniGameMash()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPinMiniGameMash_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPinMiniGameMash"), sizeof(FStPinMiniGameMash), Get_Z_Construct_UScriptStruct_FStPinMiniGameMash_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPinMiniGameMash_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPinMiniGameMash_Hash() { return 943257787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
