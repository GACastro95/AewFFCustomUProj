// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPlayerEquipSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPlayerEquipSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSPlayerEquipSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPlayerEquipSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPlayerEquipSettings"), sizeof(FSSPlayerEquipSettings), Get_Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPlayerEquipSettings>()
{
	return FSSPlayerEquipSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPlayerEquipSettings(FSSPlayerEquipSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPlayerEquipSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerEquipSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerEquipSettings()
	{
		UScriptStruct::DeferCppStructOps<FSSPlayerEquipSettings>(FName(TEXT("SSPlayerEquipSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerEquipSettings;
	struct Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ability_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_Strike_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_Strike_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillFlags_Strike;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_Grapple_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillFlags_Grapple;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_HighFly_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_HighFly_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillFlags_HighFly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillFlags_Weapon_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillFlags_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatSkillFlags_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPlayerEquipSettings>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability_Inner = { "Ability", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerEquipSettings" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerEquipSettings, Ability), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike_Inner = { "HeatSkillFlags_Strike", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerEquipSettings" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike = { "HeatSkillFlags_Strike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerEquipSettings, HeatSkillFlags_Strike), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple_Inner = { "HeatSkillFlags_Grapple", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerEquipSettings" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple = { "HeatSkillFlags_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerEquipSettings, HeatSkillFlags_Grapple), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly_Inner = { "HeatSkillFlags_HighFly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerEquipSettings" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly = { "HeatSkillFlags_HighFly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerEquipSettings, HeatSkillFlags_HighFly), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon_Inner = { "HeatSkillFlags_Weapon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerEquipSettings" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon = { "HeatSkillFlags_Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerEquipSettings, HeatSkillFlags_Weapon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_FinisherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerEquipSettings" },
		{ "ModuleRelativePath", "Public/SSPlayerEquipSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_FinisherId = { "FinisherId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerEquipSettings, FinisherId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_FinisherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_FinisherId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Strike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_HighFly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_HeatSkillFlags_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::NewProp_FinisherId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSPlayerEquipSettings",
		sizeof(FSSPlayerEquipSettings),
		alignof(FSSPlayerEquipSettings),
		Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPlayerEquipSettings"), sizeof(FSSPlayerEquipSettings), Get_Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Hash() { return 2870631660U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
