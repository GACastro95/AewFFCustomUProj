// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_Championship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_Championship() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_Championship_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_Championship"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_Championship>()
	{
		return ERA_Slot_Championship_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_Championship(ERA_Slot_Championship_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_Championship"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship_Hash() { return 1094092868U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_Championship"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Championship_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_NONE", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_NONE },
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW },
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_TNT", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_TNT },
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW_WOMEN", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW_WOMEN },
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW_TAG", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW_TAG },
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_FTW", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_FTW },
				{ "ERA_Slot_Championship::RA_CHAMPIONSHIP_MAX", (int64)ERA_Slot_Championship::RA_CHAMPIONSHIP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_Championship.h" },
				{ "RA_CHAMPIONSHIP_AEW.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW" },
				{ "RA_CHAMPIONSHIP_AEW_TAG.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW_TAG" },
				{ "RA_CHAMPIONSHIP_AEW_WOMEN.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_AEW_WOMEN" },
				{ "RA_CHAMPIONSHIP_FTW.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_FTW" },
				{ "RA_CHAMPIONSHIP_MAX.Hidden", "" },
				{ "RA_CHAMPIONSHIP_MAX.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_MAX" },
				{ "RA_CHAMPIONSHIP_NONE.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_NONE" },
				{ "RA_CHAMPIONSHIP_TNT.Name", "ERA_Slot_Championship::RA_CHAMPIONSHIP_TNT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_Championship",
				"ERA_Slot_Championship",
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
