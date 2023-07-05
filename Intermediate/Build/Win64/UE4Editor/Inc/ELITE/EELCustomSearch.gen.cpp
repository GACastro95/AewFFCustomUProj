// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EELCustomSearch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELCustomSearch() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EELCustomSearch();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EELCustomSearch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EELCustomSearch, Z_Construct_UPackage__Script_ELITE(), TEXT("EELCustomSearch"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EELCustomSearch>()
	{
		return EELCustomSearch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELCustomSearch(EELCustomSearch_StaticEnum, TEXT("/Script/ELITE"), TEXT("EELCustomSearch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EELCustomSearch_Hash() { return 1033098092U; }
	UEnum* Z_Construct_UEnum_ELITE_EELCustomSearch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELCustomSearch"), 0, Get_Z_Construct_UEnum_ELITE_EELCustomSearch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELCustomSearch::None", (int64)EELCustomSearch::None },
				{ "EELCustomSearch::SearchCategory", (int64)EELCustomSearch::SearchCategory },
				{ "EELCustomSearch::Common", (int64)EELCustomSearch::Common },
				{ "EELCustomSearch::Uncommon", (int64)EELCustomSearch::Uncommon },
				{ "EELCustomSearch::Rare", (int64)EELCustomSearch::Rare },
				{ "EELCustomSearch::Epic", (int64)EELCustomSearch::Epic },
				{ "EELCustomSearch::Legendary", (int64)EELCustomSearch::Legendary },
				{ "EELCustomSearch::Face", (int64)EELCustomSearch::Face },
				{ "EELCustomSearch::BodyParts", (int64)EELCustomSearch::BodyParts },
				{ "EELCustomSearch::Head", (int64)EELCustomSearch::Head },
				{ "EELCustomSearch::BodySuit", (int64)EELCustomSearch::BodySuit },
				{ "EELCustomSearch::UpperBody", (int64)EELCustomSearch::UpperBody },
				{ "EELCustomSearch::LowerBody", (int64)EELCustomSearch::LowerBody },
				{ "EELCustomSearch::Monochrome", (int64)EELCustomSearch::Monochrome },
				{ "EELCustomSearch::Brown", (int64)EELCustomSearch::Brown },
				{ "EELCustomSearch::Red", (int64)EELCustomSearch::Red },
				{ "EELCustomSearch::Green", (int64)EELCustomSearch::Green },
				{ "EELCustomSearch::Blue", (int64)EELCustomSearch::Blue },
				{ "EELCustomSearch::Yellow", (int64)EELCustomSearch::Yellow },
				{ "EELCustomSearch::Purple", (int64)EELCustomSearch::Purple },
				{ "EELCustomSearch::Pink", (int64)EELCustomSearch::Pink },
				{ "EELCustomSearch::Finisher", (int64)EELCustomSearch::Finisher },
				{ "EELCustomSearch::Signature", (int64)EELCustomSearch::Signature },
				{ "EELCustomSearch::Taunt", (int64)EELCustomSearch::Taunt },
				{ "EELCustomSearch::VictoryEmote", (int64)EELCustomSearch::VictoryEmote },
				{ "EELCustomSearch::DesperationImpulse", (int64)EELCustomSearch::DesperationImpulse },
				{ "EELCustomSearch::BattleRoyale", (int64)EELCustomSearch::BattleRoyale },
				{ "EELCustomSearch::FrontStrike", (int64)EELCustomSearch::FrontStrike },
				{ "EELCustomSearch::FrontChain", (int64)EELCustomSearch::FrontChain },
				{ "EELCustomSearch::FrontStrongChain", (int64)EELCustomSearch::FrontStrongChain },
				{ "EELCustomSearch::RearStrike", (int64)EELCustomSearch::RearStrike },
				{ "EELCustomSearch::RearChain", (int64)EELCustomSearch::RearChain },
				{ "EELCustomSearch::RearStrongChain", (int64)EELCustomSearch::RearStrongChain },
				{ "EELCustomSearch::RunningStrike", (int64)EELCustomSearch::RunningStrike },
				{ "EELCustomSearch::RunningCounter", (int64)EELCustomSearch::RunningCounter },
				{ "EELCustomSearch::GroundStrike", (int64)EELCustomSearch::GroundStrike },
				{ "EELCustomSearch::SeatedStrike", (int64)EELCustomSearch::SeatedStrike },
				{ "EELCustomSearch::ChainWrestling", (int64)EELCustomSearch::ChainWrestling },
				{ "EELCustomSearch::RisingStrike", (int64)EELCustomSearch::RisingStrike },
				{ "EELCustomSearch::RingSideToRing", (int64)EELCustomSearch::RingSideToRing },
				{ "EELCustomSearch::Setup", (int64)EELCustomSearch::Setup },
				{ "EELCustomSearch::LeveragePin", (int64)EELCustomSearch::LeveragePin },
				{ "EELCustomSearch::Evade", (int64)EELCustomSearch::Evade },
				{ "EELCustomSearch::TopRopeDiveAttacks", (int64)EELCustomSearch::TopRopeDiveAttacks },
				{ "EELCustomSearch::RopeSpringboard", (int64)EELCustomSearch::RopeSpringboard },
				{ "EELCustomSearch::Tope", (int64)EELCustomSearch::Tope },
				{ "EELCustomSearch::CornerSpringboard", (int64)EELCustomSearch::CornerSpringboard },
				{ "EELCustomSearch::ApronSpringboard", (int64)EELCustomSearch::ApronSpringboard },
				{ "EELCustomSearch::FenceDiveAttacks", (int64)EELCustomSearch::FenceDiveAttacks },
				{ "EELCustomSearch::DiveCatchAttacks", (int64)EELCustomSearch::DiveCatchAttacks },
				{ "EELCustomSearch::CornerStrike", (int64)EELCustomSearch::CornerStrike },
				{ "EELCustomSearch::CornerStunnedStrike", (int64)EELCustomSearch::CornerStunnedStrike },
				{ "EELCustomSearch::CornerChain", (int64)EELCustomSearch::CornerChain },
				{ "EELCustomSearch::RopeStrike", (int64)EELCustomSearch::RopeStrike },
				{ "EELCustomSearch::RopeChain", (int64)EELCustomSearch::RopeChain },
				{ "EELCustomSearch::CornerRecoil", (int64)EELCustomSearch::CornerRecoil },
				{ "EELCustomSearch::ReboundRecoil", (int64)EELCustomSearch::ReboundRecoil },
				{ "EELCustomSearch::ApronStrike", (int64)EELCustomSearch::ApronStrike },
				{ "EELCustomSearch::ApronChain", (int64)EELCustomSearch::ApronChain },
				{ "EELCustomSearch::ApronCut_OffStrike", (int64)EELCustomSearch::ApronCut_OffStrike },
				{ "EELCustomSearch::ApronBlindStrike", (int64)EELCustomSearch::ApronBlindStrike },
				{ "EELCustomSearch::ApronToApron", (int64)EELCustomSearch::ApronToApron },
				{ "EELCustomSearch::EnvironmentAttacks", (int64)EELCustomSearch::EnvironmentAttacks },
				{ "EELCustomSearch::TandemAttacks", (int64)EELCustomSearch::TandemAttacks },
				{ "EELCustomSearch::Two_For_OneAttacks", (int64)EELCustomSearch::Two_For_OneAttacks },
				{ "EELCustomSearch::GuardrailStunned", (int64)EELCustomSearch::GuardrailStunned },
				{ "EELCustomSearch::ApronStunned", (int64)EELCustomSearch::ApronStunned },
				{ "EELCustomSearch::LeaningOnGuardrail", (int64)EELCustomSearch::LeaningOnGuardrail },
				{ "EELCustomSearch::SeatedAtGuardrail", (int64)EELCustomSearch::SeatedAtGuardrail },
				{ "EELCustomSearch::SteelStepsSide", (int64)EELCustomSearch::SteelStepsSide },
				{ "EELCustomSearch::SteelStepsFront", (int64)EELCustomSearch::SteelStepsFront },
				{ "EELCustomSearch::Screen", (int64)EELCustomSearch::Screen },
				{ "EELCustomSearch::Ladder_Dive", (int64)EELCustomSearch::Ladder_Dive },
				{ "EELCustomSearch::Ladder_Attack", (int64)EELCustomSearch::Ladder_Attack },
				{ "EELCustomSearch::None_Damage", (int64)EELCustomSearch::None_Damage },
				{ "EELCustomSearch::Head_Damage", (int64)EELCustomSearch::Head_Damage },
				{ "EELCustomSearch::Body_Damage", (int64)EELCustomSearch::Body_Damage },
				{ "EELCustomSearch::Arm_Damage", (int64)EELCustomSearch::Arm_Damage },
				{ "EELCustomSearch::Leg_Damage", (int64)EELCustomSearch::Leg_Damage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ApronBlindStrike.Name", "EELCustomSearch::ApronBlindStrike" },
				{ "ApronChain.Name", "EELCustomSearch::ApronChain" },
				{ "ApronCut_OffStrike.Name", "EELCustomSearch::ApronCut_OffStrike" },
				{ "ApronSpringboard.Name", "EELCustomSearch::ApronSpringboard" },
				{ "ApronStrike.Name", "EELCustomSearch::ApronStrike" },
				{ "ApronStunned.Name", "EELCustomSearch::ApronStunned" },
				{ "ApronToApron.Name", "EELCustomSearch::ApronToApron" },
				{ "Arm_Damage.Name", "EELCustomSearch::Arm_Damage" },
				{ "BattleRoyale.Name", "EELCustomSearch::BattleRoyale" },
				{ "Blue.Name", "EELCustomSearch::Blue" },
				{ "BlueprintType", "true" },
				{ "Body_Damage.Name", "EELCustomSearch::Body_Damage" },
				{ "BodyParts.Name", "EELCustomSearch::BodyParts" },
				{ "BodySuit.Name", "EELCustomSearch::BodySuit" },
				{ "Brown.Name", "EELCustomSearch::Brown" },
				{ "ChainWrestling.Name", "EELCustomSearch::ChainWrestling" },
				{ "Common.Name", "EELCustomSearch::Common" },
				{ "CornerChain.Name", "EELCustomSearch::CornerChain" },
				{ "CornerRecoil.Name", "EELCustomSearch::CornerRecoil" },
				{ "CornerSpringboard.Name", "EELCustomSearch::CornerSpringboard" },
				{ "CornerStrike.Name", "EELCustomSearch::CornerStrike" },
				{ "CornerStunnedStrike.Name", "EELCustomSearch::CornerStunnedStrike" },
				{ "DesperationImpulse.Name", "EELCustomSearch::DesperationImpulse" },
				{ "DiveCatchAttacks.Name", "EELCustomSearch::DiveCatchAttacks" },
				{ "EnvironmentAttacks.Name", "EELCustomSearch::EnvironmentAttacks" },
				{ "Epic.Name", "EELCustomSearch::Epic" },
				{ "Evade.Name", "EELCustomSearch::Evade" },
				{ "Face.Name", "EELCustomSearch::Face" },
				{ "FenceDiveAttacks.Name", "EELCustomSearch::FenceDiveAttacks" },
				{ "Finisher.Name", "EELCustomSearch::Finisher" },
				{ "FrontChain.Name", "EELCustomSearch::FrontChain" },
				{ "FrontStrike.Name", "EELCustomSearch::FrontStrike" },
				{ "FrontStrongChain.Name", "EELCustomSearch::FrontStrongChain" },
				{ "Green.Name", "EELCustomSearch::Green" },
				{ "GroundStrike.Name", "EELCustomSearch::GroundStrike" },
				{ "GuardrailStunned.Name", "EELCustomSearch::GuardrailStunned" },
				{ "Head.Name", "EELCustomSearch::Head" },
				{ "Head_Damage.Name", "EELCustomSearch::Head_Damage" },
				{ "Ladder_Attack.Name", "EELCustomSearch::Ladder_Attack" },
				{ "Ladder_Dive.Name", "EELCustomSearch::Ladder_Dive" },
				{ "LeaningOnGuardrail.Name", "EELCustomSearch::LeaningOnGuardrail" },
				{ "Leg_Damage.Name", "EELCustomSearch::Leg_Damage" },
				{ "Legendary.Name", "EELCustomSearch::Legendary" },
				{ "LeveragePin.Name", "EELCustomSearch::LeveragePin" },
				{ "LowerBody.Name", "EELCustomSearch::LowerBody" },
				{ "ModuleRelativePath", "Public/EELCustomSearch.h" },
				{ "Monochrome.Name", "EELCustomSearch::Monochrome" },
				{ "None.Name", "EELCustomSearch::None" },
				{ "None_Damage.Name", "EELCustomSearch::None_Damage" },
				{ "Pink.Name", "EELCustomSearch::Pink" },
				{ "Purple.Name", "EELCustomSearch::Purple" },
				{ "Rare.Name", "EELCustomSearch::Rare" },
				{ "RearChain.Name", "EELCustomSearch::RearChain" },
				{ "RearStrike.Name", "EELCustomSearch::RearStrike" },
				{ "RearStrongChain.Name", "EELCustomSearch::RearStrongChain" },
				{ "ReboundRecoil.Name", "EELCustomSearch::ReboundRecoil" },
				{ "Red.Name", "EELCustomSearch::Red" },
				{ "RingSideToRing.Name", "EELCustomSearch::RingSideToRing" },
				{ "RisingStrike.Name", "EELCustomSearch::RisingStrike" },
				{ "RopeChain.Name", "EELCustomSearch::RopeChain" },
				{ "RopeSpringboard.Name", "EELCustomSearch::RopeSpringboard" },
				{ "RopeStrike.Name", "EELCustomSearch::RopeStrike" },
				{ "RunningCounter.Name", "EELCustomSearch::RunningCounter" },
				{ "RunningStrike.Name", "EELCustomSearch::RunningStrike" },
				{ "Screen.Name", "EELCustomSearch::Screen" },
				{ "SearchCategory.Name", "EELCustomSearch::SearchCategory" },
				{ "SeatedAtGuardrail.Name", "EELCustomSearch::SeatedAtGuardrail" },
				{ "SeatedStrike.Name", "EELCustomSearch::SeatedStrike" },
				{ "Setup.Name", "EELCustomSearch::Setup" },
				{ "Signature.Name", "EELCustomSearch::Signature" },
				{ "SteelStepsFront.Name", "EELCustomSearch::SteelStepsFront" },
				{ "SteelStepsSide.Name", "EELCustomSearch::SteelStepsSide" },
				{ "TandemAttacks.Name", "EELCustomSearch::TandemAttacks" },
				{ "Taunt.Name", "EELCustomSearch::Taunt" },
				{ "Tope.Name", "EELCustomSearch::Tope" },
				{ "TopRopeDiveAttacks.Name", "EELCustomSearch::TopRopeDiveAttacks" },
				{ "Two_For_OneAttacks.Name", "EELCustomSearch::Two_For_OneAttacks" },
				{ "Uncommon.Name", "EELCustomSearch::Uncommon" },
				{ "UpperBody.Name", "EELCustomSearch::UpperBody" },
				{ "VictoryEmote.Name", "EELCustomSearch::VictoryEmote" },
				{ "Yellow.Name", "EELCustomSearch::Yellow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EELCustomSearch",
				"EELCustomSearch",
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
