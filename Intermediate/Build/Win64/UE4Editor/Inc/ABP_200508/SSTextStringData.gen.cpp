// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSTextStringData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSTextStringData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSTextStringData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSTextStringData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSTextStringData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSTextStringData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSTextStringData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSTextStringData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSTextStringData"), sizeof(FSSTextStringData), Get_Z_Construct_UScriptStruct_FSSTextStringData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSTextStringData>()
{
	return FSSTextStringData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSTextStringData(FSSTextStringData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSTextStringData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSTextStringData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSTextStringData()
	{
		UScriptStruct::DeferCppStructOps<FSSTextStringData>(FName(TEXT("SSTextStringData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSTextStringData;
	struct Z_Construct_UScriptStruct_FSSTextStringData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOfficial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextOfficial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSTextStringData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSTextStringData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSTextStringData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_SearchKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSTextStringData" },
		{ "ModuleRelativePath", "Public/SSTextStringData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_SearchKey = { "SearchKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSTextStringData, SearchKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_SearchKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_SearchKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSTextStringData" },
		{ "ModuleRelativePath", "Public/SSTextStringData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextBase = { "TextBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSTextStringData, TextBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextOfficial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSTextStringData" },
		{ "ModuleRelativePath", "Public/SSTextStringData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextOfficial = { "TextOfficial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSTextStringData, TextOfficial), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextOfficial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextOfficial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSTextStringData" },
		{ "ModuleRelativePath", "Public/SSTextStringData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextInfo = { "TextInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSTextStringData, TextInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSTextStringData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_SearchKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextOfficial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSTextStringData_Statics::NewProp_TextInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSTextStringData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSTextStringData",
		sizeof(FSSTextStringData),
		alignof(FSSTextStringData),
		Z_Construct_UScriptStruct_FSSTextStringData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSTextStringData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSTextStringData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSTextStringData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSTextStringData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSTextStringData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSTextStringData"), sizeof(FSSTextStringData), Get_Z_Construct_UScriptStruct_FSSTextStringData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSTextStringData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSTextStringData_Hash() { return 1669146233U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
