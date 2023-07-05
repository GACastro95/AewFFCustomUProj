// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesRiseUpAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesRiseUpAttack() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRiseUpAttack();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesRiseUpAttack>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesRiseUpAttack cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesRiseUpAttack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesRiseUpAttack, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesRiseUpAttack"), sizeof(FELMovesRiseUpAttack), Get_Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesRiseUpAttack>()
{
	return FELMovesRiseUpAttack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesRiseUpAttack(FELMovesRiseUpAttack::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesRiseUpAttack"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesRiseUpAttack
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesRiseUpAttack()
	{
		UScriptStruct::DeferCppStructOps<FELMovesRiseUpAttack>(FName(TEXT("ELMovesRiseUpAttack")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesRiseUpAttack;
	struct Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesRiseUpAttack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesRiseUpAttack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRiseUpAttack" },
		{ "ModuleRelativePath", "Public/ELMovesRiseUpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Punch = { "Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRiseUpAttack, Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRiseUpAttack" },
		{ "ModuleRelativePath", "Public/ELMovesRiseUpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRiseUpAttack, Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRiseUpAttack" },
		{ "ModuleRelativePath", "Public/ELMovesRiseUpAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRiseUpAttack, Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::NewProp_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesRiseUpAttack",
		sizeof(FELMovesRiseUpAttack),
		alignof(FELMovesRiseUpAttack),
		Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesRiseUpAttack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesRiseUpAttack"), sizeof(FELMovesRiseUpAttack), Get_Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesRiseUpAttack_Hash() { return 3385286079U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
