// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerSkill_Passive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerSkill_Passive() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Passive();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerSkill_Passive>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerSkill_Passive cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerSkill_Passive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerSkill_Passive, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerSkill_Passive"), sizeof(FELWrestlerSkill_Passive), Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerSkill_Passive>()
{
	return FELWrestlerSkill_Passive::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerSkill_Passive(FELWrestlerSkill_Passive::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerSkill_Passive"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Passive
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Passive()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerSkill_Passive>(FName(TEXT("ELWrestlerSkill_Passive")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Passive;
	struct Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PassiveEquip_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Passive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerSkill_Passive>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip_Inner = { "PassiveEquip", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Passive" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Passive.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip = { "PassiveEquip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Passive, PassiveEquip), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::NewProp_PassiveEquip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerSkill_Passive",
		sizeof(FELWrestlerSkill_Passive),
		alignof(FELWrestlerSkill_Passive),
		Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Passive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerSkill_Passive"), sizeof(FELWrestlerSkill_Passive), Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Passive_Hash() { return 939976419U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
