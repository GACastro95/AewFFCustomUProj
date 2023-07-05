// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKHighlightOpenGroupParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKHighlightOpenGroupParams() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
class UScriptStruct* FGfeSDKHighlightOpenGroupParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKHighlightOpenGroupParams"), sizeof(FGfeSDKHighlightOpenGroupParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKHighlightOpenGroupParams>()
{
	return FGfeSDKHighlightOpenGroupParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKHighlightOpenGroupParams(FGfeSDKHighlightOpenGroupParams::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKHighlightOpenGroupParams"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightOpenGroupParams
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightOpenGroupParams()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKHighlightOpenGroupParams>(FName(TEXT("GfeSDKHighlightOpenGroupParams")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightOpenGroupParams;
	struct Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupDescriptionTranslationTable_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupDescriptionTranslationTable_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupDescriptionTranslationTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GroupDescriptionTranslationTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightOpenGroupParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKHighlightOpenGroupParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightOpenGroupParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightOpenGroupParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightOpenGroupParams, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_ValueProp = { "GroupDescriptionTranslationTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_Key_KeyProp = { "GroupDescriptionTranslationTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightOpenGroupParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightOpenGroupParams.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable = { "GroupDescriptionTranslationTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightOpenGroupParams, GroupDescriptionTranslationTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::NewProp_GroupDescriptionTranslationTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKHighlightOpenGroupParams",
		sizeof(FGfeSDKHighlightOpenGroupParams),
		alignof(FGfeSDKHighlightOpenGroupParams),
		Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKHighlightOpenGroupParams"), sizeof(FGfeSDKHighlightOpenGroupParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightOpenGroupParams_Hash() { return 1019710750U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
