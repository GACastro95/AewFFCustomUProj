// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserContentMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserContentMetaData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentMetaData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSUserContentMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSUserContentMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSUserContentMetaData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSUserContentMetaData"), sizeof(FEOSUserContentMetaData), Get_Z_Construct_UScriptStruct_FEOSUserContentMetaData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSUserContentMetaData>()
{
	return FEOSUserContentMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSUserContentMetaData(FEOSUserContentMetaData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSUserContentMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserContentMetaData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserContentMetaData()
	{
		UScriptStruct::DeferCppStructOps<FEOSUserContentMetaData>(FName(TEXT("EOSUserContentMetaData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSUserContentMetaData;
	struct Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSUserContentMetaData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSUserContentMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentMetaData" },
		{ "ModuleRelativePath", "Public/EOSUserContentMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentMetaData, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentMetaData" },
		{ "ModuleRelativePath", "Public/EOSUserContentMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentMetaData, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_FileSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentMetaData" },
		{ "ModuleRelativePath", "Public/EOSUserContentMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSUserContentMetaData, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_FileSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::NewProp_FileSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSUserContentMetaData",
		sizeof(FEOSUserContentMetaData),
		alignof(FEOSUserContentMetaData),
		Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSUserContentMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSUserContentMetaData"), sizeof(FEOSUserContentMetaData), Get_Z_Construct_UScriptStruct_FEOSUserContentMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSUserContentMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSUserContentMetaData_Hash() { return 3975921933U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
