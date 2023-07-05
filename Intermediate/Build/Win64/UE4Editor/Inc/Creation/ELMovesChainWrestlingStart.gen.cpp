// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesChainWrestlingStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesChainWrestlingStart() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestlingStart();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStickDir();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesChainWrestlingStart>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesChainWrestlingStart cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesChainWrestlingStart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesChainWrestlingStart, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesChainWrestlingStart"), sizeof(FELMovesChainWrestlingStart), Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesChainWrestlingStart>()
{
	return FELMovesChainWrestlingStart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesChainWrestlingStart(FELMovesChainWrestlingStart::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesChainWrestlingStart"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestlingStart
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestlingStart()
	{
		UScriptStruct::DeferCppStructOps<FELMovesChainWrestlingStart>(FName(TEXT("ELMovesChainWrestlingStart")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestlingStart;
	struct Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestlingStart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesChainWrestlingStart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestlingStart" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestlingStart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestlingStart, Start), Z_Construct_UScriptStruct_FELMovesStickDir, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::NewProp_Start,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesChainWrestlingStart",
		sizeof(FELMovesChainWrestlingStart),
		alignof(FELMovesChainWrestlingStart),
		Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestlingStart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesChainWrestlingStart"), sizeof(FELMovesChainWrestlingStart), Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingStart_Hash() { return 19224866U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
