// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKRequestPermissionsParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKRequestPermissionsParams() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope();
// End Cross Module References
class UScriptStruct* FGfeSDKRequestPermissionsParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKRequestPermissionsParams"), sizeof(FGfeSDKRequestPermissionsParams), Get_Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKRequestPermissionsParams>()
{
	return FGfeSDKRequestPermissionsParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKRequestPermissionsParams(FGfeSDKRequestPermissionsParams::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKRequestPermissionsParams"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKRequestPermissionsParams
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKRequestPermissionsParams()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKRequestPermissionsParams>(FName(TEXT("GfeSDKRequestPermissionsParams")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKRequestPermissionsParams;
	struct Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scopes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scopes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scopes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scopes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKRequestPermissionsParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKRequestPermissionsParams>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_Inner = { "Scopes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKRequestPermissionsParams" },
		{ "ModuleRelativePath", "Public/GfeSDKRequestPermissionsParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes = { "Scopes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKRequestPermissionsParams, Scopes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::NewProp_Scopes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKRequestPermissionsParams",
		sizeof(FGfeSDKRequestPermissionsParams),
		alignof(FGfeSDKRequestPermissionsParams),
		Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKRequestPermissionsParams"), sizeof(FGfeSDKRequestPermissionsParams), Get_Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKRequestPermissionsParams_Hash() { return 3665726960U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
