// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerPlayerItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerPlayerItemInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayerItemInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerPlayerItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerPlayerItemInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerPlayerItemInfo"), sizeof(FCareerPlayerItemInfo), Get_Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerPlayerItemInfo>()
{
	return FCareerPlayerItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerPlayerItemInfo(FCareerPlayerItemInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerPlayerItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayerItemInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayerItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerPlayerItemInfo>(FName(TEXT("CareerPlayerItemInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayerItemInfo;
	struct Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemNum_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedItemEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UsedItemEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerPlayerItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerPlayerItemInfo>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum_Inner = { "ItemNum", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayerItemInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayerItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum = { "ItemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayerItemInfo, ItemNum), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_UsedItemEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayerItemInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayerItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_UsedItemEffect = { "UsedItemEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayerItemInfo, UsedItemEffect), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_UsedItemEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_UsedItemEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_ItemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::NewProp_UsedItemEffect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerPlayerItemInfo",
		sizeof(FCareerPlayerItemInfo),
		alignof(FCareerPlayerItemInfo),
		Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayerItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerPlayerItemInfo"), sizeof(FCareerPlayerItemInfo), Get_Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerPlayerItemInfo_Hash() { return 3785590402U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
