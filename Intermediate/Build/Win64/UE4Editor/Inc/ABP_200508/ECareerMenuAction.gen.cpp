// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMenuAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMenuAction() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuAction();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMenuAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMenuAction, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMenuAction"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMenuAction>()
	{
		return ECareerMenuAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMenuAction(ECareerMenuAction_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMenuAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMenuAction_Hash() { return 2079598826U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMenuAction"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMenuAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMenuAction::None", (int64)ECareerMenuAction::None },
				{ "ECareerMenuAction::MainMenu_DynamiteMatch", (int64)ECareerMenuAction::MainMenu_DynamiteMatch },
				{ "ECareerMenuAction::MainMenu_ViewStats", (int64)ECareerMenuAction::MainMenu_ViewStats },
				{ "ECareerMenuAction::MainMenu_Snapshot", (int64)ECareerMenuAction::MainMenu_Snapshot },
				{ "ECareerMenuAction::Training_LightWorkout", (int64)ECareerMenuAction::Training_LightWorkout },
				{ "ECareerMenuAction::Training_StandardRoutine", (int64)ECareerMenuAction::Training_StandardRoutine },
				{ "ECareerMenuAction::Training_IntenseTraining", (int64)ECareerMenuAction::Training_IntenseTraining },
				{ "ECareerMenuAction::Restaurant_HighGradeRestaurant", (int64)ECareerMenuAction::Restaurant_HighGradeRestaurant },
				{ "ECareerMenuAction::Restaurant_FirstFood", (int64)ECareerMenuAction::Restaurant_FirstFood },
				{ "ECareerMenuAction::Restaurant_Catering", (int64)ECareerMenuAction::Restaurant_Catering },
				{ "ECareerMenuAction::Restaurant_RegionFood", (int64)ECareerMenuAction::Restaurant_RegionFood },
				{ "ECareerMenuAction::Hospital_MedicalTreatmentA", (int64)ECareerMenuAction::Hospital_MedicalTreatmentA },
				{ "ECareerMenuAction::Hospital_MedicalTreatmentB", (int64)ECareerMenuAction::Hospital_MedicalTreatmentB },
				{ "ECareerMenuAction::Promotion_FanEvent", (int64)ECareerMenuAction::Promotion_FanEvent },
				{ "ECareerMenuAction::Promotion_TVShow", (int64)ECareerMenuAction::Promotion_TVShow },
				{ "ECareerMenuAction::Promotion_MovieAppearance", (int64)ECareerMenuAction::Promotion_MovieAppearance },
				{ "ECareerMenuAction::Promotion_AutographSession", (int64)ECareerMenuAction::Promotion_AutographSession },
				{ "ECareerMenuAction::Promotion_PressConference", (int64)ECareerMenuAction::Promotion_PressConference },
				{ "ECareerMenuAction::OtherAction_SightSeeing", (int64)ECareerMenuAction::OtherAction_SightSeeing },
				{ "ECareerMenuAction::OtherAction_Casino", (int64)ECareerMenuAction::OtherAction_Casino },
				{ "ECareerMenuAction::OtherAction_Minigame", (int64)ECareerMenuAction::OtherAction_Minigame },
				{ "ECareerMenuAction::Match_AEWDynamite", (int64)ECareerMenuAction::Match_AEWDynamite },
				{ "ECareerMenuAction::Match_AEWDark", (int64)ECareerMenuAction::Match_AEWDark },
				{ "ECareerMenuAction::Match_AEWElevation", (int64)ECareerMenuAction::Match_AEWElevation },
				{ "ECareerMenuAction::OtherOptions_WrestlerSettings", (int64)ECareerMenuAction::OtherOptions_WrestlerSettings },
				{ "ECareerMenuAction::OtherOptions_ViewStats", (int64)ECareerMenuAction::OtherOptions_ViewStats },
				{ "ECareerMenuAction::OtherOptions_AEWRanking", (int64)ECareerMenuAction::OtherOptions_AEWRanking },
				{ "ECareerMenuAction::OtherOptions_UseItems", (int64)ECareerMenuAction::OtherOptions_UseItems },
				{ "ECareerMenuAction::OtherOptions_TemShop", (int64)ECareerMenuAction::OtherOptions_TemShop },
				{ "ECareerMenuAction::OtherOptions_SaveAndExit", (int64)ECareerMenuAction::OtherOptions_SaveAndExit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hospital_MedicalTreatmentA.Name", "ECareerMenuAction::Hospital_MedicalTreatmentA" },
				{ "Hospital_MedicalTreatmentB.Name", "ECareerMenuAction::Hospital_MedicalTreatmentB" },
				{ "MainMenu_DynamiteMatch.Name", "ECareerMenuAction::MainMenu_DynamiteMatch" },
				{ "MainMenu_Snapshot.Name", "ECareerMenuAction::MainMenu_Snapshot" },
				{ "MainMenu_ViewStats.Name", "ECareerMenuAction::MainMenu_ViewStats" },
				{ "Match_AEWDark.Name", "ECareerMenuAction::Match_AEWDark" },
				{ "Match_AEWDynamite.Name", "ECareerMenuAction::Match_AEWDynamite" },
				{ "Match_AEWElevation.Name", "ECareerMenuAction::Match_AEWElevation" },
				{ "ModuleRelativePath", "Public/ECareerMenuAction.h" },
				{ "None.Name", "ECareerMenuAction::None" },
				{ "OtherAction_Casino.Name", "ECareerMenuAction::OtherAction_Casino" },
				{ "OtherAction_Minigame.Name", "ECareerMenuAction::OtherAction_Minigame" },
				{ "OtherAction_SightSeeing.Name", "ECareerMenuAction::OtherAction_SightSeeing" },
				{ "OtherOptions_AEWRanking.Name", "ECareerMenuAction::OtherOptions_AEWRanking" },
				{ "OtherOptions_SaveAndExit.Name", "ECareerMenuAction::OtherOptions_SaveAndExit" },
				{ "OtherOptions_TemShop.Name", "ECareerMenuAction::OtherOptions_TemShop" },
				{ "OtherOptions_UseItems.Name", "ECareerMenuAction::OtherOptions_UseItems" },
				{ "OtherOptions_ViewStats.Name", "ECareerMenuAction::OtherOptions_ViewStats" },
				{ "OtherOptions_WrestlerSettings.Name", "ECareerMenuAction::OtherOptions_WrestlerSettings" },
				{ "Promotion_AutographSession.Name", "ECareerMenuAction::Promotion_AutographSession" },
				{ "Promotion_FanEvent.Name", "ECareerMenuAction::Promotion_FanEvent" },
				{ "Promotion_MovieAppearance.Name", "ECareerMenuAction::Promotion_MovieAppearance" },
				{ "Promotion_PressConference.Name", "ECareerMenuAction::Promotion_PressConference" },
				{ "Promotion_TVShow.Name", "ECareerMenuAction::Promotion_TVShow" },
				{ "Restaurant_Catering.Name", "ECareerMenuAction::Restaurant_Catering" },
				{ "Restaurant_FirstFood.Name", "ECareerMenuAction::Restaurant_FirstFood" },
				{ "Restaurant_HighGradeRestaurant.Name", "ECareerMenuAction::Restaurant_HighGradeRestaurant" },
				{ "Restaurant_RegionFood.Name", "ECareerMenuAction::Restaurant_RegionFood" },
				{ "Training_IntenseTraining.Name", "ECareerMenuAction::Training_IntenseTraining" },
				{ "Training_LightWorkout.Name", "ECareerMenuAction::Training_LightWorkout" },
				{ "Training_StandardRoutine.Name", "ECareerMenuAction::Training_StandardRoutine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMenuAction",
				"ECareerMenuAction",
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
