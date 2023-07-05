// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMoves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMoves() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandFrontStrike();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesFrontChainWeak();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesFrontChainStrong();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandRearStrike();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRearChainWeak();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRearChainStrong();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRunningStrike();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRunningCounter();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesDiving();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSpringboard();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesDown();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSitDownAttack();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerStandGroggy();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerChain();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeGroggy();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeGroggyForBattleRoyale();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeChain();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronStandAttack();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronChain();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronToApron();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRiseUpAttack();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesToCorner();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesWhipAttack();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesTwoPlatoons();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesDoubleStrike();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesForTagWait();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesInTagWait();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCutsceneCPP();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestling();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRingSideToRing();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerRecoil();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesLeveragePin();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesWinEmote();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELPinchMoves();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELStepMoves();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELKickCatchThrow();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELLadderFight();
// End Cross Module References

static_assert(std::is_polymorphic<FELMoves>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMoves cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMoves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMoves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMoves, Z_Construct_UPackage__Script_Creation(), TEXT("ELMoves"), sizeof(FELMoves), Get_Z_Construct_UScriptStruct_FELMoves_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMoves>()
{
	return FELMoves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMoves(FELMoves::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMoves"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMoves
{
	FScriptStruct_Creation_StaticRegisterNativesFELMoves()
	{
		UScriptStruct::DeferCppStructOps<FELMoves>(FName(TEXT("ELMoves")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMoves;
	struct Z_Construct_UScriptStruct_FELMoves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontChainWeak_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontChainWeak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontChainStrong_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontChainStrong;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandRearStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StandRearStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearChainWeak_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RearChainWeak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearChainStrong_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RearChainStrong;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RunningStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RunningCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Diving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Springboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Springboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Taunt_RS_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Taunt_RS_Up;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Taunt_RS_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Taunt_RS_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Taunt_RS_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Taunt_RS_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Taunt_RS_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Taunt_RS_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_SpecialTaunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_SpecialTaunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Corner_Taunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Corner_Taunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_Taunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Apron_Taunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovesDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SitDownAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SitDownAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerStandGroggy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerStandGroggy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RopeGroggy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggyForBattleRoyale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RopeGroggyForBattleRoyale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerGroggyForBattleRoyale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerGroggyForBattleRoyale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RopeChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronStandAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronStandAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronToApron_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronToApron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiseUpAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RiseUpAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesToCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovesToCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Intercept_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Diving_Intercept;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoPlatoons_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwoPlatoons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoubleStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForTagWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForTagWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTagWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTagWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentGroggy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentGroggy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarricadeSpringboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarricadeSpringboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cutscene_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cutscene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Running_Front_Setup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Running_Front_Setup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Running_Back_Setup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Running_Back_Setup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Running_Front_Counter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Running_Front_Counter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainWrestling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainWrestling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingSideToRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingSideToRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReboundRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReboundRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeveragePin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeveragePin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinEmote_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WinEmote;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinchMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StepMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderDiving_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LadderDiving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickCatchThrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KickCatchThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderFight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LadderFight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMoves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMoves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontStrike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontStrike = { "FrontStrike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, FrontStrike), Z_Construct_UScriptStruct_FELMovesStandFrontStrike, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontStrike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainWeak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainWeak = { "FrontChainWeak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, FrontChainWeak), Z_Construct_UScriptStruct_FELMovesFrontChainWeak, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainWeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainWeak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainStrong_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainStrong = { "FrontChainStrong", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, FrontChainStrong), Z_Construct_UScriptStruct_FELMovesFrontChainStrong, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainStrong_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainStrong_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StandRearStrike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StandRearStrike = { "StandRearStrike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, StandRearStrike), Z_Construct_UScriptStruct_FELMovesStandRearStrike, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StandRearStrike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StandRearStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainWeak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainWeak = { "RearChainWeak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RearChainWeak), Z_Construct_UScriptStruct_FELMovesRearChainWeak, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainWeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainWeak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainStrong_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainStrong = { "RearChainStrong", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RearChainStrong), Z_Construct_UScriptStruct_FELMovesRearChainStrong, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainStrong_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainStrong_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningStrike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningStrike = { "RunningStrike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RunningStrike), Z_Construct_UScriptStruct_FELMovesRunningStrike, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningStrike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningCounter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningCounter = { "RunningCounter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RunningCounter), Z_Construct_UScriptStruct_FELMovesRunningCounter, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving = { "Diving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Diving), Z_Construct_UScriptStruct_FELMovesDiving, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Springboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Springboard = { "Springboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Springboard), Z_Construct_UScriptStruct_FELMovesSpringboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Springboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Springboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Pin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Pin), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Pin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Up_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Up = { "Stand_Taunt_RS_Up", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Stand_Taunt_RS_Up), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Up_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Down_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Down = { "Stand_Taunt_RS_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Stand_Taunt_RS_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Left_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Left = { "Stand_Taunt_RS_Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Stand_Taunt_RS_Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Right_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Right = { "Stand_Taunt_RS_Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Stand_Taunt_RS_Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_SpecialTaunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_SpecialTaunt = { "Stand_SpecialTaunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Stand_SpecialTaunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_SpecialTaunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_SpecialTaunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Corner_Taunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Corner_Taunt = { "Corner_Taunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Corner_Taunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Corner_Taunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Corner_Taunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Apron_Taunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Apron_Taunt = { "Apron_Taunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Apron_Taunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Apron_Taunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Apron_Taunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesDown = { "MovesDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, MovesDown), Z_Construct_UScriptStruct_FELMovesDown, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_SitDownAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_SitDownAttack = { "SitDownAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, SitDownAttack), Z_Construct_UScriptStruct_FELMovesSitDownAttack, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_SitDownAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_SitDownAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerStandGroggy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerStandGroggy = { "CornerStandGroggy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, CornerStandGroggy), Z_Construct_UScriptStruct_FELMovesCornerStandGroggy, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerStandGroggy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerStandGroggy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerChain = { "CornerChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, CornerChain), Z_Construct_UScriptStruct_FELMovesCornerChain, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggy = { "RopeGroggy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RopeGroggy), Z_Construct_UScriptStruct_FELMovesRopeGroggy, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggyForBattleRoyale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggyForBattleRoyale = { "RopeGroggyForBattleRoyale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RopeGroggyForBattleRoyale), Z_Construct_UScriptStruct_FELMovesRopeGroggyForBattleRoyale, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggyForBattleRoyale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggyForBattleRoyale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerGroggyForBattleRoyale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerGroggyForBattleRoyale = { "CornerGroggyForBattleRoyale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, CornerGroggyForBattleRoyale), Z_Construct_UScriptStruct_FELMovesRopeGroggyForBattleRoyale, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerGroggyForBattleRoyale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerGroggyForBattleRoyale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeChain = { "RopeChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RopeChain), Z_Construct_UScriptStruct_FELMovesRopeChain, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronStandAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronStandAttack = { "ApronStandAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, ApronStandAttack), Z_Construct_UScriptStruct_FELMovesApronStandAttack, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronStandAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronStandAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronChain = { "ApronChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, ApronChain), Z_Construct_UScriptStruct_FELMovesApronChain, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronToApron_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronToApron = { "ApronToApron", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, ApronToApron), Z_Construct_UScriptStruct_FELMovesApronToApron, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronToApron_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronToApron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RiseUpAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RiseUpAttack = { "RiseUpAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RiseUpAttack), Z_Construct_UScriptStruct_FELMovesRiseUpAttack, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RiseUpAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RiseUpAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesToCorner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesToCorner = { "MovesToCorner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, MovesToCorner), Z_Construct_UScriptStruct_FELMovesToCorner, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesToCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesToCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_Intercept_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_Intercept = { "Diving_Intercept", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Diving_Intercept), Z_Construct_UScriptStruct_FELMovesWhipAttack, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_Intercept_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_Intercept_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_TwoPlatoons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_TwoPlatoons = { "TwoPlatoons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, TwoPlatoons), Z_Construct_UScriptStruct_FELMovesTwoPlatoons, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_TwoPlatoons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_TwoPlatoons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_DoubleStrike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_DoubleStrike = { "DoubleStrike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, DoubleStrike), Z_Construct_UScriptStruct_FELMovesDoubleStrike, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_DoubleStrike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_DoubleStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ForTagWait_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ForTagWait = { "ForTagWait", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, ForTagWait), Z_Construct_UScriptStruct_FELMovesForTagWait, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ForTagWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ForTagWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_InTagWait_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_InTagWait = { "InTagWait", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, InTagWait), Z_Construct_UScriptStruct_FELMovesInTagWait, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_InTagWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_InTagWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_EnvironmentGroggy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_EnvironmentGroggy = { "EnvironmentGroggy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, EnvironmentGroggy), Z_Construct_UScriptStruct_FELMovesEnvironmentGroggy, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_EnvironmentGroggy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_EnvironmentGroggy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_BarricadeSpringboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_BarricadeSpringboard = { "BarricadeSpringboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, BarricadeSpringboard), Z_Construct_UScriptStruct_FELMovesBarricadeSpringboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_BarricadeSpringboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_BarricadeSpringboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Cutscene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Cutscene = { "Cutscene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Cutscene), Z_Construct_UScriptStruct_FELMovesCutsceneCPP, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Cutscene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Cutscene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Setup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Setup = { "Running_Front_Setup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Running_Front_Setup), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Setup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Setup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Back_Setup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Back_Setup = { "Running_Back_Setup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Running_Back_Setup), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Back_Setup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Back_Setup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Counter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Counter = { "Running_Front_Counter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, Running_Front_Counter), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Counter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Counter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ChainWrestling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ChainWrestling = { "ChainWrestling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, ChainWrestling), Z_Construct_UScriptStruct_FELMovesChainWrestling, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ChainWrestling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ChainWrestling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RingSideToRing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RingSideToRing = { "RingSideToRing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, RingSideToRing), Z_Construct_UScriptStruct_FELMovesRingSideToRing, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RingSideToRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RingSideToRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerRecoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerRecoil = { "CornerRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, CornerRecoil), Z_Construct_UScriptStruct_FELMovesCornerRecoil, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ReboundRecoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ReboundRecoil = { "ReboundRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, ReboundRecoil), Z_Construct_UScriptStruct_FELMovesCornerRecoil, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ReboundRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ReboundRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LeveragePin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LeveragePin = { "LeveragePin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, LeveragePin), Z_Construct_UScriptStruct_FELMovesLeveragePin, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LeveragePin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LeveragePin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_WinEmote_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_WinEmote = { "WinEmote", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, WinEmote), Z_Construct_UScriptStruct_FELMovesWinEmote, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_WinEmote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_WinEmote_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_PinchMoves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_PinchMoves = { "PinchMoves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, PinchMoves), Z_Construct_UScriptStruct_FELPinchMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_PinchMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_PinchMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StepMoves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StepMoves = { "StepMoves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, StepMoves), Z_Construct_UScriptStruct_FELStepMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StepMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StepMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderDiving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderDiving = { "LadderDiving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, LadderDiving), Z_Construct_UScriptStruct_FELMovesDiving, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderDiving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderDiving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_KickCatchThrow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_KickCatchThrow = { "KickCatchThrow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, KickCatchThrow), Z_Construct_UScriptStruct_FELKickCatchThrow, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_KickCatchThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_KickCatchThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderFight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves" },
		{ "ModuleRelativePath", "Public/ELMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderFight = { "LadderFight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves, LadderFight), Z_Construct_UScriptStruct_FELLadderFight, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderFight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderFight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainWeak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_FrontChainStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StandRearStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainWeak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RearChainStrong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RunningCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Springboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_Taunt_RS_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Stand_SpecialTaunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Corner_Taunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Apron_Taunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_SitDownAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerStandGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeGroggyForBattleRoyale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerGroggyForBattleRoyale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RopeChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronStandAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ApronToApron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RiseUpAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_MovesToCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Diving_Intercept,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_TwoPlatoons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_DoubleStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ForTagWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_InTagWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_EnvironmentGroggy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_BarricadeSpringboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Cutscene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Setup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Back_Setup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_Running_Front_Counter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ChainWrestling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_RingSideToRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_CornerRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_ReboundRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LeveragePin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_WinEmote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_PinchMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_StepMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderDiving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_KickCatchThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Statics::NewProp_LadderFight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMoves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMoves",
		sizeof(FELMoves),
		alignof(FELMoves),
		Z_Construct_UScriptStruct_FELMoves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMoves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMoves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMoves"), sizeof(FELMoves), Get_Z_Construct_UScriptStruct_FELMoves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMoves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMoves_Hash() { return 295892971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
