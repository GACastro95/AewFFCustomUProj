// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesRingSideToRing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesRingSideToRing() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRingSideToRing();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesRingSideToRing>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesRingSideToRing cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesRingSideToRing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesRingSideToRing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesRingSideToRing, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesRingSideToRing"), sizeof(FELMovesRingSideToRing), Get_Z_Construct_UScriptStruct_FELMovesRingSideToRing_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesRingSideToRing>()
{
	return FELMovesRingSideToRing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesRingSideToRing(FELMovesRingSideToRing::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesRingSideToRing"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesRingSideToRing
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesRingSideToRing()
	{
		UScriptStruct::DeferCppStructOps<FELMovesRingSideToRing>(FName(TEXT("ELMovesRingSideToRing")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesRingSideToRing;
	struct Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesRingSideToRing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesRingSideToRing>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Front_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRingSideToRing" },
		{ "ModuleRelativePath", "Public/ELMovesRingSideToRing.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRingSideToRing, Front), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Front_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Rear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRingSideToRing" },
		{ "ModuleRelativePath", "Public/ELMovesRingSideToRing.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Rear = { "Rear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRingSideToRing, Rear), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Rear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Rear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::NewProp_Rear,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesRingSideToRing",
		sizeof(FELMovesRingSideToRing),
		alignof(FELMovesRingSideToRing),
		Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesRingSideToRing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesRingSideToRing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesRingSideToRing"), sizeof(FELMovesRingSideToRing), Get_Z_Construct_UScriptStruct_FELMovesRingSideToRing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesRingSideToRing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesRingSideToRing_Hash() { return 1913200468U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
