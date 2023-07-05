// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesTwoPlatoons.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesTwoPlatoons() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesTwoPlatoons();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesTwoPlatoons>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesTwoPlatoons cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesTwoPlatoons::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesTwoPlatoons, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesTwoPlatoons"), sizeof(FELMovesTwoPlatoons), Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesTwoPlatoons>()
{
	return FELMovesTwoPlatoons::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesTwoPlatoons(FELMovesTwoPlatoons::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesTwoPlatoons"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesTwoPlatoons
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesTwoPlatoons()
	{
		UScriptStruct::DeferCppStructOps<FELMovesTwoPlatoons>(FName(TEXT("ELMovesTwoPlatoons")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesTwoPlatoons;
	struct Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollarAndElbow_Or_WaistLock_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollarAndElbow_Or_WaistLock_Front;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollarAndElbow_Back_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollarAndElbow_Back;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaistLock_Back_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaistLock_Back;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_CornerChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Front_CornerChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_CornerChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Back_CornerChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RopeChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_Chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring_To_Apron_Chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_To_Ring_Front_Chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Apron_To_Ring_Front_Chain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_To_Ring_Back_Chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Apron_To_Ring_Back_Chain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesTwoPlatoons>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Or_WaistLock_Front_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Or_WaistLock_Front = { "CollarAndElbow_Or_WaistLock_Front", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, CollarAndElbow_Or_WaistLock_Front), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Or_WaistLock_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Or_WaistLock_Front_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Back = { "CollarAndElbow_Back", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, CollarAndElbow_Back), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Back_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_WaistLock_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_WaistLock_Back = { "WaistLock_Back", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, WaistLock_Back), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_WaistLock_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_WaistLock_Back_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Front_CornerChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Front_CornerChain = { "Front_CornerChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, Front_CornerChain), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Front_CornerChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Front_CornerChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Back_CornerChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Back_CornerChain = { "Back_CornerChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, Back_CornerChain), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Back_CornerChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Back_CornerChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_RopeChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_RopeChain = { "RopeChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, RopeChain), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_RopeChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_RopeChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Ring_To_Apron_Chain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Ring_To_Apron_Chain = { "Ring_To_Apron_Chain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, Ring_To_Apron_Chain), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Ring_To_Apron_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Ring_To_Apron_Chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Front_Chain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Front_Chain = { "Apron_To_Ring_Front_Chain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, Apron_To_Ring_Front_Chain), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Front_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Front_Chain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Back_Chain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesTwoPlatoons" },
		{ "ModuleRelativePath", "Public/ELMovesTwoPlatoons.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Back_Chain = { "Apron_To_Ring_Back_Chain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesTwoPlatoons, Apron_To_Ring_Back_Chain), Z_Construct_UScriptStruct_FELMovesTwoPlatoonsPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Back_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Back_Chain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Or_WaistLock_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_CollarAndElbow_Back,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_WaistLock_Back,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Front_CornerChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Back_CornerChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_RopeChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Ring_To_Apron_Chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Front_Chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::NewProp_Apron_To_Ring_Back_Chain,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesTwoPlatoons",
		sizeof(FELMovesTwoPlatoons),
		alignof(FELMovesTwoPlatoons),
		Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesTwoPlatoons()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesTwoPlatoons"), sizeof(FELMovesTwoPlatoons), Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesTwoPlatoons_Hash() { return 2872373351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
