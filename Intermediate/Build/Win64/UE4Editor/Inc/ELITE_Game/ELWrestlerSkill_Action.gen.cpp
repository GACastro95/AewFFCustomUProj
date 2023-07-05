// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerSkill_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerSkill_Action() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Action();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerSkill_Action>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerSkill_Action cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerSkill_Action::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerSkill_Action, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerSkill_Action"), sizeof(FELWrestlerSkill_Action), Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerSkill_Action>()
{
	return FELWrestlerSkill_Action::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerSkill_Action(FELWrestlerSkill_Action::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerSkill_Action"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Action
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Action()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerSkill_Action>(FName(TEXT("ELWrestlerSkill_Action")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Action;
	struct Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActionEquip_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerSkill_Action>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip_Inner = { "ActionEquip", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Action" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip = { "ActionEquip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Action, ActionEquip), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::NewProp_ActionEquip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerSkill_Action",
		sizeof(FELWrestlerSkill_Action),
		alignof(FELWrestlerSkill_Action),
		Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Action()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerSkill_Action"), sizeof(FELWrestlerSkill_Action), Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Action_Hash() { return 2657620578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
