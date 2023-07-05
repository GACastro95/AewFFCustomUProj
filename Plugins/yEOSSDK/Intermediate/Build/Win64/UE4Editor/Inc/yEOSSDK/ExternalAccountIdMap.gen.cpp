// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/ExternalAccountIdMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalAccountIdMap() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountIdMap();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountIds();
// End Cross Module References
class UScriptStruct* FExternalAccountIdMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FExternalAccountIdMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalAccountIdMap, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("ExternalAccountIdMap"), sizeof(FExternalAccountIdMap), Get_Z_Construct_UScriptStruct_FExternalAccountIdMap_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FExternalAccountIdMap>()
{
	return FExternalAccountIdMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternalAccountIdMap(FExternalAccountIdMap::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("ExternalAccountIdMap"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFExternalAccountIdMap
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFExternalAccountIdMap()
	{
		UScriptStruct::DeferCppStructOps<FExternalAccountIdMap>(FName(TEXT("ExternalAccountIdMap")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFExternalAccountIdMap;
	struct Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProductUserIdToAccountIds_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserIdToAccountIds_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserIdToAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ProductUserIdToAccountIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExternalAccountIdMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalAccountIdMap>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_ValueProp = { "ProductUserIdToAccountIds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSExternalAccountIds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_Key_KeyProp = { "ProductUserIdToAccountIds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExternalAccountIdMap" },
		{ "ModuleRelativePath", "Public/ExternalAccountIdMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds = { "ProductUserIdToAccountIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternalAccountIdMap, ProductUserIdToAccountIds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::NewProp_ProductUserIdToAccountIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"ExternalAccountIdMap",
		sizeof(FExternalAccountIdMap),
		alignof(FExternalAccountIdMap),
		Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountIdMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternalAccountIdMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternalAccountIdMap"), sizeof(FExternalAccountIdMap), Get_Z_Construct_UScriptStruct_FExternalAccountIdMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExternalAccountIdMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternalAccountIdMap_Hash() { return 1998052682U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
