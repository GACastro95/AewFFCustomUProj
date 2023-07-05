// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BaseBodyTypeName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBodyTypeName() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseBodyTypeName();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowName();
// End Cross Module References

static_assert(std::is_polymorphic<FBaseBodyTypeName>() == std::is_polymorphic<FTableRowName>(), "USTRUCT FBaseBodyTypeName cannot be polymorphic unless super FTableRowName is polymorphic");

class UScriptStruct* FBaseBodyTypeName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBaseBodyTypeName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseBodyTypeName, Z_Construct_UPackage__Script_Creation(), TEXT("BaseBodyTypeName"), sizeof(FBaseBodyTypeName), Get_Z_Construct_UScriptStruct_FBaseBodyTypeName_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBaseBodyTypeName>()
{
	return FBaseBodyTypeName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseBodyTypeName(FBaseBodyTypeName::StaticStruct, TEXT("/Script/Creation"), TEXT("BaseBodyTypeName"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBaseBodyTypeName
{
	FScriptStruct_Creation_StaticRegisterNativesFBaseBodyTypeName()
	{
		UScriptStruct::DeferCppStructOps<FBaseBodyTypeName>(FName(TEXT("BaseBodyTypeName")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBaseBodyTypeName;
	struct Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseBodyTypeName>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowName,
		&NewStructOps,
		"BaseBodyTypeName",
		sizeof(FBaseBodyTypeName),
		alignof(FBaseBodyTypeName),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseBodyTypeName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseBodyTypeName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseBodyTypeName"), sizeof(FBaseBodyTypeName), Get_Z_Construct_UScriptStruct_FBaseBodyTypeName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseBodyTypeName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseBodyTypeName_Hash() { return 3132487255U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
