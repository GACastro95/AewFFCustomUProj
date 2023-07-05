// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserContentsAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserContentsAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSUserContentsAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSUserContentsAPIVersionSettings"), sizeof(FEOSUserContentsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSUserContentsAPIVersionSettings>()
{
	return FEOSUserContentsAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSUserContentsAPIVersionSettings(FEOSUserContentsAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSUserContentsAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserContentsAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserContentsAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSUserContentsAPIVersionSettings>(FName(TEXT("EOSUserContentsAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserContentsAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryFileList_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryFileList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyFileMetadataAtIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyFileMetadataAtIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReadFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WriteFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WriteFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeleteFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuplicateFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DuplicateFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSUserContentsAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_QueryFileList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_QueryFileList = { "QueryFileList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentsAPIVersionSettings, QueryFileList), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_QueryFileList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_QueryFileList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex = { "CopyFileMetadataAtIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentsAPIVersionSettings, CopyFileMetadataAtIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_ReadFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_ReadFile = { "ReadFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentsAPIVersionSettings, ReadFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_ReadFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_ReadFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_WriteFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_WriteFile = { "WriteFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentsAPIVersionSettings, WriteFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_WriteFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_WriteFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DeleteFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DeleteFile = { "DeleteFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentsAPIVersionSettings, DeleteFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DeleteFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DeleteFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DuplicateFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSUserContentsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DuplicateFile = { "DuplicateFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentsAPIVersionSettings, DuplicateFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DuplicateFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DuplicateFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_QueryFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_ReadFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_WriteFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DeleteFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::NewProp_DuplicateFile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSUserContentsAPIVersionSettings",
		sizeof(FEOSUserContentsAPIVersionSettings),
		alignof(FEOSUserContentsAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSUserContentsAPIVersionSettings"), sizeof(FEOSUserContentsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings_Hash() { return 231603629U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
