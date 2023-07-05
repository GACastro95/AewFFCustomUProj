// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CommonWrestlerRaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWrestlerRaw() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCommonWrestlerRaw();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDataInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene();
// End Cross Module References
class UScriptStruct* FCommonWrestlerRaw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FCommonWrestlerRaw_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonWrestlerRaw, Z_Construct_UPackage__Script_Creation(), TEXT("CommonWrestlerRaw"), sizeof(FCommonWrestlerRaw), Get_Z_Construct_UScriptStruct_FCommonWrestlerRaw_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FCommonWrestlerRaw>()
{
	return FCommonWrestlerRaw::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonWrestlerRaw(FCommonWrestlerRaw::StaticStruct, TEXT("/Script/Creation"), TEXT("CommonWrestlerRaw"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFCommonWrestlerRaw
{
	FScriptStruct_Creation_StaticRegisterNativesFCommonWrestlerRaw()
	{
		UScriptStruct::DeferCppStructOps<FCommonWrestlerRaw>(FName(TEXT("CommonWrestlerRaw")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFCommonWrestlerRaw;
	struct Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDataInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDataInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePlayFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GamePlayFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresetNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPresetNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOVES_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MOVES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entrance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonWrestlerRaw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_CustomDataInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_CustomDataInfo = { "CustomDataInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, CustomDataInfo), Z_Construct_UScriptStruct_FCustomDataInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_CustomDataInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_CustomDataInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_GamePlayFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_GamePlayFlags = { "GamePlayFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, GamePlayFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_GamePlayFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_GamePlayFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_PresetNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_PresetNum = { "PresetNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, PresetNum), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_PresetNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_PresetNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_DefaultPresetNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_DefaultPresetNo = { "DefaultPresetNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, DefaultPresetNo), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_DefaultPresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_DefaultPresetNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_MOVES_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_MOVES = { "MOVES", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, MOVES), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_MOVES_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_MOVES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWrestlerRaw" },
		{ "ModuleRelativePath", "Public/CommonWrestlerRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonWrestlerRaw, Entrance), Z_Construct_UScriptStruct_FELWrestlerProfile_CutScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_Entrance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_CustomDataInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_GamePlayFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_PresetNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_DefaultPresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_MOVES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::NewProp_Entrance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"CommonWrestlerRaw",
		sizeof(FCommonWrestlerRaw),
		alignof(FCommonWrestlerRaw),
		Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonWrestlerRaw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonWrestlerRaw_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonWrestlerRaw"), sizeof(FCommonWrestlerRaw), Get_Z_Construct_UScriptStruct_FCommonWrestlerRaw_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonWrestlerRaw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonWrestlerRaw_Hash() { return 813132677U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
