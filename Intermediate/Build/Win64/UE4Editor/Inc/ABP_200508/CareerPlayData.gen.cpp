// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerPlayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerPlayData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerPlayData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerPlayData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerPlayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerPlayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerPlayData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerPlayData"), sizeof(FCareerPlayData), Get_Z_Construct_UScriptStruct_FCareerPlayData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerPlayData>()
{
	return FCareerPlayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerPlayData(FCareerPlayData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerPlayData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayData()
	{
		UScriptStruct::DeferCppStructOps<FCareerPlayData>(FName(TEXT("CareerPlayData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayData;
	struct Z_Construct_UScriptStruct_FCareerPlayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CareerDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LanguageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Authdata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerPlayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerPlayData>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList_Inner = { "CareerDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayData" },
		{ "ModuleRelativePath", "Public/CareerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList = { "CareerDataList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayData, CareerDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayData" },
		{ "ModuleRelativePath", "Public/CareerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayData, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_PlatformID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayData" },
		{ "ModuleRelativePath", "Public/CareerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_PlatformID = { "PlatformID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayData, PlatformID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_PlatformID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_PlatformID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_LanguageID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayData" },
		{ "ModuleRelativePath", "Public/CareerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_LanguageID = { "LanguageID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayData, LanguageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_LanguageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_LanguageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Authdata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayData" },
		{ "ModuleRelativePath", "Public/CareerPlayData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Authdata = { "Authdata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayData, Authdata), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Authdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Authdata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_CareerDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_PlatformID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_LanguageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayData_Statics::NewProp_Authdata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerPlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerPlayData",
		sizeof(FCareerPlayData),
		alignof(FCareerPlayData),
		Z_Construct_UScriptStruct_FCareerPlayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerPlayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerPlayData"), sizeof(FCareerPlayData), Get_Z_Construct_UScriptStruct_FCareerPlayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerPlayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerPlayData_Hash() { return 1238791106U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
