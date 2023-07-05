// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerState>()
	{
		return ECareerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerState(ECareerState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerState_Hash() { return 3256536574U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerState::ECareerState_None", (int64)ECareerState::ECareerState_None },
				{ "ECareerState::ECareerState_TurnCheck_Init", (int64)ECareerState::ECareerState_TurnCheck_Init },
				{ "ECareerState::ECareerState_TurnCheck_1st", (int64)ECareerState::ECareerState_TurnCheck_1st },
				{ "ECareerState::ECareerState_TurnCheck_2nd", (int64)ECareerState::ECareerState_TurnCheck_2nd },
				{ "ECareerState::ECareerState_StageStart", (int64)ECareerState::ECareerState_StageStart },
				{ "ECareerState::ECareerState_StatusWidgetUpdate", (int64)ECareerState::ECareerState_StatusWidgetUpdate },
				{ "ECareerState::ECareerState_Week", (int64)ECareerState::ECareerState_Week },
				{ "ECareerState::ECareerState_WeekStart", (int64)ECareerState::ECareerState_WeekStart },
				{ "ECareerState::ECareerState_CheckSnapshot", (int64)ECareerState::ECareerState_CheckSnapshot },
				{ "ECareerState::ECareerState_ShowSnapshot", (int64)ECareerState::ECareerState_ShowSnapshot },
				{ "ECareerState::ECareerState_MainMenu", (int64)ECareerState::ECareerState_MainMenu },
				{ "ECareerState::ECareerState_MainMenuInformation", (int64)ECareerState::ECareerState_MainMenuInformation },
				{ "ECareerState::ECareerState_MainMenuTutorial", (int64)ECareerState::ECareerState_MainMenuTutorial },
				{ "ECareerState::ECareerState_MainMenu_Select", (int64)ECareerState::ECareerState_MainMenu_Select },
				{ "ECareerState::ECareerState_MenuChoiceAction", (int64)ECareerState::ECareerState_MenuChoiceAction },
				{ "ECareerState::ECareerState_MenuTraning", (int64)ECareerState::ECareerState_MenuTraning },
				{ "ECareerState::ECareerState_MenuRestaurant", (int64)ECareerState::ECareerState_MenuRestaurant },
				{ "ECareerState::ECareerState_MenuHospital", (int64)ECareerState::ECareerState_MenuHospital },
				{ "ECareerState::ECareerState_MenuPromotion", (int64)ECareerState::ECareerState_MenuPromotion },
				{ "ECareerState::ECareerState_MenuOtherAction", (int64)ECareerState::ECareerState_MenuOtherAction },
				{ "ECareerState::ECareerState_MenuDarkMatch", (int64)ECareerState::ECareerState_MenuDarkMatch },
				{ "ECareerState::ECareerState_MenuDynamiteMatch", (int64)ECareerState::ECareerState_MenuDynamiteMatch },
				{ "ECareerState::ECareerState_MenuOtherOption", (int64)ECareerState::ECareerState_MenuOtherOption },
				{ "ECareerState::ECareerState_Snapshot", (int64)ECareerState::ECareerState_Snapshot },
				{ "ECareerState::ECareerState_SnapshotTake", (int64)ECareerState::ECareerState_SnapshotTake },
				{ "ECareerState::ECareerState_TutorialArchive", (int64)ECareerState::ECareerState_TutorialArchive },
				{ "ECareerState::ECareerState_WrestlerSettings", (int64)ECareerState::ECareerState_WrestlerSettings },
				{ "ECareerState::ECareerState_OpenDialog_SaveAndExit", (int64)ECareerState::ECareerState_OpenDialog_SaveAndExit },
				{ "ECareerState::ECareerState_SaveAndExit", (int64)ECareerState::ECareerState_SaveAndExit },
				{ "ECareerState::ECareerState_OpenDialog_GotoDynamite_TurnSkip", (int64)ECareerState::ECareerState_OpenDialog_GotoDynamite_TurnSkip },
				{ "ECareerState::ECareerState_SaveAndExit_OutAnimation", (int64)ECareerState::ECareerState_SaveAndExit_OutAnimation },
				{ "ECareerState::ECareerState_GotoDynamite_OutAnimation", (int64)ECareerState::ECareerState_GotoDynamite_OutAnimation },
				{ "ECareerState::ECareerState_GotoDynamite", (int64)ECareerState::ECareerState_GotoDynamite },
				{ "ECareerState::ECareerState_MenuActionResultEnd", (int64)ECareerState::ECareerState_MenuActionResultEnd },
				{ "ECareerState::ECareerState_VehicleMoveCity", (int64)ECareerState::ECareerState_VehicleMoveCity },
				{ "ECareerState::ECareerState_CommandEnd", (int64)ECareerState::ECareerState_CommandEnd },
				{ "ECareerState::ECareerState_LevelChange", (int64)ECareerState::ECareerState_LevelChange },
				{ "ECareerState::ECareerState_CareerModeEndCheck", (int64)ECareerState::ECareerState_CareerModeEndCheck },
				{ "ECareerState::ECareerState_OpenDialog_ResultMessage", (int64)ECareerState::ECareerState_OpenDialog_ResultMessage },
				{ "ECareerState::ECareerState_CheckSpecialReward", (int64)ECareerState::ECareerState_CheckSpecialReward },
				{ "ECareerState::ECareerState_ShowSpecialReward", (int64)ECareerState::ECareerState_ShowSpecialReward },
				{ "ECareerState::ECareerState_OpenDialog_CareerModeEnd", (int64)ECareerState::ECareerState_OpenDialog_CareerModeEnd },
				{ "ECareerState::ECareerState_OpenDialog_GetAEWCash", (int64)ECareerState::ECareerState_OpenDialog_GetAEWCash },
				{ "ECareerState::ECareerState_TotalResult", (int64)ECareerState::ECareerState_TotalResult },
				{ "ECareerState::ECareerState_Result", (int64)ECareerState::ECareerState_Result },
				{ "ECareerState::ECareerState_End", (int64)ECareerState::ECareerState_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECareerState_CareerModeEndCheck.Name", "ECareerState::ECareerState_CareerModeEndCheck" },
				{ "ECareerState_CheckSnapshot.Name", "ECareerState::ECareerState_CheckSnapshot" },
				{ "ECareerState_CheckSpecialReward.Name", "ECareerState::ECareerState_CheckSpecialReward" },
				{ "ECareerState_CommandEnd.Name", "ECareerState::ECareerState_CommandEnd" },
				{ "ECareerState_End.Name", "ECareerState::ECareerState_End" },
				{ "ECareerState_GotoDynamite.Name", "ECareerState::ECareerState_GotoDynamite" },
				{ "ECareerState_GotoDynamite_OutAnimation.Name", "ECareerState::ECareerState_GotoDynamite_OutAnimation" },
				{ "ECareerState_LevelChange.Name", "ECareerState::ECareerState_LevelChange" },
				{ "ECareerState_MainMenu.Name", "ECareerState::ECareerState_MainMenu" },
				{ "ECareerState_MainMenu_Select.Name", "ECareerState::ECareerState_MainMenu_Select" },
				{ "ECareerState_MainMenuInformation.Name", "ECareerState::ECareerState_MainMenuInformation" },
				{ "ECareerState_MainMenuTutorial.Name", "ECareerState::ECareerState_MainMenuTutorial" },
				{ "ECareerState_MenuActionResultEnd.Name", "ECareerState::ECareerState_MenuActionResultEnd" },
				{ "ECareerState_MenuChoiceAction.Name", "ECareerState::ECareerState_MenuChoiceAction" },
				{ "ECareerState_MenuDarkMatch.Name", "ECareerState::ECareerState_MenuDarkMatch" },
				{ "ECareerState_MenuDynamiteMatch.Name", "ECareerState::ECareerState_MenuDynamiteMatch" },
				{ "ECareerState_MenuHospital.Name", "ECareerState::ECareerState_MenuHospital" },
				{ "ECareerState_MenuOtherAction.Name", "ECareerState::ECareerState_MenuOtherAction" },
				{ "ECareerState_MenuOtherOption.Name", "ECareerState::ECareerState_MenuOtherOption" },
				{ "ECareerState_MenuPromotion.Name", "ECareerState::ECareerState_MenuPromotion" },
				{ "ECareerState_MenuRestaurant.Name", "ECareerState::ECareerState_MenuRestaurant" },
				{ "ECareerState_MenuTraning.Name", "ECareerState::ECareerState_MenuTraning" },
				{ "ECareerState_None.Name", "ECareerState::ECareerState_None" },
				{ "ECareerState_OpenDialog_CareerModeEnd.Name", "ECareerState::ECareerState_OpenDialog_CareerModeEnd" },
				{ "ECareerState_OpenDialog_GetAEWCash.Name", "ECareerState::ECareerState_OpenDialog_GetAEWCash" },
				{ "ECareerState_OpenDialog_GotoDynamite_TurnSkip.Name", "ECareerState::ECareerState_OpenDialog_GotoDynamite_TurnSkip" },
				{ "ECareerState_OpenDialog_ResultMessage.Name", "ECareerState::ECareerState_OpenDialog_ResultMessage" },
				{ "ECareerState_OpenDialog_SaveAndExit.Name", "ECareerState::ECareerState_OpenDialog_SaveAndExit" },
				{ "ECareerState_Result.Name", "ECareerState::ECareerState_Result" },
				{ "ECareerState_SaveAndExit.Name", "ECareerState::ECareerState_SaveAndExit" },
				{ "ECareerState_SaveAndExit_OutAnimation.Name", "ECareerState::ECareerState_SaveAndExit_OutAnimation" },
				{ "ECareerState_ShowSnapshot.Name", "ECareerState::ECareerState_ShowSnapshot" },
				{ "ECareerState_ShowSpecialReward.Name", "ECareerState::ECareerState_ShowSpecialReward" },
				{ "ECareerState_Snapshot.Name", "ECareerState::ECareerState_Snapshot" },
				{ "ECareerState_SnapshotTake.Name", "ECareerState::ECareerState_SnapshotTake" },
				{ "ECareerState_StageStart.Name", "ECareerState::ECareerState_StageStart" },
				{ "ECareerState_StatusWidgetUpdate.Name", "ECareerState::ECareerState_StatusWidgetUpdate" },
				{ "ECareerState_TotalResult.Name", "ECareerState::ECareerState_TotalResult" },
				{ "ECareerState_TurnCheck_1st.Name", "ECareerState::ECareerState_TurnCheck_1st" },
				{ "ECareerState_TurnCheck_2nd.Name", "ECareerState::ECareerState_TurnCheck_2nd" },
				{ "ECareerState_TurnCheck_Init.Name", "ECareerState::ECareerState_TurnCheck_Init" },
				{ "ECareerState_TutorialArchive.Name", "ECareerState::ECareerState_TutorialArchive" },
				{ "ECareerState_VehicleMoveCity.Name", "ECareerState::ECareerState_VehicleMoveCity" },
				{ "ECareerState_Week.Name", "ECareerState::ECareerState_Week" },
				{ "ECareerState_WeekStart.Name", "ECareerState::ECareerState_WeekStart" },
				{ "ECareerState_WrestlerSettings.Name", "ECareerState::ECareerState_WrestlerSettings" },
				{ "ModuleRelativePath", "Public/ECareerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerState",
				"ECareerState",
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
