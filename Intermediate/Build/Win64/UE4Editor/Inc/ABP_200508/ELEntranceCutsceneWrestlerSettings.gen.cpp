// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneWrestlerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneWrestlerSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneWrestlerSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneWrestlerSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneWrestlerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneWrestlerSettings"), sizeof(FELEntranceCutsceneWrestlerSettings), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneWrestlerSettings>()
{
	return FELEntranceCutsceneWrestlerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneWrestlerSettings(FELEntranceCutsceneWrestlerSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneWrestlerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneWrestlerSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneWrestlerSettings()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneWrestlerSettings>(FName(TEXT("ELEntranceCutsceneWrestlerSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneWrestlerSettings;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRingModelWhenNonDefault_MetaData[];
#endif
		static void NewProp_UseRingModelWhenNonDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRingModelWhenNonDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRingModelWhenTagEntrance_MetaData[];
#endif
		static void NewProp_UseRingModelWhenTagEntrance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRingModelWhenTagEntrance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneWrestlerSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerSettings" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerSettings, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerSettings" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerSettings*)Obj)->UseRingModelWhenNonDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault = { "UseRingModelWhenNonDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerSettings), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerSettings" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerSettings*)Obj)->UseRingModelWhenTagEntrance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance = { "UseRingModelWhenTagEntrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerSettings), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenNonDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::NewProp_UseRingModelWhenTagEntrance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneWrestlerSettings",
		sizeof(FELEntranceCutsceneWrestlerSettings),
		alignof(FELEntranceCutsceneWrestlerSettings),
		Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneWrestlerSettings"), sizeof(FELEntranceCutsceneWrestlerSettings), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerSettings_Hash() { return 2777643124U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
