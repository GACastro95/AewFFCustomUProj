// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSECommerceAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSECommerceAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSECommerceAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSECommerceAPIVersionSettings"), sizeof(FEOSECommerceAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSECommerceAPIVersionSettings>()
{
	return FEOSECommerceAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSECommerceAPIVersionSettings(FEOSECommerceAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSECommerceAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSECommerceAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSECommerceAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSECommerceAPIVersionSettings>(FName(TEXT("EOSECommerceAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSECommerceAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSECommerceAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSECommerceAPIVersionSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSECommerceAPIVersionSettings",
		sizeof(FEOSECommerceAPIVersionSettings),
		alignof(FEOSECommerceAPIVersionSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSECommerceAPIVersionSettings"), sizeof(FEOSECommerceAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSECommerceAPIVersionSettings_Hash() { return 289582174U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
