// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMovesCutscene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesCutscene() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCutscene();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesCutscene>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesCutscene cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesCutscene::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMovesCutscene_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesCutscene, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMovesCutscene"), sizeof(FELMovesCutscene), Get_Z_Construct_UScriptStruct_FELMovesCutscene_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMovesCutscene>()
{
	return FELMovesCutscene::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesCutscene(FELMovesCutscene::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMovesCutscene"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMovesCutscene
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMovesCutscene()
	{
		UScriptStruct::DeferCppStructOps<FELMovesCutscene>(FName(TEXT("ELMovesCutscene")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMovesCutscene;
	struct Z_Construct_UScriptStruct_FELMovesCutscene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Entrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Victory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Victory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitantronMovie_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TitantronMovie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutscene_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesCutscene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesCutscene>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCutscene" },
		{ "ModuleRelativePath", "Public/ELMovesCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCutscene, Entrance), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Victory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCutscene" },
		{ "ModuleRelativePath", "Public/ELMovesCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Victory = { "Victory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCutscene, Victory), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Victory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Victory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_TitantronMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCutscene" },
		{ "ModuleRelativePath", "Public/ELMovesCutscene.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_TitantronMovie = { "TitantronMovie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCutscene, TitantronMovie), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_TitantronMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_TitantronMovie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesCutscene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_Victory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCutscene_Statics::NewProp_TitantronMovie,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesCutscene_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesCutscene",
		sizeof(FELMovesCutscene),
		alignof(FELMovesCutscene),
		Z_Construct_UScriptStruct_FELMovesCutscene_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutscene_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesCutscene()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesCutscene_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesCutscene"), sizeof(FELMovesCutscene), Get_Z_Construct_UScriptStruct_FELMovesCutscene_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesCutscene_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesCutscene_Hash() { return 3629997716U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
