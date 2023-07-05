// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesSpringboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesSpringboard() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Corner();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Apron();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesSpringboard>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesSpringboard cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesSpringboard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesSpringboard, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesSpringboard"), sizeof(FELMovesSpringboard), Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesSpringboard>()
{
	return FELMovesSpringboard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesSpringboard(FELMovesSpringboard::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesSpringboard"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard()
	{
		UScriptStruct::DeferCppStructOps<FELMovesSpringboard>(FName(TEXT("ELMovesSpringboard")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard;
	struct Z_Construct_UScriptStruct_FELMovesSpringboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeSpringboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RopeSpringboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerSpringboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerSpringboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronSpringboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronSpringboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesSpringboard>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_RopeSpringboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_RopeSpringboard = { "RopeSpringboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard, RopeSpringboard), Z_Construct_UScriptStruct_FELMovesSpringboard_Rope, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_RopeSpringboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_RopeSpringboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_CornerSpringboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_CornerSpringboard = { "CornerSpringboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard, CornerSpringboard), Z_Construct_UScriptStruct_FELMovesSpringboard_Corner, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_CornerSpringboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_CornerSpringboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_ApronSpringboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_ApronSpringboard = { "ApronSpringboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard, ApronSpringboard), Z_Construct_UScriptStruct_FELMovesSpringboard_Apron, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_ApronSpringboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_ApronSpringboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_RopeSpringboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_CornerSpringboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::NewProp_ApronSpringboard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesSpringboard",
		sizeof(FELMovesSpringboard),
		alignof(FELMovesSpringboard),
		Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesSpringboard"), sizeof(FELMovesSpringboard), Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesSpringboard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Hash() { return 3019301787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
