// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerBGMType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerBGMType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerBGMType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerBGMType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerBGMType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerBGMType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerBGMType>()
	{
		return ECareerBGMType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerBGMType(ECareerBGMType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerBGMType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerBGMType_Hash() { return 1316705964U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerBGMType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerBGMType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerBGMType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerBGMType::Dummy", (int64)ECareerBGMType::Dummy },
				{ "ECareerBGMType::Event", (int64)ECareerBGMType::Event },
				{ "ECareerBGMType::Map", (int64)ECareerBGMType::Map },
				{ "ECareerBGMType::GymTraning", (int64)ECareerBGMType::GymTraning },
				{ "ECareerBGMType::GymEvent", (int64)ECareerBGMType::GymEvent },
				{ "ECareerBGMType::SightSeeingEvent", (int64)ECareerBGMType::SightSeeingEvent },
				{ "ECareerBGMType::PressConferenceEvent", (int64)ECareerBGMType::PressConferenceEvent },
				{ "ECareerBGMType::HospitalRepair", (int64)ECareerBGMType::HospitalRepair },
				{ "ECareerBGMType::HospitalEvent", (int64)ECareerBGMType::HospitalEvent },
				{ "ECareerBGMType::BaggageClaimEvent", (int64)ECareerBGMType::BaggageClaimEvent },
				{ "ECareerBGMType::LockerRoomEvent", (int64)ECareerBGMType::LockerRoomEvent },
				{ "ECareerBGMType::InCarEvent", (int64)ECareerBGMType::InCarEvent },
				{ "ECareerBGMType::OnPlane", (int64)ECareerBGMType::OnPlane },
				{ "ECareerBGMType::AutographEvent", (int64)ECareerBGMType::AutographEvent },
				{ "ECareerBGMType::BackstageEvent", (int64)ECareerBGMType::BackstageEvent },
				{ "ECareerBGMType::InArenaEvent", (int64)ECareerBGMType::InArenaEvent },
				{ "ECareerBGMType::DarkOrderRoomEvent", (int64)ECareerBGMType::DarkOrderRoomEvent },
				{ "ECareerBGMType::OutsideCarEvent", (int64)ECareerBGMType::OutsideCarEvent },
				{ "ECareerBGMType::TVTalkShowEvent", (int64)ECareerBGMType::TVTalkShowEvent },
				{ "ECareerBGMType::OfficeEvent", (int64)ECareerBGMType::OfficeEvent },
				{ "ECareerBGMType::OpeningCutscene", (int64)ECareerBGMType::OpeningCutscene },
				{ "ECareerBGMType::Restaurant_Jacksonville", (int64)ECareerBGMType::Restaurant_Jacksonville },
				{ "ECareerBGMType::Restaurant_Jacksonville_Vegetarian", (int64)ECareerBGMType::Restaurant_Jacksonville_Vegetarian },
				{ "ECareerBGMType::Restaurant_Louisville", (int64)ECareerBGMType::Restaurant_Louisville },
				{ "ECareerBGMType::Restaurant_Louisville_Vegetarian", (int64)ECareerBGMType::Restaurant_Louisville_Vegetarian },
				{ "ECareerBGMType::Restaurant_Minneapolis", (int64)ECareerBGMType::Restaurant_Minneapolis },
				{ "ECareerBGMType::Restaurant_Minneapolis_Vegetarian", (int64)ECareerBGMType::Restaurant_Minneapolis_Vegetarian },
				{ "ECareerBGMType::Restaurant_Nashville", (int64)ECareerBGMType::Restaurant_Nashville },
				{ "ECareerBGMType::Restaurant_Nashville_Vegetarian", (int64)ECareerBGMType::Restaurant_Nashville_Vegetarian },
				{ "ECareerBGMType::Restaurant_NewYork", (int64)ECareerBGMType::Restaurant_NewYork },
				{ "ECareerBGMType::Restaurant_NewYork_Vegetarian", (int64)ECareerBGMType::Restaurant_NewYork_Vegetarian },
				{ "ECareerBGMType::Restaurant_Philadelphia", (int64)ECareerBGMType::Restaurant_Philadelphia },
				{ "ECareerBGMType::Restaurant_Philadelphia_Vegetarian", (int64)ECareerBGMType::Restaurant_Philadelphia_Vegetarian },
				{ "ECareerBGMType::Restaurant_Seattle", (int64)ECareerBGMType::Restaurant_Seattle },
				{ "ECareerBGMType::Restaurant_Seattle_Vegetarian", (int64)ECareerBGMType::Restaurant_Seattle_Vegetarian },
				{ "ECareerBGMType::Restaurant_Atlanta", (int64)ECareerBGMType::Restaurant_Atlanta },
				{ "ECareerBGMType::Restaurant_Austin", (int64)ECareerBGMType::Restaurant_Austin },
				{ "ECareerBGMType::Restaurant_Chicago", (int64)ECareerBGMType::Restaurant_Chicago },
				{ "ECareerBGMType::Restaurant_LosAngeles", (int64)ECareerBGMType::Restaurant_LosAngeles },
				{ "ECareerBGMType::Restaurant_NewOrleans", (int64)ECareerBGMType::Restaurant_NewOrleans },
				{ "ECareerBGMType::Restaurant_Pittsburgh", (int64)ECareerBGMType::Restaurant_Pittsburgh },
				{ "ECareerBGMType::Restaurant_Toronto", (int64)ECareerBGMType::Restaurant_Toronto },
				{ "ECareerBGMType::Restaurant_LasVegas", (int64)ECareerBGMType::Restaurant_LasVegas },
				{ "ECareerBGMType::Restaurant_WashingtonDC", (int64)ECareerBGMType::Restaurant_WashingtonDC },
				{ "ECareerBGMType::Menu_Prologue", (int64)ECareerBGMType::Menu_Prologue },
				{ "ECareerBGMType::Menu_Block_1A", (int64)ECareerBGMType::Menu_Block_1A },
				{ "ECareerBGMType::Menu_Block_1B", (int64)ECareerBGMType::Menu_Block_1B },
				{ "ECareerBGMType::Menu_Block_1C", (int64)ECareerBGMType::Menu_Block_1C },
				{ "ECareerBGMType::Menu_Block_2A", (int64)ECareerBGMType::Menu_Block_2A },
				{ "ECareerBGMType::Menu_Block_2B", (int64)ECareerBGMType::Menu_Block_2B },
				{ "ECareerBGMType::Menu_Block_2C", (int64)ECareerBGMType::Menu_Block_2C },
				{ "ECareerBGMType::Menu_Block_3A", (int64)ECareerBGMType::Menu_Block_3A },
				{ "ECareerBGMType::Menu_Block_3B", (int64)ECareerBGMType::Menu_Block_3B },
				{ "ECareerBGMType::Menu_Block_3C", (int64)ECareerBGMType::Menu_Block_3C },
				{ "ECareerBGMType::Menu_Block_4A", (int64)ECareerBGMType::Menu_Block_4A },
				{ "ECareerBGMType::Menu_Block_4B", (int64)ECareerBGMType::Menu_Block_4B },
				{ "ECareerBGMType::Menu_Block_4C", (int64)ECareerBGMType::Menu_Block_4C },
				{ "ECareerBGMType::LockerRoomShadow", (int64)ECareerBGMType::LockerRoomShadow },
				{ "ECareerBGMType::Clear", (int64)ECareerBGMType::Clear },
				{ "ECareerBGMType::Minigame", (int64)ECareerBGMType::Minigame },
				{ "ECareerBGMType::Nop", (int64)ECareerBGMType::Nop },
				{ "ECareerBGMType::WinBGM", (int64)ECareerBGMType::WinBGM },
				{ "ECareerBGMType::Menu", (int64)ECareerBGMType::Menu },
				{ "ECareerBGMType::Restaurant", (int64)ECareerBGMType::Restaurant },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutographEvent.Name", "ECareerBGMType::AutographEvent" },
				{ "BackstageEvent.Name", "ECareerBGMType::BackstageEvent" },
				{ "BaggageClaimEvent.Name", "ECareerBGMType::BaggageClaimEvent" },
				{ "BlueprintType", "true" },
				{ "Clear.Name", "ECareerBGMType::Clear" },
				{ "DarkOrderRoomEvent.Name", "ECareerBGMType::DarkOrderRoomEvent" },
				{ "Dummy.Name", "ECareerBGMType::Dummy" },
				{ "Event.Name", "ECareerBGMType::Event" },
				{ "GymEvent.Name", "ECareerBGMType::GymEvent" },
				{ "GymTraning.Name", "ECareerBGMType::GymTraning" },
				{ "HospitalEvent.Name", "ECareerBGMType::HospitalEvent" },
				{ "HospitalRepair.Name", "ECareerBGMType::HospitalRepair" },
				{ "InArenaEvent.Name", "ECareerBGMType::InArenaEvent" },
				{ "InCarEvent.Name", "ECareerBGMType::InCarEvent" },
				{ "LockerRoomEvent.Name", "ECareerBGMType::LockerRoomEvent" },
				{ "LockerRoomShadow.Name", "ECareerBGMType::LockerRoomShadow" },
				{ "Map.Name", "ECareerBGMType::Map" },
				{ "Menu.Name", "ECareerBGMType::Menu" },
				{ "Menu_Block_1A.Name", "ECareerBGMType::Menu_Block_1A" },
				{ "Menu_Block_1B.Name", "ECareerBGMType::Menu_Block_1B" },
				{ "Menu_Block_1C.Name", "ECareerBGMType::Menu_Block_1C" },
				{ "Menu_Block_2A.Name", "ECareerBGMType::Menu_Block_2A" },
				{ "Menu_Block_2B.Name", "ECareerBGMType::Menu_Block_2B" },
				{ "Menu_Block_2C.Name", "ECareerBGMType::Menu_Block_2C" },
				{ "Menu_Block_3A.Name", "ECareerBGMType::Menu_Block_3A" },
				{ "Menu_Block_3B.Name", "ECareerBGMType::Menu_Block_3B" },
				{ "Menu_Block_3C.Name", "ECareerBGMType::Menu_Block_3C" },
				{ "Menu_Block_4A.Name", "ECareerBGMType::Menu_Block_4A" },
				{ "Menu_Block_4B.Name", "ECareerBGMType::Menu_Block_4B" },
				{ "Menu_Block_4C.Name", "ECareerBGMType::Menu_Block_4C" },
				{ "Menu_Prologue.Name", "ECareerBGMType::Menu_Prologue" },
				{ "Minigame.Name", "ECareerBGMType::Minigame" },
				{ "ModuleRelativePath", "Public/ECareerBGMType.h" },
				{ "Nop.Name", "ECareerBGMType::Nop" },
				{ "OfficeEvent.Name", "ECareerBGMType::OfficeEvent" },
				{ "OnPlane.Name", "ECareerBGMType::OnPlane" },
				{ "OpeningCutscene.Name", "ECareerBGMType::OpeningCutscene" },
				{ "OutsideCarEvent.Name", "ECareerBGMType::OutsideCarEvent" },
				{ "PressConferenceEvent.Name", "ECareerBGMType::PressConferenceEvent" },
				{ "Restaurant.Name", "ECareerBGMType::Restaurant" },
				{ "Restaurant_Atlanta.Name", "ECareerBGMType::Restaurant_Atlanta" },
				{ "Restaurant_Austin.Name", "ECareerBGMType::Restaurant_Austin" },
				{ "Restaurant_Chicago.Name", "ECareerBGMType::Restaurant_Chicago" },
				{ "Restaurant_Jacksonville.Name", "ECareerBGMType::Restaurant_Jacksonville" },
				{ "Restaurant_Jacksonville_Vegetarian.Name", "ECareerBGMType::Restaurant_Jacksonville_Vegetarian" },
				{ "Restaurant_LasVegas.Name", "ECareerBGMType::Restaurant_LasVegas" },
				{ "Restaurant_LosAngeles.Name", "ECareerBGMType::Restaurant_LosAngeles" },
				{ "Restaurant_Louisville.Name", "ECareerBGMType::Restaurant_Louisville" },
				{ "Restaurant_Louisville_Vegetarian.Name", "ECareerBGMType::Restaurant_Louisville_Vegetarian" },
				{ "Restaurant_Minneapolis.Name", "ECareerBGMType::Restaurant_Minneapolis" },
				{ "Restaurant_Minneapolis_Vegetarian.Name", "ECareerBGMType::Restaurant_Minneapolis_Vegetarian" },
				{ "Restaurant_Nashville.Name", "ECareerBGMType::Restaurant_Nashville" },
				{ "Restaurant_Nashville_Vegetarian.Name", "ECareerBGMType::Restaurant_Nashville_Vegetarian" },
				{ "Restaurant_NewOrleans.Name", "ECareerBGMType::Restaurant_NewOrleans" },
				{ "Restaurant_NewYork.Name", "ECareerBGMType::Restaurant_NewYork" },
				{ "Restaurant_NewYork_Vegetarian.Name", "ECareerBGMType::Restaurant_NewYork_Vegetarian" },
				{ "Restaurant_Philadelphia.Name", "ECareerBGMType::Restaurant_Philadelphia" },
				{ "Restaurant_Philadelphia_Vegetarian.Name", "ECareerBGMType::Restaurant_Philadelphia_Vegetarian" },
				{ "Restaurant_Pittsburgh.Name", "ECareerBGMType::Restaurant_Pittsburgh" },
				{ "Restaurant_Seattle.Name", "ECareerBGMType::Restaurant_Seattle" },
				{ "Restaurant_Seattle_Vegetarian.Name", "ECareerBGMType::Restaurant_Seattle_Vegetarian" },
				{ "Restaurant_Toronto.Name", "ECareerBGMType::Restaurant_Toronto" },
				{ "Restaurant_WashingtonDC.Name", "ECareerBGMType::Restaurant_WashingtonDC" },
				{ "SightSeeingEvent.Name", "ECareerBGMType::SightSeeingEvent" },
				{ "TVTalkShowEvent.Name", "ECareerBGMType::TVTalkShowEvent" },
				{ "WinBGM.Name", "ECareerBGMType::WinBGM" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerBGMType",
				"ECareerBGMType",
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
