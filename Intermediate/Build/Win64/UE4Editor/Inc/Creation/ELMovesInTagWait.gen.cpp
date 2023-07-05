// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesInTagWait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesInTagWait() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesInTagWait();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesInTagWait>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesInTagWait cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesInTagWait::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesInTagWait_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesInTagWait, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesInTagWait"), sizeof(FELMovesInTagWait), Get_Z_Construct_UScriptStruct_FELMovesInTagWait_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesInTagWait>()
{
	return FELMovesInTagWait::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesInTagWait(FELMovesInTagWait::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesInTagWait"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesInTagWait
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesInTagWait()
	{
		UScriptStruct::DeferCppStructOps<FELMovesInTagWait>(FName(TEXT("ELMovesInTagWait")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesInTagWait;
	struct Z_Construct_UScriptStruct_FELMovesInTagWait_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesInTagWait>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesInTagWait" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Punch = { "Front_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesInTagWait, Front_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesInTagWait" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Kick = { "Front_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesInTagWait, Front_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesInTagWait" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Grapple = { "Front_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesInTagWait, Front_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesInTagWait" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Punch = { "Back_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesInTagWait, Back_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesInTagWait" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Kick = { "Back_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesInTagWait, Back_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesInTagWait" },
		{ "ModuleRelativePath", "Public/ELMovesInTagWait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Grapple = { "Back_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesInTagWait, Back_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Front_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::NewProp_Back_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesInTagWait",
		sizeof(FELMovesInTagWait),
		alignof(FELMovesInTagWait),
		Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesInTagWait()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesInTagWait_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesInTagWait"), sizeof(FELMovesInTagWait), Get_Z_Construct_UScriptStruct_FELMovesInTagWait_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesInTagWait_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesInTagWait_Hash() { return 648170141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
