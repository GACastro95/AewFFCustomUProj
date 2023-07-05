// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerProfile_Skill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerProfile_Skill() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_Skill();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Passive();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Action();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerProfile_Skill>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerProfile_Skill cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerProfile_Skill::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerProfile_Skill"), sizeof(FELWrestlerProfile_Skill), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerProfile_Skill>()
{
	return FELWrestlerProfile_Skill::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerProfile_Skill(FELWrestlerProfile_Skill::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerProfile_Skill"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_Skill
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_Skill()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerProfile_Skill>(FName(TEXT("ELWrestlerProfile_Skill")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_Skill;
	struct Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSkillParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSkillParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSkillPassive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSkillPassive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSkillAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSkillAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_Skill.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerProfile_Skill>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_Skill" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_Skill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillParameter = { "WrestlerSkillParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_Skill, WrestlerSkillParameter), Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillPassive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_Skill" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_Skill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillPassive = { "WrestlerSkillPassive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_Skill, WrestlerSkillPassive), Z_Construct_UScriptStruct_FELWrestlerSkill_Passive, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillPassive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillPassive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_Skill" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_Skill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillAction = { "WrestlerSkillAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfile_Skill, WrestlerSkillAction), Z_Construct_UScriptStruct_FELWrestlerSkill_Action, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillPassive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::NewProp_WrestlerSkillAction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerProfile_Skill",
		sizeof(FELWrestlerProfile_Skill),
		alignof(FELWrestlerProfile_Skill),
		Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_Skill()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerProfile_Skill"), sizeof(FELWrestlerProfile_Skill), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_Skill_Hash() { return 1273754790U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
