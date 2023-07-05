// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLotItemCategoryParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLotItemCategoryParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotItemCategoryParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotParamBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnItemCategory();
// End Cross Module References

static_assert(std::is_polymorphic<FSSLotItemCategoryParam>() == std::is_polymorphic<FSSLotParamBase>(), "USTRUCT FSSLotItemCategoryParam cannot be polymorphic unless super FSSLotParamBase is polymorphic");

class UScriptStruct* FSSLotItemCategoryParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLotItemCategoryParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLotItemCategoryParam"), sizeof(FSSLotItemCategoryParam), Get_Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLotItemCategoryParam>()
{
	return FSSLotItemCategoryParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLotItemCategoryParam(FSSLotItemCategoryParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLotItemCategoryParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotItemCategoryParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotItemCategoryParam()
	{
		UScriptStruct::DeferCppStructOps<FSSLotItemCategoryParam>(FName(TEXT("SSLotItemCategoryParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLotItemCategoryParam;
	struct Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLotItemCategoryParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLotItemCategoryParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLotItemCategoryParam" },
		{ "ModuleRelativePath", "Public/SSLotItemCategoryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLotItemCategoryParam, Category), Z_Construct_UEnum_ABP_200508_ESSSpawnItemCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::NewProp_Category,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSLotParamBase,
		&NewStructOps,
		"SSLotItemCategoryParam",
		sizeof(FSSLotItemCategoryParam),
		alignof(FSSLotItemCategoryParam),
		Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLotItemCategoryParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLotItemCategoryParam"), sizeof(FSSLotItemCategoryParam), Get_Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLotItemCategoryParam_Hash() { return 729000395U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
