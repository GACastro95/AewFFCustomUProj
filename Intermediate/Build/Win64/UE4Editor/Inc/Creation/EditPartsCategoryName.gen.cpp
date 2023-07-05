// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditPartsCategoryName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsCategoryName() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowName();
// End Cross Module References

static_assert(std::is_polymorphic<FEditPartsCategoryName>() == std::is_polymorphic<FTableRowName>(), "USTRUCT FEditPartsCategoryName cannot be polymorphic unless super FTableRowName is polymorphic");

class UScriptStruct* FEditPartsCategoryName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPartsCategoryName, Z_Construct_UPackage__Script_Creation(), TEXT("EditPartsCategoryName"), sizeof(FEditPartsCategoryName), Get_Z_Construct_UScriptStruct_FEditPartsCategoryName_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditPartsCategoryName>()
{
	return FEditPartsCategoryName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPartsCategoryName(FEditPartsCategoryName::StaticStruct, TEXT("/Script/Creation"), TEXT("EditPartsCategoryName"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryName
{
	FScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryName()
	{
		UScriptStruct::DeferCppStructOps<FEditPartsCategoryName>(FName(TEXT("EditPartsCategoryName")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditPartsCategoryName;
	struct Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPartsCategoryName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPartsCategoryName>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowName,
		&NewStructOps,
		"EditPartsCategoryName",
		sizeof(FEditPartsCategoryName),
		alignof(FEditPartsCategoryName),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPartsCategoryName"), sizeof(FEditPartsCategoryName), Get_Z_Construct_UScriptStruct_FEditPartsCategoryName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPartsCategoryName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPartsCategoryName_Hash() { return 126169103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
