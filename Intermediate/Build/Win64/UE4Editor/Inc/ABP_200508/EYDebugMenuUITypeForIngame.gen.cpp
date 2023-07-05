// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EYDebugMenuUITypeForIngame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYDebugMenuUITypeForIngame() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EYDebugMenuUITypeForIngame_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EYDebugMenuUITypeForIngame"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EYDebugMenuUITypeForIngame>()
	{
		return EYDebugMenuUITypeForIngame_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYDebugMenuUITypeForIngame(EYDebugMenuUITypeForIngame_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EYDebugMenuUITypeForIngame"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame_Hash() { return 1600703005U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYDebugMenuUITypeForIngame"), 0, Get_Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYDebugMenuUITypeForIngame::None", (int64)EYDebugMenuUITypeForIngame::None },
				{ "EYDebugMenuUITypeForIngame::BugReporter", (int64)EYDebugMenuUITypeForIngame::BugReporter },
				{ "EYDebugMenuUITypeForIngame::SaveDataSystem", (int64)EYDebugMenuUITypeForIngame::SaveDataSystem },
				{ "EYDebugMenuUITypeForIngame::AudioOption", (int64)EYDebugMenuUITypeForIngame::AudioOption },
				{ "EYDebugMenuUITypeForIngame::GraphicsOptions", (int64)EYDebugMenuUITypeForIngame::GraphicsOptions },
				{ "EYDebugMenuUITypeForIngame::ScreenShot", (int64)EYDebugMenuUITypeForIngame::ScreenShot },
				{ "EYDebugMenuUITypeForIngame::AutoMatch", (int64)EYDebugMenuUITypeForIngame::AutoMatch },
				{ "EYDebugMenuUITypeForIngame::Highlights", (int64)EYDebugMenuUITypeForIngame::Highlights },
				{ "EYDebugMenuUITypeForIngame::GameMoney", (int64)EYDebugMenuUITypeForIngame::GameMoney },
				{ "EYDebugMenuUITypeForIngame::JukeBox", (int64)EYDebugMenuUITypeForIngame::JukeBox },
				{ "EYDebugMenuUITypeForIngame::DebugCamera", (int64)EYDebugMenuUITypeForIngame::DebugCamera },
				{ "EYDebugMenuUITypeForIngame::BattlePass", (int64)EYDebugMenuUITypeForIngame::BattlePass },
				{ "EYDebugMenuUITypeForIngame::Challenge", (int64)EYDebugMenuUITypeForIngame::Challenge },
				{ "EYDebugMenuUITypeForIngame::UnlockableItem", (int64)EYDebugMenuUITypeForIngame::UnlockableItem },
				{ "EYDebugMenuUITypeForIngame::PossessedItem", (int64)EYDebugMenuUITypeForIngame::PossessedItem },
				{ "EYDebugMenuUITypeForIngame::Creation", (int64)EYDebugMenuUITypeForIngame::Creation },
				{ "EYDebugMenuUITypeForIngame::YGS2", (int64)EYDebugMenuUITypeForIngame::YGS2 },
				{ "EYDebugMenuUITypeForIngame::Achievement", (int64)EYDebugMenuUITypeForIngame::Achievement },
				{ "EYDebugMenuUITypeForIngame::MiniGameAutoPlay", (int64)EYDebugMenuUITypeForIngame::MiniGameAutoPlay },
				{ "EYDebugMenuUITypeForIngame::MiniGameOptions", (int64)EYDebugMenuUITypeForIngame::MiniGameOptions },
				{ "EYDebugMenuUITypeForIngame::AutoPlay", (int64)EYDebugMenuUITypeForIngame::AutoPlay },
				{ "EYDebugMenuUITypeForIngame::MenuUI", (int64)EYDebugMenuUITypeForIngame::MenuUI },
				{ "EYDebugMenuUITypeForIngame::GamePadMonitor", (int64)EYDebugMenuUITypeForIngame::GamePadMonitor },
				{ "EYDebugMenuUITypeForIngame::Crate", (int64)EYDebugMenuUITypeForIngame::Crate },
				{ "EYDebugMenuUITypeForIngame::DebugLevels", (int64)EYDebugMenuUITypeForIngame::DebugLevels },
				{ "EYDebugMenuUITypeForIngame::RosterModelPreview", (int64)EYDebugMenuUITypeForIngame::RosterModelPreview },
				{ "EYDebugMenuUITypeForIngame::Credit", (int64)EYDebugMenuUITypeForIngame::Credit },
				{ "EYDebugMenuUITypeForIngame::StadiumStampede", (int64)EYDebugMenuUITypeForIngame::StadiumStampede },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Achievement.Name", "EYDebugMenuUITypeForIngame::Achievement" },
				{ "AudioOption.Name", "EYDebugMenuUITypeForIngame::AudioOption" },
				{ "AutoMatch.Name", "EYDebugMenuUITypeForIngame::AutoMatch" },
				{ "AutoPlay.Name", "EYDebugMenuUITypeForIngame::AutoPlay" },
				{ "BattlePass.Name", "EYDebugMenuUITypeForIngame::BattlePass" },
				{ "BlueprintType", "true" },
				{ "BugReporter.Name", "EYDebugMenuUITypeForIngame::BugReporter" },
				{ "Challenge.Name", "EYDebugMenuUITypeForIngame::Challenge" },
				{ "Crate.Name", "EYDebugMenuUITypeForIngame::Crate" },
				{ "Creation.Name", "EYDebugMenuUITypeForIngame::Creation" },
				{ "Credit.Name", "EYDebugMenuUITypeForIngame::Credit" },
				{ "DebugCamera.Name", "EYDebugMenuUITypeForIngame::DebugCamera" },
				{ "DebugLevels.Name", "EYDebugMenuUITypeForIngame::DebugLevels" },
				{ "GameMoney.Name", "EYDebugMenuUITypeForIngame::GameMoney" },
				{ "GamePadMonitor.Name", "EYDebugMenuUITypeForIngame::GamePadMonitor" },
				{ "GraphicsOptions.Name", "EYDebugMenuUITypeForIngame::GraphicsOptions" },
				{ "Highlights.Name", "EYDebugMenuUITypeForIngame::Highlights" },
				{ "JukeBox.Name", "EYDebugMenuUITypeForIngame::JukeBox" },
				{ "MenuUI.Name", "EYDebugMenuUITypeForIngame::MenuUI" },
				{ "MiniGameAutoPlay.Name", "EYDebugMenuUITypeForIngame::MiniGameAutoPlay" },
				{ "MiniGameOptions.Name", "EYDebugMenuUITypeForIngame::MiniGameOptions" },
				{ "ModuleRelativePath", "Public/EYDebugMenuUITypeForIngame.h" },
				{ "None.Name", "EYDebugMenuUITypeForIngame::None" },
				{ "PossessedItem.Name", "EYDebugMenuUITypeForIngame::PossessedItem" },
				{ "RosterModelPreview.Name", "EYDebugMenuUITypeForIngame::RosterModelPreview" },
				{ "SaveDataSystem.Name", "EYDebugMenuUITypeForIngame::SaveDataSystem" },
				{ "ScreenShot.Name", "EYDebugMenuUITypeForIngame::ScreenShot" },
				{ "StadiumStampede.Name", "EYDebugMenuUITypeForIngame::StadiumStampede" },
				{ "UnlockableItem.Name", "EYDebugMenuUITypeForIngame::UnlockableItem" },
				{ "YGS2.Name", "EYDebugMenuUITypeForIngame::YGS2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EYDebugMenuUITypeForIngame",
				"EYDebugMenuUITypeForIngame",
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
