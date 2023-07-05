// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFileOnMemory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFileOnMemory() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFileOnMemory();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSFileOnMemory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSFileOnMemory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSFileOnMemory, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSFileOnMemory"), sizeof(FEOSFileOnMemory), Get_Z_Construct_UScriptStruct_FEOSFileOnMemory_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSFileOnMemory>()
{
	return FEOSFileOnMemory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSFileOnMemory(FEOSFileOnMemory::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSFileOnMemory"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSFileOnMemory
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSFileOnMemory()
	{
		UScriptStruct::DeferCppStructOps<FEOSFileOnMemory>(FName(TEXT("EOSFileOnMemory")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSFileOnMemory;
	struct Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Binary_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Binary_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Binary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSFileOnMemory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSFileOnMemory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFileOnMemory" },
		{ "ModuleRelativePath", "Public/EOSFileOnMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFileOnMemory, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary_Inner = { "Binary", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFileOnMemory" },
		{ "ModuleRelativePath", "Public/EOSFileOnMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary = { "Binary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSFileOnMemory, Binary), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::NewProp_Binary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSFileOnMemory",
		sizeof(FEOSFileOnMemory),
		alignof(FEOSFileOnMemory),
		Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSFileOnMemory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSFileOnMemory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSFileOnMemory"), sizeof(FEOSFileOnMemory), Get_Z_Construct_UScriptStruct_FEOSFileOnMemory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSFileOnMemory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSFileOnMemory_Hash() { return 37529251U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
