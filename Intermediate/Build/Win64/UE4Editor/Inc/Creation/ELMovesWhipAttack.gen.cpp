// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesWhipAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesWhipAttack() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesWhipAttack();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesWhipAttackPart();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesWhipAttack>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesWhipAttack cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesWhipAttack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesWhipAttack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesWhipAttack, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesWhipAttack"), sizeof(FELMovesWhipAttack), Get_Z_Construct_UScriptStruct_FELMovesWhipAttack_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesWhipAttack>()
{
	return FELMovesWhipAttack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesWhipAttack(FELMovesWhipAttack::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesWhipAttack"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesWhipAttack
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesWhipAttack()
	{
		UScriptStruct::DeferCppStructOps<FELMovesWhipAttack>(FName(TEXT("ELMovesWhipAttack")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesWhipAttack;
	struct Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Front_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Back_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_HandStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Front_HandStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_HandStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Back_HandStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_StandLeftHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Front_StandLeftHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_StandRightHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Front_StandRightHead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesWhipAttack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWhipAttack" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_Stand = { "Front_Stand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWhipAttack, Front_Stand), Z_Construct_UScriptStruct_FELMovesWhipAttackPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWhipAttack" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_Stand = { "Back_Stand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWhipAttack, Back_Stand), Z_Construct_UScriptStruct_FELMovesWhipAttackPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_HandStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWhipAttack" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_HandStand = { "Front_HandStand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWhipAttack, Front_HandStand), Z_Construct_UScriptStruct_FELMovesWhipAttackPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_HandStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_HandStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_HandStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWhipAttack" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_HandStand = { "Back_HandStand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWhipAttack, Back_HandStand), Z_Construct_UScriptStruct_FELMovesWhipAttackPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_HandStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_HandStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandLeftHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWhipAttack" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandLeftHead = { "Front_StandLeftHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWhipAttack, Front_StandLeftHead), Z_Construct_UScriptStruct_FELMovesWhipAttackPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandLeftHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandLeftHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandRightHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWhipAttack" },
		{ "ModuleRelativePath", "Public/ELMovesWhipAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandRightHead = { "Front_StandRightHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWhipAttack, Front_StandRightHead), Z_Construct_UScriptStruct_FELMovesWhipAttackPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandRightHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandRightHead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_HandStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Back_HandStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandLeftHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::NewProp_Front_StandRightHead,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesWhipAttack",
		sizeof(FELMovesWhipAttack),
		alignof(FELMovesWhipAttack),
		Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesWhipAttack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesWhipAttack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesWhipAttack"), sizeof(FELMovesWhipAttack), Get_Z_Construct_UScriptStruct_FELMovesWhipAttack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesWhipAttack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesWhipAttack_Hash() { return 291141564U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
