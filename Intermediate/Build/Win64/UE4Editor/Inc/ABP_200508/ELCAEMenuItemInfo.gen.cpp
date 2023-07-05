// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCAEMenuItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCAEMenuItemInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELCAEMenuItemInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELCAEMenuItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCAEMenuItemInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELCAEMenuItemInfo"), sizeof(FELCAEMenuItemInfo), Get_Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELCAEMenuItemInfo>()
{
	return FELCAEMenuItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCAEMenuItemInfo(FELCAEMenuItemInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELCAEMenuItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELCAEMenuItemInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELCAEMenuItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FELCAEMenuItemInfo>(FName(TEXT("ELCAEMenuItemInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELCAEMenuItemInfo;
	struct Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCAEMenuItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCAEMenuItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEMenuItemInfo" },
		{ "ModuleRelativePath", "Public/ELCAEMenuItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCAEMenuItemInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_UnlockID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAEMenuItemInfo" },
		{ "ModuleRelativePath", "Public/ELCAEMenuItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_UnlockID = { "UnlockID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCAEMenuItemInfo, UnlockID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_UnlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_UnlockID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::NewProp_UnlockID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELCAEMenuItemInfo",
		sizeof(FELCAEMenuItemInfo),
		alignof(FELCAEMenuItemInfo),
		Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCAEMenuItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCAEMenuItemInfo"), sizeof(FELCAEMenuItemInfo), Get_Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCAEMenuItemInfo_Hash() { return 3021420303U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
