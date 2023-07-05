// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerID_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerID_N() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerID_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerID_N"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerID_N>()
	{
		return EWrestlerID_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerID_N(EWrestlerID_N_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerID_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerID_N_Hash() { return 318743505U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerID_N"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerID_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerID_N::None", (int64)EWrestlerID_N::None },
				{ "EWrestlerID_N::KennyOmega", (int64)EWrestlerID_N::KennyOmega },
				{ "EWrestlerID_N::ChrisJericho", (int64)EWrestlerID_N::ChrisJericho },
				{ "EWrestlerID_N::HikaruShida", (int64)EWrestlerID_N::HikaruShida },
				{ "EWrestlerID_N::EditWrestler", (int64)EWrestlerID_N::EditWrestler },
				{ "EWrestlerID_N::AdamPage", (int64)EWrestlerID_N::AdamPage },
				{ "EWrestlerID_N::MattJackson", (int64)EWrestlerID_N::MattJackson },
				{ "EWrestlerID_N::NickJackson", (int64)EWrestlerID_N::NickJackson },
				{ "EWrestlerID_N::PentaElZeroM", (int64)EWrestlerID_N::PentaElZeroM },
				{ "EWrestlerID_N::MrBrodieLee", (int64)EWrestlerID_N::MrBrodieLee },
				{ "EWrestlerID_N::BrianCage", (int64)EWrestlerID_N::BrianCage },
				{ "EWrestlerID_N::ChuckTaylor", (int64)EWrestlerID_N::ChuckTaylor },
				{ "EWrestlerID_N::CodyRhodes", (int64)EWrestlerID_N::CodyRhodes },
				{ "EWrestlerID_N::DarbyAllin", (int64)EWrestlerID_N::DarbyAllin },
				{ "EWrestlerID_N::JonMoxley", (int64)EWrestlerID_N::JonMoxley },
				{ "EWrestlerID_N::JungleBoy", (int64)EWrestlerID_N::JungleBoy },
				{ "EWrestlerID_N::Luchasaurus", (int64)EWrestlerID_N::Luchasaurus },
				{ "EWrestlerID_N::MattHardy", (int64)EWrestlerID_N::MattHardy },
				{ "EWrestlerID_N::MJF", (int64)EWrestlerID_N::MJF },
				{ "EWrestlerID_N::OrangeCassidy", (int64)EWrestlerID_N::OrangeCassidy },
				{ "EWrestlerID_N::PAC", (int64)EWrestlerID_N::PAC },
				{ "EWrestlerID_N::ReyFenix", (int64)EWrestlerID_N::ReyFenix },
				{ "EWrestlerID_N::SammyGuevara", (int64)EWrestlerID_N::SammyGuevara },
				{ "EWrestlerID_N::ScorpioSky", (int64)EWrestlerID_N::ScorpioSky },
				{ "EWrestlerID_N::Trent", (int64)EWrestlerID_N::Trent },
				{ "EWrestlerID_N::BrittBaker", (int64)EWrestlerID_N::BrittBaker },
				{ "EWrestlerID_N::NylaRose", (int64)EWrestlerID_N::NylaRose },
				{ "EWrestlerID_N::Riho", (int64)EWrestlerID_N::Riho },
				{ "EWrestlerID_N::Sting", (int64)EWrestlerID_N::Sting },
				{ "EWrestlerID_N::AnnaJay", (int64)EWrestlerID_N::AnnaJay },
				{ "EWrestlerID_N::TayConti", (int64)EWrestlerID_N::TayConti },
				{ "EWrestlerID_N::ChristianCage", (int64)EWrestlerID_N::ChristianCage },
				{ "EWrestlerID_N::Miro", (int64)EWrestlerID_N::Miro },
				{ "EWrestlerID_N::EddieKingston", (int64)EWrestlerID_N::EddieKingston },
				{ "EWrestlerID_N::KrisStatlander", (int64)EWrestlerID_N::KrisStatlander },
				{ "EWrestlerID_N::JohnSilver", (int64)EWrestlerID_N::JohnSilver },
				{ "EWrestlerID_N::PaulWight", (int64)EWrestlerID_N::PaulWight },
				{ "EWrestlerID_N::CashWheeler", (int64)EWrestlerID_N::CashWheeler },
				{ "EWrestlerID_N::DaxHarwood", (int64)EWrestlerID_N::DaxHarwood },
				{ "EWrestlerID_N::JadeCargill", (int64)EWrestlerID_N::JadeCargill },
				{ "EWrestlerID_N::Abadon", (int64)EWrestlerID_N::Abadon },
				{ "EWrestlerID_N::Wardlow", (int64)EWrestlerID_N::Wardlow },
				{ "EWrestlerID_N::DustinRhodes", (int64)EWrestlerID_N::DustinRhodes },
				{ "EWrestlerID_N::ThunderRosa", (int64)EWrestlerID_N::ThunderRosa },
				{ "EWrestlerID_N::WillHobbs", (int64)EWrestlerID_N::WillHobbs },
				{ "EWrestlerID_N::NPC_Referee", (int64)EWrestlerID_N::NPC_Referee },
				{ "EWrestlerID_N::LanceArcher", (int64)EWrestlerID_N::LanceArcher },
				{ "EWrestlerID_N::AndradeElIdolo", (int64)EWrestlerID_N::AndradeElIdolo },
				{ "EWrestlerID_N::NPC_MovesMan01", (int64)EWrestlerID_N::NPC_MovesMan01 },
				{ "EWrestlerID_N::NPC_MovesMan02", (int64)EWrestlerID_N::NPC_MovesMan02 },
				{ "EWrestlerID_N::YukaSakazaki", (int64)EWrestlerID_N::YukaSakazaki },
				{ "EWrestlerID_N::AubreyEdwards", (int64)EWrestlerID_N::AubreyEdwards },
				{ "EWrestlerID_N::MalakaiBlack", (int64)EWrestlerID_N::MalakaiBlack },
				{ "EWrestlerID_N::CMPunk", (int64)EWrestlerID_N::CMPunk },
				{ "EWrestlerID_N::Greenman", (int64)EWrestlerID_N::Greenman },
				{ "EWrestlerID_N::AdamCole", (int64)EWrestlerID_N::AdamCole },
				{ "EWrestlerID_N::BryanDanielson", (int64)EWrestlerID_N::BryanDanielson },
				{ "EWrestlerID_N::NPC_Career_Waitress_1", (int64)EWrestlerID_N::NPC_Career_Waitress_1 },
				{ "EWrestlerID_N::OwenHart", (int64)EWrestlerID_N::OwenHart },
				{ "EWrestlerID_N::RubySoho", (int64)EWrestlerID_N::RubySoho },
				{ "EWrestlerID_N::NPC_AEWTrainer", (int64)EWrestlerID_N::NPC_AEWTrainer },
				{ "EWrestlerID_N::NPC_Career_Waitress_2", (int64)EWrestlerID_N::NPC_Career_Waitress_2 },
				{ "EWrestlerID_N::NPC_Career_Waitress_3", (int64)EWrestlerID_N::NPC_Career_Waitress_3 },
				{ "EWrestlerID_N::NPC_Talk_Show_MC_1", (int64)EWrestlerID_N::NPC_Talk_Show_MC_1 },
				{ "EWrestlerID_N::NPC_Talk_Show_MC_2", (int64)EWrestlerID_N::NPC_Talk_Show_MC_2 },
				{ "EWrestlerID_N::NPC_Nurse", (int64)EWrestlerID_N::NPC_Nurse },
				{ "EWrestlerID_N::NPC_Organizer", (int64)EWrestlerID_N::NPC_Organizer },
				{ "EWrestlerID_N::NPC_Gym_Manager", (int64)EWrestlerID_N::NPC_Gym_Manager },
				{ "EWrestlerID_N::NPC_Talk_Show_Producer", (int64)EWrestlerID_N::NPC_Talk_Show_Producer },
				{ "EWrestlerID_N::NPC_Fan_1", (int64)EWrestlerID_N::NPC_Fan_1 },
				{ "EWrestlerID_N::NPC_Fan_2", (int64)EWrestlerID_N::NPC_Fan_2 },
				{ "EWrestlerID_N::NPC_Fan_3", (int64)EWrestlerID_N::NPC_Fan_3 },
				{ "EWrestlerID_N::NPC_Extra_1", (int64)EWrestlerID_N::NPC_Extra_1 },
				{ "EWrestlerID_N::NPC_Extra_2", (int64)EWrestlerID_N::NPC_Extra_2 },
				{ "EWrestlerID_N::NPC_Extra_3", (int64)EWrestlerID_N::NPC_Extra_3 },
				{ "EWrestlerID_N::NPC_DARKORDER_A", (int64)EWrestlerID_N::NPC_DARKORDER_A },
				{ "EWrestlerID_N::NPC_DARKORDER_B", (int64)EWrestlerID_N::NPC_DARKORDER_B },
				{ "EWrestlerID_N::JeffHardy", (int64)EWrestlerID_N::JeffHardy },
				{ "EWrestlerID_N::RickyStarks", (int64)EWrestlerID_N::RickyStarks },
				{ "EWrestlerID_N::TheBunny", (int64)EWrestlerID_N::TheBunny },
				{ "EWrestlerID_N::KeithLee", (int64)EWrestlerID_N::KeithLee },
				{ "EWrestlerID_N::NPC_JoinUs_A", (int64)EWrestlerID_N::NPC_JoinUs_A },
				{ "EWrestlerID_N::NPC_JoinUs_B", (int64)EWrestlerID_N::NPC_JoinUs_B },
				{ "EWrestlerID_N::NPC_JoinUs_C", (int64)EWrestlerID_N::NPC_JoinUs_C },
				{ "EWrestlerID_N::NPC_JoinUs_D", (int64)EWrestlerID_N::NPC_JoinUs_D },
				{ "EWrestlerID_N::EWrestlerID_MAX", (int64)EWrestlerID_N::EWrestlerID_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abadon.Name", "EWrestlerID_N::Abadon" },
				{ "AdamCole.Name", "EWrestlerID_N::AdamCole" },
				{ "AdamPage.Name", "EWrestlerID_N::AdamPage" },
				{ "AndradeElIdolo.Name", "EWrestlerID_N::AndradeElIdolo" },
				{ "AnnaJay.Name", "EWrestlerID_N::AnnaJay" },
				{ "AubreyEdwards.Name", "EWrestlerID_N::AubreyEdwards" },
				{ "BlueprintType", "true" },
				{ "BrianCage.Name", "EWrestlerID_N::BrianCage" },
				{ "BrittBaker.Name", "EWrestlerID_N::BrittBaker" },
				{ "BryanDanielson.Name", "EWrestlerID_N::BryanDanielson" },
				{ "CashWheeler.Name", "EWrestlerID_N::CashWheeler" },
				{ "ChrisJericho.Name", "EWrestlerID_N::ChrisJericho" },
				{ "ChristianCage.Name", "EWrestlerID_N::ChristianCage" },
				{ "ChuckTaylor.Name", "EWrestlerID_N::ChuckTaylor" },
				{ "CMPunk.Name", "EWrestlerID_N::CMPunk" },
				{ "CodyRhodes.Name", "EWrestlerID_N::CodyRhodes" },
				{ "DarbyAllin.Name", "EWrestlerID_N::DarbyAllin" },
				{ "DaxHarwood.Name", "EWrestlerID_N::DaxHarwood" },
				{ "DustinRhodes.Name", "EWrestlerID_N::DustinRhodes" },
				{ "EddieKingston.Name", "EWrestlerID_N::EddieKingston" },
				{ "EditWrestler.Name", "EWrestlerID_N::EditWrestler" },
				{ "EWrestlerID_MAX.Hidden", "" },
				{ "EWrestlerID_MAX.Name", "EWrestlerID_N::EWrestlerID_MAX" },
				{ "Greenman.Name", "EWrestlerID_N::Greenman" },
				{ "HikaruShida.Name", "EWrestlerID_N::HikaruShida" },
				{ "JadeCargill.Name", "EWrestlerID_N::JadeCargill" },
				{ "JeffHardy.Name", "EWrestlerID_N::JeffHardy" },
				{ "JohnSilver.Name", "EWrestlerID_N::JohnSilver" },
				{ "JonMoxley.Name", "EWrestlerID_N::JonMoxley" },
				{ "JungleBoy.Name", "EWrestlerID_N::JungleBoy" },
				{ "KeithLee.Name", "EWrestlerID_N::KeithLee" },
				{ "KennyOmega.Name", "EWrestlerID_N::KennyOmega" },
				{ "KrisStatlander.Name", "EWrestlerID_N::KrisStatlander" },
				{ "LanceArcher.Name", "EWrestlerID_N::LanceArcher" },
				{ "Luchasaurus.Name", "EWrestlerID_N::Luchasaurus" },
				{ "MalakaiBlack.Name", "EWrestlerID_N::MalakaiBlack" },
				{ "MattHardy.Name", "EWrestlerID_N::MattHardy" },
				{ "MattJackson.Name", "EWrestlerID_N::MattJackson" },
				{ "Miro.Name", "EWrestlerID_N::Miro" },
				{ "MJF.Name", "EWrestlerID_N::MJF" },
				{ "ModuleRelativePath", "Public/EWrestlerID_N.h" },
				{ "MrBrodieLee.Name", "EWrestlerID_N::MrBrodieLee" },
				{ "NickJackson.Name", "EWrestlerID_N::NickJackson" },
				{ "None.Name", "EWrestlerID_N::None" },
				{ "NPC_AEWTrainer.Name", "EWrestlerID_N::NPC_AEWTrainer" },
				{ "NPC_Career_Waitress_1.Name", "EWrestlerID_N::NPC_Career_Waitress_1" },
				{ "NPC_Career_Waitress_2.Name", "EWrestlerID_N::NPC_Career_Waitress_2" },
				{ "NPC_Career_Waitress_3.Name", "EWrestlerID_N::NPC_Career_Waitress_3" },
				{ "NPC_DARKORDER_A.Name", "EWrestlerID_N::NPC_DARKORDER_A" },
				{ "NPC_DARKORDER_B.Name", "EWrestlerID_N::NPC_DARKORDER_B" },
				{ "NPC_Extra_1.Name", "EWrestlerID_N::NPC_Extra_1" },
				{ "NPC_Extra_2.Name", "EWrestlerID_N::NPC_Extra_2" },
				{ "NPC_Extra_3.Name", "EWrestlerID_N::NPC_Extra_3" },
				{ "NPC_Fan_1.Name", "EWrestlerID_N::NPC_Fan_1" },
				{ "NPC_Fan_2.Name", "EWrestlerID_N::NPC_Fan_2" },
				{ "NPC_Fan_3.Name", "EWrestlerID_N::NPC_Fan_3" },
				{ "NPC_Gym_Manager.Name", "EWrestlerID_N::NPC_Gym_Manager" },
				{ "NPC_JoinUs_A.Name", "EWrestlerID_N::NPC_JoinUs_A" },
				{ "NPC_JoinUs_B.Name", "EWrestlerID_N::NPC_JoinUs_B" },
				{ "NPC_JoinUs_C.Name", "EWrestlerID_N::NPC_JoinUs_C" },
				{ "NPC_JoinUs_D.Name", "EWrestlerID_N::NPC_JoinUs_D" },
				{ "NPC_MovesMan01.Name", "EWrestlerID_N::NPC_MovesMan01" },
				{ "NPC_MovesMan02.Name", "EWrestlerID_N::NPC_MovesMan02" },
				{ "NPC_Nurse.Name", "EWrestlerID_N::NPC_Nurse" },
				{ "NPC_Organizer.Name", "EWrestlerID_N::NPC_Organizer" },
				{ "NPC_Referee.Name", "EWrestlerID_N::NPC_Referee" },
				{ "NPC_Talk_Show_MC_1.Name", "EWrestlerID_N::NPC_Talk_Show_MC_1" },
				{ "NPC_Talk_Show_MC_2.Name", "EWrestlerID_N::NPC_Talk_Show_MC_2" },
				{ "NPC_Talk_Show_Producer.Name", "EWrestlerID_N::NPC_Talk_Show_Producer" },
				{ "NylaRose.Name", "EWrestlerID_N::NylaRose" },
				{ "OrangeCassidy.Name", "EWrestlerID_N::OrangeCassidy" },
				{ "OwenHart.Name", "EWrestlerID_N::OwenHart" },
				{ "PAC.Name", "EWrestlerID_N::PAC" },
				{ "PaulWight.Name", "EWrestlerID_N::PaulWight" },
				{ "PentaElZeroM.Name", "EWrestlerID_N::PentaElZeroM" },
				{ "ReyFenix.Name", "EWrestlerID_N::ReyFenix" },
				{ "RickyStarks.Name", "EWrestlerID_N::RickyStarks" },
				{ "Riho.Name", "EWrestlerID_N::Riho" },
				{ "RubySoho.Name", "EWrestlerID_N::RubySoho" },
				{ "SammyGuevara.Name", "EWrestlerID_N::SammyGuevara" },
				{ "ScorpioSky.Name", "EWrestlerID_N::ScorpioSky" },
				{ "Sting.Name", "EWrestlerID_N::Sting" },
				{ "TayConti.Name", "EWrestlerID_N::TayConti" },
				{ "TheBunny.Name", "EWrestlerID_N::TheBunny" },
				{ "ThunderRosa.Name", "EWrestlerID_N::ThunderRosa" },
				{ "Trent.Name", "EWrestlerID_N::Trent" },
				{ "Wardlow.Name", "EWrestlerID_N::Wardlow" },
				{ "WillHobbs.Name", "EWrestlerID_N::WillHobbs" },
				{ "YukaSakazaki.Name", "EWrestlerID_N::YukaSakazaki" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerID_N",
				"EWrestlerID_N",
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
