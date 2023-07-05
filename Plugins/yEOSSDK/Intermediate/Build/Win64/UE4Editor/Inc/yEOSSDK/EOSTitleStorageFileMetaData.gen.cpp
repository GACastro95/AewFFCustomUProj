// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSTitleStorageFileMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorageFileMetaData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSTitleStorageFileMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSTitleStorageFileMetaData"), sizeof(FEOSTitleStorageFileMetaData), Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSTitleStorageFileMetaData>()
{
	return FEOSTitleStorageFileMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSTitleStorageFileMetaData(FEOSTitleStorageFileMetaData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSTitleStorageFileMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageFileMetaData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageFileMetaData()
	{
		UScriptStruct::DeferCppStructOps<FEOSTitleStorageFileMetaData>(FName(TEXT("EOSTitleStorageFileMetaData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSTitleStorageFileMetaData;
	struct Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageFileMetaData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSTitleStorageFileMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageFileMetaData" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageFileMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageFileMetaData, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageFileMetaData" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageFileMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageFileMetaData, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_FileSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageFileMetaData" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageFileMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSTitleStorageFileMetaData, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_FileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::NewProp_FileSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSTitleStorageFileMetaData",
		sizeof(FEOSTitleStorageFileMetaData),
		alignof(FEOSTitleStorageFileMetaData),
		Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSTitleStorageFileMetaData"), sizeof(FEOSTitleStorageFileMetaData), Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData_Hash() { return 527301895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
