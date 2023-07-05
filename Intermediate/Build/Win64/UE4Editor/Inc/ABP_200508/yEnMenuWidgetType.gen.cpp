// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yEnMenuWidgetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyEnMenuWidgetType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* yEnMenuWidgetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("yEnMenuWidgetType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<yEnMenuWidgetType>()
	{
		return yEnMenuWidgetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_yEnMenuWidgetType(yEnMenuWidgetType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("yEnMenuWidgetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType_Hash() { return 884657497U; }
	UEnum* Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("yEnMenuWidgetType"), 0, Get_Z_Construct_UEnum_ABP_200508_yEnMenuWidgetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "yEnMenuWidgetType::None", (int64)yEnMenuWidgetType::None },
				{ "yEnMenuWidgetType::DialogWarning", (int64)yEnMenuWidgetType::DialogWarning },
				{ "yEnMenuWidgetType::DialogCommon", (int64)yEnMenuWidgetType::DialogCommon },
				{ "yEnMenuWidgetType::MainMenu", (int64)yEnMenuWidgetType::MainMenu },
				{ "yEnMenuWidgetType::MainMenuMatchOnlineModeSelect", (int64)yEnMenuWidgetType::MainMenuMatchOnlineModeSelect },
				{ "yEnMenuWidgetType::MainMenuMatchPositionSelect", (int64)yEnMenuWidgetType::MainMenuMatchPositionSelect },
				{ "yEnMenuWidgetType::MainMenuMatchWrestlerSelect", (int64)yEnMenuWidgetType::MainMenuMatchWrestlerSelect },
				{ "yEnMenuWidgetType::MainMenuMatchArenaSelect", (int64)yEnMenuWidgetType::MainMenuMatchArenaSelect },
				{ "yEnMenuWidgetType::MainMenuMatchConfirm", (int64)yEnMenuWidgetType::MainMenuMatchConfirm },
				{ "yEnMenuWidgetType::MainMenuFriendList", (int64)yEnMenuWidgetType::MainMenuFriendList },
				{ "yEnMenuWidgetType::MainMenuChat", (int64)yEnMenuWidgetType::MainMenuChat },
				{ "yEnMenuWidgetType::MainMenuGameSettings", (int64)yEnMenuWidgetType::MainMenuGameSettings },
				{ "yEnMenuWidgetType::MainMenuBackstageOptions", (int64)yEnMenuWidgetType::MainMenuBackstageOptions },
				{ "yEnMenuWidgetType::MainMenuCareerWrestlerSelect", (int64)yEnMenuWidgetType::MainMenuCareerWrestlerSelect },
				{ "yEnMenuWidgetType::CustomizeWrestler", (int64)yEnMenuWidgetType::CustomizeWrestler },
				{ "yEnMenuWidgetType::CustomizeArena", (int64)yEnMenuWidgetType::CustomizeArena },
				{ "yEnMenuWidgetType::CareerScreenEffectBlack", (int64)yEnMenuWidgetType::CareerScreenEffectBlack },
				{ "yEnMenuWidgetType::CareerHUBMenuMain", (int64)yEnMenuWidgetType::CareerHUBMenuMain },
				{ "yEnMenuWidgetType::CareerHUBMenuUseTurn", (int64)yEnMenuWidgetType::CareerHUBMenuUseTurn },
				{ "yEnMenuWidgetType::CareerHUBMenuMyWrestler", (int64)yEnMenuWidgetType::CareerHUBMenuMyWrestler },
				{ "yEnMenuWidgetType::CareerHUBMenuItem", (int64)yEnMenuWidgetType::CareerHUBMenuItem },
				{ "yEnMenuWidgetType::CareerHUBMenuOption", (int64)yEnMenuWidgetType::CareerHUBMenuOption },
				{ "yEnMenuWidgetType::CareerMapTopMenu", (int64)yEnMenuWidgetType::CareerMapTopMenu },
				{ "yEnMenuWidgetType::CareerMessageWindowGameComment", (int64)yEnMenuWidgetType::CareerMessageWindowGameComment },
				{ "yEnMenuWidgetType::CareerEventTitleWindow", (int64)yEnMenuWidgetType::CareerEventTitleWindow },
				{ "yEnMenuWidgetType::CareerRewardWindow", (int64)yEnMenuWidgetType::CareerRewardWindow },
				{ "yEnMenuWidgetType::CareerEventPlayerChoices", (int64)yEnMenuWidgetType::CareerEventPlayerChoices },
				{ "yEnMenuWidgetType::CareerFreeCamera", (int64)yEnMenuWidgetType::CareerFreeCamera },
				{ "yEnMenuWidgetType::CareerPlayerStatus", (int64)yEnMenuWidgetType::CareerPlayerStatus },
				{ "yEnMenuWidgetType::CareerStatus", (int64)yEnMenuWidgetType::CareerStatus },
				{ "yEnMenuWidgetType::CareerStageStart", (int64)yEnMenuWidgetType::CareerStageStart },
				{ "yEnMenuWidgetType::CareerSnapshotMenu", (int64)yEnMenuWidgetType::CareerSnapshotMenu },
				{ "yEnMenuWidgetType::CareerShowSnapshot", (int64)yEnMenuWidgetType::CareerShowSnapshot },
				{ "yEnMenuWidgetType::CareerAEWHistory", (int64)yEnMenuWidgetType::CareerAEWHistory },
				{ "yEnMenuWidgetType::CareerOpening", (int64)yEnMenuWidgetType::CareerOpening },
				{ "yEnMenuWidgetType::CareerRecord", (int64)yEnMenuWidgetType::CareerRecord },
				{ "yEnMenuWidgetType::CareerFoodDialog", (int64)yEnMenuWidgetType::CareerFoodDialog },
				{ "yEnMenuWidgetType::CareerTonyKhanTweet", (int64)yEnMenuWidgetType::CareerTonyKhanTweet },
				{ "yEnMenuWidgetType::CareerResult", (int64)yEnMenuWidgetType::CareerResult },
				{ "yEnMenuWidgetType::Shop", (int64)yEnMenuWidgetType::Shop },
				{ "yEnMenuWidgetType::ShopBattlePass", (int64)yEnMenuWidgetType::ShopBattlePass },
				{ "yEnMenuWidgetType::ShopAEWGold", (int64)yEnMenuWidgetType::ShopAEWGold },
				{ "yEnMenuWidgetType::ShopCrate", (int64)yEnMenuWidgetType::ShopCrate },
				{ "yEnMenuWidgetType::ShopCrateDetail", (int64)yEnMenuWidgetType::ShopCrateDetail },
				{ "yEnMenuWidgetType::Title", (int64)yEnMenuWidgetType::Title },
				{ "yEnMenuWidgetType::BattlePassMenuReward", (int64)yEnMenuWidgetType::BattlePassMenuReward },
				{ "yEnMenuWidgetType::BattlePassMenuChallenge", (int64)yEnMenuWidgetType::BattlePassMenuChallenge },
				{ "yEnMenuWidgetType::DialogBattlePassProgress", (int64)yEnMenuWidgetType::DialogBattlePassProgress },
				{ "yEnMenuWidgetType::MainMenuMiniGameSelect", (int64)yEnMenuWidgetType::MainMenuMiniGameSelect },
				{ "yEnMenuWidgetType::CustomizeMoves", (int64)yEnMenuWidgetType::CustomizeMoves },
				{ "yEnMenuWidgetType::JukeBox", (int64)yEnMenuWidgetType::JukeBox },
				{ "yEnMenuWidgetType::CustomizeTeam", (int64)yEnMenuWidgetType::CustomizeTeam },
				{ "yEnMenuWidgetType::Stats", (int64)yEnMenuWidgetType::Stats },
				{ "yEnMenuWidgetType::Leaderboard", (int64)yEnMenuWidgetType::Leaderboard },
				{ "yEnMenuWidgetType::MatchRecords", (int64)yEnMenuWidgetType::MatchRecords },
				{ "yEnMenuWidgetType::TitleManagement", (int64)yEnMenuWidgetType::TitleManagement },
				{ "yEnMenuWidgetType::TitleManagement_ChangeWrestler", (int64)yEnMenuWidgetType::TitleManagement_ChangeWrestler },
				{ "yEnMenuWidgetType::TitleManagement_History", (int64)yEnMenuWidgetType::TitleManagement_History },
				{ "yEnMenuWidgetType::WrestlerInfo", (int64)yEnMenuWidgetType::WrestlerInfo },
				{ "yEnMenuWidgetType::GameSettings_DetailMenu", (int64)yEnMenuWidgetType::GameSettings_DetailMenu },
				{ "yEnMenuWidgetType::EditProfile", (int64)yEnMenuWidgetType::EditProfile },
				{ "yEnMenuWidgetType::EditProfile_Settings", (int64)yEnMenuWidgetType::EditProfile_Settings },
				{ "yEnMenuWidgetType::LoadScreen", (int64)yEnMenuWidgetType::LoadScreen },
				{ "yEnMenuWidgetType::Credit", (int64)yEnMenuWidgetType::Credit },
				{ "yEnMenuWidgetType::TutorialArchive", (int64)yEnMenuWidgetType::TutorialArchive },
				{ "yEnMenuWidgetType::DisconnectedGamepad", (int64)yEnMenuWidgetType::DisconnectedGamepad },
				{ "yEnMenuWidgetType::BootScreen", (int64)yEnMenuWidgetType::BootScreen },
				{ "yEnMenuWidgetType::TutorialCommon", (int64)yEnMenuWidgetType::TutorialCommon },
				{ "yEnMenuWidgetType::Max", (int64)yEnMenuWidgetType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BattlePassMenuChallenge.Name", "yEnMenuWidgetType::BattlePassMenuChallenge" },
				{ "BattlePassMenuReward.Name", "yEnMenuWidgetType::BattlePassMenuReward" },
				{ "BlueprintType", "true" },
				{ "BootScreen.Name", "yEnMenuWidgetType::BootScreen" },
				{ "CareerAEWHistory.Name", "yEnMenuWidgetType::CareerAEWHistory" },
				{ "CareerEventPlayerChoices.Name", "yEnMenuWidgetType::CareerEventPlayerChoices" },
				{ "CareerEventTitleWindow.Name", "yEnMenuWidgetType::CareerEventTitleWindow" },
				{ "CareerFoodDialog.Name", "yEnMenuWidgetType::CareerFoodDialog" },
				{ "CareerFreeCamera.Name", "yEnMenuWidgetType::CareerFreeCamera" },
				{ "CareerHUBMenuItem.Name", "yEnMenuWidgetType::CareerHUBMenuItem" },
				{ "CareerHUBMenuMain.Name", "yEnMenuWidgetType::CareerHUBMenuMain" },
				{ "CareerHUBMenuMyWrestler.Name", "yEnMenuWidgetType::CareerHUBMenuMyWrestler" },
				{ "CareerHUBMenuOption.Name", "yEnMenuWidgetType::CareerHUBMenuOption" },
				{ "CareerHUBMenuUseTurn.Name", "yEnMenuWidgetType::CareerHUBMenuUseTurn" },
				{ "CareerMapTopMenu.Name", "yEnMenuWidgetType::CareerMapTopMenu" },
				{ "CareerMessageWindowGameComment.Name", "yEnMenuWidgetType::CareerMessageWindowGameComment" },
				{ "CareerOpening.Name", "yEnMenuWidgetType::CareerOpening" },
				{ "CareerPlayerStatus.Name", "yEnMenuWidgetType::CareerPlayerStatus" },
				{ "CareerRecord.Name", "yEnMenuWidgetType::CareerRecord" },
				{ "CareerResult.Name", "yEnMenuWidgetType::CareerResult" },
				{ "CareerRewardWindow.Name", "yEnMenuWidgetType::CareerRewardWindow" },
				{ "CareerScreenEffectBlack.Name", "yEnMenuWidgetType::CareerScreenEffectBlack" },
				{ "CareerShowSnapshot.Name", "yEnMenuWidgetType::CareerShowSnapshot" },
				{ "CareerSnapshotMenu.Name", "yEnMenuWidgetType::CareerSnapshotMenu" },
				{ "CareerStageStart.Name", "yEnMenuWidgetType::CareerStageStart" },
				{ "CareerStatus.Name", "yEnMenuWidgetType::CareerStatus" },
				{ "CareerTonyKhanTweet.Name", "yEnMenuWidgetType::CareerTonyKhanTweet" },
				{ "Credit.Name", "yEnMenuWidgetType::Credit" },
				{ "CustomizeArena.Name", "yEnMenuWidgetType::CustomizeArena" },
				{ "CustomizeMoves.Name", "yEnMenuWidgetType::CustomizeMoves" },
				{ "CustomizeTeam.Name", "yEnMenuWidgetType::CustomizeTeam" },
				{ "CustomizeWrestler.Name", "yEnMenuWidgetType::CustomizeWrestler" },
				{ "DialogBattlePassProgress.Name", "yEnMenuWidgetType::DialogBattlePassProgress" },
				{ "DialogCommon.Name", "yEnMenuWidgetType::DialogCommon" },
				{ "DialogWarning.Name", "yEnMenuWidgetType::DialogWarning" },
				{ "DisconnectedGamepad.Name", "yEnMenuWidgetType::DisconnectedGamepad" },
				{ "EditProfile.Name", "yEnMenuWidgetType::EditProfile" },
				{ "EditProfile_Settings.Name", "yEnMenuWidgetType::EditProfile_Settings" },
				{ "GameSettings_DetailMenu.Name", "yEnMenuWidgetType::GameSettings_DetailMenu" },
				{ "JukeBox.Name", "yEnMenuWidgetType::JukeBox" },
				{ "Leaderboard.Name", "yEnMenuWidgetType::Leaderboard" },
				{ "LoadScreen.Name", "yEnMenuWidgetType::LoadScreen" },
				{ "MainMenu.Name", "yEnMenuWidgetType::MainMenu" },
				{ "MainMenuBackstageOptions.Name", "yEnMenuWidgetType::MainMenuBackstageOptions" },
				{ "MainMenuCareerWrestlerSelect.Name", "yEnMenuWidgetType::MainMenuCareerWrestlerSelect" },
				{ "MainMenuChat.Name", "yEnMenuWidgetType::MainMenuChat" },
				{ "MainMenuFriendList.Name", "yEnMenuWidgetType::MainMenuFriendList" },
				{ "MainMenuGameSettings.Name", "yEnMenuWidgetType::MainMenuGameSettings" },
				{ "MainMenuMatchArenaSelect.Name", "yEnMenuWidgetType::MainMenuMatchArenaSelect" },
				{ "MainMenuMatchConfirm.Name", "yEnMenuWidgetType::MainMenuMatchConfirm" },
				{ "MainMenuMatchOnlineModeSelect.Name", "yEnMenuWidgetType::MainMenuMatchOnlineModeSelect" },
				{ "MainMenuMatchPositionSelect.Name", "yEnMenuWidgetType::MainMenuMatchPositionSelect" },
				{ "MainMenuMatchWrestlerSelect.Name", "yEnMenuWidgetType::MainMenuMatchWrestlerSelect" },
				{ "MainMenuMiniGameSelect.Name", "yEnMenuWidgetType::MainMenuMiniGameSelect" },
				{ "MatchRecords.Name", "yEnMenuWidgetType::MatchRecords" },
				{ "Max.Name", "yEnMenuWidgetType::Max" },
				{ "ModuleRelativePath", "Public/yEnMenuWidgetType.h" },
				{ "None.Name", "yEnMenuWidgetType::None" },
				{ "Shop.Name", "yEnMenuWidgetType::Shop" },
				{ "ShopAEWGold.Name", "yEnMenuWidgetType::ShopAEWGold" },
				{ "ShopBattlePass.Name", "yEnMenuWidgetType::ShopBattlePass" },
				{ "ShopCrate.Name", "yEnMenuWidgetType::ShopCrate" },
				{ "ShopCrateDetail.Name", "yEnMenuWidgetType::ShopCrateDetail" },
				{ "Stats.Name", "yEnMenuWidgetType::Stats" },
				{ "Title.Name", "yEnMenuWidgetType::Title" },
				{ "TitleManagement.Name", "yEnMenuWidgetType::TitleManagement" },
				{ "TitleManagement_ChangeWrestler.Name", "yEnMenuWidgetType::TitleManagement_ChangeWrestler" },
				{ "TitleManagement_History.Name", "yEnMenuWidgetType::TitleManagement_History" },
				{ "TutorialArchive.Name", "yEnMenuWidgetType::TutorialArchive" },
				{ "TutorialCommon.Name", "yEnMenuWidgetType::TutorialCommon" },
				{ "WrestlerInfo.Name", "yEnMenuWidgetType::WrestlerInfo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"yEnMenuWidgetType",
				"yEnMenuWidgetType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
