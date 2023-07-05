// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELPinchMoves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPinchMoves() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELPinchMoves();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELPinchMoves>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELPinchMoves cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELPinchMoves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELPinchMoves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELPinchMoves, Z_Construct_UPackage__Script_Creation(), TEXT("ELPinchMoves"), sizeof(FELPinchMoves), Get_Z_Construct_UScriptStruct_FELPinchMoves_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELPinchMoves>()
{
	return FELPinchMoves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELPinchMoves(FELPinchMoves::StaticStruct, TEXT("/Script/Creation"), TEXT("ELPinchMoves"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELPinchMoves
{
	FScriptStruct_Creation_StaticRegisterNativesFELPinchMoves()
	{
		UScriptStruct::DeferCppStructOps<FELPinchMoves>(FName(TEXT("ELPinchMoves")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELPinchMoves;
	struct Z_Construct_UScriptStruct_FELPinchMoves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Down;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPinchMoves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELPinchMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELPinchMoves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELPinchMoves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPinchMoves_Statics::NewProp_Down_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPinchMoves" },
		{ "ModuleRelativePath", "Public/ELPinchMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELPinchMoves_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELPinchMoves, Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FELPinchMoves_Statics::NewProp_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPinchMoves_Statics::NewProp_Down_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELPinchMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELPinchMoves_Statics::NewProp_Down,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELPinchMoves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELPinchMoves",
		sizeof(FELPinchMoves),
		alignof(FELPinchMoves),
		Z_Construct_UScriptStruct_FELPinchMoves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPinchMoves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELPinchMoves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPinchMoves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELPinchMoves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELPinchMoves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELPinchMoves"), sizeof(FELPinchMoves), Get_Z_Construct_UScriptStruct_FELPinchMoves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELPinchMoves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELPinchMoves_Hash() { return 3969035516U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
