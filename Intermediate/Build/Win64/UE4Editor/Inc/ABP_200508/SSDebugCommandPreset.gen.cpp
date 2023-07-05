// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugCommandPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugCommandPreset() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugCommandPreset();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugCommandPresetElem();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDebugCommandPreset>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSDebugCommandPreset cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSDebugCommandPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugCommandPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugCommandPreset, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugCommandPreset"), sizeof(FSSDebugCommandPreset), Get_Z_Construct_UScriptStruct_FSSDebugCommandPreset_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugCommandPreset>()
{
	return FSSDebugCommandPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugCommandPreset(FSSDebugCommandPreset::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugCommandPreset"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugCommandPreset
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugCommandPreset()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugCommandPreset>(FName(TEXT("SSDebugCommandPreset")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugCommandPreset;
	struct Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugCommandPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugCommandPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugCommandPreset" },
		{ "ModuleRelativePath", "Public/SSDebugCommandPreset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FSSDebugCommandPreset*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugCommandPreset), &Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSDebugCommandPresetElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugCommandPreset" },
		{ "ModuleRelativePath", "Public/SSDebugCommandPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugCommandPreset, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::NewProp_Commands,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSDebugCommandPreset",
		sizeof(FSSDebugCommandPreset),
		alignof(FSSDebugCommandPreset),
		Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugCommandPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugCommandPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugCommandPreset"), sizeof(FSSDebugCommandPreset), Get_Z_Construct_UScriptStruct_FSSDebugCommandPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugCommandPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugCommandPreset_Hash() { return 2284833840U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
