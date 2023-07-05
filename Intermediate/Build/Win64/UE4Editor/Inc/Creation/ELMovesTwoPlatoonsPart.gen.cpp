// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesTwoPlatoonsPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesTwoPlatoonsPart() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesTwoPlatoonsPart>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesTwoPlatoonsPart cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesTwoPlatoonsPart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesTwoPlatoonsPart"), sizeof(FELMovesTwoPlatoonsPart), Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesTwoPlatoonsPart>()
{
	return FELMovesTwoPlatoonsPart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesTwoPlatoonsPart(FELMovesTwoPlatoonsPart::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesTwoPlatoonsPart"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesTwoPlatoonsPart
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesTwoPlatoonsPart()
	{
		UScriptStruct::DeferCppStructOps<FELMovesTwoPlatoonsPart>(FName(TEXT("ELMovesTwoPlatoonsPart")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesTwoPlatoonsPart;
	struct Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Neutral_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Neutral_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoonsPart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesTwoPlatoonsPart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::NewProp_Lever_Neutral_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoonsPart" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoonsPart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::NewProp_Lever_Neutral_Grapple = { "Lever_Neutral_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoonsPart, Lever_Neutral_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::NewProp_Lever_Neutral_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::NewProp_Lever_Neutral_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::NewProp_Lever_Neutral_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesTwoPlatoonsPart",
		sizeof(FELMovesTwoPlatoonsPart),
		alignof(FELMovesTwoPlatoonsPart),
		Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesTwoPlatoonsPart"), sizeof(FELMovesTwoPlatoonsPart), Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart_Hash() { return 160554255U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
