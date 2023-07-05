// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_PlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_PlayerData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_PlayerData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_PlayerData();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeRecordSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressSaveData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileSaveData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingSaveData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingSaveData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCrateStateSaveData();
// End Cross Module References
	void USaveData_PlayerData::StaticRegisterNativesUSaveData_PlayerData()
	{
	}
	UClass* Z_Construct_UClass_USaveData_PlayerData_NoRegister()
	{
		return USaveData_PlayerData::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_PlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strEpicAccountID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AewCashNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_AewCashNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_UnlockItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UnlockItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_UnlockItemList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AewGoldNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_AewGoldNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChallengeRecordDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeRecordDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ChallengeRecordDataList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_OnlyNormalChallengeRecordData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_OnlyNormalChallengeRecordData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChallengeProgressData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChallengeProgressData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PossessedItemData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PossessedItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PossessedItemData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_TitleHolderInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TitleHolderInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_TitleHolderInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MatchScoreRankingList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MatchScoreRankingList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_MatchScoreRankingList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MiniGameScoreRankingList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MiniGameScoreRankingList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_MiniGameScoreRankingList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MatchRecords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MatchRecords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerModePlayerGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CareerModePlayerGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ConfirmedEULA_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ConfirmedEULA_Version;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_GamepadKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GamepadKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_GamepadKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_KeyboardMouseKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_KeyboardMouseKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_KeyboardMouseKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SSModeMouseKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SSModeMouseKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SSModeMouseKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SSModeKeyboardMouseKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SSModeKeyboardMouseKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SSModeKeyboardMouseKeyConfigList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_TutorialArchiveList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TutorialArchiveList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_TutorialArchiveList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_TutorialParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TutorialParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_TutorialParamList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UserProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_UserProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CommentaryLoading_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CommentaryLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TipsLoading_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_TipsLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Crate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_Crate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ssGamepadKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ssGamepadKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ssGamepadKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ssKeyboardMouseKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ssKeyboardMouseKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ssKeyboardMouseKeyConfigList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_PlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_PlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_strEpicAccountID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_strEpicAccountID = { "m_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_strEpicAccountID), METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_strEpicAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewCashNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewCashNum = { "m_AewCashNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_AewCashNum), METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewCashNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewCashNum_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList_Inner = { "m_UnlockItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList = { "m_UnlockItemList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_UnlockItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewGoldNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewGoldNum = { "m_AewGoldNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_AewGoldNum), METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewGoldNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewGoldNum_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList_Inner = { "m_ChallengeRecordDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeRecordSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList = { "m_ChallengeRecordDataList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_ChallengeRecordDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_OnlyNormalChallengeRecordData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_OnlyNormalChallengeRecordData = { "m_OnlyNormalChallengeRecordData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_OnlyNormalChallengeRecordData), Z_Construct_UScriptStruct_FOnlyNormalChallengeRecordSaveData, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_OnlyNormalChallengeRecordData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_OnlyNormalChallengeRecordData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeProgressData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeProgressData = { "m_ChallengeProgressData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_ChallengeProgressData), Z_Construct_UScriptStruct_FChallengeProgressSaveData, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeProgressData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeProgressData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData_Inner = { "m_PossessedItemData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData = { "m_PossessedItemData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_PossessedItemData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos_Inner = { "m_TitleHolderInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleHolderInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos = { "m_TitleHolderInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_TitleHolderInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList_Inner = { "m_MatchScoreRankingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList = { "m_MatchScoreRankingList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_MatchScoreRankingList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList_Inner = { "m_MiniGameScoreRankingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList = { "m_MiniGameScoreRankingList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_MiniGameScoreRankingList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchRecords_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchRecords = { "m_MatchRecords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_MatchRecords), Z_Construct_UScriptStruct_FELMatchRecordsInfo, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchRecords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchRecords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CareerModePlayerGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CareerModePlayerGUID = { "m_CareerModePlayerGUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_CareerModePlayerGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CareerModePlayerGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CareerModePlayerGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ConfirmedEULA_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ConfirmedEULA_Version = { "m_ConfirmedEULA_Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_ConfirmedEULA_Version), METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ConfirmedEULA_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ConfirmedEULA_Version_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList_Inner = { "m_GamepadKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList = { "m_GamepadKeyConfigList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_GamepadKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList_Inner = { "m_KeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList = { "m_KeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_KeyboardMouseKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList_Inner = { "m_SSModeMouseKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList = { "m_SSModeMouseKeyConfigList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_SSModeMouseKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList_Inner = { "m_SSModeKeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList = { "m_SSModeKeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_SSModeKeyboardMouseKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList_Inner = { "m_TutorialArchiveList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList = { "m_TutorialArchiveList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_TutorialArchiveList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList_Inner = { "m_TutorialParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList = { "m_TutorialParamList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_TutorialParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UserProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UserProfile = { "m_UserProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_UserProfile), Z_Construct_UScriptStruct_FUserProfileSaveData, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UserProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UserProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CommentaryLoading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CommentaryLoading = { "m_CommentaryLoading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_CommentaryLoading), Z_Construct_UScriptStruct_FCommentaryLoadingSaveData, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CommentaryLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CommentaryLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TipsLoading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TipsLoading = { "m_TipsLoading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_TipsLoading), Z_Construct_UScriptStruct_FTipsLoadingSaveData, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TipsLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TipsLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_Crate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_Crate = { "m_Crate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, m_Crate), Z_Construct_UScriptStruct_FCrateStateSaveData, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_Crate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_Crate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList_Inner = { "_ssGamepadKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList = { "_ssGamepadKeyConfigList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, _ssGamepadKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList_Inner = { "_ssKeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_PlayerData" },
		{ "ModuleRelativePath", "Public/SaveData_PlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList = { "_ssKeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_PlayerData, _ssKeyboardMouseKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_PlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewCashNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UnlockItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_AewGoldNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeRecordDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_OnlyNormalChallengeRecordData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ChallengeProgressData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_PossessedItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TitleHolderInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchScoreRankingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MiniGameScoreRankingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_MatchRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CareerModePlayerGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_ConfirmedEULA_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_GamepadKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_KeyboardMouseKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeMouseKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_SSModeKeyboardMouseKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialArchiveList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TutorialParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_UserProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_CommentaryLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_TipsLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp_m_Crate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssGamepadKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_PlayerData_Statics::NewProp__ssKeyboardMouseKeyConfigList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_PlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_PlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_PlayerData_Statics::ClassParams = {
		&USaveData_PlayerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_PlayerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_PlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_PlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_PlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_PlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_PlayerData, 2414690363);
	template<> ABP_200508_API UClass* StaticClass<USaveData_PlayerData>()
	{
		return USaveData_PlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_PlayerData(Z_Construct_UClass_USaveData_PlayerData, &USaveData_PlayerData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_PlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_PlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
