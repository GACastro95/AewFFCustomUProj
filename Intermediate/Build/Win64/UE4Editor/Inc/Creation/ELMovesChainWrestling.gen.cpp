// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesChainWrestling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesChainWrestling() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestling();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestlingStart();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesChainWrestling>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesChainWrestling cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesChainWrestling::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestling_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesChainWrestling, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesChainWrestling"), sizeof(FELMovesChainWrestling), Get_Z_Construct_UScriptStruct_FELMovesChainWrestling_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesChainWrestling>()
{
	return FELMovesChainWrestling::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesChainWrestling(FELMovesChainWrestling::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesChainWrestling"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestling
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestling()
	{
		UScriptStruct::DeferCppStructOps<FELMovesChainWrestling>(FName(TEXT("ELMovesChainWrestling")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestling;
	struct Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Front;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmWringer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmWringer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideHeadLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SideHeadLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HammerLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HammerLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownSideHeadLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DownSideHeadLock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesChainWrestling>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Front_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestling" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestling, Front), Z_Construct_UScriptStruct_FELMovesChainWrestlingStart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Front_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestling" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestling, Back), Z_Construct_UScriptStruct_FELMovesChainWrestlingStart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Back_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_ArmWringer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestling" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_ArmWringer = { "ArmWringer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestling, ArmWringer), Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_ArmWringer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_ArmWringer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_SideHeadLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestling" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_SideHeadLock = { "SideHeadLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestling, SideHeadLock), Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_SideHeadLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_SideHeadLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_HammerLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestling" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_HammerLock = { "HammerLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestling, HammerLock), Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_HammerLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_HammerLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_DownSideHeadLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestling" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_DownSideHeadLock = { "DownSideHeadLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestling, DownSideHeadLock), Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_DownSideHeadLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_DownSideHeadLock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_Back,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_ArmWringer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_SideHeadLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_HammerLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::NewProp_DownSideHeadLock,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesChainWrestling",
		sizeof(FELMovesChainWrestling),
		alignof(FELMovesChainWrestling),
		Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestling()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestling_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesChainWrestling"), sizeof(FELMovesChainWrestling), Get_Z_Construct_UScriptStruct_FELMovesChainWrestling_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesChainWrestling_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestling_Hash() { return 2652669366U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
