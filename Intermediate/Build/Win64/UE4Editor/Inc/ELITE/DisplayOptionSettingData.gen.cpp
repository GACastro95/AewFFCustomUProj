// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/DisplayOptionSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayOptionSettingData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayOptionSettingData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FDisplayOptionSettingData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDisplayOptionSettingData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDisplayOptionSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FDisplayOptionSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayOptionSettingData, Z_Construct_UPackage__Script_ELITE(), TEXT("DisplayOptionSettingData"), sizeof(FDisplayOptionSettingData), Get_Z_Construct_UScriptStruct_FDisplayOptionSettingData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FDisplayOptionSettingData>()
{
	return FDisplayOptionSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDisplayOptionSettingData(FDisplayOptionSettingData::StaticStruct, TEXT("/Script/ELITE"), TEXT("DisplayOptionSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFDisplayOptionSettingData
{
	FScriptStruct_ELITE_StaticRegisterNativesFDisplayOptionSettingData()
	{
		UScriptStruct::DeferCppStructOps<FDisplayOptionSettingData>(FName(TEXT("DisplayOptionSettingData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFDisplayOptionSettingData;
	struct Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AntiAliasingQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostProcessQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayOptionSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayOptionSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_ShadowQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayOptionSettingData" },
		{ "ModuleRelativePath", "Public/DisplayOptionSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_ShadowQuality = { "ShadowQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayOptionSettingData, ShadowQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_ShadowQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_AntiAliasingQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayOptionSettingData" },
		{ "ModuleRelativePath", "Public/DisplayOptionSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_AntiAliasingQuality = { "AntiAliasingQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayOptionSettingData, AntiAliasingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_AntiAliasingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_AntiAliasingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_TextureQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayOptionSettingData" },
		{ "ModuleRelativePath", "Public/DisplayOptionSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_TextureQuality = { "TextureQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayOptionSettingData, TextureQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_TextureQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_PostProcessQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayOptionSettingData" },
		{ "ModuleRelativePath", "Public/DisplayOptionSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_PostProcessQuality = { "PostProcessQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayOptionSettingData, PostProcessQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_PostProcessQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_PostProcessQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_ShadowQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_AntiAliasingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_TextureQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::NewProp_PostProcessQuality,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DisplayOptionSettingData",
		sizeof(FDisplayOptionSettingData),
		alignof(FDisplayOptionSettingData),
		Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayOptionSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDisplayOptionSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DisplayOptionSettingData"), sizeof(FDisplayOptionSettingData), Get_Z_Construct_UScriptStruct_FDisplayOptionSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDisplayOptionSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDisplayOptionSettingData_Hash() { return 3691287142U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
