// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeAchievementParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeAchievementParameter() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeAchievementParameter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengePeriodType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeActionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeOpponentState();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeCpuDifficultyType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeMatchEndConditionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeWinTheTitleType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBattlePassRewardItemType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeTextFormatType();
// End Cross Module References

static_assert(std::is_polymorphic<FChallengeAchievementParameter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FChallengeAchievementParameter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FChallengeAchievementParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeAchievementParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeAchievementParameter, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeAchievementParameter"), sizeof(FChallengeAchievementParameter), Get_Z_Construct_UScriptStruct_FChallengeAchievementParameter_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeAchievementParameter>()
{
	return FChallengeAchievementParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeAchievementParameter(FChallengeAchievementParameter::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeAchievementParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeAchievementParameter
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeAchievementParameter()
	{
		UScriptStruct::DeferCppStructOps<FChallengeAchievementParameter>(FName(TEXT("ChallengeAchievementParameter")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeAchievementParameter;
	struct Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineModeOnly_MetaData[];
#endif
		static void NewProp_OnlineModeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlineModeOnly;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeriodType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeriodType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeriodType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchRuleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchRuleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchRuleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UseWrestler_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UseWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpponentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpponentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CpuDifficultyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CpuDifficultyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CpuDifficultyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchEndConditionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchEndConditionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchEndConditionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitSkillType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSkillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitSkillType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WinTheTitleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinTheTitleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WinTheTitleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionalValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AchievementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardAEWCash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardAEWCash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardBattlePassPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardBattlePassPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RewardItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardItemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextFormatType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextFormatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextFormatType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeAchievementParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly_SetBit(void* Obj)
	{
		((FChallengeAchievementParameter*)Obj)->OnlineModeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly = { "OnlineModeOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChallengeAchievementParameter), &Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType = { "PeriodType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, PeriodType), Z_Construct_UEnum_ABP_200508_EChallengePeriodType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, ActionType), Z_Construct_UEnum_ABP_200508_EChallengeActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType = { "MatchRuleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, MatchRuleType), Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler = { "UseWrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, UseWrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState = { "OpponentState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, OpponentState), Z_Construct_UEnum_ABP_200508_EChallengeOpponentState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType = { "CpuDifficultyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, CpuDifficultyType), Z_Construct_UEnum_ABP_200508_EChallengeCpuDifficultyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType = { "MatchEndConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, MatchEndConditionType), Z_Construct_UEnum_ABP_200508_EChallengeMatchEndConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType = { "HitSkillType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, HitSkillType), Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType = { "WinTheTitleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, WinTheTitleType), Z_Construct_UEnum_ABP_200508_EChallengeWinTheTitleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OptionalValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OptionalValue = { "OptionalValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, OptionalValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OptionalValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OptionalValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_AchievementCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_AchievementCount = { "AchievementCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, AchievementCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_AchievementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_AchievementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardAEWCash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardAEWCash = { "RewardAEWCash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, RewardAEWCash), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardAEWCash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardAEWCash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardBattlePassPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardBattlePassPoint = { "RewardBattlePassPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, RewardBattlePassPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardBattlePassPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardBattlePassPoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType = { "RewardItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, RewardItemType), Z_Construct_UEnum_ABP_200508_EBattlePassRewardItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemId = { "RewardItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, RewardItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemNum = { "RewardItemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, RewardItemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAchievementParameter" },
		{ "ModuleRelativePath", "Public/ChallengeAchievementParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType = { "TextFormatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAchievementParameter, TextFormatType), Z_Construct_UEnum_ABP_200508_EChallengeTextFormatType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OnlineModeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_PeriodType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchRuleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_UseWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OpponentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_CpuDifficultyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_MatchEndConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_HitSkillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_WinTheTitleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_OptionalValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_AchievementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardAEWCash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardBattlePassPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_RewardItemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::NewProp_TextFormatType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ChallengeAchievementParameter",
		sizeof(FChallengeAchievementParameter),
		alignof(FChallengeAchievementParameter),
		Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeAchievementParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeAchievementParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeAchievementParameter"), sizeof(FChallengeAchievementParameter), Get_Z_Construct_UScriptStruct_FChallengeAchievementParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeAchievementParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeAchievementParameter_Hash() { return 3222708693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
