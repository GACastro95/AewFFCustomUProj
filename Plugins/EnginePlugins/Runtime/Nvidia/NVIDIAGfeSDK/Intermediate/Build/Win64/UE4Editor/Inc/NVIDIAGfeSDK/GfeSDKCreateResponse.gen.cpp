// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKCreateResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKCreateResponse() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKCreateResponse();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope();
// End Cross Module References
class UScriptStruct* FGfeSDKCreateResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKCreateResponse, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKCreateResponse"), sizeof(FGfeSDKCreateResponse), Get_Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKCreateResponse>()
{
	return FGfeSDKCreateResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKCreateResponse(FGfeSDKCreateResponse::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKCreateResponse"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKCreateResponse
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKCreateResponse()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKCreateResponse>(FName(TEXT("GfeSDKCreateResponse")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKCreateResponse;
	struct Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionMajor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_VersionMajor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionMinor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_VersionMinor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NVIDIAGfeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NVIDIAGfeVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScopePermissions_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScopePermissions_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScopePermissions_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScopePermissions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopePermissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ScopePermissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKCreateResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMajor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateResponse" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMajor = { "VersionMajor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKCreateResponse, VersionMajor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMajor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMajor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMinor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateResponse" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMinor = { "VersionMinor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKCreateResponse, VersionMinor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMinor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMinor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_NVIDIAGfeVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateResponse" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_NVIDIAGfeVersion = { "NVIDIAGfeVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKCreateResponse, NVIDIAGfeVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_NVIDIAGfeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_NVIDIAGfeVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_ValueProp = { "ScopePermissions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_Key_KeyProp = { "ScopePermissions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKCreateResponse" },
		{ "ModuleRelativePath", "Public/GfeSDKCreateResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions = { "ScopePermissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKCreateResponse, ScopePermissions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMajor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_VersionMinor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_NVIDIAGfeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::NewProp_ScopePermissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKCreateResponse",
		sizeof(FGfeSDKCreateResponse),
		alignof(FGfeSDKCreateResponse),
		Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKCreateResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKCreateResponse"), sizeof(FGfeSDKCreateResponse), Get_Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKCreateResponse_Hash() { return 324657729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
