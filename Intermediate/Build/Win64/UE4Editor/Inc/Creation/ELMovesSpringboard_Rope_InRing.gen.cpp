// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesSpringboard_Rope_InRing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesSpringboard_Rope_InRing() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesSpringboard_Rope_InRing>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesSpringboard_Rope_InRing cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesSpringboard_Rope_InRing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesSpringboard_Rope_InRing"), sizeof(FELMovesSpringboard_Rope_InRing), Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesSpringboard_Rope_InRing>()
{
	return FELMovesSpringboard_Rope_InRing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesSpringboard_Rope_InRing(FELMovesSpringboard_Rope_InRing::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesSpringboard_Rope_InRing"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard_Rope_InRing
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard_Rope_InRing()
	{
		UScriptStruct::DeferCppStructOps<FELMovesSpringboard_Rope_InRing>(FName(TEXT("ELMovesSpringboard_Rope_InRing")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesSpringboard_Rope_InRing;
	struct Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standing_Front_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Standing_Front_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standing_Front_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Standing_Front_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Down_FaceUp_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Down_FaceUp_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope_InRing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesSpringboard_Rope_InRing>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard_Rope_InRing" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope_InRing.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Punch = { "Standing_Front_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard_Rope_InRing, Standing_Front_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard_Rope_InRing" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope_InRing.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Grapple = { "Standing_Front_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard_Rope_InRing, Standing_Front_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard_Rope_InRing" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope_InRing.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Punch = { "Down_FaceUp_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard_Rope_InRing, Down_FaceUp_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesSpringboard_Rope_InRing" },
		{ "ModuleRelativePath", "Public/ELMovesSpringboard_Rope_InRing.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Grapple = { "Down_FaceUp_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesSpringboard_Rope_InRing, Down_FaceUp_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Standing_Front_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::NewProp_Down_FaceUp_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesSpringboard_Rope_InRing",
		sizeof(FELMovesSpringboard_Rope_InRing),
		alignof(FELMovesSpringboard_Rope_InRing),
		Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesSpringboard_Rope_InRing"), sizeof(FELMovesSpringboard_Rope_InRing), Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesSpringboard_Rope_InRing_Hash() { return 2775493125U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
