// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditWrestlerParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPersonParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FNamedPresetParam();
// End Cross Module References
class UScriptStruct* FEditWrestlerParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditWrestlerParam, Z_Construct_UPackage__Script_Creation(), TEXT("EditWrestlerParam"), sizeof(FEditWrestlerParam), Get_Z_Construct_UScriptStruct_FEditWrestlerParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditWrestlerParam>()
{
	return FEditWrestlerParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditWrestlerParam(FEditWrestlerParam::StaticStruct, TEXT("/Script/Creation"), TEXT("EditWrestlerParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditWrestlerParam
{
	FScriptStruct_Creation_StaticRegisterNativesFEditWrestlerParam()
	{
		UScriptStruct::DeferCppStructOps<FEditWrestlerParam>(FName(TEXT("EditWrestlerParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditWrestlerParam;
	struct Z_Construct_UScriptStruct_FEditWrestlerParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Personality_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Personality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skills;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditWrestlerParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_EditPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerParam" },
		{ "ModuleRelativePath", "Public/EditWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_EditPerson = { "EditPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerParam, EditPerson), Z_Construct_UScriptStruct_FEditPersonParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_EditPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_EditPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Personality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerParam" },
		{ "ModuleRelativePath", "Public/EditWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Personality = { "Personality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerParam, Personality), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Personality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Personality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Skills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerParam" },
		{ "ModuleRelativePath", "Public/EditWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerParam, Skills), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Skills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Skills_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedPresetParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerParam" },
		{ "ModuleRelativePath", "Public/EditWrestlerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditWrestlerParam, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_EditPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Personality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Skills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::NewProp_Presets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditWrestlerParam",
		sizeof(FEditWrestlerParam),
		alignof(FEditWrestlerParam),
		Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditWrestlerParam"), sizeof(FEditWrestlerParam), Get_Z_Construct_UScriptStruct_FEditWrestlerParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditWrestlerParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditWrestlerParam_Hash() { return 2667209859U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
