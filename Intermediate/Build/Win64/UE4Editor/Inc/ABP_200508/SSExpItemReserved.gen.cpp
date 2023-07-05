// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSExpItemReserved.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSExpItemReserved() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSExpItemReserved();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSExpItemReserved::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSExpItemReserved_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSExpItemReserved, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSExpItemReserved"), sizeof(FSSExpItemReserved), Get_Z_Construct_UScriptStruct_FSSExpItemReserved_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSExpItemReserved>()
{
	return FSSExpItemReserved::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSExpItemReserved(FSSExpItemReserved::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSExpItemReserved"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSExpItemReserved
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSExpItemReserved()
	{
		UScriptStruct::DeferCppStructOps<FSSExpItemReserved>(FName(TEXT("SSExpItemReserved")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSExpItemReserved;
	struct Z_Construct_UScriptStruct_FSSExpItemReserved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSExpItemReserved_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSExpItemReserved.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSExpItemReserved_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSExpItemReserved>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSExpItemReserved_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSExpItemReserved",
		sizeof(FSSExpItemReserved),
		alignof(FSSExpItemReserved),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSExpItemReserved_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSExpItemReserved_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSExpItemReserved()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSExpItemReserved_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSExpItemReserved"), sizeof(FSSExpItemReserved), Get_Z_Construct_UScriptStruct_FSSExpItemReserved_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSExpItemReserved_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSExpItemReserved_Hash() { return 131786824U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
