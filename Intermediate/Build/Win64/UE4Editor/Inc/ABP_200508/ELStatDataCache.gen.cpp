// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELStatDataCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELStatDataCache() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELStatDataCache();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELStatsDataType();
// End Cross Module References
class UScriptStruct* FELStatDataCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELStatDataCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELStatDataCache, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELStatDataCache"), sizeof(FELStatDataCache), Get_Z_Construct_UScriptStruct_FELStatDataCache_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELStatDataCache>()
{
	return FELStatDataCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELStatDataCache(FELStatDataCache::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELStatDataCache"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELStatDataCache
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELStatDataCache()
	{
		UScriptStruct::DeferCppStructOps<FELStatDataCache>(FName(TEXT("ELStatDataCache")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELStatDataCache;
	struct Z_Construct_UScriptStruct_FELStatDataCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IngestValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IngestValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQueried_MetaData[];
#endif
		static void NewProp_bQueried_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQueried;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirty_MetaData[];
#endif
		static void NewProp_bDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitIngest_MetaData[];
#endif
		static void NewProp_bWaitIngest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitIngest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELStatDataCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELStatDataCache, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELStatDataCache, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_IngestValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_IngestValue = { "IngestValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELStatDataCache, IngestValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_IngestValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_IngestValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELStatDataCache, DataType), Z_Construct_UEnum_ABP_200508_EELStatsDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried_SetBit(void* Obj)
	{
		((FELStatDataCache*)Obj)->bQueried = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried = { "bQueried", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELStatDataCache), &Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty_SetBit(void* Obj)
	{
		((FELStatDataCache*)Obj)->bDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty = { "bDirty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELStatDataCache), &Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStatDataCache" },
		{ "ModuleRelativePath", "Public/ELStatDataCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest_SetBit(void* Obj)
	{
		((FELStatDataCache*)Obj)->bWaitIngest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest = { "bWaitIngest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELStatDataCache), &Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELStatDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_IngestValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bQueried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELStatDataCache_Statics::NewProp_bWaitIngest,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELStatDataCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELStatDataCache",
		sizeof(FELStatDataCache),
		alignof(FELStatDataCache),
		Z_Construct_UScriptStruct_FELStatDataCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELStatDataCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELStatDataCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELStatDataCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELStatDataCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELStatDataCache"), sizeof(FELStatDataCache), Get_Z_Construct_UScriptStruct_FELStatDataCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELStatDataCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELStatDataCache_Hash() { return 1059856443U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
