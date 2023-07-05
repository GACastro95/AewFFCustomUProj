// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ETipsLoadingCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETipsLoadingCategory() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ETipsLoadingCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ETipsLoadingCategory"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ETipsLoadingCategory>()
	{
		return ETipsLoadingCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipsLoadingCategory(ETipsLoadingCategory_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ETipsLoadingCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory_Hash() { return 339441496U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipsLoadingCategory"), 0, Get_Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipsLoadingCategory::BaseGame", (int64)ETipsLoadingCategory::BaseGame },
				{ "ETipsLoadingCategory::StadiumStampede", (int64)ETipsLoadingCategory::StadiumStampede },
				{ "ETipsLoadingCategory::CustomWrestler", (int64)ETipsLoadingCategory::CustomWrestler },
				{ "ETipsLoadingCategory::CustomMoves", (int64)ETipsLoadingCategory::CustomMoves },
				{ "ETipsLoadingCategory::CustomEntrance", (int64)ETipsLoadingCategory::CustomEntrance },
				{ "ETipsLoadingCategory::CustomTeam", (int64)ETipsLoadingCategory::CustomTeam },
				{ "ETipsLoadingCategory::CustonArena", (int64)ETipsLoadingCategory::CustonArena },
				{ "ETipsLoadingCategory::Career", (int64)ETipsLoadingCategory::Career },
				{ "ETipsLoadingCategory::MainMenu", (int64)ETipsLoadingCategory::MainMenu },
				{ "ETipsLoadingCategory::SSInGame", (int64)ETipsLoadingCategory::SSInGame },
				{ "ETipsLoadingCategory::SSStartOfMatch", (int64)ETipsLoadingCategory::SSStartOfMatch },
				{ "ETipsLoadingCategory::SSReturnToMainMenu", (int64)ETipsLoadingCategory::SSReturnToMainMenu },
				{ "ETipsLoadingCategory::SSReturnToTop", (int64)ETipsLoadingCategory::SSReturnToTop },
				{ "ETipsLoadingCategory::SSBotMainMenu", (int64)ETipsLoadingCategory::SSBotMainMenu },
				{ "ETipsLoadingCategory::SSReturnToBotMainMenu", (int64)ETipsLoadingCategory::SSReturnToBotMainMenu },
				{ "ETipsLoadingCategory::MainMenuFromSS", (int64)ETipsLoadingCategory::MainMenuFromSS },
				{ "ETipsLoadingCategory::Training", (int64)ETipsLoadingCategory::Training },
				{ "ETipsLoadingCategory::CareerAlbum", (int64)ETipsLoadingCategory::CareerAlbum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BaseGame.Name", "ETipsLoadingCategory::BaseGame" },
				{ "BlueprintType", "true" },
				{ "Career.Name", "ETipsLoadingCategory::Career" },
				{ "CareerAlbum.Name", "ETipsLoadingCategory::CareerAlbum" },
				{ "CustomEntrance.Name", "ETipsLoadingCategory::CustomEntrance" },
				{ "CustomMoves.Name", "ETipsLoadingCategory::CustomMoves" },
				{ "CustomTeam.Name", "ETipsLoadingCategory::CustomTeam" },
				{ "CustomWrestler.Name", "ETipsLoadingCategory::CustomWrestler" },
				{ "CustonArena.Name", "ETipsLoadingCategory::CustonArena" },
				{ "MainMenu.Name", "ETipsLoadingCategory::MainMenu" },
				{ "MainMenuFromSS.Name", "ETipsLoadingCategory::MainMenuFromSS" },
				{ "ModuleRelativePath", "Public/ETipsLoadingCategory.h" },
				{ "SSBotMainMenu.Name", "ETipsLoadingCategory::SSBotMainMenu" },
				{ "SSInGame.Name", "ETipsLoadingCategory::SSInGame" },
				{ "SSReturnToBotMainMenu.Name", "ETipsLoadingCategory::SSReturnToBotMainMenu" },
				{ "SSReturnToMainMenu.Name", "ETipsLoadingCategory::SSReturnToMainMenu" },
				{ "SSReturnToTop.Name", "ETipsLoadingCategory::SSReturnToTop" },
				{ "SSStartOfMatch.Name", "ETipsLoadingCategory::SSStartOfMatch" },
				{ "StadiumStampede.Name", "ETipsLoadingCategory::StadiumStampede" },
				{ "Training.Name", "ETipsLoadingCategory::Training" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ETipsLoadingCategory",
				"ETipsLoadingCategory",
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
