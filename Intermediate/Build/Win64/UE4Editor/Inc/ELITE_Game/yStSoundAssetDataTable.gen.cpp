// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/yStSoundAssetDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyStSoundAssetDataTable() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FyStSoundAssetDataTable();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FyStSoundAssetDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FyStSoundAssetDataTable, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("yStSoundAssetDataTable"), sizeof(FyStSoundAssetDataTable), Get_Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FyStSoundAssetDataTable>()
{
	return FyStSoundAssetDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FyStSoundAssetDataTable(FyStSoundAssetDataTable::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("yStSoundAssetDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFyStSoundAssetDataTable
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFyStSoundAssetDataTable()
	{
		UScriptStruct::DeferCppStructOps<FyStSoundAssetDataTable>(FName(TEXT("yStSoundAssetDataTable")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFyStSoundAssetDataTable;
	struct Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_DTAssetForEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_DTAssetForEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_DTAssetForNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_DTAssetForNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGM_DTAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BGM_DTAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voice_DTAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Voice_DTAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voice_DTMSfxList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Voice_DTMSfxList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/yStSoundAssetDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FyStSoundAssetDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForEnum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundAssetDataTable" },
		{ "ModuleRelativePath", "Public/yStSoundAssetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForEnum = { "Sound_DTAssetForEnum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundAssetDataTable, Sound_DTAssetForEnum), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForEnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundAssetDataTable" },
		{ "ModuleRelativePath", "Public/yStSoundAssetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForNum = { "Sound_DTAssetForNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundAssetDataTable, Sound_DTAssetForNum), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_BGM_DTAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundAssetDataTable" },
		{ "ModuleRelativePath", "Public/yStSoundAssetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_BGM_DTAsset = { "BGM_DTAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundAssetDataTable, BGM_DTAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_BGM_DTAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_BGM_DTAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundAssetDataTable" },
		{ "ModuleRelativePath", "Public/yStSoundAssetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTAsset = { "Voice_DTAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundAssetDataTable, Voice_DTAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTMSfxList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundAssetDataTable" },
		{ "ModuleRelativePath", "Public/yStSoundAssetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTMSfxList = { "Voice_DTMSfxList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundAssetDataTable, Voice_DTMSfxList), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTMSfxList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTMSfxList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Sound_DTAssetForNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_BGM_DTAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::NewProp_Voice_DTMSfxList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"yStSoundAssetDataTable",
		sizeof(FyStSoundAssetDataTable),
		alignof(FyStSoundAssetDataTable),
		Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FyStSoundAssetDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("yStSoundAssetDataTable"), sizeof(FyStSoundAssetDataTable), Get_Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FyStSoundAssetDataTable_Hash() { return 1207662531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
