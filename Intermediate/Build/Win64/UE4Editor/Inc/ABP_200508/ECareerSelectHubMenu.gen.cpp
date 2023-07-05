// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerSelectHubMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerSelectHubMenu() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSelectHubMenu();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerSelectHubMenu_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerSelectHubMenu, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerSelectHubMenu"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerSelectHubMenu>()
	{
		return ECareerSelectHubMenu_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerSelectHubMenu(ECareerSelectHubMenu_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerSelectHubMenu"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerSelectHubMenu_Hash() { return 2437850681U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerSelectHubMenu()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerSelectHubMenu"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerSelectHubMenu_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerSelectHubMenu::LightWorkout", (int64)ECareerSelectHubMenu::LightWorkout },
				{ "ECareerSelectHubMenu::StandardRoutine", (int64)ECareerSelectHubMenu::StandardRoutine },
				{ "ECareerSelectHubMenu::IntenseTraining", (int64)ECareerSelectHubMenu::IntenseTraining },
				{ "ECareerSelectHubMenu::Dining", (int64)ECareerSelectHubMenu::Dining },
				{ "ECareerSelectHubMenu::HospitalA", (int64)ECareerSelectHubMenu::HospitalA },
				{ "ECareerSelectHubMenu::HospitalB", (int64)ECareerSelectHubMenu::HospitalB },
				{ "ECareerSelectHubMenu::Sightseeing", (int64)ECareerSelectHubMenu::Sightseeing },
				{ "ECareerSelectHubMenu::TVTalkShow", (int64)ECareerSelectHubMenu::TVTalkShow },
				{ "ECareerSelectHubMenu::PressConference", (int64)ECareerSelectHubMenu::PressConference },
				{ "ECareerSelectHubMenu::MeetGreet", (int64)ECareerSelectHubMenu::MeetGreet },
				{ "ECareerSelectHubMenu::Minigame", (int64)ECareerSelectHubMenu::Minigame },
				{ "ECareerSelectHubMenu::MyWrestler", (int64)ECareerSelectHubMenu::MyWrestler },
				{ "ECareerSelectHubMenu::CustomizeWrestler", (int64)ECareerSelectHubMenu::CustomizeWrestler },
				{ "ECareerSelectHubMenu::CareerRecords", (int64)ECareerSelectHubMenu::CareerRecords },
				{ "ECareerSelectHubMenu::DifficultyEasy", (int64)ECareerSelectHubMenu::DifficultyEasy },
				{ "ECareerSelectHubMenu::DifficultyNormal", (int64)ECareerSelectHubMenu::DifficultyNormal },
				{ "ECareerSelectHubMenu::DifficultyHard", (int64)ECareerSelectHubMenu::DifficultyHard },
				{ "ECareerSelectHubMenu::DifficultyElite", (int64)ECareerSelectHubMenu::DifficultyElite },
				{ "ECareerSelectHubMenu::CareerTutorial", (int64)ECareerSelectHubMenu::CareerTutorial },
				{ "ECareerSelectHubMenu::SnapshotMemories", (int64)ECareerSelectHubMenu::SnapshotMemories },
				{ "ECareerSelectHubMenu::SaveQuit", (int64)ECareerSelectHubMenu::SaveQuit },
				{ "ECareerSelectHubMenu::OtherMatchDark", (int64)ECareerSelectHubMenu::OtherMatchDark },
				{ "ECareerSelectHubMenu::OtherMatchRampage", (int64)ECareerSelectHubMenu::OtherMatchRampage },
				{ "ECareerSelectHubMenu::ExclamationPoint", (int64)ECareerSelectHubMenu::ExclamationPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CareerRecords.Name", "ECareerSelectHubMenu::CareerRecords" },
				{ "CareerTutorial.Name", "ECareerSelectHubMenu::CareerTutorial" },
				{ "CustomizeWrestler.Name", "ECareerSelectHubMenu::CustomizeWrestler" },
				{ "DifficultyEasy.Name", "ECareerSelectHubMenu::DifficultyEasy" },
				{ "DifficultyElite.Name", "ECareerSelectHubMenu::DifficultyElite" },
				{ "DifficultyHard.Name", "ECareerSelectHubMenu::DifficultyHard" },
				{ "DifficultyNormal.Name", "ECareerSelectHubMenu::DifficultyNormal" },
				{ "Dining.Name", "ECareerSelectHubMenu::Dining" },
				{ "ExclamationPoint.Name", "ECareerSelectHubMenu::ExclamationPoint" },
				{ "HospitalA.Name", "ECareerSelectHubMenu::HospitalA" },
				{ "HospitalB.Name", "ECareerSelectHubMenu::HospitalB" },
				{ "IntenseTraining.Name", "ECareerSelectHubMenu::IntenseTraining" },
				{ "LightWorkout.Name", "ECareerSelectHubMenu::LightWorkout" },
				{ "MeetGreet.Name", "ECareerSelectHubMenu::MeetGreet" },
				{ "Minigame.Name", "ECareerSelectHubMenu::Minigame" },
				{ "ModuleRelativePath", "Public/ECareerSelectHubMenu.h" },
				{ "MyWrestler.Name", "ECareerSelectHubMenu::MyWrestler" },
				{ "OtherMatchDark.Name", "ECareerSelectHubMenu::OtherMatchDark" },
				{ "OtherMatchRampage.Name", "ECareerSelectHubMenu::OtherMatchRampage" },
				{ "PressConference.Name", "ECareerSelectHubMenu::PressConference" },
				{ "SaveQuit.Name", "ECareerSelectHubMenu::SaveQuit" },
				{ "Sightseeing.Name", "ECareerSelectHubMenu::Sightseeing" },
				{ "SnapshotMemories.Name", "ECareerSelectHubMenu::SnapshotMemories" },
				{ "StandardRoutine.Name", "ECareerSelectHubMenu::StandardRoutine" },
				{ "TVTalkShow.Name", "ECareerSelectHubMenu::TVTalkShow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerSelectHubMenu",
				"ECareerSelectHubMenu",
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
