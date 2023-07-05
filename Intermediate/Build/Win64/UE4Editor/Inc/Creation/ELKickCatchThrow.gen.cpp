// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELKickCatchThrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELKickCatchThrow() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELKickCatchThrow();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELKickCatchThrow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELKickCatchThrow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELKickCatchThrow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELKickCatchThrow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELKickCatchThrow, Z_Construct_UPackage__Script_Creation(), TEXT("ELKickCatchThrow"), sizeof(FELKickCatchThrow), Get_Z_Construct_UScriptStruct_FELKickCatchThrow_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELKickCatchThrow>()
{
	return FELKickCatchThrow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELKickCatchThrow(FELKickCatchThrow::StaticStruct, TEXT("/Script/Creation"), TEXT("ELKickCatchThrow"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELKickCatchThrow
{
	FScriptStruct_Creation_StaticRegisterNativesFELKickCatchThrow()
	{
		UScriptStruct::DeferCppStructOps<FELKickCatchThrow>(FName(TEXT("ELKickCatchThrow")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELKickCatchThrow;
	struct Z_Construct_UScriptStruct_FELKickCatchThrow_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reversal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Reversal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELKickCatchThrow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELKickCatchThrow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKickCatchThrow" },
		{ "ModuleRelativePath", "Public/ELKickCatchThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Punch = { "Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELKickCatchThrow, Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKickCatchThrow" },
		{ "ModuleRelativePath", "Public/ELKickCatchThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELKickCatchThrow, Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKickCatchThrow" },
		{ "ModuleRelativePath", "Public/ELKickCatchThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELKickCatchThrow, Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Reversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKickCatchThrow" },
		{ "ModuleRelativePath", "Public/ELKickCatchThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Reversal = { "Reversal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELKickCatchThrow, Reversal), METADATA_PARAMS(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Reversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Reversal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::NewProp_Reversal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELKickCatchThrow",
		sizeof(FELKickCatchThrow),
		alignof(FELKickCatchThrow),
		Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELKickCatchThrow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELKickCatchThrow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELKickCatchThrow"), sizeof(FELKickCatchThrow), Get_Z_Construct_UScriptStruct_FELKickCatchThrow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELKickCatchThrow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELKickCatchThrow_Hash() { return 1107628749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
