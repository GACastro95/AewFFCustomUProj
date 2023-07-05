// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesCutsceneCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesCutsceneCPP() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCutsceneCPP();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesCutsceneCPP>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesCutsceneCPP cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesCutsceneCPP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesCutsceneCPP, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesCutsceneCPP"), sizeof(FELMovesCutsceneCPP), Get_Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesCutsceneCPP>()
{
	return FELMovesCutsceneCPP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesCutsceneCPP(FELMovesCutsceneCPP::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesCutsceneCPP"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesCutsceneCPP
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesCutsceneCPP()
	{
		UScriptStruct::DeferCppStructOps<FELMovesCutsceneCPP>(FName(TEXT("ELMovesCutsceneCPP")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesCutsceneCPP;
	struct Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesCutsceneCPP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesCutsceneCPP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCutsceneCPP" },
		{ "ModuleRelativePath", "Public/ELMovesCutsceneCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCutsceneCPP, Entrance), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Victory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCutsceneCPP" },
		{ "ModuleRelativePath", "Public/ELMovesCutsceneCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Victory = { "Victory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCutsceneCPP, Victory), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Victory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Victory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_TitantronMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCutsceneCPP" },
		{ "ModuleRelativePath", "Public/ELMovesCutsceneCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_TitantronMovie = { "TitantronMovie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCutsceneCPP, TitantronMovie), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_TitantronMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_TitantronMovie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_Victory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::NewProp_TitantronMovie,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesCutsceneCPP",
		sizeof(FELMovesCutsceneCPP),
		alignof(FELMovesCutsceneCPP),
		Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesCutsceneCPP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesCutsceneCPP"), sizeof(FELMovesCutsceneCPP), Get_Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesCutsceneCPP_Hash() { return 1183280540U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
