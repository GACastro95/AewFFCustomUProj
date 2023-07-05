// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerChampionshipCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerChampionshipCore() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipCore();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
class UScriptStruct* FCareerChampionshipCore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerChampionshipCore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerChampionshipCore, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerChampionshipCore"), sizeof(FCareerChampionshipCore), Get_Z_Construct_UScriptStruct_FCareerChampionshipCore_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerChampionshipCore>()
{
	return FCareerChampionshipCore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerChampionshipCore(FCareerChampionshipCore::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerChampionshipCore"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerChampionshipCore
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerChampionshipCore()
	{
		UScriptStruct::DeferCppStructOps<FCareerChampionshipCore>(FName(TEXT("CareerChampionshipCore")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerChampionshipCore;
	struct Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eWrestlerA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eWrestlerA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eWrestlerA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eWrestlerB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eWrestlerB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eWrestlerB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerChampionshipCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerChampionshipCore>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipCore" },
		{ "ModuleRelativePath", "Public/CareerChampionshipCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA = { "eWrestlerA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipCore, eWrestlerA), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerChampionshipCore" },
		{ "ModuleRelativePath", "Public/CareerChampionshipCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB = { "eWrestlerB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerChampionshipCore, eWrestlerB), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::NewProp_eWrestlerB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerChampionshipCore",
		sizeof(FCareerChampionshipCore),
		alignof(FCareerChampionshipCore),
		Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipCore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerChampionshipCore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerChampionshipCore"), sizeof(FCareerChampionshipCore), Get_Z_Construct_UScriptStruct_FCareerChampionshipCore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerChampionshipCore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerChampionshipCore_Hash() { return 1431259055U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
