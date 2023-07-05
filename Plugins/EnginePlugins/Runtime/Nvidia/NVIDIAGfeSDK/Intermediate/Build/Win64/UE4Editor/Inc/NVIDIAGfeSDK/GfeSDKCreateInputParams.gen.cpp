// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKCreateInputParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKCreateInputParams() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKCreateInputParams();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope();
// End Cross Module References
class UScriptStruct* FGfeSDKCreateInputParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKCreateInputParams"), sizeof(FGfeSDKCreateInputParams), Get_Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKCreateInputParams>()
{
	return FGfeSDKCreateInputParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKCreateInputParams(FGfeSDKCreateInputParams::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKCreateInputParams"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKCreateInputParams
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKCreateInputParams()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKCreateInputParams>(FName(TEXT("GfeSDKCreateInputParams")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKCreateInputParams;
	struct Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequiredScopes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequiredScopes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredScopes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredScopes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollForCallbacks_MetaData[];
#endif
		static void NewProp_PollForCallbacks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PollForCallbacks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateInputParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKCreateInputParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_AppName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateInputParams" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateInputParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKCreateInputParams, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_AppName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_Inner = { "RequiredScopes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateInputParams" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateInputParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes = { "RequiredScopes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKCreateInputParams, RequiredScopes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateInputParams" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateInputParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks_SetBit(void* Obj)
	{
		((FGfeSDKCreateInputParams*)Obj)->PollForCallbacks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks = { "PollForCallbacks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGfeSDKCreateInputParams), &Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_AppName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_RequiredScopes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::NewProp_PollForCallbacks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKCreateInputParams",
		sizeof(FGfeSDKCreateInputParams),
		alignof(FGfeSDKCreateInputParams),
		Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKCreateInputParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKCreateInputParams"), sizeof(FGfeSDKCreateInputParams), Get_Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKCreateInputParams_Hash() { return 1605455066U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
