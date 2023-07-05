// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/WrestlerSetupParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerSetupParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPersonParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlingSkillParam();
// End Cross Module References
class UScriptStruct* FWrestlerSetupParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FWrestlerSetupParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlerSetupParam, Z_Construct_UPackage__Script_Creation(), TEXT("WrestlerSetupParam"), sizeof(FWrestlerSetupParam), Get_Z_Construct_UScriptStruct_FWrestlerSetupParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FWrestlerSetupParam>()
{
	return FWrestlerSetupParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlerSetupParam(FWrestlerSetupParam::StaticStruct, TEXT("/Script/Creation"), TEXT("WrestlerSetupParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFWrestlerSetupParam
{
	FScriptStruct_Creation_StaticRegisterNativesFWrestlerSetupParam()
	{
		UScriptStruct::DeferCppStructOps<FWrestlerSetupParam>(FName(TEXT("WrestlerSetupParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFWrestlerSetupParam;
	struct Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Person_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Person;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlerSetupParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlerSetupParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Person_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/WrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Person = { "Person", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerSetupParam, Person), Z_Construct_UScriptStruct_FPersonParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Person_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Person_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Preset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/WrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerSetupParam, Preset), Z_Construct_UScriptStruct_FPresetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Skill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/WrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerSetupParam, Skill), Z_Construct_UScriptStruct_FWrestlingSkillParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Skill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Person,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::NewProp_Skill,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"WrestlerSetupParam",
		sizeof(FWrestlerSetupParam),
		alignof(FWrestlerSetupParam),
		Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlerSetupParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlerSetupParam"), sizeof(FWrestlerSetupParam), Get_Z_Construct_UScriptStruct_FWrestlerSetupParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlerSetupParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlerSetupParam_Hash() { return 3091594081U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
