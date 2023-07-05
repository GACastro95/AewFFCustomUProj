// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/WrestlerIDInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerIDInfo() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerIDInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
class UScriptStruct* FWrestlerIDInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FWrestlerIDInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlerIDInfo, Z_Construct_UPackage__Script_ELITE(), TEXT("WrestlerIDInfo"), sizeof(FWrestlerIDInfo), Get_Z_Construct_UScriptStruct_FWrestlerIDInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FWrestlerIDInfo>()
{
	return FWrestlerIDInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlerIDInfo(FWrestlerIDInfo::StaticStruct, TEXT("/Script/ELITE"), TEXT("WrestlerIDInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFWrestlerIDInfo
{
	FScriptStruct_ELITE_StaticRegisterNativesFWrestlerIDInfo()
	{
		UScriptStruct::DeferCppStructOps<FWrestlerIDInfo>(FName(TEXT("WrestlerIDInfo")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFWrestlerIDInfo;
	struct Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntCostume_MetaData[];
#endif
		static void NewProp_bEntCostume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntCostume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sCostumeNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sCostumeNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WrestlerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlerIDInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlerIDInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerIDInfo" },
		{ "ModuleRelativePath", "Public/WrestlerIDInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerIDInfo, WrestlerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerIDInfo" },
		{ "ModuleRelativePath", "Public/WrestlerIDInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume_SetBit(void* Obj)
	{
		((FWrestlerIDInfo*)Obj)->bEntCostume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume = { "bEntCostume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWrestlerIDInfo), &Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_sCostumeNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerIDInfo" },
		{ "ModuleRelativePath", "Public/WrestlerIDInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_sCostumeNo = { "sCostumeNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerIDInfo, sCostumeNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_sCostumeNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_sCostumeNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerIDInfo" },
		{ "ModuleRelativePath", "Public/WrestlerIDInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerIDInfo, WrestlerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_bEntCostume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_sCostumeNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::NewProp_WrestlerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"WrestlerIDInfo",
		sizeof(FWrestlerIDInfo),
		alignof(FWrestlerIDInfo),
		Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlerIDInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlerIDInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlerIDInfo"), sizeof(FWrestlerIDInfo), Get_Z_Construct_UScriptStruct_FWrestlerIDInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlerIDInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlerIDInfo_Hash() { return 4023936518U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
