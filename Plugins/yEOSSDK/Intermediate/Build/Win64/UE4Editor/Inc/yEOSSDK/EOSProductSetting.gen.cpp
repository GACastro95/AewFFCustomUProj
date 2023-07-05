// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSProductSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSProductSetting() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductSetting();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSProductSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSProductSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSProductSetting, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSProductSetting"), sizeof(FEOSProductSetting), Get_Z_Construct_UScriptStruct_FEOSProductSetting_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSProductSetting>()
{
	return FEOSProductSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSProductSetting(FEOSProductSetting::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSProductSetting"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSProductSetting
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSProductSetting()
	{
		UScriptStruct::DeferCppStructOps<FEOSProductSetting>(FName(TEXT("EOSProductSetting")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSProductSetting;
	struct Z_Construct_UScriptStruct_FEOSProductSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SandboxID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SandboxID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeplymentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeplymentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickBudgetInMilliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TickBudgetInMilliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSProductSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSProductSetting" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSProductSetting, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_SandboxID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSProductSetting" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_SandboxID = { "SandboxID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSProductSetting, SandboxID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_SandboxID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_SandboxID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_DeplymentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSProductSetting" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_DeplymentID = { "DeplymentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSProductSetting, DeplymentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_DeplymentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_DeplymentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSProductSetting" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSProductSetting, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSProductSetting" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSProductSetting, ClientSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_TickBudgetInMilliseconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSProductSetting" },
		{ "ModuleRelativePath", "Public/EOSProductSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_TickBudgetInMilliseconds = { "TickBudgetInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSProductSetting, TickBudgetInMilliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_TickBudgetInMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_TickBudgetInMilliseconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSProductSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_SandboxID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_DeplymentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_ClientSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSProductSetting_Statics::NewProp_TickBudgetInMilliseconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSProductSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSProductSetting",
		sizeof(FEOSProductSetting),
		alignof(FEOSProductSetting),
		Z_Construct_UScriptStruct_FEOSProductSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSProductSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSProductSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSProductSetting"), sizeof(FEOSProductSetting), Get_Z_Construct_UScriptStruct_FEOSProductSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSProductSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSProductSetting_Hash() { return 828565575U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
