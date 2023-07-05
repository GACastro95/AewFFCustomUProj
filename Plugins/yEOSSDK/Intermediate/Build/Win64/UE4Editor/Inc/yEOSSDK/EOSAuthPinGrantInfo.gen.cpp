// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAuthPinGrantInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAuthPinGrantInfo() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSAuthPinGrantInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSAuthPinGrantInfo"), sizeof(FEOSAuthPinGrantInfo), Get_Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSAuthPinGrantInfo>()
{
	return FEOSAuthPinGrantInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSAuthPinGrantInfo(FEOSAuthPinGrantInfo::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSAuthPinGrantInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAuthPinGrantInfo
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAuthPinGrantInfo()
	{
		UScriptStruct::DeferCppStructOps<FEOSAuthPinGrantInfo>(FName(TEXT("EOSAuthPinGrantInfo")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAuthPinGrantInfo;
	struct Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationURI_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationURI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiresIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpiresIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationURIComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationURIComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSAuthPinGrantInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSAuthPinGrantInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_UserCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthPinGrantInfo" },
		{ "ModuleRelativePath", "Public/EOSAuthPinGrantInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_UserCode = { "UserCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthPinGrantInfo, UserCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_UserCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_UserCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthPinGrantInfo" },
		{ "ModuleRelativePath", "Public/EOSAuthPinGrantInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURI = { "VerificationURI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthPinGrantInfo, VerificationURI), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_ExpiresIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthPinGrantInfo" },
		{ "ModuleRelativePath", "Public/EOSAuthPinGrantInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_ExpiresIn = { "ExpiresIn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthPinGrantInfo, ExpiresIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_ExpiresIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_ExpiresIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURIComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAuthPinGrantInfo" },
		{ "ModuleRelativePath", "Public/EOSAuthPinGrantInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURIComplete = { "VerificationURIComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAuthPinGrantInfo, VerificationURIComplete), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURIComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURIComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_UserCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_ExpiresIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::NewProp_VerificationURIComplete,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSAuthPinGrantInfo",
		sizeof(FEOSAuthPinGrantInfo),
		alignof(FEOSAuthPinGrantInfo),
		Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSAuthPinGrantInfo"), sizeof(FEOSAuthPinGrantInfo), Get_Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSAuthPinGrantInfo_Hash() { return 2932705629U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
