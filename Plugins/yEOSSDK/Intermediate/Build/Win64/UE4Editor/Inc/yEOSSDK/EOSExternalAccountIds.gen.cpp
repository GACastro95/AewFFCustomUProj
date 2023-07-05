// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSExternalAccountIds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSExternalAccountIds() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountIds();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountId();
// End Cross Module References
class UScriptStruct* FEOSExternalAccountIds::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSExternalAccountIds_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSExternalAccountIds, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSExternalAccountIds"), sizeof(FEOSExternalAccountIds), Get_Z_Construct_UScriptStruct_FEOSExternalAccountIds_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSExternalAccountIds>()
{
	return FEOSExternalAccountIds::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSExternalAccountIds(FEOSExternalAccountIds::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSExternalAccountIds"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSExternalAccountIds
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSExternalAccountIds()
	{
		UScriptStruct::DeferCppStructOps<FEOSExternalAccountIds>(FName(TEXT("EOSExternalAccountIds")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSExternalAccountIds;
	struct Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalAccountIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalAccountIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountIds.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSExternalAccountIds>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds_Inner = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSExternalAccountId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSExternalAccountIds" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSExternalAccountIds, ExternalAccountIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::NewProp_ExternalAccountIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSExternalAccountIds",
		sizeof(FEOSExternalAccountIds),
		alignof(FEOSExternalAccountIds),
		Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountIds()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSExternalAccountIds_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSExternalAccountIds"), sizeof(FEOSExternalAccountIds), Get_Z_Construct_UScriptStruct_FEOSExternalAccountIds_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSExternalAccountIds_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSExternalAccountIds_Hash() { return 3951926093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
