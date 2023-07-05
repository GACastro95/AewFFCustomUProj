// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSReportsAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSReportsAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSReportsAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSReportsAPIVersionSettings"), sizeof(FEOSReportsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSReportsAPIVersionSettings>()
{
	return FEOSReportsAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSReportsAPIVersionSettings(FEOSReportsAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSReportsAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSReportsAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSReportsAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSReportsAPIVersionSettings>(FName(TEXT("EOSReportsAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSReportsAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendPlayerBehaviorReport_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SendPlayerBehaviorReport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSReportsAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSReportsAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::NewProp_SendPlayerBehaviorReport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSReportsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSReportsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::NewProp_SendPlayerBehaviorReport = { "SendPlayerBehaviorReport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSReportsAPIVersionSettings, SendPlayerBehaviorReport), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::NewProp_SendPlayerBehaviorReport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::NewProp_SendPlayerBehaviorReport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::NewProp_SendPlayerBehaviorReport,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSReportsAPIVersionSettings",
		sizeof(FEOSReportsAPIVersionSettings),
		alignof(FEOSReportsAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSReportsAPIVersionSettings"), sizeof(FEOSReportsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings_Hash() { return 3188899371U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
