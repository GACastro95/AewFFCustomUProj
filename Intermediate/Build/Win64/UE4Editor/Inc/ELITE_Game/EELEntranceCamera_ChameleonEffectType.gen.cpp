// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELEntranceCamera_ChameleonEffectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEntranceCamera_ChameleonEffectType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELEntranceCamera_ChameleonEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELEntranceCamera_ChameleonEffectType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELEntranceCamera_ChameleonEffectType>()
	{
		return EELEntranceCamera_ChameleonEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEntranceCamera_ChameleonEffectType(EELEntranceCamera_ChameleonEffectType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELEntranceCamera_ChameleonEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType_Hash() { return 2438757945U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEntranceCamera_ChameleonEffectType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELEntranceCamera_ChameleonEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEntranceCamera_ChameleonEffectType::None", (int64)EELEntranceCamera_ChameleonEffectType::None },
				{ "EELEntranceCamera_ChameleonEffectType::Monochrome", (int64)EELEntranceCamera_ChameleonEffectType::Monochrome },
				{ "EELEntranceCamera_ChameleonEffectType::MonitorEffects", (int64)EELEntranceCamera_ChameleonEffectType::MonitorEffects },
				{ "EELEntranceCamera_ChameleonEffectType::Scratches", (int64)EELEntranceCamera_ChameleonEffectType::Scratches },
				{ "EELEntranceCamera_ChameleonEffectType::Squares", (int64)EELEntranceCamera_ChameleonEffectType::Squares },
				{ "EELEntranceCamera_ChameleonEffectType::SpeedLines", (int64)EELEntranceCamera_ChameleonEffectType::SpeedLines },
				{ "EELEntranceCamera_ChameleonEffectType::HuePanner", (int64)EELEntranceCamera_ChameleonEffectType::HuePanner },
				{ "EELEntranceCamera_ChameleonEffectType::ScreenDecals", (int64)EELEntranceCamera_ChameleonEffectType::ScreenDecals },
				{ "EELEntranceCamera_ChameleonEffectType::CameraShake", (int64)EELEntranceCamera_ChameleonEffectType::CameraShake },
				{ "EELEntranceCamera_ChameleonEffectType::LensDistortion", (int64)EELEntranceCamera_ChameleonEffectType::LensDistortion },
				{ "EELEntranceCamera_ChameleonEffectType::Letterboxing", (int64)EELEntranceCamera_ChameleonEffectType::Letterboxing },
				{ "EELEntranceCamera_ChameleonEffectType::TVNoise", (int64)EELEntranceCamera_ChameleonEffectType::TVNoise },
				{ "EELEntranceCamera_ChameleonEffectType::Mosaic_Head", (int64)EELEntranceCamera_ChameleonEffectType::Mosaic_Head },
				{ "EELEntranceCamera_ChameleonEffectType::Mosaic_RightHand", (int64)EELEntranceCamera_ChameleonEffectType::Mosaic_RightHand },
				{ "EELEntranceCamera_ChameleonEffectType::Mosaic_LeftHand", (int64)EELEntranceCamera_ChameleonEffectType::Mosaic_LeftHand },
				{ "EELEntranceCamera_ChameleonEffectType::Mosaic_BothHand", (int64)EELEntranceCamera_ChameleonEffectType::Mosaic_BothHand },
				{ "EELEntranceCamera_ChameleonEffectType::Drug", (int64)EELEntranceCamera_ChameleonEffectType::Drug },
				{ "EELEntranceCamera_ChameleonEffectType::Pulse", (int64)EELEntranceCamera_ChameleonEffectType::Pulse },
				{ "EELEntranceCamera_ChameleonEffectType::EELEntranceCamera_MAX", (int64)EELEntranceCamera_ChameleonEffectType::EELEntranceCamera_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CameraShake.Name", "EELEntranceCamera_ChameleonEffectType::CameraShake" },
				{ "Drug.Name", "EELEntranceCamera_ChameleonEffectType::Drug" },
				{ "EELEntranceCamera_MAX.Hidden", "" },
				{ "EELEntranceCamera_MAX.Name", "EELEntranceCamera_ChameleonEffectType::EELEntranceCamera_MAX" },
				{ "HuePanner.Name", "EELEntranceCamera_ChameleonEffectType::HuePanner" },
				{ "LensDistortion.Name", "EELEntranceCamera_ChameleonEffectType::LensDistortion" },
				{ "Letterboxing.Name", "EELEntranceCamera_ChameleonEffectType::Letterboxing" },
				{ "ModuleRelativePath", "Public/EELEntranceCamera_ChameleonEffectType.h" },
				{ "MonitorEffects.Name", "EELEntranceCamera_ChameleonEffectType::MonitorEffects" },
				{ "Monochrome.Name", "EELEntranceCamera_ChameleonEffectType::Monochrome" },
				{ "Mosaic_BothHand.Name", "EELEntranceCamera_ChameleonEffectType::Mosaic_BothHand" },
				{ "Mosaic_Head.Name", "EELEntranceCamera_ChameleonEffectType::Mosaic_Head" },
				{ "Mosaic_LeftHand.Name", "EELEntranceCamera_ChameleonEffectType::Mosaic_LeftHand" },
				{ "Mosaic_RightHand.Name", "EELEntranceCamera_ChameleonEffectType::Mosaic_RightHand" },
				{ "None.Name", "EELEntranceCamera_ChameleonEffectType::None" },
				{ "Pulse.Name", "EELEntranceCamera_ChameleonEffectType::Pulse" },
				{ "Scratches.Name", "EELEntranceCamera_ChameleonEffectType::Scratches" },
				{ "ScreenDecals.Name", "EELEntranceCamera_ChameleonEffectType::ScreenDecals" },
				{ "SpeedLines.Name", "EELEntranceCamera_ChameleonEffectType::SpeedLines" },
				{ "Squares.Name", "EELEntranceCamera_ChameleonEffectType::Squares" },
				{ "TVNoise.Name", "EELEntranceCamera_ChameleonEffectType::TVNoise" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELEntranceCamera_ChameleonEffectType",
				"EELEntranceCamera_ChameleonEffectType",
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
