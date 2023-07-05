// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesApronToApron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesApronToApron() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronToApron();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronToApronPart();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesApronToApron>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesApronToApron cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesApronToApron::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesApronToApron_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesApronToApron, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesApronToApron"), sizeof(FELMovesApronToApron), Get_Z_Construct_UScriptStruct_FELMovesApronToApron_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesApronToApron>()
{
	return FELMovesApronToApron::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesApronToApron(FELMovesApronToApron::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesApronToApron"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesApronToApron
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesApronToApron()
	{
		UScriptStruct::DeferCppStructOps<FELMovesApronToApron>(FName(TEXT("ELMovesApronToApron")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesApronToApron;
	struct Z_Construct_UScriptStruct_FELMovesApronToApron_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Apron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRope_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiddleRope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesApronToApron.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesApronToApron>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_Apron_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronToApron" },
		{ "ModuleRelativePath", "Public/ELMovesApronToApron.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_Apron = { "Apron", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronToApron, Apron), Z_Construct_UScriptStruct_FELMovesApronToApronPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_Apron_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_Apron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_MiddleRope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronToApron" },
		{ "ModuleRelativePath", "Public/ELMovesApronToApron.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_MiddleRope = { "MiddleRope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronToApron, MiddleRope), Z_Construct_UScriptStruct_FELMovesApronToApronPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_MiddleRope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_MiddleRope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_Apron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::NewProp_MiddleRope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesApronToApron",
		sizeof(FELMovesApronToApron),
		alignof(FELMovesApronToApron),
		Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronToApron()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesApronToApron_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesApronToApron"), sizeof(FELMovesApronToApron), Get_Z_Construct_UScriptStruct_FELMovesApronToApron_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesApronToApron_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesApronToApron_Hash() { return 2978039189U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
