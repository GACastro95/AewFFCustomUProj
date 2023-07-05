// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKHighlightVideoParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKHighlightVideoParams() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
class UScriptStruct* FGfeSDKHighlightVideoParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKHighlightVideoParams"), sizeof(FGfeSDKHighlightVideoParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKHighlightVideoParams>()
{
	return FGfeSDKHighlightVideoParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKHighlightVideoParams(FGfeSDKHighlightVideoParams::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKHighlightVideoParams"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightVideoParams
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightVideoParams()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKHighlightVideoParams>(FName(TEXT("GfeSDKHighlightVideoParams")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightVideoParams;
	struct Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightVideoParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKHighlightVideoParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightVideoParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightVideoParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightVideoParams, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_HighlightId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightVideoParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightVideoParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_HighlightId = { "HighlightId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightVideoParams, HighlightId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_HighlightId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_HighlightId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_StartDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightVideoParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightVideoParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_StartDelta = { "StartDelta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightVideoParams, StartDelta), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_StartDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_StartDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_EndDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightVideoParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightVideoParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_EndDelta = { "EndDelta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightVideoParams, EndDelta), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_EndDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_EndDelta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_HighlightId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_StartDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::NewProp_EndDelta,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKHighlightVideoParams",
		sizeof(FGfeSDKHighlightVideoParams),
		alignof(FGfeSDKHighlightVideoParams),
		Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKHighlightVideoParams"), sizeof(FGfeSDKHighlightVideoParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightVideoParams_Hash() { return 4118626346U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
