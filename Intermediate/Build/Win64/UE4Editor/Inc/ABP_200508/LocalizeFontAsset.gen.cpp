// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LocalizeFontAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizeFontAsset() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizeFontAsset();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FLocalizeFontAsset>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLocalizeFontAsset cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FLocalizeFontAsset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FLocalizeFontAsset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizeFontAsset, Z_Construct_UPackage__Script_ABP_200508(), TEXT("LocalizeFontAsset"), sizeof(FLocalizeFontAsset), Get_Z_Construct_UScriptStruct_FLocalizeFontAsset_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FLocalizeFontAsset>()
{
	return FLocalizeFontAsset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizeFontAsset(FLocalizeFontAsset::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("LocalizeFontAsset"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFLocalizeFontAsset
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFLocalizeFontAsset()
	{
		UScriptStruct::DeferCppStructOps<FLocalizeFontAsset>(FName(TEXT("LocalizeFontAsset")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFLocalizeFontAsset;
	struct Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_ChineseST_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Font_ChineseST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_ChineseTC_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Font_ChineseTC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LocalizeFontAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizeFontAsset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseST_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocalizeFontAsset" },
		{ "ModuleRelativePath", "Public/LocalizeFontAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseST = { "Font_ChineseST", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizeFontAsset, Font_ChineseST), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseST_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseTC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocalizeFontAsset" },
		{ "ModuleRelativePath", "Public/LocalizeFontAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseTC = { "Font_ChineseTC", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizeFontAsset, Font_ChineseTC), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseTC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseTC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::NewProp_Font_ChineseTC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LocalizeFontAsset",
		sizeof(FLocalizeFontAsset),
		alignof(FLocalizeFontAsset),
		Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizeFontAsset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizeFontAsset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizeFontAsset"), sizeof(FLocalizeFontAsset), Get_Z_Construct_UScriptStruct_FLocalizeFontAsset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizeFontAsset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizeFontAsset_Hash() { return 597079319U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
