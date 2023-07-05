// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/AttireDataSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttireDataSet() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAttireDataSet();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireData();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPreviewAttire();
// End Cross Module References
class UScriptStruct* FAttireDataSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FAttireDataSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttireDataSet, Z_Construct_UPackage__Script_ELITE(), TEXT("AttireDataSet"), sizeof(FAttireDataSet), Get_Z_Construct_UScriptStruct_FAttireDataSet_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FAttireDataSet>()
{
	return FAttireDataSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttireDataSet(FAttireDataSet::StaticStruct, TEXT("/Script/ELITE"), TEXT("AttireDataSet"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFAttireDataSet
{
	FScriptStruct_ELITE_StaticRegisterNativesFAttireDataSet()
	{
		UScriptStruct::DeferCppStructOps<FAttireDataSet>(FName(TEXT("AttireDataSet")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFAttireDataSet;
	struct Z_Construct_UScriptStruct_FAttireDataSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Map_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttireDataSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AttireDataSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttireDataSet>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttireDataSet" },
		{ "ModuleRelativePath", "Public/AttireDataSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttireDataSet, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttireDataSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttireDataSet_Statics::NewProp_Map,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttireDataSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"AttireDataSet",
		sizeof(FAttireDataSet),
		alignof(FAttireDataSet),
		Z_Construct_UScriptStruct_FAttireDataSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireDataSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttireDataSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttireDataSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttireDataSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttireDataSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttireDataSet"), sizeof(FAttireDataSet), Get_Z_Construct_UScriptStruct_FAttireDataSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttireDataSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttireDataSet_Hash() { return 483265067U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
