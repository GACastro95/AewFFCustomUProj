// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_Victory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_Victory() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Victory();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_Victory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_Victory, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_Victory"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_Victory>()
	{
		return ERA_Slot_Victory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_Victory(ERA_Slot_Victory_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_Victory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Victory_Hash() { return 4253430055U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Victory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_Victory"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Victory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_Victory::RA_VIC_WINNER", (int64)ERA_Slot_Victory::RA_VIC_WINNER },
				{ "ERA_Slot_Victory::RA_VIC_WINNERS", (int64)ERA_Slot_Victory::RA_VIC_WINNERS },
				{ "ERA_Slot_Victory::RA_VIC_MAX", (int64)ERA_Slot_Victory::RA_VIC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_Victory.h" },
				{ "RA_VIC_MAX.Hidden", "" },
				{ "RA_VIC_MAX.Name", "ERA_Slot_Victory::RA_VIC_MAX" },
				{ "RA_VIC_WINNER.Name", "ERA_Slot_Victory::RA_VIC_WINNER" },
				{ "RA_VIC_WINNERS.Name", "ERA_Slot_Victory::RA_VIC_WINNERS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_Victory",
				"ERA_Slot_Victory",
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
