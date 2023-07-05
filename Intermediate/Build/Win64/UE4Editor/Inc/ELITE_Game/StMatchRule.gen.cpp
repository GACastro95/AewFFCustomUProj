// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/StMatchRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMatchRule() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FStMatchRule();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMenuMatchType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchMode();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchRuleType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FStDebugMatchType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRule_Native();
// End Cross Module References
class UScriptStruct* FStMatchRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FStMatchRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMatchRule, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("StMatchRule"), sizeof(FStMatchRule), Get_Z_Construct_UScriptStruct_FStMatchRule_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FStMatchRule>()
{
	return FStMatchRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMatchRule(FStMatchRule::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("StMatchRule"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFStMatchRule
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFStMatchRule()
	{
		UScriptStruct::DeferCppStructOps<FStMatchRule>(FName(TEXT("StMatchRule")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFStMatchRule;
	struct Z_Construct_UScriptStruct_FStMatchRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataMiningID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataMiningID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseReferee_MetaData[];
#endif
		static void NewProp_bUseReferee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseReferee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPin_MetaData[];
#endif
		static void NewProp_bPin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubmission_MetaData[];
#endif
		static void NewProp_bSubmission_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubmission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnywherePin_MetaData[];
#endif
		static void NewProp_bAnywherePin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnywherePin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnywhereSubmission_MetaData[];
#endif
		static void NewProp_bAnywhereSubmission_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnywhereSubmission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOvertheTopRope_MetaData[];
#endif
		static void NewProp_bOvertheTopRope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOvertheTopRope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDQ_MetaData[];
#endif
		static void NewProp_bDQ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingOutCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingOutCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinisherDeath_MetaData[];
#endif
		static void NewProp_bFinisherDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinisherDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHPDeath_MetaData[];
#endif
		static void NewProp_bHPDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHPDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBattleRoyale_MetaData[];
#endif
		static void NewProp_bBattleRoyale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBattleRoyale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrump_MetaData[];
#endif
		static void NewProp_bTrump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrumpTeam_MetaData[];
#endif
		static void NewProp_bTrumpTeam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrumpTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrumpSwap_MetaData[];
#endif
		static void NewProp_bTrumpSwap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrumpSwap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplodingBarbedWireDeathMatch_MetaData[];
#endif
		static void NewProp_bExplodingBarbedWireDeathMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplodingBarbedWireDeathMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLightsOut_MetaData[];
#endif
		static void NewProp_bLightsOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLightsOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTornadoTag_MetaData[];
#endif
		static void NewProp_bTornadoTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTornadoTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRingOnly_MetaData[];
#endif
		static void NewProp_bRingOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRingOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTagMove_MetaData[];
#endif
		static void NewProp_bTagMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTagMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleTeamMove_MetaData[];
#endif
		static void NewProp_bDoubleTeamMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleTeamMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCombination_MetaData[];
#endif
		static void NewProp_bCombination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCombination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChopBattle_MetaData[];
#endif
		static void NewProp_bChopBattle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChopBattle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChainWrestring_MetaData[];
#endif
		static void NewProp_bChainWrestring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChainWrestring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shock_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Momentum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Momentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BumpAndFeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BumpAndFeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropList_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PropList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainGrapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTargetLine_MetaData[];
#endif
		static void NewProp_bTargetLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManagerP1_MetaData[];
#endif
		static void NewProp_bManagerP1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManagerP1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManagerP2_MetaData[];
#endif
		static void NewProp_bManagerP2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManagerP2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MenuMatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuMatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MenuMatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchRuleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchRuleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchRuleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrongGrapple_MetaData[];
#endif
		static void NewProp_bStrongGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrongGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDispDamage_MetaData[];
#endif
		static void NewProp_bDispDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDispDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraningMode_MetaData[];
#endif
		static void NewProp_bTraningMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraningMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipEntrance_MetaData[];
#endif
		static void NewProp_bSkipEntrance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEntrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableOtherPadFinish_MetaData[];
#endif
		static void NewProp_bDisableOtherPadFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableOtherPadFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipVictory_MetaData[];
#endif
		static void NewProp_bSkipVictory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipVictory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGauntlet_MetaData[];
#endif
		static void NewProp_bGauntlet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGauntlet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipResult_MetaData[];
#endif
		static void NewProp_bSkipResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHostPadDeath_MetaData[];
#endif
		static void NewProp_bHostPadDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHostPadDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingEscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMatchID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefereeID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefereeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RefereeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLadder_MetaData[];
#endif
		static void NewProp_bLadder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLadder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatchScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipMatchUp_MetaData[];
#endif
		static void NewProp_bSkipMatchUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipMatchUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControlTagPartnerTeam0_MetaData[];
#endif
		static void NewProp_bControlTagPartnerTeam0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControlTagPartnerTeam0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControlTagPartnerTeam1_MetaData[];
#endif
		static void NewProp_bControlTagPartnerTeam1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControlTagPartnerTeam1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMatchRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMatchRule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DataMiningID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DataMiningID = { "DataMiningID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, DataMiningID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DataMiningID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DataMiningID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bUseReferee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee = { "bUseReferee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin = { "bPin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bSubmission = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission = { "bSubmission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bAnywherePin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin = { "bAnywherePin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bAnywhereSubmission = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission = { "bAnywhereSubmission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bOvertheTopRope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope = { "bOvertheTopRope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bDQ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ = { "bDQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingOutCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingOutCount = { "RingOutCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, RingOutCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingOutCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingOutCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bFinisherDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath = { "bFinisherDeath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bHPDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath = { "bHPDeath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_TimeUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_TimeUp = { "TimeUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, TimeUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_TimeUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_TimeUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bBattleRoyale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale = { "bBattleRoyale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTrump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump = { "bTrump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTrumpTeam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam = { "bTrumpTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTrumpSwap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap = { "bTrumpSwap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bExplodingBarbedWireDeathMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch = { "bExplodingBarbedWireDeathMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bLightsOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut = { "bLightsOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTornadoTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag = { "bTornadoTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bRingOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly = { "bRingOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTagMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove = { "bTagMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bDoubleTeamMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove = { "bDoubleTeamMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bCombination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination = { "bCombination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bChopBattle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle = { "bChopBattle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bChainWrestring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring = { "bChainWrestring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Shock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Shock = { "Shock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, Shock), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Shock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Shock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Momentum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Momentum = { "Momentum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, Momentum), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Momentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Momentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_BumpAndFeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_BumpAndFeed = { "BumpAndFeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, BumpAndFeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_BumpAndFeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_BumpAndFeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PropList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PropList = { "PropList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, PropList), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PropList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PropList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_ChainGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_ChainGrapple = { "ChainGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, ChainGrapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_ChainGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_ChainGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PlayerDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PlayerDefault = { "PlayerDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, PlayerDefault), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PlayerDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PlayerDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTargetLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine = { "bTargetLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bManagerP1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1 = { "bManagerP1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bManagerP2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2 = { "bManagerP2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, MatchType), Z_Construct_UEnum_ELITE_Game_EELMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType = { "MenuMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, MenuMatchType), Z_Construct_UEnum_ELITE_Game_EELMenuMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode = { "MatchMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, MatchMode), Z_Construct_UEnum_ELITE_Game_EELMatchMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType = { "MatchRuleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, MatchRuleType), Z_Construct_UEnum_ELITE_Game_EELMatchRuleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DebugRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DebugRule = { "DebugRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, DebugRule), Z_Construct_UScriptStruct_FStDebugMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DebugRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DebugRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bStrongGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple = { "bStrongGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bDispDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage = { "bDispDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bTraningMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode = { "bTraningMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Option_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, Option), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bSkipEntrance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance = { "bSkipEntrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bDisableOtherPadFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish = { "bDisableOtherPadFinish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bSkipVictory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory = { "bSkipVictory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bGauntlet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet = { "bGauntlet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bSkipResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult = { "bSkipResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bHostPadDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath = { "bHostPadDeath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingEscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingEscape = { "RingEscape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, RingEscape), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_CareerMatchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_CareerMatchID = { "CareerMatchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, CareerMatchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_CareerMatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_CareerMatchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID = { "RefereeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, RefereeID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bLadder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder = { "bLadder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchScore = { "MatchScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, MatchScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRule = { "MatchRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMatchRule, MatchRule), Z_Construct_UScriptStruct_FELMatchRule_Native, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bSkipMatchUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp = { "bSkipMatchUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bControlTagPartnerTeam0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0 = { "bControlTagPartnerTeam0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMatchRule" },
		{ "ModuleRelativePath", "Public/StMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1_SetBit(void* Obj)
	{
		((FStMatchRule*)Obj)->bControlTagPartnerTeam1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1 = { "bControlTagPartnerTeam1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStMatchRule), &Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMatchRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DataMiningID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bUseReferee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSubmission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywherePin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bAnywhereSubmission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bOvertheTopRope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingOutCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bFinisherDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHPDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_TimeUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bBattleRoyale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTrumpSwap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bExplodingBarbedWireDeathMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLightsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTornadoTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bRingOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTagMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDoubleTeamMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bCombination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChopBattle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bChainWrestring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Shock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Momentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_BumpAndFeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PropList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_ChainGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_PlayerDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTargetLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bManagerP2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MenuMatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRuleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_DebugRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bStrongGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDispDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bTraningMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipEntrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bDisableOtherPadFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipVictory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bGauntlet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bHostPadDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RingEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_CareerMatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_RefereeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bLadder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_MatchRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bSkipMatchUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMatchRule_Statics::NewProp_bControlTagPartnerTeam1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMatchRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"StMatchRule",
		sizeof(FStMatchRule),
		alignof(FStMatchRule),
		Z_Construct_UScriptStruct_FStMatchRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMatchRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMatchRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMatchRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMatchRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMatchRule"), sizeof(FStMatchRule), Get_Z_Construct_UScriptStruct_FStMatchRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMatchRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMatchRule_Hash() { return 863111496U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
