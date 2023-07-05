// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/HomeTownID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomeTownID() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTownID();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemID();
// End Cross Module References

static_assert(std::is_polymorphic<FHomeTownID>() == std::is_polymorphic<FPickableItemID>(), "USTRUCT FHomeTownID cannot be polymorphic unless super FPickableItemID is polymorphic");

class UScriptStruct* FHomeTownID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FHomeTownID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHomeTownID, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("HomeTownID"), sizeof(FHomeTownID), Get_Z_Construct_UScriptStruct_FHomeTownID_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FHomeTownID>()
{
	return FHomeTownID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHomeTownID(FHomeTownID::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("HomeTownID"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFHomeTownID
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFHomeTownID()
	{
		UScriptStruct::DeferCppStructOps<FHomeTownID>(FName(TEXT("HomeTownID")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFHomeTownID;
	struct Z_Construct_UScriptStruct_FHomeTownID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHomeTownID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HomeTownID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHomeTownID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHomeTownID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHomeTownID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FPickableItemID,
		&NewStructOps,
		"HomeTownID",
		sizeof(FHomeTownID),
		alignof(FHomeTownID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHomeTownID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHomeTownID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHomeTownID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHomeTownID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HomeTownID"), sizeof(FHomeTownID), Get_Z_Construct_UScriptStruct_FHomeTownID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHomeTownID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHomeTownID_Hash() { return 2493968109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
