// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSEngineAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSEngineAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSEngineAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSEngineAPIVersionSettings"), sizeof(FEOSEngineAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSEngineAPIVersionSettings>()
{
	return FEOSEngineAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSEngineAPIVersionSettings(FEOSEngineAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSEngineAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSEngineAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSEngineAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSEngineAPIVersionSettings>(FName(TEXT("EOSEngineAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSEngineAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Initialize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Initialize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformRTCOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformRTCOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSEngineAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSEngineAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_Initialize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSEngineAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSEngineAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_Initialize = { "Initialize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSEngineAPIVersionSettings, Initialize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_Initialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_Initialize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSEngineAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSEngineAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformOptions = { "PlatformOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSEngineAPIVersionSettings, PlatformOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformRTCOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSEngineAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSEngineAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformRTCOptions = { "PlatformRTCOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSEngineAPIVersionSettings, PlatformRTCOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformRTCOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformRTCOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_Initialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::NewProp_PlatformRTCOptions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSEngineAPIVersionSettings",
		sizeof(FEOSEngineAPIVersionSettings),
		alignof(FEOSEngineAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSEngineAPIVersionSettings"), sizeof(FEOSEngineAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSEngineAPIVersionSettings_Hash() { return 3238801212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
