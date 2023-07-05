// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_RosterName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_RosterName() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_RosterName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_RosterName"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_RosterName>()
	{
		return ERA_Slot_RosterName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_RosterName(ERA_Slot_RosterName_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_RosterName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName_Hash() { return 1334940744U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_RosterName"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_RosterName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_NONE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_NONE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ADAMPAGE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ADAMPAGE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BRODIELEE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BRODIELEE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BRIANCAGE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BRIANCAGE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_CHRISJERICHO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_CHRISJERICHO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_CHUCKTAYLOR", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_CHUCKTAYLOR },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_CODYRHODES", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_CODYRHODES },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_DARBYALLIN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_DARBYALLIN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_JAKEHAGER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_JAKEHAGER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_JONMOXLEY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_JONMOXLEY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_JUNGLEBOY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_JUNGLEBOY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_KENNYOMEGA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_KENNYOMEGA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_LUCHASAURUS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_LUCHASAURUS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MATTHARDY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MATTHARDY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MJF", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MJF },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MATTJACKSON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MATTJACKSON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_NICKJACKSON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_NICKJACKSON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ORANGECASSIDY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ORANGECASSIDY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_PAC", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_PAC },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_PENTAELZEROMIEDO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_PENTAELZEROMIEDO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_REYFENIX", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_REYFENIX },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SAMMYGUEVARA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SAMMYGUEVARA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SCORPIOSKY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SCORPIOSKY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_TRENT", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_TRENT },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BIGSWOLE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BIGSWOLE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BRANDIRHODES", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BRANDIRHODES },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BRITTBAKER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BRITTBAKER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_HIKARUSHIDA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_HIKARUSHIDA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_NYLAROSE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_NYLAROSE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_PENELOPEFORD", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_PENELOPEFORD },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_RIHO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_RIHO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_STING", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_STING },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ANNAJAY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ANNAJAY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_TAYCONTI", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_TAYCONTI },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ALANANGELS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ALANANGELS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ALEXREYNOLDS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ALEXREYNOLDS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ANGELICO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ANGELICO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_AUSTINGUNN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_AUSTINGUNN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BRANDONCUTLER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BRANDONCUTLER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_CASHWHEELER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_CASHWHEELER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_CHRISTOPHERDANIELS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_CHRISTOPHERDANIELS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_COLTCABANA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_COLTCABANA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_DAXHARWOOD", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_DAXHARWOOD },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_DUSTINRHODES", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_DUSTINRHODES },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_EDDIEKINGSTON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_EDDIEKINGSTON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_EVILUNO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_EVILUNO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_FRANKIEKAZARIAN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_FRANKIEKAZARIAN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ISIAHKASSIDY", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ISIAHKASSIDY },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_JACKEVANS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_JACKEVANS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_JOEYJANELA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_JOEYJANELA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_JOHNSILVER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_JOHNSILVER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_KIPSABIAN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_KIPSABIAN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_LANCEARCHER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_LANCEARCHER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_LUTHER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_LUTHER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MIRO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MIRO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MARKOSTUNT", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MARKOSTUNT },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MARQQUEN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MARQQUEN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MATTSYDAL", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MATTSYDAL },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MICHAELNAKAZAWA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MICHAELNAKAZAWA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ORTIZ", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ORTIZ },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_PETERAVALON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_PETERAVALON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_PRES10VANCE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_PRES10VANCE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_QTMARSHALL", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_QTMARSHALL },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_RICKYSTARKS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_RICKYSTARKS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SANTANA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SANTANA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SHAWNSPEARS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SHAWNSPEARS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SONNYKISS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SONNYKISS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_STUGRAYSON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_STUGRAYSON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_THEBLADE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_THEBLADE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_THEBUTCHER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_THEBUTCHER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_WARDLOW", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_WARDLOW },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_POWERHOUSEHOBBS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_POWERHOUSEHOBBS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ABADON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ABADON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ALLIE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ALLIE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_AWESOMEKONG", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_AWESOMEKONG },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_EMISAKURA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_EMISAKURA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_KRISSTATLANDER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_KRISSTATLANDER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_LEVABATES", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_LEVABATES },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MEL", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MEL },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SERENADEEB", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SERENADEEB },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SHANNA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SHANNA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_YUKASAKAZAKI", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_YUKASAKAZAKI },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_ANTHONYBOWENS", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_ANTHONYBOWENS },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MAXCASTER", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MAXCASTER },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_DARIUSMARTIN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_DARIUSMARTIN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_DANTEMARTIN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_DANTEMARTIN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BILLYGUNN", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BILLYGUNN },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_LEYLAHIRSCH", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_LEYLAHIRSCH },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_THUDERROSA", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_THUDERROSA },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_GRIFFGARRISON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_GRIFFGARRISON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_BRIANPILLMANJR", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_BRIANPILLMANJR },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_SERPENTICO", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_SERPENTICO },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_LEEJOHNSON", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_LEEJOHNSON },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_DIAMANTE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_DIAMANTE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_IVELISSE", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_IVELISSE },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_REDVELVET", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_REDVELVET },
				{ "ERA_Slot_RosterName::RA_NAME_ROSTER_MAX", (int64)ERA_Slot_RosterName::RA_NAME_ROSTER_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_RosterName.h" },
				{ "RA_NAME_ROSTER_ABADON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ABADON" },
				{ "RA_NAME_ROSTER_ADAMPAGE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ADAMPAGE" },
				{ "RA_NAME_ROSTER_ALANANGELS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ALANANGELS" },
				{ "RA_NAME_ROSTER_ALEXREYNOLDS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ALEXREYNOLDS" },
				{ "RA_NAME_ROSTER_ALLIE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ALLIE" },
				{ "RA_NAME_ROSTER_ANGELICO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ANGELICO" },
				{ "RA_NAME_ROSTER_ANNAJAY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ANNAJAY" },
				{ "RA_NAME_ROSTER_ANTHONYBOWENS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ANTHONYBOWENS" },
				{ "RA_NAME_ROSTER_AUSTINGUNN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_AUSTINGUNN" },
				{ "RA_NAME_ROSTER_AWESOMEKONG.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_AWESOMEKONG" },
				{ "RA_NAME_ROSTER_BIGSWOLE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BIGSWOLE" },
				{ "RA_NAME_ROSTER_BILLYGUNN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BILLYGUNN" },
				{ "RA_NAME_ROSTER_BRANDIRHODES.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BRANDIRHODES" },
				{ "RA_NAME_ROSTER_BRANDONCUTLER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BRANDONCUTLER" },
				{ "RA_NAME_ROSTER_BRIANCAGE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BRIANCAGE" },
				{ "RA_NAME_ROSTER_BRIANPILLMANJR.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BRIANPILLMANJR" },
				{ "RA_NAME_ROSTER_BRITTBAKER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BRITTBAKER" },
				{ "RA_NAME_ROSTER_BRODIELEE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_BRODIELEE" },
				{ "RA_NAME_ROSTER_CASHWHEELER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_CASHWHEELER" },
				{ "RA_NAME_ROSTER_CHRISJERICHO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_CHRISJERICHO" },
				{ "RA_NAME_ROSTER_CHRISTOPHERDANIELS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_CHRISTOPHERDANIELS" },
				{ "RA_NAME_ROSTER_CHUCKTAYLOR.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_CHUCKTAYLOR" },
				{ "RA_NAME_ROSTER_CODYRHODES.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_CODYRHODES" },
				{ "RA_NAME_ROSTER_COLTCABANA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_COLTCABANA" },
				{ "RA_NAME_ROSTER_DANTEMARTIN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_DANTEMARTIN" },
				{ "RA_NAME_ROSTER_DARBYALLIN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_DARBYALLIN" },
				{ "RA_NAME_ROSTER_DARIUSMARTIN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_DARIUSMARTIN" },
				{ "RA_NAME_ROSTER_DAXHARWOOD.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_DAXHARWOOD" },
				{ "RA_NAME_ROSTER_DIAMANTE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_DIAMANTE" },
				{ "RA_NAME_ROSTER_DUSTINRHODES.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_DUSTINRHODES" },
				{ "RA_NAME_ROSTER_EDDIEKINGSTON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_EDDIEKINGSTON" },
				{ "RA_NAME_ROSTER_EMISAKURA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_EMISAKURA" },
				{ "RA_NAME_ROSTER_EVILUNO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_EVILUNO" },
				{ "RA_NAME_ROSTER_FRANKIEKAZARIAN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_FRANKIEKAZARIAN" },
				{ "RA_NAME_ROSTER_GRIFFGARRISON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_GRIFFGARRISON" },
				{ "RA_NAME_ROSTER_HIKARUSHIDA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_HIKARUSHIDA" },
				{ "RA_NAME_ROSTER_ISIAHKASSIDY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ISIAHKASSIDY" },
				{ "RA_NAME_ROSTER_IVELISSE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_IVELISSE" },
				{ "RA_NAME_ROSTER_JACKEVANS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_JACKEVANS" },
				{ "RA_NAME_ROSTER_JAKEHAGER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_JAKEHAGER" },
				{ "RA_NAME_ROSTER_JOEYJANELA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_JOEYJANELA" },
				{ "RA_NAME_ROSTER_JOHNSILVER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_JOHNSILVER" },
				{ "RA_NAME_ROSTER_JONMOXLEY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_JONMOXLEY" },
				{ "RA_NAME_ROSTER_JUNGLEBOY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_JUNGLEBOY" },
				{ "RA_NAME_ROSTER_KENNYOMEGA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_KENNYOMEGA" },
				{ "RA_NAME_ROSTER_KIPSABIAN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_KIPSABIAN" },
				{ "RA_NAME_ROSTER_KRISSTATLANDER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_KRISSTATLANDER" },
				{ "RA_NAME_ROSTER_LANCEARCHER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_LANCEARCHER" },
				{ "RA_NAME_ROSTER_LEEJOHNSON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_LEEJOHNSON" },
				{ "RA_NAME_ROSTER_LEVABATES.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_LEVABATES" },
				{ "RA_NAME_ROSTER_LEYLAHIRSCH.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_LEYLAHIRSCH" },
				{ "RA_NAME_ROSTER_LUCHASAURUS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_LUCHASAURUS" },
				{ "RA_NAME_ROSTER_LUTHER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_LUTHER" },
				{ "RA_NAME_ROSTER_MARKOSTUNT.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MARKOSTUNT" },
				{ "RA_NAME_ROSTER_MARQQUEN.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MARQQUEN" },
				{ "RA_NAME_ROSTER_MATTHARDY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MATTHARDY" },
				{ "RA_NAME_ROSTER_MATTJACKSON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MATTJACKSON" },
				{ "RA_NAME_ROSTER_MATTSYDAL.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MATTSYDAL" },
				{ "RA_NAME_ROSTER_MAX.Hidden", "" },
				{ "RA_NAME_ROSTER_MAX.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MAX" },
				{ "RA_NAME_ROSTER_MAXCASTER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MAXCASTER" },
				{ "RA_NAME_ROSTER_MEL.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MEL" },
				{ "RA_NAME_ROSTER_MICHAELNAKAZAWA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MICHAELNAKAZAWA" },
				{ "RA_NAME_ROSTER_MIRO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MIRO" },
				{ "RA_NAME_ROSTER_MJF.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_MJF" },
				{ "RA_NAME_ROSTER_NICKJACKSON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_NICKJACKSON" },
				{ "RA_NAME_ROSTER_NONE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_NONE" },
				{ "RA_NAME_ROSTER_NYLAROSE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_NYLAROSE" },
				{ "RA_NAME_ROSTER_ORANGECASSIDY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ORANGECASSIDY" },
				{ "RA_NAME_ROSTER_ORTIZ.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_ORTIZ" },
				{ "RA_NAME_ROSTER_PAC.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_PAC" },
				{ "RA_NAME_ROSTER_PENELOPEFORD.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_PENELOPEFORD" },
				{ "RA_NAME_ROSTER_PENTAELZEROMIEDO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_PENTAELZEROMIEDO" },
				{ "RA_NAME_ROSTER_PETERAVALON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_PETERAVALON" },
				{ "RA_NAME_ROSTER_POWERHOUSEHOBBS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_POWERHOUSEHOBBS" },
				{ "RA_NAME_ROSTER_PRES10VANCE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_PRES10VANCE" },
				{ "RA_NAME_ROSTER_QTMARSHALL.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_QTMARSHALL" },
				{ "RA_NAME_ROSTER_REDVELVET.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_REDVELVET" },
				{ "RA_NAME_ROSTER_REYFENIX.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_REYFENIX" },
				{ "RA_NAME_ROSTER_RICKYSTARKS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_RICKYSTARKS" },
				{ "RA_NAME_ROSTER_RIHO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_RIHO" },
				{ "RA_NAME_ROSTER_SAMMYGUEVARA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SAMMYGUEVARA" },
				{ "RA_NAME_ROSTER_SANTANA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SANTANA" },
				{ "RA_NAME_ROSTER_SCORPIOSKY.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SCORPIOSKY" },
				{ "RA_NAME_ROSTER_SERENADEEB.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SERENADEEB" },
				{ "RA_NAME_ROSTER_SERPENTICO.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SERPENTICO" },
				{ "RA_NAME_ROSTER_SHANNA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SHANNA" },
				{ "RA_NAME_ROSTER_SHAWNSPEARS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SHAWNSPEARS" },
				{ "RA_NAME_ROSTER_SONNYKISS.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_SONNYKISS" },
				{ "RA_NAME_ROSTER_STING.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_STING" },
				{ "RA_NAME_ROSTER_STUGRAYSON.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_STUGRAYSON" },
				{ "RA_NAME_ROSTER_TAYCONTI.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_TAYCONTI" },
				{ "RA_NAME_ROSTER_THEBLADE.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_THEBLADE" },
				{ "RA_NAME_ROSTER_THEBUTCHER.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_THEBUTCHER" },
				{ "RA_NAME_ROSTER_THUDERROSA.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_THUDERROSA" },
				{ "RA_NAME_ROSTER_TRENT.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_TRENT" },
				{ "RA_NAME_ROSTER_WARDLOW.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_WARDLOW" },
				{ "RA_NAME_ROSTER_YUKASAKAZAKI.Name", "ERA_Slot_RosterName::RA_NAME_ROSTER_YUKASAKAZAKI" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_RosterName",
				"ERA_Slot_RosterName",
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
