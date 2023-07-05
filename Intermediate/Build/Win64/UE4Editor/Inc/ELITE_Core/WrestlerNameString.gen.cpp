// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/WrestlerNameString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerNameString() {}
// Cross Module References
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameString();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
class UScriptStruct* FWrestlerNameString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FWrestlerNameString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlerNameString, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("WrestlerNameString"), sizeof(FWrestlerNameString), Get_Z_Construct_UScriptStruct_FWrestlerNameString_Hash());
	}
	return Singleton;
}
template<> ELITE_CORE_API UScriptStruct* StaticStruct<FWrestlerNameString>()
{
	return FWrestlerNameString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlerNameString(FWrestlerNameString::StaticStruct, TEXT("/Script/ELITE_Core"), TEXT("WrestlerNameString"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Core_StaticRegisterNativesFWrestlerNameString
{
	FScriptStruct_ELITE_Core_StaticRegisterNativesFWrestlerNameString()
	{
		UScriptStruct::DeferCppStructOps<FWrestlerNameString>(FName(TEXT("WrestlerNameString")));
	}
} ScriptStruct_ELITE_Core_StaticRegisterNativesFWrestlerNameString;
	struct Z_Construct_UScriptStruct_FWrestlerNameString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingNameUpperString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingNameUpperString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingNameLowerString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingNameLowerString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortNameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortNameString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NickNameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickNameString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnsAccountString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnsAccountString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerNameString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlerNameString.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlerNameString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameUpperString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerNameString" },
		{ "ModuleRelativePath", "Public/WrestlerNameString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameUpperString = { "RingNameUpperString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerNameString, RingNameUpperString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameUpperString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameUpperString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameLowerString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerNameString" },
		{ "ModuleRelativePath", "Public/WrestlerNameString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameLowerString = { "RingNameLowerString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerNameString, RingNameLowerString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameLowerString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameLowerString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_ShortNameString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerNameString" },
		{ "ModuleRelativePath", "Public/WrestlerNameString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_ShortNameString = { "ShortNameString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerNameString, ShortNameString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_ShortNameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_ShortNameString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_NickNameString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerNameString" },
		{ "ModuleRelativePath", "Public/WrestlerNameString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_NickNameString = { "NickNameString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerNameString, NickNameString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_NickNameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_NickNameString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_SnsAccountString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerNameString" },
		{ "ModuleRelativePath", "Public/WrestlerNameString.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_SnsAccountString = { "SnsAccountString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerNameString, SnsAccountString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_SnsAccountString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_SnsAccountString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlerNameString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameUpperString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_RingNameLowerString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_ShortNameString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_NickNameString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerNameString_Statics::NewProp_SnsAccountString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlerNameString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
		nullptr,
		&NewStructOps,
		"WrestlerNameString",
		sizeof(FWrestlerNameString),
		alignof(FWrestlerNameString),
		Z_Construct_UScriptStruct_FWrestlerNameString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerNameString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlerNameString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlerNameString"), sizeof(FWrestlerNameString), Get_Z_Construct_UScriptStruct_FWrestlerNameString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlerNameString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlerNameString_Hash() { return 3264601141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
