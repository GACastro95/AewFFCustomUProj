// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SettingMenuIDs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingMenuIDs() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSettingMenuIDs();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSettingMenuIDs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSettingMenuIDs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingMenuIDs, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SettingMenuIDs"), sizeof(FSettingMenuIDs), Get_Z_Construct_UScriptStruct_FSettingMenuIDs_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSettingMenuIDs>()
{
	return FSettingMenuIDs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSettingMenuIDs(FSettingMenuIDs::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SettingMenuIDs"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSettingMenuIDs
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSettingMenuIDs()
	{
		UScriptStruct::DeferCppStructOps<FSettingMenuIDs>(FName(TEXT("SettingMenuIDs")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSettingMenuIDs;
	struct Z_Construct_UScriptStruct_FSettingMenuIDs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SettingMenuIDs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingMenuIDs>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SettingMenuIDs" },
		{ "ModuleRelativePath", "Public/SettingMenuIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingMenuIDs, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::NewProp_IDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SettingMenuIDs",
		sizeof(FSettingMenuIDs),
		alignof(FSettingMenuIDs),
		Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSettingMenuIDs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSettingMenuIDs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SettingMenuIDs"), sizeof(FSettingMenuIDs), Get_Z_Construct_UScriptStruct_FSettingMenuIDs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSettingMenuIDs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSettingMenuIDs_Hash() { return 2220342552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
