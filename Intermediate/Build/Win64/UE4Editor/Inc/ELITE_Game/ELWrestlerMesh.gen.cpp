// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerMesh() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMesh();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMeshParam();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerMesh>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerMesh cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerMesh, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerMesh"), sizeof(FELWrestlerMesh), Get_Z_Construct_UScriptStruct_FELWrestlerMesh_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerMesh>()
{
	return FELWrestlerMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerMesh(FELWrestlerMesh::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerMesh"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerMesh
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerMesh()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerMesh>(FName(TEXT("ELWrestlerMesh")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerMesh;
	struct Z_Construct_UScriptStruct_FELWrestlerMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMeshs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultMeshs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntranceMeshs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceMeshs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntranceMeshs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerMesh>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs_Inner = { "DefaultMeshs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELWrestlerMeshParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerMesh" },
		{ "ModuleRelativePath", "Public/ELWrestlerMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs = { "DefaultMeshs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerMesh, DefaultMeshs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs_Inner = { "EntranceMeshs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELWrestlerMeshParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerMesh" },
		{ "ModuleRelativePath", "Public/ELWrestlerMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs = { "EntranceMeshs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerMesh, EntranceMeshs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_DefaultMeshs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::NewProp_EntranceMeshs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerMesh",
		sizeof(FELWrestlerMesh),
		alignof(FELWrestlerMesh),
		Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerMesh"), sizeof(FELWrestlerMesh), Get_Z_Construct_UScriptStruct_FELWrestlerMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerMesh_Hash() { return 2105256348U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
