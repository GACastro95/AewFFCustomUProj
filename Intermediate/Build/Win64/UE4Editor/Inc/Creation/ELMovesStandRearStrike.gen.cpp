// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesStandRearStrike.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesStandRearStrike() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandRearStrike();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandRearStrikePart();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesStandRearStrike>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesStandRearStrike cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesStandRearStrike::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesStandRearStrike_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesStandRearStrike, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesStandRearStrike"), sizeof(FELMovesStandRearStrike), Get_Z_Construct_UScriptStruct_FELMovesStandRearStrike_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesStandRearStrike>()
{
	return FELMovesStandRearStrike::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesStandRearStrike(FELMovesStandRearStrike::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesStandRearStrike"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesStandRearStrike
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesStandRearStrike()
	{
		UScriptStruct::DeferCppStructOps<FELMovesStandRearStrike>(FName(TEXT("ELMovesStandRearStrike")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesStandRearStrike;
	struct Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Kick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrike.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesStandRearStrike>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrike" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Punch = { "Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrike, Punch), Z_Construct_UScriptStruct_FELMovesStandRearStrikePart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrike" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrike, Kick), Z_Construct_UScriptStruct_FELMovesStandRearStrikePart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Kick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::NewProp_Kick,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesStandRearStrike",
		sizeof(FELMovesStandRearStrike),
		alignof(FELMovesStandRearStrike),
		Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandRearStrike()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesStandRearStrike_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesStandRearStrike"), sizeof(FELMovesStandRearStrike), Get_Z_Construct_UScriptStruct_FELMovesStandRearStrike_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesStandRearStrike_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesStandRearStrike_Hash() { return 3261625543U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
