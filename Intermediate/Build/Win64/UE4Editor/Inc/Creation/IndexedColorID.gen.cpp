// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/IndexedColorID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedColorID() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorID();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemID();
// End Cross Module References

static_assert(std::is_polymorphic<FIndexedColorID>() == std::is_polymorphic<FPickableItemID>(), "USTRUCT FIndexedColorID cannot be polymorphic unless super FPickableItemID is polymorphic");

class UScriptStruct* FIndexedColorID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FIndexedColorID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedColorID, Z_Construct_UPackage__Script_Creation(), TEXT("IndexedColorID"), sizeof(FIndexedColorID), Get_Z_Construct_UScriptStruct_FIndexedColorID_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FIndexedColorID>()
{
	return FIndexedColorID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIndexedColorID(FIndexedColorID::StaticStruct, TEXT("/Script/Creation"), TEXT("IndexedColorID"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFIndexedColorID
{
	FScriptStruct_Creation_StaticRegisterNativesFIndexedColorID()
	{
		UScriptStruct::DeferCppStructOps<FIndexedColorID>(FName(TEXT("IndexedColorID")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFIndexedColorID;
	struct Z_Construct_UScriptStruct_FIndexedColorID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedColorID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IndexedColorID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIndexedColorID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedColorID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedColorID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FPickableItemID,
		&NewStructOps,
		"IndexedColorID",
		sizeof(FIndexedColorID),
		alignof(FIndexedColorID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedColorID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColorID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIndexedColorID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IndexedColorID"), sizeof(FIndexedColorID), Get_Z_Construct_UScriptStruct_FIndexedColorID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIndexedColorID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIndexedColorID_Hash() { return 3762588575U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
