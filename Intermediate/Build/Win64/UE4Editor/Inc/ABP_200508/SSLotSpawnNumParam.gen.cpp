// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLotSpawnNumParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLotSpawnNumParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotSpawnNumParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotParamBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSLotSpawnNumParam>() == std::is_polymorphic<FSSLotParamBase>(), "USTRUCT FSSLotSpawnNumParam cannot be polymorphic unless super FSSLotParamBase is polymorphic");

class UScriptStruct* FSSLotSpawnNumParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLotSpawnNumParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLotSpawnNumParam"), sizeof(FSSLotSpawnNumParam), Get_Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLotSpawnNumParam>()
{
	return FSSLotSpawnNumParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLotSpawnNumParam(FSSLotSpawnNumParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLotSpawnNumParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotSpawnNumParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotSpawnNumParam()
	{
		UScriptStruct::DeferCppStructOps<FSSLotSpawnNumParam>(FName(TEXT("SSLotSpawnNumParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLotSpawnNumParam;
	struct Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLotSpawnNumParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLotSpawnNumParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::NewProp_SpawnNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLotSpawnNumParam" },
		{ "ModuleRelativePath", "Public/SSLotSpawnNumParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::NewProp_SpawnNum = { "SpawnNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLotSpawnNumParam, SpawnNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::NewProp_SpawnNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::NewProp_SpawnNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::NewProp_SpawnNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSLotParamBase,
		&NewStructOps,
		"SSLotSpawnNumParam",
		sizeof(FSSLotSpawnNumParam),
		alignof(FSSLotSpawnNumParam),
		Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLotSpawnNumParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLotSpawnNumParam"), sizeof(FSSLotSpawnNumParam), Get_Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLotSpawnNumParam_Hash() { return 908251150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
