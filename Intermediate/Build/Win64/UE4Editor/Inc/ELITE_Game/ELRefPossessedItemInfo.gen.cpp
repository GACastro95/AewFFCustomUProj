// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELRefPossessedItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELRefPossessedItemInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELRefPossessedItemInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData();
// End Cross Module References
class UScriptStruct* FELRefPossessedItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELRefPossessedItemInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELRefPossessedItemInfo"), sizeof(FELRefPossessedItemInfo), Get_Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELRefPossessedItemInfo>()
{
	return FELRefPossessedItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELRefPossessedItemInfo(FELRefPossessedItemInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELRefPossessedItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELRefPossessedItemInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELRefPossessedItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FELRefPossessedItemInfo>(FName(TEXT("ELRefPossessedItemInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELRefPossessedItemInfo;
	struct Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELRefPossessedItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELRefPossessedItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_ItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRefPossessedItemInfo" },
		{ "ModuleRelativePath", "Public/ELRefPossessedItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_ItemParam = { "ItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRefPossessedItemInfo, ItemParam), Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_ItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_ItemParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_SaveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRefPossessedItemInfo" },
		{ "ModuleRelativePath", "Public/ELRefPossessedItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRefPossessedItemInfo, SaveData), Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_SaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_SaveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_ItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::NewProp_SaveData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELRefPossessedItemInfo",
		sizeof(FELRefPossessedItemInfo),
		alignof(FELRefPossessedItemInfo),
		Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELRefPossessedItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELRefPossessedItemInfo"), sizeof(FELRefPossessedItemInfo), Get_Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELRefPossessedItemInfo_Hash() { return 1863455434U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
