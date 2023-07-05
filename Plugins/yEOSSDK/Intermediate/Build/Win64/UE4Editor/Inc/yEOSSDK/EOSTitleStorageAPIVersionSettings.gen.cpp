// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSTitleStorageAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorageAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSTitleStorageAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSTitleStorageAPIVersionSettings"), sizeof(FEOSTitleStorageAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSTitleStorageAPIVersionSettings>()
{
	return FEOSTitleStorageAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSTitleStorageAPIVersionSettings(FEOSTitleStorageAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSTitleStorageAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSTitleStorageAPIVersionSettings>(FName(TEXT("EOSTitleStorageAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileMetadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryFileList_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryFileList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetFileMetadataCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetFileMetadataCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyFileMetadataAtIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyFileMetadataAtIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyFileMetadataByFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyFileMetadataByFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReadFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeleteCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSTitleStorageAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_FileMetadata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_FileMetadata = { "FileMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, FileMetadata), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_FileMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_FileMetadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFile = { "QueryFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, QueryFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFileList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFileList = { "QueryFileList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, QueryFileList), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFileList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFileList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_GetFileMetadataCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_GetFileMetadataCount = { "GetFileMetadataCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, GetFileMetadataCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_GetFileMetadataCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_GetFileMetadataCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex = { "CopyFileMetadataAtIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, CopyFileMetadataAtIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataByFilename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataByFilename = { "CopyFileMetadataByFilename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, CopyFileMetadataByFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataByFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataByFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_ReadFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_ReadFile = { "ReadFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, ReadFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_ReadFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_ReadFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_DeleteCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_DeleteCache = { "DeleteCache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageAPIVersionSettings, DeleteCache), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_DeleteCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_DeleteCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_FileMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_QueryFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_GetFileMetadataCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataAtIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_CopyFileMetadataByFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_ReadFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::NewProp_DeleteCache,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSTitleStorageAPIVersionSettings",
		sizeof(FEOSTitleStorageAPIVersionSettings),
		alignof(FEOSTitleStorageAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSTitleStorageAPIVersionSettings"), sizeof(FEOSTitleStorageAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings_Hash() { return 3563571453U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
