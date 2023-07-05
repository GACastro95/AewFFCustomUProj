// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELTeamID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELTeamID() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELTeamID();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELTeamID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELTeamID, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELTeamID"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELTeamID>()
	{
		return EELTeamID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELTeamID(EELTeamID_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELTeamID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELTeamID_Hash() { return 674117363U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELTeamID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELTeamID"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELTeamID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELTeamID::None", (int64)EELTeamID::None },
				{ "EELTeamID::YoungBucks", (int64)EELTeamID::YoungBucks },
				{ "EELTeamID::LuchaBrothers", (int64)EELTeamID::LuchaBrothers },
				{ "EELTeamID::DeathTriangle", (int64)EELTeamID::DeathTriangle },
				{ "EELTeamID::BestFriends", (int64)EELTeamID::BestFriends },
				{ "EELTeamID::TheDarkOrder", (int64)EELTeamID::TheDarkOrder },
				{ "EELTeamID::JurassicExpress", (int64)EELTeamID::JurassicExpress },
				{ "EELTeamID::InnerCircle", (int64)EELTeamID::InnerCircle },
				{ "EELTeamID::Pinnacle", (int64)EELTeamID::Pinnacle },
				{ "EELTeamID::FTR", (int64)EELTeamID::FTR },
				{ "EELTeamID::DarbySting", (int64)EELTeamID::DarbySting },
				{ "EELTeamID::MoxleyBryan", (int64)EELTeamID::MoxleyBryan },
				{ "EELTeamID::TayAnna", (int64)EELTeamID::TayAnna },
				{ "EELTeamID::ExistingMax", (int64)EELTeamID::ExistingMax },
				{ "EELTeamID::Custom_00", (int64)EELTeamID::Custom_00 },
				{ "EELTeamID::Custom_01", (int64)EELTeamID::Custom_01 },
				{ "EELTeamID::Custom_02", (int64)EELTeamID::Custom_02 },
				{ "EELTeamID::Custom_03", (int64)EELTeamID::Custom_03 },
				{ "EELTeamID::Custom_04", (int64)EELTeamID::Custom_04 },
				{ "EELTeamID::Custom_05", (int64)EELTeamID::Custom_05 },
				{ "EELTeamID::Custom_06", (int64)EELTeamID::Custom_06 },
				{ "EELTeamID::Custom_07", (int64)EELTeamID::Custom_07 },
				{ "EELTeamID::Custom_08", (int64)EELTeamID::Custom_08 },
				{ "EELTeamID::Custom_09", (int64)EELTeamID::Custom_09 },
				{ "EELTeamID::Max", (int64)EELTeamID::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BestFriends.Name", "EELTeamID::BestFriends" },
				{ "BlueprintType", "true" },
				{ "Custom_00.Name", "EELTeamID::Custom_00" },
				{ "Custom_01.Name", "EELTeamID::Custom_01" },
				{ "Custom_02.Name", "EELTeamID::Custom_02" },
				{ "Custom_03.Name", "EELTeamID::Custom_03" },
				{ "Custom_04.Name", "EELTeamID::Custom_04" },
				{ "Custom_05.Name", "EELTeamID::Custom_05" },
				{ "Custom_06.Name", "EELTeamID::Custom_06" },
				{ "Custom_07.Name", "EELTeamID::Custom_07" },
				{ "Custom_08.Name", "EELTeamID::Custom_08" },
				{ "Custom_09.Name", "EELTeamID::Custom_09" },
				{ "DarbySting.Name", "EELTeamID::DarbySting" },
				{ "DeathTriangle.Name", "EELTeamID::DeathTriangle" },
				{ "ExistingMax.Name", "EELTeamID::ExistingMax" },
				{ "FTR.Name", "EELTeamID::FTR" },
				{ "InnerCircle.Name", "EELTeamID::InnerCircle" },
				{ "JurassicExpress.Name", "EELTeamID::JurassicExpress" },
				{ "LuchaBrothers.Name", "EELTeamID::LuchaBrothers" },
				{ "Max.Name", "EELTeamID::Max" },
				{ "ModuleRelativePath", "Public/EELTeamID.h" },
				{ "MoxleyBryan.Name", "EELTeamID::MoxleyBryan" },
				{ "None.Name", "EELTeamID::None" },
				{ "Pinnacle.Name", "EELTeamID::Pinnacle" },
				{ "TayAnna.Name", "EELTeamID::TayAnna" },
				{ "TheDarkOrder.Name", "EELTeamID::TheDarkOrder" },
				{ "YoungBucks.Name", "EELTeamID::YoungBucks" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELTeamID",
				"EELTeamID",
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
