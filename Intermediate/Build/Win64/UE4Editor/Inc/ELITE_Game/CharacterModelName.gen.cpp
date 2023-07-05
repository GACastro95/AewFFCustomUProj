// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CharacterModelName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterModelName() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterModelName();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowName();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacterModelName>() == std::is_polymorphic<FTableRowName>(), "USTRUCT FCharacterModelName cannot be polymorphic unless super FTableRowName is polymorphic");

class UScriptStruct* FCharacterModelName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FCharacterModelName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterModelName, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("CharacterModelName"), sizeof(FCharacterModelName), Get_Z_Construct_UScriptStruct_FCharacterModelName_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FCharacterModelName>()
{
	return FCharacterModelName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterModelName(FCharacterModelName::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("CharacterModelName"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFCharacterModelName
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFCharacterModelName()
	{
		UScriptStruct::DeferCppStructOps<FCharacterModelName>(FName(TEXT("CharacterModelName")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFCharacterModelName;
	struct Z_Construct_UScriptStruct_FCharacterModelName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterModelName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterModelName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterModelName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterModelName>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterModelName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowName,
		&NewStructOps,
		"CharacterModelName",
		sizeof(FCharacterModelName),
		alignof(FCharacterModelName),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterModelName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterModelName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterModelName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterModelName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterModelName"), sizeof(FCharacterModelName), Get_Z_Construct_UScriptStruct_FCharacterModelName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterModelName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterModelName_Hash() { return 1578391280U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
