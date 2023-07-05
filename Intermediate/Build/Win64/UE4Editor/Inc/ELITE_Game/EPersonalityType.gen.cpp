// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EPersonalityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPersonalityType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EPersonalityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EPersonalityType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EPersonalityType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EPersonalityType>()
	{
		return EPersonalityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPersonalityType(EPersonalityType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EPersonalityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EPersonalityType_Hash() { return 1392206451U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPersonalityType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EPersonalityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPersonalityType::Hero", (int64)EPersonalityType::Hero },
				{ "EPersonalityType::Jerk", (int64)EPersonalityType::Jerk },
				{ "EPersonalityType::Monster", (int64)EPersonalityType::Monster },
				{ "EPersonalityType::Confident", (int64)EPersonalityType::Confident },
				{ "EPersonalityType::Shy", (int64)EPersonalityType::Shy },
				{ "EPersonalityType::Enigma", (int64)EPersonalityType::Enigma },
				{ "EPersonalityType::Orange_Cassidy", (int64)EPersonalityType::Orange_Cassidy },
				{ "EPersonalityType::Abadon", (int64)EPersonalityType::Abadon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abadon.Name", "EPersonalityType::Abadon" },
				{ "BlueprintType", "true" },
				{ "Confident.Name", "EPersonalityType::Confident" },
				{ "Enigma.Name", "EPersonalityType::Enigma" },
				{ "Hero.Name", "EPersonalityType::Hero" },
				{ "Jerk.Name", "EPersonalityType::Jerk" },
				{ "ModuleRelativePath", "Public/EPersonalityType.h" },
				{ "Monster.Name", "EPersonalityType::Monster" },
				{ "Orange_Cassidy.Name", "EPersonalityType::Orange_Cassidy" },
				{ "Shy.Name", "EPersonalityType::Shy" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EPersonalityType",
				"EPersonalityType",
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
