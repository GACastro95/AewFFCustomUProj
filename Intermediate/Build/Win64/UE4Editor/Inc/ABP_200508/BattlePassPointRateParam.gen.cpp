// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/BattlePassPointRateParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattlePassPointRateParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassPointRateParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBattlePassPointRateParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBattlePassPointRateParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBattlePassPointRateParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FBattlePassPointRateParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBattlePassPointRateParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("BattlePassPointRateParam"), sizeof(FBattlePassPointRateParam), Get_Z_Construct_UScriptStruct_FBattlePassPointRateParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FBattlePassPointRateParam>()
{
	return FBattlePassPointRateParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBattlePassPointRateParam(FBattlePassPointRateParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("BattlePassPointRateParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassPointRateParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassPointRateParam()
	{
		UScriptStruct::DeferCppStructOps<FBattlePassPointRateParam>(FName(TEXT("BattlePassPointRateParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassPointRateParam;
	struct Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchScoreStarPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchScoreStarPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedGamePointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinishedGamePointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedGamePointRateWithFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinishedGamePointRateWithFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineRankedMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OnlineRankedMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsOutMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightsOutMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EBWDMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EBWDMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallsCountAnywhereMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallsCountAnywhereMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasinoBattleRoyalMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CasinoBattleRoyalMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SingleMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TagMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreeWayMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThreeWayMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourWayMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FourWayMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayedTogetherNumberOfFriendPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayedTogetherNumberOfFriendPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayedManyMatchNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayedManyMatchNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayedManyMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayedManyMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedPremiumBattlePassPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PossessedPremiumBattlePassPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnPossessedPremiumBattlePassPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnPossessedPremiumBattlePassPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StadiumStampedeModeMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StadiumStampedeModeMatchPointRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StadiumStampedeWayMatchPointRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StadiumStampedeWayMatchPointRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBattlePassPointRateParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_MatchScoreStarPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_MatchScoreStarPoint = { "MatchScoreStarPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, MatchScoreStarPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_MatchScoreStarPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_MatchScoreStarPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRate = { "FinishedGamePointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, FinishedGamePointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRateWithFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRateWithFriend = { "FinishedGamePointRateWithFriend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, FinishedGamePointRateWithFriend), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRateWithFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRateWithFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_OnlineRankedMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_OnlineRankedMatchPointRate = { "OnlineRankedMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, OnlineRankedMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_OnlineRankedMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_OnlineRankedMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_NormalMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_NormalMatchPointRate = { "NormalMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, NormalMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_NormalMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_NormalMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LadderMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LadderMatchPointRate = { "LadderMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, LadderMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LadderMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LadderMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LightsOutMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LightsOutMatchPointRate = { "LightsOutMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, LightsOutMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LightsOutMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LightsOutMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_EBWDMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_EBWDMatchPointRate = { "EBWDMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, EBWDMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_EBWDMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_EBWDMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FallsCountAnywhereMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FallsCountAnywhereMatchPointRate = { "FallsCountAnywhereMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, FallsCountAnywhereMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FallsCountAnywhereMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FallsCountAnywhereMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_CasinoBattleRoyalMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_CasinoBattleRoyalMatchPointRate = { "CasinoBattleRoyalMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, CasinoBattleRoyalMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_CasinoBattleRoyalMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_CasinoBattleRoyalMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_SingleMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_SingleMatchPointRate = { "SingleMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, SingleMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_SingleMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_SingleMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_TagMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_TagMatchPointRate = { "TagMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, TagMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_TagMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_TagMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_ThreeWayMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_ThreeWayMatchPointRate = { "ThreeWayMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, ThreeWayMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_ThreeWayMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_ThreeWayMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FourWayMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FourWayMatchPointRate = { "FourWayMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, FourWayMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FourWayMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FourWayMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedTogetherNumberOfFriendPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedTogetherNumberOfFriendPointRate = { "PlayedTogetherNumberOfFriendPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, PlayedTogetherNumberOfFriendPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedTogetherNumberOfFriendPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedTogetherNumberOfFriendPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchNum = { "PlayedManyMatchNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, PlayedManyMatchNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchPointRate = { "PlayedManyMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, PlayedManyMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PossessedPremiumBattlePassPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PossessedPremiumBattlePassPointRate = { "PossessedPremiumBattlePassPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, PossessedPremiumBattlePassPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PossessedPremiumBattlePassPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PossessedPremiumBattlePassPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_UnPossessedPremiumBattlePassPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_UnPossessedPremiumBattlePassPointRate = { "UnPossessedPremiumBattlePassPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, UnPossessedPremiumBattlePassPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_UnPossessedPremiumBattlePassPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_UnPossessedPremiumBattlePassPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeModeMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeModeMatchPointRate = { "StadiumStampedeModeMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, StadiumStampedeModeMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeModeMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeModeMatchPointRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeWayMatchPointRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPointRateParam" },
		{ "ModuleRelativePath", "Public/BattlePassPointRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeWayMatchPointRate = { "StadiumStampedeWayMatchPointRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPointRateParam, StadiumStampedeWayMatchPointRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeWayMatchPointRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeWayMatchPointRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_MatchScoreStarPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FinishedGamePointRateWithFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_OnlineRankedMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_NormalMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LadderMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_LightsOutMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_EBWDMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FallsCountAnywhereMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_CasinoBattleRoyalMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_SingleMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_TagMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_ThreeWayMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_FourWayMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedTogetherNumberOfFriendPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PlayedManyMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_PossessedPremiumBattlePassPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_UnPossessedPremiumBattlePassPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeModeMatchPointRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::NewProp_StadiumStampedeWayMatchPointRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BattlePassPointRateParam",
		sizeof(FBattlePassPointRateParam),
		alignof(FBattlePassPointRateParam),
		Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBattlePassPointRateParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBattlePassPointRateParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BattlePassPointRateParam"), sizeof(FBattlePassPointRateParam), Get_Z_Construct_UScriptStruct_FBattlePassPointRateParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBattlePassPointRateParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBattlePassPointRateParam_Hash() { return 1856163827U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
