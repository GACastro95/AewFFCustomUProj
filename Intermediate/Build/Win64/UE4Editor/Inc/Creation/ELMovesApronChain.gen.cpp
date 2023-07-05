// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesApronChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesApronChain() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronChain();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesApronChain>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesApronChain cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesApronChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesApronChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesApronChain, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesApronChain"), sizeof(FELMovesApronChain), Get_Z_Construct_UScriptStruct_FELMovesApronChain_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesApronChain>()
{
	return FELMovesApronChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesApronChain(FELMovesApronChain::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesApronChain"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesApronChain
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesApronChain()
	{
		UScriptStruct::DeferCppStructOps<FELMovesApronChain>(FName(TEXT("ELMovesApronChain")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesApronChain;
	struct Z_Construct_UScriptStruct_FELMovesApronChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_StickRing_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_StickRing_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_StickOutSide_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_StickOutSide_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_StickRing_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_StickRing_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_StickOutSide_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_StickOutSide_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_StickRing_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_StickRing_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_StickOutSide_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_StickOutSide_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Apron_To_Ring_StickRing_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Apron_To_Ring_StickRing_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Apron_To_Ring_StickOutSide_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Apron_To_Ring_StickOutSide_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Apron_To_Ring_StickRing_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Apron_To_Ring_StickRing_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Apron_To_Ring_StickOutSide_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Apron_To_Ring_StickOutSide_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Apron_To_Ring_StickRing_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Apron_To_Ring_StickRing_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Apron_To_Ring_StickOutSide_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Apron_To_Ring_StickOutSide_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Apron_To_Ring_StickRing_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Apron_To_Ring_StickRing_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Apron_To_Ring_StickOutSide_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Apron_To_Ring_StickOutSide_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Apron_To_Ring_StickRing_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Apron_To_Ring_StickRing_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Apron_To_Ring_StickOutSide_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Apron_To_Ring_StickOutSide_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Apron_To_Ring_StickRing_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Apron_To_Ring_StickRing_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Apron_To_Ring_StickOutSide_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Apron_To_Ring_StickOutSide_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesApronChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Punch = { "Ring_To_Apron_StickRing_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Ring_To_Apron_StickRing_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Punch = { "Ring_To_Apron_StickOutSide_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Ring_To_Apron_StickOutSide_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Kick = { "Ring_To_Apron_StickRing_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Ring_To_Apron_StickRing_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Kick = { "Ring_To_Apron_StickOutSide_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Ring_To_Apron_StickOutSide_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Grapple = { "Ring_To_Apron_StickRing_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Ring_To_Apron_StickRing_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Grapple = { "Ring_To_Apron_StickOutSide_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Ring_To_Apron_StickOutSide_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Punch = { "Front_Apron_To_Ring_StickRing_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Front_Apron_To_Ring_StickRing_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Punch = { "Front_Apron_To_Ring_StickOutSide_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Front_Apron_To_Ring_StickOutSide_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Kick = { "Front_Apron_To_Ring_StickRing_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Front_Apron_To_Ring_StickRing_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Kick = { "Front_Apron_To_Ring_StickOutSide_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Front_Apron_To_Ring_StickOutSide_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Grapple = { "Front_Apron_To_Ring_StickRing_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Front_Apron_To_Ring_StickRing_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Grapple = { "Front_Apron_To_Ring_StickOutSide_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Front_Apron_To_Ring_StickOutSide_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Punch = { "Back_Apron_To_Ring_StickRing_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Back_Apron_To_Ring_StickRing_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Punch = { "Back_Apron_To_Ring_StickOutSide_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Back_Apron_To_Ring_StickOutSide_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Kick = { "Back_Apron_To_Ring_StickRing_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Back_Apron_To_Ring_StickRing_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Kick = { "Back_Apron_To_Ring_StickOutSide_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Back_Apron_To_Ring_StickOutSide_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Grapple = { "Back_Apron_To_Ring_StickRing_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Back_Apron_To_Ring_StickRing_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronChain" },
		{ "ModuleRelativePath", "Public/ELMovesApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Grapple = { "Back_Apron_To_Ring_StickOutSide_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronChain, Back_Apron_To_Ring_StickOutSide_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesApronChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickRing_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Ring_To_Apron_StickOutSide_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickRing_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Front_Apron_To_Ring_StickOutSide_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickRing_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronChain_Statics::NewProp_Back_Apron_To_Ring_StickOutSide_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesApronChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesApronChain",
		sizeof(FELMovesApronChain),
		alignof(FELMovesApronChain),
		Z_Construct_UScriptStruct_FELMovesApronChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesApronChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesApronChain"), sizeof(FELMovesApronChain), Get_Z_Construct_UScriptStruct_FELMovesApronChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesApronChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesApronChain_Hash() { return 732591396U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
