// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EUnlockItemCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUnlockItemCategory() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EUnlockItemCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EUnlockItemCategory"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EUnlockItemCategory>()
	{
		return EUnlockItemCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnlockItemCategory(EUnlockItemCategory_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EUnlockItemCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory_Hash() { return 933854371U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnlockItemCategory"), 0, Get_Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnlockItemCategory::Arena", (int64)EUnlockItemCategory::Arena },
				{ "EUnlockItemCategory::ArenaParts", (int64)EUnlockItemCategory::ArenaParts },
				{ "EUnlockItemCategory::Attire", (int64)EUnlockItemCategory::Attire },
				{ "EUnlockItemCategory::ChatStamp", (int64)EUnlockItemCategory::ChatStamp },
				{ "EUnlockItemCategory::EntranceAdvance", (int64)EUnlockItemCategory::EntranceAdvance },
				{ "EUnlockItemCategory::EntranceMotion", (int64)EUnlockItemCategory::EntranceMotion },
				{ "EUnlockItemCategory::EntranceVideo", (int64)EUnlockItemCategory::EntranceVideo },
				{ "EUnlockItemCategory::InGameMotion", (int64)EUnlockItemCategory::InGameMotion },
				{ "EUnlockItemCategory::LoadingScreen", (int64)EUnlockItemCategory::LoadingScreen },
				{ "EUnlockItemCategory::MatchType", (int64)EUnlockItemCategory::MatchType },
				{ "EUnlockItemCategory::MiniGame", (int64)EUnlockItemCategory::MiniGame },
				{ "EUnlockItemCategory::Option", (int64)EUnlockItemCategory::Option },
				{ "EUnlockItemCategory::Profile", (int64)EUnlockItemCategory::Profile },
				{ "EUnlockItemCategory::Roster", (int64)EUnlockItemCategory::Roster },
				{ "EUnlockItemCategory::SaveSlot", (int64)EUnlockItemCategory::SaveSlot },
				{ "EUnlockItemCategory::ShouhiItem", (int64)EUnlockItemCategory::ShouhiItem },
				{ "EUnlockItemCategory::Sound", (int64)EUnlockItemCategory::Sound },
				{ "EUnlockItemCategory::UserIcon", (int64)EUnlockItemCategory::UserIcon },
				{ "EUnlockItemCategory::Weapon", (int64)EUnlockItemCategory::Weapon },
				{ "EUnlockItemCategory::WrestlerParts", (int64)EUnlockItemCategory::WrestlerParts },
				{ "EUnlockItemCategory::TeamLogo", (int64)EUnlockItemCategory::TeamLogo },
				{ "EUnlockItemCategory::None", (int64)EUnlockItemCategory::None },
				{ "EUnlockItemCategory::Max", (int64)EUnlockItemCategory::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arena.Name", "EUnlockItemCategory::Arena" },
				{ "ArenaParts.Name", "EUnlockItemCategory::ArenaParts" },
				{ "Attire.Name", "EUnlockItemCategory::Attire" },
				{ "BlueprintType", "true" },
				{ "ChatStamp.Name", "EUnlockItemCategory::ChatStamp" },
				{ "EntranceAdvance.Name", "EUnlockItemCategory::EntranceAdvance" },
				{ "EntranceMotion.Name", "EUnlockItemCategory::EntranceMotion" },
				{ "EntranceVideo.Name", "EUnlockItemCategory::EntranceVideo" },
				{ "InGameMotion.Name", "EUnlockItemCategory::InGameMotion" },
				{ "LoadingScreen.Name", "EUnlockItemCategory::LoadingScreen" },
				{ "MatchType.Name", "EUnlockItemCategory::MatchType" },
				{ "Max.Name", "EUnlockItemCategory::Max" },
				{ "MiniGame.Name", "EUnlockItemCategory::MiniGame" },
				{ "ModuleRelativePath", "Public/EUnlockItemCategory.h" },
				{ "None.Name", "EUnlockItemCategory::None" },
				{ "Option.Name", "EUnlockItemCategory::Option" },
				{ "Profile.Name", "EUnlockItemCategory::Profile" },
				{ "Roster.Name", "EUnlockItemCategory::Roster" },
				{ "SaveSlot.Name", "EUnlockItemCategory::SaveSlot" },
				{ "ShouhiItem.Name", "EUnlockItemCategory::ShouhiItem" },
				{ "Sound.Name", "EUnlockItemCategory::Sound" },
				{ "TeamLogo.Name", "EUnlockItemCategory::TeamLogo" },
				{ "UserIcon.Name", "EUnlockItemCategory::UserIcon" },
				{ "Weapon.Name", "EUnlockItemCategory::Weapon" },
				{ "WrestlerParts.Name", "EUnlockItemCategory::WrestlerParts" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EUnlockItemCategory",
				"EUnlockItemCategory",
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
