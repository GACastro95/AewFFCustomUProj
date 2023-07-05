// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesSpringboard_Rope.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesSpringboard_Rope() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_OutRing();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesSpringboard_Rope>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesSpringboard_Rope cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesSpringboard_Rope::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesSpringboard_Rope"), sizeof(FELMovesSpringboard_Rope), Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesSpringboard_Rope>()
{
	return FELMovesSpringboard_Rope::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesSpringboard_Rope(FELMovesSpringboard_Rope::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesSpringboard_Rope"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard_Rope
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard_Rope()
	{
		UScriptStruct::DeferCppStructOps<FELMovesSpringboard_Rope>(FName(TEXT("ELMovesSpringboard_Rope")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard_Rope;
	struct Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opponents_InRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Opponents_InRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opponent_OutRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Opponent_OutRing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesSpringboard_Rope>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponents_InRing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard_Rope" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponents_InRing = { "Opponents_InRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard_Rope, Opponents_InRing), Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponents_InRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponents_InRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponent_OutRing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard_Rope" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponent_OutRing = { "Opponent_OutRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard_Rope, Opponent_OutRing), Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_OutRing, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponent_OutRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponent_OutRing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponents_InRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::NewProp_Opponent_OutRing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesSpringboard_Rope",
		sizeof(FELMovesSpringboard_Rope),
		alignof(FELMovesSpringboard_Rope),
		Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesSpringboard_Rope"), sizeof(FELMovesSpringboard_Rope), Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_Hash() { return 171814195U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
