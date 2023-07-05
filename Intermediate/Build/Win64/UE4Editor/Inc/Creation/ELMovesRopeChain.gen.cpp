// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesRopeChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesRopeChain() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeChain();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesRopeChain>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesRopeChain cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesRopeChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesRopeChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesRopeChain, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesRopeChain"), sizeof(FELMovesRopeChain), Get_Z_Construct_UScriptStruct_FELMovesRopeChain_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesRopeChain>()
{
	return FELMovesRopeChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesRopeChain(FELMovesRopeChain::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesRopeChain"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesRopeChain
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesRopeChain()
	{
		UScriptStruct::DeferCppStructOps<FELMovesRopeChain>(FName(TEXT("ELMovesRopeChain")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesRopeChain;
	struct Z_Construct_UScriptStruct_FELMovesRopeChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_Stick_InRing_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeChain_Stick_InRing_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_Stick_OutSide_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeChain_Stick_OutSide_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_Stick_InRing_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeChain_Stick_InRing_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_Stick_OutSide_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeChain_Stick_OutSide_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_Stick_InRing_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeChain_Stick_InRing_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_Stick_OutSide_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeChain_Stick_OutSide_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesRopeChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeChain" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Punch = { "RopeChain_Stick_InRing_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeChain, RopeChain_Stick_InRing_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeChain" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Punch = { "RopeChain_Stick_OutSide_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeChain, RopeChain_Stick_OutSide_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeChain" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Kick = { "RopeChain_Stick_InRing_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeChain, RopeChain_Stick_InRing_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeChain" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Kick = { "RopeChain_Stick_OutSide_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeChain, RopeChain_Stick_OutSide_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeChain" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Grapple = { "RopeChain_Stick_InRing_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeChain, RopeChain_Stick_InRing_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeChain" },
		{ "ModuleRelativePath", "Public/ELMovesRopeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Grapple = { "RopeChain_Stick_OutSide_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeChain, RopeChain_Stick_OutSide_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_InRing_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::NewProp_RopeChain_Stick_OutSide_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesRopeChain",
		sizeof(FELMovesRopeChain),
		alignof(FELMovesRopeChain),
		Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesRopeChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesRopeChain"), sizeof(FELMovesRopeChain), Get_Z_Construct_UScriptStruct_FELMovesRopeChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesRopeChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesRopeChain_Hash() { return 3229238958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
