// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeProgressDetailInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressDetailInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressDetailInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengePeriodType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBattlePassRewardItemType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeTextFormatType();
// End Cross Module References
class UScriptStruct* FChallengeProgressDetailInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeProgressDetailInfo"), sizeof(FChallengeProgressDetailInfo), Get_Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeProgressDetailInfo>()
{
	return FChallengeProgressDetailInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeProgressDetailInfo(FChallengeProgressDetailInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeProgressDetailInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeProgressDetailInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeProgressDetailInfo()
	{
		UScriptStruct::DeferCppStructOps<FChallengeProgressDetailInfo>(FName(TEXT("ChallengeProgressDetailInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeProgressDetailInfo;
	struct Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChallengeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeriodType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeriodType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeriodType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineModeOnly_MetaData[];
#endif
		static void NewProp_OnlineModeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlineModeOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowAchievementCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NowAchievementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAchievementCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAchievementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAchieved_MetaData[];
#endif
		static void NewProp_IsAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAchieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardCash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardCash;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextFormatType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextFormatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextFormatType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeChallenge_MetaData[];
#endif
		static void NewProp_SSModeChallenge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeChallenge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressDetailInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_ChallengeId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType = { "PeriodType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, PeriodType), Z_Construct_UEnum_ABP_200508_EChallengePeriodType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly_SetBit(void* Obj)
	{
		((FChallengeProgressDetailInfo*)Obj)->OnlineModeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly = { "OnlineModeOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChallengeProgressDetailInfo), &Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_NowAchievementCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_NowAchievementCount = { "NowAchievementCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, NowAchievementCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_NowAchievementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_NowAchievementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_MaxAchievementCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_MaxAchievementCount = { "MaxAchievementCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, MaxAchievementCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_MaxAchievementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_MaxAchievementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved_SetBit(void* Obj)
	{
		((FChallengeProgressDetailInfo*)Obj)->IsAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved = { "IsAchieved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChallengeProgressDetailInfo), &Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardCash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardCash = { "RewardCash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, RewardCash), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardCash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardCash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardBattlePassPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardBattlePassPoint = { "RewardBattlePassPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, RewardBattlePassPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardBattlePassPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardBattlePassPoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType = { "RewardItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, RewardItemType), Z_Construct_UEnum_ABP_200508_EBattlePassRewardItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemId = { "RewardItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, RewardItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType = { "TextFormatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeProgressDetailInfo, TextFormatType), Z_Construct_UEnum_ABP_200508_EChallengeTextFormatType, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressDetailInfo" },
		{ "ModuleRelativePath", "Public/ChallengeProgressDetailInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge_SetBit(void* Obj)
	{
		((FChallengeProgressDetailInfo*)Obj)->SSModeChallenge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge = { "SSModeChallenge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChallengeProgressDetailInfo), &Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_PeriodType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_OnlineModeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_NowAchievementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_MaxAchievementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_IsAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardCash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardBattlePassPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_RewardItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_TextFormatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::NewProp_SSModeChallenge,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeProgressDetailInfo",
		sizeof(FChallengeProgressDetailInfo),
		alignof(FChallengeProgressDetailInfo),
		Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressDetailInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeProgressDetailInfo"), sizeof(FChallengeProgressDetailInfo), Get_Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeProgressDetailInfo_Hash() { return 19058967U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
