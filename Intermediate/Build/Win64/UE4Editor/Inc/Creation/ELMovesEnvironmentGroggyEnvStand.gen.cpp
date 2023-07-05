// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesEnvironmentGroggyEnvStand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesEnvironmentGroggyEnvStand() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesEnvironmentGroggyEnvStand>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesEnvironmentGroggyEnvStand cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesEnvironmentGroggyEnvStand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesEnvironmentGroggyEnvStand"), sizeof(FELMovesEnvironmentGroggyEnvStand), Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesEnvironmentGroggyEnvStand>()
{
	return FELMovesEnvironmentGroggyEnvStand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand(FELMovesEnvironmentGroggyEnvStand::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesEnvironmentGroggyEnvStand"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggyEnvStand
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggyEnvStand()
	{
		UScriptStruct::DeferCppStructOps<FELMovesEnvironmentGroggyEnvStand>(FName(TEXT("ELMovesEnvironmentGroggyEnvStand")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggyEnvStand;
	struct Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggyEnvStand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesEnvironmentGroggyEnvStand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggyEnvStand" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggyEnvStand.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Punch = { "Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggyEnvStand, Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggyEnvStand" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggyEnvStand.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggyEnvStand, Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggyEnvStand" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggyEnvStand.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggyEnvStand, Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::NewProp_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesEnvironmentGroggyEnvStand",
		sizeof(FELMovesEnvironmentGroggyEnvStand),
		alignof(FELMovesEnvironmentGroggyEnvStand),
		Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesEnvironmentGroggyEnvStand"), sizeof(FELMovesEnvironmentGroggyEnvStand), Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggyEnvStand_Hash() { return 4032809769U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
