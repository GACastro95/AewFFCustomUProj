// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesBarricadeSpringboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesBarricadeSpringboard() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesBarricadeSpringboardPart();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesBarricadeSpringboard>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesBarricadeSpringboard cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesBarricadeSpringboard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesBarricadeSpringboard"), sizeof(FELMovesBarricadeSpringboard), Get_Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesBarricadeSpringboard>()
{
	return FELMovesBarricadeSpringboard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesBarricadeSpringboard(FELMovesBarricadeSpringboard::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesBarricadeSpringboard"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesBarricadeSpringboard
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesBarricadeSpringboard()
	{
		UScriptStruct::DeferCppStructOps<FELMovesBarricadeSpringboard>(FName(TEXT("ELMovesBarricadeSpringboard")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesBarricadeSpringboard;
	struct Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stand_Front;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesBarricadeSpringboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesBarricadeSpringboard>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Stand_Front_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesBarricadeSpringboard" },
		{ "ModuleRelativePath", "Public/ELMovesBarricadeSpringboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Stand_Front = { "Stand_Front", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesBarricadeSpringboard, Stand_Front), Z_Construct_UScriptStruct_FELMovesBarricadeSpringboardPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Stand_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Stand_Front_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Down_FaceUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesBarricadeSpringboard" },
		{ "ModuleRelativePath", "Public/ELMovesBarricadeSpringboard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Down_FaceUp = { "Down_FaceUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesBarricadeSpringboard, Down_FaceUp), Z_Construct_UScriptStruct_FELMovesBarricadeSpringboardPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Down_FaceUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Down_FaceUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Stand_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::NewProp_Down_FaceUp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesBarricadeSpringboard",
		sizeof(FELMovesBarricadeSpringboard),
		alignof(FELMovesBarricadeSpringboard),
		Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesBarricadeSpringboard"), sizeof(FELMovesBarricadeSpringboard), Get_Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard_Hash() { return 552328563U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
