// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsProfileInfo_BP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsProfileInfo_BP() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo();
// End Cross Module References
class UScriptStruct* FELMatchRecordsProfileInfo_BP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsProfileInfo_BP"), sizeof(FELMatchRecordsProfileInfo_BP), Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsProfileInfo_BP>()
{
	return FELMatchRecordsProfileInfo_BP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsProfileInfo_BP(FELMatchRecordsProfileInfo_BP::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsProfileInfo_BP"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsProfileInfo_BP
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsProfileInfo_BP()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsProfileInfo_BP>(FName(TEXT("ELMatchRecordsProfileInfo_BP")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsProfileInfo_BP;
	struct Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponAttachCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableCrushCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TableCrushCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropOnThumbtacksCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DropOnThumbtacksCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasDroppedOnThumbtacksCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WasDroppedOnThumbtacksCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeupExplosion_MetaData[];
#endif
		static void NewProp_TimeupExplosion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TimeupExplosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EliminateInBattleRoyalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EliminateInBattleRoyalCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsProfileInfo_BP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchScore = { "MatchScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, MatchScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, MatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, MatchType), Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos_Inner = { "WeaponInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos = { "WeaponInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, WeaponInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponAttachCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponAttachCount = { "WeaponAttachCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, WeaponAttachCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponAttachCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponAttachCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TableCrushCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TableCrushCount = { "TableCrushCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, TableCrushCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TableCrushCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TableCrushCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_DropOnThumbtacksCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_DropOnThumbtacksCount = { "DropOnThumbtacksCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, DropOnThumbtacksCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_DropOnThumbtacksCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_DropOnThumbtacksCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WasDroppedOnThumbtacksCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WasDroppedOnThumbtacksCount = { "WasDroppedOnThumbtacksCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, WasDroppedOnThumbtacksCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WasDroppedOnThumbtacksCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WasDroppedOnThumbtacksCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_ExplosionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_ExplosionCount = { "ExplosionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, ExplosionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_ExplosionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_ExplosionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion_SetBit(void* Obj)
	{
		((FELMatchRecordsProfileInfo_BP*)Obj)->TimeupExplosion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion = { "TimeupExplosion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELMatchRecordsProfileInfo_BP), &Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_EliminateInBattleRoyalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_EliminateInBattleRoyalCount = { "EliminateInBattleRoyalCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, EliminateInBattleRoyalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_EliminateInBattleRoyalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_EliminateInBattleRoyalCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TotalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo_BP" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TotalDistance = { "TotalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo_BP, TotalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TotalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TotalDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WeaponAttachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TableCrushCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_DropOnThumbtacksCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_WasDroppedOnThumbtacksCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_ExplosionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TimeupExplosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_EliminateInBattleRoyalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::NewProp_TotalDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsProfileInfo_BP",
		sizeof(FELMatchRecordsProfileInfo_BP),
		alignof(FELMatchRecordsProfileInfo_BP),
		Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsProfileInfo_BP"), sizeof(FELMatchRecordsProfileInfo_BP), Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP_Hash() { return 1407040185U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
