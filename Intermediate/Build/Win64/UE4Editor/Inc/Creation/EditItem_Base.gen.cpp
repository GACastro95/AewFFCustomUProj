// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditItem_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditItem_Base() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Base();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FEditItem_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditItem_Base_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditItem_Base, Z_Construct_UPackage__Script_Creation(), TEXT("EditItem_Base"), sizeof(FEditItem_Base), Get_Z_Construct_UScriptStruct_FEditItem_Base_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditItem_Base>()
{
	return FEditItem_Base::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditItem_Base(FEditItem_Base::StaticStruct, TEXT("/Script/Creation"), TEXT("EditItem_Base"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditItem_Base
{
	FScriptStruct_Creation_StaticRegisterNativesFEditItem_Base()
	{
		UScriptStruct::DeferCppStructOps<FEditItem_Base>(FName(TEXT("EditItem_Base")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditItem_Base;
	struct Z_Construct_UScriptStruct_FEditItem_Base_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Base_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditItem_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditItem_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditItem_Base>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditItem_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditItem_Base",
		sizeof(FEditItem_Base),
		alignof(FEditItem_Base),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditItem_Base_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditItem_Base"), sizeof(FEditItem_Base), Get_Z_Construct_UScriptStruct_FEditItem_Base_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditItem_Base_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditItem_Base_Hash() { return 1905057924U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
