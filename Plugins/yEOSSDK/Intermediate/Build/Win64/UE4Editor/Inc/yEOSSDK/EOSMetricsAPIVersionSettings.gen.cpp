// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSMetricsAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSMetricsAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSMetricsAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSMetricsAPIVersionSettings"), sizeof(FEOSMetricsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSMetricsAPIVersionSettings>()
{
	return FEOSMetricsAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSMetricsAPIVersionSettings(FEOSMetricsAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSMetricsAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSMetricsAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSMetricsAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSMetricsAPIVersionSettings>(FName(TEXT("EOSMetricsAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSMetricsAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginPlayerSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeginPlayerSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayerSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndPlayerSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSMetricsAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSMetricsAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_BeginPlayerSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_BeginPlayerSession = { "BeginPlayerSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsAPIVersionSettings, BeginPlayerSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_BeginPlayerSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_BeginPlayerSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_EndPlayerSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSMetricsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSMetricsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_EndPlayerSession = { "EndPlayerSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsAPIVersionSettings, EndPlayerSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_EndPlayerSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_EndPlayerSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_BeginPlayerSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::NewProp_EndPlayerSession,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSMetricsAPIVersionSettings",
		sizeof(FEOSMetricsAPIVersionSettings),
		alignof(FEOSMetricsAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSMetricsAPIVersionSettings"), sizeof(FEOSMetricsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings_Hash() { return 2992472497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
