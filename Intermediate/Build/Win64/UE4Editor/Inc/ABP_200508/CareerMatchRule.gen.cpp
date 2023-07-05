// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMatchRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMatchRule() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchRule();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType();
// End Cross Module References
class UScriptStruct* FCareerMatchRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMatchRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMatchRule, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMatchRule"), sizeof(FCareerMatchRule), Get_Z_Construct_UScriptStruct_FCareerMatchRule_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMatchRule>()
{
	return FCareerMatchRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMatchRule(FCareerMatchRule::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMatchRule"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchRule
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchRule()
	{
		UScriptStruct::DeferCppStructOps<FCareerMatchRule>(FName(TEXT("CareerMatchRule")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatchRule;
	struct Z_Construct_UScriptStruct_FCareerMatchRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataMining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataMining;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPinAnywhere_MetaData[];
#endif
		static void NewProp_bPinAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPinAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubmissionAnywhere_MetaData[];
#endif
		static void NewProp_bSubmissionAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubmissionAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverTopRope_MetaData[];
#endif
		static void NewProp_bOverTopRope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverTopRope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDQ_MetaData[];
#endif
		static void NewProp_bDQ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinisherDead_MetaData[];
#endif
		static void NewProp_bFinisherDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinisherDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHPZeroDead_MetaData[];
#endif
		static void NewProp_bHPZeroDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHPZeroDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBattleRoyale_MetaData[];
#endif
		static void NewProp_bBattleRoyale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBattleRoyale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrumpSystem_MetaData[];
#endif
		static void NewProp_bTrumpSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrumpSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrumpTeam_MetaData[];
#endif
		static void NewProp_bTrumpTeam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrumpTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBattleRoyalPad_MetaData[];
#endif
		static void NewProp_bBattleRoyalPad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBattleRoyalPad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bElectricBarbedWire_MetaData[];
#endif
		static void NewProp_bElectricBarbedWire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bElectricBarbedWire;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleTeam_MetaData[];
#endif
		static void NewProp_bDoubleTeam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCombination_MetaData[];
#endif
		static void NewProp_bCombination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCombination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlowBattle_MetaData[];
#endif
		static void NewProp_bBlowBattle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlowBattle;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManager_1P_MetaData[];
#endif
		static void NewProp_bManager_1P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManager_1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManager_2P_MetaData[];
#endif
		static void NewProp_bManager_2P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManager_2P;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrongGrapple_MetaData[];
#endif
		static void NewProp_bStrongGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrongGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDamageHUD_MetaData[];
#endif
		static void NewProp_bDamageHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDamageHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraningMode_MetaData[];
#endif
		static void NewProp_bTraningMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraningMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntranceOFF_MetaData[];
#endif
		static void NewProp_bEntranceOFF_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntranceOFF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOther_HostPad_Invalid_PinSub_MetaData[];
#endif
		static void NewProp_bOther_HostPad_Invalid_PinSub_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOther_HostPad_Invalid_PinSub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoWinScene_MetaData[];
#endif
		static void NewProp_bNoWinScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoWinScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGauntlet_MetaData[];
#endif
		static void NewProp_bGauntlet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGauntlet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResult_HUD_NoDisplay_MetaData[];
#endif
		static void NewProp_bResult_HUD_NoDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult_HUD_NoDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDead_HostPad_MatchFinish_MetaData[];
#endif
		static void NewProp_bDead_HostPad_MatchFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDead_HostPad_MatchFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingEscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RingEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRopeBreak_MetaData[];
#endif
		static void NewProp_bRopeBreak_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRopeBreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRealEBW_MetaData[];
#endif
		static void NewProp_bRealEBW_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRealEBW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLadder_MetaData[];
#endif
		static void NewProp_bLadder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLadder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchUpOFF_MetaData[];
#endif
		static void NewProp_bMatchUpOFF_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchUpOFF;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMatchRule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_DataMining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_DataMining = { "DataMining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, DataMining), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_DataMining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_DataMining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bUseReferee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee = { "bUseReferee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin = { "bPin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bSubmission = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission = { "bSubmission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bPinAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere = { "bPinAnywhere", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bSubmissionAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere = { "bSubmissionAnywhere", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bOverTopRope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope = { "bOverTopRope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bDQ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ = { "bDQ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_CountOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_CountOut = { "CountOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, CountOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_CountOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_CountOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bFinisherDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead = { "bFinisherDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bHPZeroDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead = { "bHPZeroDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Timeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bBattleRoyale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale = { "bBattleRoyale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bTrumpSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem = { "bTrumpSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bTrumpTeam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam = { "bTrumpTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bBattleRoyalPad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad = { "bBattleRoyalPad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bElectricBarbedWire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire = { "bElectricBarbedWire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bLightsOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut = { "bLightsOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bTornadoTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag = { "bTornadoTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bRingOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly = { "bRingOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bTagMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove = { "bTagMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bDoubleTeam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam = { "bDoubleTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bCombination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination = { "bCombination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bBlowBattle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle = { "bBlowBattle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bChainWrestring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring = { "bChainWrestring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Shock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Shock = { "Shock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, Shock), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Shock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Shock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Momentum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Momentum = { "Momentum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, Momentum), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Momentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Momentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_BumpAndFeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_BumpAndFeed = { "BumpAndFeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, BumpAndFeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_BumpAndFeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_BumpAndFeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PropList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PropList = { "PropList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, PropList), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PropList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PropList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_ChainGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_ChainGrapple = { "ChainGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, ChainGrapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_ChainGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_ChainGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PlayerDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PlayerDefault = { "PlayerDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, PlayerDefault), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PlayerDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PlayerDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bTargetLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine = { "bTargetLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bManager_1P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P = { "bManager_1P", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bManager_2P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P = { "bManager_2P", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, MatchType), Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType = { "MenuMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, MenuMatchType), Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bStrongGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple = { "bStrongGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bDamageHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD = { "bDamageHUD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bTraningMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode = { "bTraningMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_OptionNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_OptionNumber = { "OptionNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, OptionNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_OptionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_OptionNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bEntranceOFF = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF = { "bEntranceOFF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bOther_HostPad_Invalid_PinSub = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub = { "bOther_HostPad_Invalid_PinSub", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bNoWinScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene = { "bNoWinScene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bGauntlet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet = { "bGauntlet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bResult_HUD_NoDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay = { "bResult_HUD_NoDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bDead_HostPad_MatchFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish = { "bDead_HostPad_MatchFinish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_RingEscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_RingEscape = { "RingEscape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatchRule, RingEscape), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_RingEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_RingEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bRopeBreak = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak = { "bRopeBreak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bRealEBW = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW = { "bRealEBW", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bLadder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder = { "bLadder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatchRule" },
		{ "ModuleRelativePath", "Public/CareerMatchRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF_SetBit(void* Obj)
	{
		((FCareerMatchRule*)Obj)->bMatchUpOFF = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF = { "bMatchUpOFF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMatchRule), &Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMatchRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_DataMining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bUseReferee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bPinAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bSubmissionAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOverTopRope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_CountOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bFinisherDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bHPZeroDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTrumpTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBattleRoyalPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bElectricBarbedWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLightsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTornadoTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRingOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTagMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDoubleTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bCombination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bBlowBattle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bChainWrestring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Shock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_Momentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_BumpAndFeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PropList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_ChainGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_PlayerDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTargetLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bManager_2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_MenuMatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bStrongGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDamageHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bTraningMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_OptionNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bEntranceOFF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bOther_HostPad_Invalid_PinSub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bNoWinScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bGauntlet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bResult_HUD_NoDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bDead_HostPad_MatchFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_RingEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRopeBreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bRealEBW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bLadder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatchRule_Statics::NewProp_bMatchUpOFF,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMatchRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerMatchRule",
		sizeof(FCareerMatchRule),
		alignof(FCareerMatchRule),
		Z_Construct_UScriptStruct_FCareerMatchRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatchRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMatchRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMatchRule"), sizeof(FCareerMatchRule), Get_Z_Construct_UScriptStruct_FCareerMatchRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMatchRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMatchRule_Hash() { return 1191305742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
