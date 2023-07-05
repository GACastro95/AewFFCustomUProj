// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLoadoutPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLoadoutPreset() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPreset();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSLoadoutPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLoadoutPreset, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLoadoutPreset"), sizeof(FSSLoadoutPreset), Get_Z_Construct_UScriptStruct_FSSLoadoutPreset_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLoadoutPreset>()
{
	return FSSLoadoutPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLoadoutPreset(FSSLoadoutPreset::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLoadoutPreset"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutPreset
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutPreset()
	{
		UScriptStruct::DeferCppStructOps<FSSLoadoutPreset>(FName(TEXT("SSLoadoutPreset")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutPreset;
	struct Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_Strike_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_Strike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_HighFly_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_HighFly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Using_MetaData[];
#endif
		static void NewProp_Using_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Using;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLoadoutPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_PresetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPreset, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Strike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Strike = { "HeatSkillFlags_Strike", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HeatSkillFlags_Strike, FSSLoadoutPreset), STRUCT_OFFSET(FSSLoadoutPreset, HeatSkillFlags_Strike), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Strike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Strike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Grapple = { "HeatSkillFlags_Grapple", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HeatSkillFlags_Grapple, FSSLoadoutPreset), STRUCT_OFFSET(FSSLoadoutPreset, HeatSkillFlags_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_HighFly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_HighFly = { "HeatSkillFlags_HighFly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HeatSkillFlags_HighFly, FSSLoadoutPreset), STRUCT_OFFSET(FSSLoadoutPreset, HeatSkillFlags_HighFly), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_HighFly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_HighFly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Weapon = { "HeatSkillFlags_Weapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HeatSkillFlags_Weapon, FSSLoadoutPreset), STRUCT_OFFSET(FSSLoadoutPreset, HeatSkillFlags_Weapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Ability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Ability, FSSLoadoutPreset), STRUCT_OFFSET(FSSLoadoutPreset, Ability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_FinisherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_FinisherId = { "FinisherId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutPreset, FinisherId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_FinisherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_FinisherId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutPreset" },
		{ "ModuleRelativePath", "Public/SSLoadoutPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using_SetBit(void* Obj)
	{
		((FSSLoadoutPreset*)Obj)->Using = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using = { "Using", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSLoadoutPreset), &Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_PresetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Strike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_HighFly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_HeatSkillFlags_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_FinisherId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::NewProp_Using,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSLoadoutPreset",
		sizeof(FSSLoadoutPreset),
		alignof(FSSLoadoutPreset),
		Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLoadoutPreset"), sizeof(FSSLoadoutPreset), Get_Z_Construct_UScriptStruct_FSSLoadoutPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLoadoutPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutPreset_Hash() { return 1009151778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
