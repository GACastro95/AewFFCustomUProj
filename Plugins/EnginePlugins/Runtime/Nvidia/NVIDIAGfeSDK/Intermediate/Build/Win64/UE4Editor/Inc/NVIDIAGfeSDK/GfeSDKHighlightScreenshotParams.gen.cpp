// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKHighlightScreenshotParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKHighlightScreenshotParams() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
class UScriptStruct* FGfeSDKHighlightScreenshotParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKHighlightScreenshotParams"), sizeof(FGfeSDKHighlightScreenshotParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKHighlightScreenshotParams>()
{
	return FGfeSDKHighlightScreenshotParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKHighlightScreenshotParams(FGfeSDKHighlightScreenshotParams::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKHighlightScreenshotParams"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightScreenshotParams
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightScreenshotParams()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKHighlightScreenshotParams>(FName(TEXT("GfeSDKHighlightScreenshotParams")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightScreenshotParams;
	struct Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HighlightId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightScreenshotParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKHighlightScreenshotParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightScreenshotParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightScreenshotParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightScreenshotParams, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_HighlightId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightScreenshotParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightScreenshotParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_HighlightId = { "HighlightId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightScreenshotParams, HighlightId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_HighlightId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_HighlightId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::NewProp_HighlightId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKHighlightScreenshotParams",
		sizeof(FGfeSDKHighlightScreenshotParams),
		alignof(FGfeSDKHighlightScreenshotParams),
		Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKHighlightScreenshotParams"), sizeof(FGfeSDKHighlightScreenshotParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightScreenshotParams_Hash() { return 1440742935U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
