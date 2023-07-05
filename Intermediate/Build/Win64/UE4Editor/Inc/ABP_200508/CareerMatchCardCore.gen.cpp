// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMatchCardCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMatchCardCore() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchCardCore();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerArenaType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
class UScriptStruct* FCareerMatchCardCore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMatchCardCore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMatchCardCore, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMatchCardCore"), sizeof(FCareerMatchCardCore), Get_Z_Construct_UScriptStruct_FCareerMatchCardCore_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMatchCardCore>()
{
	return FCareerMatchCardCore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMatchCardCore(FCareerMatchCardCore::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMatchCardCore"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchCardCore
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchCardCore()
	{
		UScriptStruct::DeferCppStructOps<FCareerMatchCardCore>(FName(TEXT("CareerMatchCardCore")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchCardCore;
	struct Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArenaRank_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArenaRank;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Player_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Partner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Partner_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Partner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpponentA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpponentA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpponentB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpponentB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpponentC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpponentC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpponentD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpponentD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Money_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Money;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChampionship_MetaData[];
#endif
		static void NewProp_bChampionship_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChampionship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TriggerProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMatchCardCore>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, MatchType), Z_Construct_UEnum_ABP_200508_ECareerMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank = { "ArenaRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, ArenaRank), Z_Construct_UEnum_ABP_200508_ECareerArenaType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, Player), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner = { "Partner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, Partner), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA = { "OpponentA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, OpponentA), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB = { "OpponentB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, OpponentB), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC = { "OpponentC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, OpponentC), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD = { "OpponentD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, OpponentD), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Skill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, Skill), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Skill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Money_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, Money), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Money_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Money_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship_SetBit(void* Obj)
	{
		((FCareerMatchCardCore*)Obj)->bChampionship = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship = { "bChampionship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchCardCore), &Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_TriggerProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchCardCore" },
		{ "ModuleRelativePath", "Public/CareerMatchCardCore.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_TriggerProgress = { "TriggerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchCardCore, TriggerProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_TriggerProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_TriggerProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_ArenaRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Partner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_OpponentD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_Money,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_bChampionship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::NewProp_TriggerProgress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerMatchCardCore",
		sizeof(FCareerMatchCardCore),
		alignof(FCareerMatchCardCore),
		Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchCardCore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMatchCardCore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMatchCardCore"), sizeof(FCareerMatchCardCore), Get_Z_Construct_UScriptStruct_FCareerMatchCardCore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMatchCardCore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMatchCardCore_Hash() { return 2561912160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
