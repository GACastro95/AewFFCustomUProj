// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKHighlightCloseGroupParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKHighlightCloseGroupParams() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
class UScriptStruct* FGfeSDKHighlightCloseGroupParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKHighlightCloseGroupParams"), sizeof(FGfeSDKHighlightCloseGroupParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKHighlightCloseGroupParams>()
{
	return FGfeSDKHighlightCloseGroupParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKHighlightCloseGroupParams(FGfeSDKHighlightCloseGroupParams::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKHighlightCloseGroupParams"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightCloseGroupParams
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightCloseGroupParams()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKHighlightCloseGroupParams>(FName(TEXT("GfeSDKHighlightCloseGroupParams")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKHighlightCloseGroupParams;
	struct Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyHighlights_MetaData[];
#endif
		static void NewProp_DestroyHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyHighlights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightCloseGroupParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKHighlightCloseGroupParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightCloseGroupParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightCloseGroupParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKHighlightCloseGroupParams, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKHighlightCloseGroupParams" },
		{ "ModuleRelativePath", "Public/GfeSDKHighlightCloseGroupParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights_SetBit(void* Obj)
	{
		((FGfeSDKHighlightCloseGroupParams*)Obj)->DestroyHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights = { "DestroyHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGfeSDKHighlightCloseGroupParams), &Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::NewProp_DestroyHighlights,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKHighlightCloseGroupParams",
		sizeof(FGfeSDKHighlightCloseGroupParams),
		alignof(FGfeSDKHighlightCloseGroupParams),
		Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKHighlightCloseGroupParams"), sizeof(FGfeSDKHighlightCloseGroupParams), Get_Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKHighlightCloseGroupParams_Hash() { return 1407000684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
