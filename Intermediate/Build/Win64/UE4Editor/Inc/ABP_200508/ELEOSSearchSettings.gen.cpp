// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSSearchSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSSearchSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSSearchSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
// End Cross Module References
class UScriptStruct* FELEOSSearchSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEOSSearchSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEOSSearchSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEOSSearchSettings"), sizeof(FELEOSSearchSettings), Get_Z_Construct_UScriptStruct_FELEOSSearchSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEOSSearchSettings>()
{
	return FELEOSSearchSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEOSSearchSettings(FELEOSSearchSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEOSSearchSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSearchSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSearchSettings()
	{
		UScriptStruct::DeferCppStructOps<FELEOSSearchSettings>(FName(TEXT("ELEOSSearchSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEOSSearchSettings;
	struct Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAutoJoinSession_MetaData[];
#endif
		static void NewProp_IsAutoJoinSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAutoJoinSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionSearchRetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionSearchRetryCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEOSSearchSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEOSSearchSettings>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSearchSettings" },
		{ "ModuleRelativePath", "Public/ELEOSSearchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSSearchSettings, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_MaxResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSearchSettings" },
		{ "ModuleRelativePath", "Public/ELEOSSearchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSSearchSettings, MaxResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_MaxResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_MaxResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSearchSettings" },
		{ "ModuleRelativePath", "Public/ELEOSSearchSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession_SetBit(void* Obj)
	{
		((FELEOSSearchSettings*)Obj)->IsAutoJoinSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession = { "IsAutoJoinSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEOSSearchSettings), &Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_SessionSearchRetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSSearchSettings" },
		{ "ModuleRelativePath", "Public/ELEOSSearchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_SessionSearchRetryCount = { "SessionSearchRetryCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSSearchSettings, SessionSearchRetryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_SessionSearchRetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_SessionSearchRetryCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_IsAutoJoinSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::NewProp_SessionSearchRetryCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEOSSearchSettings",
		sizeof(FELEOSSearchSettings),
		alignof(FELEOSSearchSettings),
		Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEOSSearchSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEOSSearchSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEOSSearchSettings"), sizeof(FELEOSSearchSettings), Get_Z_Construct_UScriptStruct_FELEOSSearchSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEOSSearchSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEOSSearchSettings_Hash() { return 3069594916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
