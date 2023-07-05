// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EditPartsKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditPartsKey() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsKey();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPreviewAttire();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsSlot();
// End Cross Module References
class UScriptStruct* FEditPartsKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FEditPartsKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditPartsKey, Z_Construct_UPackage__Script_ELITE(), TEXT("EditPartsKey"), sizeof(FEditPartsKey), Get_Z_Construct_UScriptStruct_FEditPartsKey_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FEditPartsKey>()
{
	return FEditPartsKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditPartsKey(FEditPartsKey::StaticStruct, TEXT("/Script/ELITE"), TEXT("EditPartsKey"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFEditPartsKey
{
	FScriptStruct_ELITE_StaticRegisterNativesFEditPartsKey()
	{
		UScriptStruct::DeferCppStructOps<FEditPartsKey>(FName(TEXT("EditPartsKey")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFEditPartsKey;
	struct Z_Construct_UScriptStruct_FEditPartsKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditPartsKey.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditPartsKey>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsKey" },
		{ "ModuleRelativePath", "Public/EditPartsKey.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsKey, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditPartsKey" },
		{ "ModuleRelativePath", "Public/EditPartsKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditPartsKey, PartsSlot), Z_Construct_UScriptStruct_FEditPartsSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditPartsKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditPartsKey_Statics::NewProp_PartsSlot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditPartsKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"EditPartsKey",
		sizeof(FEditPartsKey),
		alignof(FEditPartsKey),
		Z_Construct_UScriptStruct_FEditPartsKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditPartsKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditPartsKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditPartsKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditPartsKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditPartsKey"), sizeof(FEditPartsKey), Get_Z_Construct_UScriptStruct_FEditPartsKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditPartsKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditPartsKey_Hash() { return 2030257247U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
