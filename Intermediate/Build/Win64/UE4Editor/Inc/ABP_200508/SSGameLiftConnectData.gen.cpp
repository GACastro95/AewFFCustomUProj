// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGameLiftConnectData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGameLiftConnectData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameLiftConnectData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSGameLiftConnectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGameLiftConnectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGameLiftConnectData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGameLiftConnectData"), sizeof(FSSGameLiftConnectData), Get_Z_Construct_UScriptStruct_FSSGameLiftConnectData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGameLiftConnectData>()
{
	return FSSGameLiftConnectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGameLiftConnectData(FSSGameLiftConnectData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGameLiftConnectData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameLiftConnectData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameLiftConnectData()
	{
		UScriptStruct::DeferCppStructOps<FSSGameLiftConnectData>(FName(TEXT("SSGameLiftConnectData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGameLiftConnectData;
	struct Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awsAccessKeyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_awsAccessKeyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awsSecretAccessKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_awsSecretAccessKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awsTargetRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_awsTargetRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awsAliasId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_awsAliasId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGameLiftConnectData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGameLiftConnectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAccessKeyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameLiftConnectData" },
		{ "ModuleRelativePath", "Public/SSGameLiftConnectData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAccessKeyId = { "awsAccessKeyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameLiftConnectData, awsAccessKeyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAccessKeyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAccessKeyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsSecretAccessKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameLiftConnectData" },
		{ "ModuleRelativePath", "Public/SSGameLiftConnectData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsSecretAccessKey = { "awsSecretAccessKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameLiftConnectData, awsSecretAccessKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsSecretAccessKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsSecretAccessKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsTargetRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameLiftConnectData" },
		{ "ModuleRelativePath", "Public/SSGameLiftConnectData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsTargetRegion = { "awsTargetRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameLiftConnectData, awsTargetRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsTargetRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsTargetRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAliasId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameLiftConnectData" },
		{ "ModuleRelativePath", "Public/SSGameLiftConnectData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAliasId = { "awsAliasId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameLiftConnectData, awsAliasId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAliasId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAliasId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAccessKeyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsSecretAccessKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsTargetRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::NewProp_awsAliasId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSGameLiftConnectData",
		sizeof(FSSGameLiftConnectData),
		alignof(FSSGameLiftConnectData),
		Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGameLiftConnectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGameLiftConnectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGameLiftConnectData"), sizeof(FSSGameLiftConnectData), Get_Z_Construct_UScriptStruct_FSSGameLiftConnectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGameLiftConnectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGameLiftConnectData_Hash() { return 4169173866U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
