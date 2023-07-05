// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPreloadAssetInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPreloadAssetInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPreloadAssetInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPreloadAssetPlayerInfo();
// End Cross Module References
class UScriptStruct* FSSPreloadAssetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPreloadAssetInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPreloadAssetInfo"), sizeof(FSSPreloadAssetInfo), Get_Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPreloadAssetInfo>()
{
	return FSSPreloadAssetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPreloadAssetInfo(FSSPreloadAssetInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPreloadAssetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPreloadAssetInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPreloadAssetInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSPreloadAssetInfo>(FName(TEXT("SSPreloadAssetInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPreloadAssetInfo;
	struct Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Synced_MetaData[];
#endif
		static void NewProp_Synced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Synced;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPreloadAssetInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPreloadAssetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPreloadAssetInfo" },
		{ "ModuleRelativePath", "Public/SSPreloadAssetInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced_SetBit(void* Obj)
	{
		((FSSPreloadAssetInfo*)Obj)->Synced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced = { "Synced", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSPreloadAssetInfo), &Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos_Inner = { "PlayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPreloadAssetPlayerInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPreloadAssetInfo" },
		{ "ModuleRelativePath", "Public/SSPreloadAssetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos = { "PlayerInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPreloadAssetInfo, PlayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_Synced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::NewProp_PlayerInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSPreloadAssetInfo",
		sizeof(FSSPreloadAssetInfo),
		alignof(FSSPreloadAssetInfo),
		Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPreloadAssetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPreloadAssetInfo"), sizeof(FSSPreloadAssetInfo), Get_Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPreloadAssetInfo_Hash() { return 3663192287U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
