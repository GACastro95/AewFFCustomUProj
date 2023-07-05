// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLotParamBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLotParamBase() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotParamBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSLotParamBase>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSLotParamBase cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSLotParamBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLotParamBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLotParamBase, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLotParamBase"), sizeof(FSSLotParamBase), Get_Z_Construct_UScriptStruct_FSSLotParamBase_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLotParamBase>()
{
	return FSSLotParamBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLotParamBase(FSSLotParamBase::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLotParamBase"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotParamBase
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotParamBase()
	{
		UScriptStruct::DeferCppStructOps<FSSLotParamBase>(FName(TEXT("SSLotParamBase")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLotParamBase;
	struct Z_Construct_UScriptStruct_FSSLotParamBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LotWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LotWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotParamBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLotParamBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLotParamBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotGroupID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLotParamBase" },
		{ "ModuleRelativePath", "Public/SSLotParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotGroupID = { "LotGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLotParamBase, LotGroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLotParamBase" },
		{ "ModuleRelativePath", "Public/SSLotParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotWeight = { "LotWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLotParamBase, LotWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLotParamBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotParamBase_Statics::NewProp_LotWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLotParamBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSLotParamBase",
		sizeof(FSSLotParamBase),
		alignof(FSSLotParamBase),
		Z_Construct_UScriptStruct_FSSLotParamBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotParamBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLotParamBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLotParamBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLotParamBase"), sizeof(FSSLotParamBase), Get_Z_Construct_UScriptStruct_FSSLotParamBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLotParamBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLotParamBase_Hash() { return 136008089U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
