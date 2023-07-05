// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_SlotIntro_Order.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_SlotIntro_Order() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_SlotIntro_Order_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_SlotIntro_Order"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_SlotIntro_Order>()
	{
		return ERA_SlotIntro_Order_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_SlotIntro_Order(ERA_SlotIntro_Order_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_SlotIntro_Order"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order_Hash() { return 2342456972U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_SlotIntro_Order"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_SlotIntro_Order_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_SlotIntro_Order::FIRST", (int64)ERA_SlotIntro_Order::FIRST },
				{ "ERA_SlotIntro_Order::OPPONENT", (int64)ERA_SlotIntro_Order::OPPONENT },
				{ "ERA_SlotIntro_Order::PARTNER", (int64)ERA_SlotIntro_Order::PARTNER },
				{ "ERA_SlotIntro_Order::THEREAFTER", (int64)ERA_SlotIntro_Order::THEREAFTER },
				{ "ERA_SlotIntro_Order::CAREEROPPONENT", (int64)ERA_SlotIntro_Order::CAREEROPPONENT },
				{ "ERA_SlotIntro_Order::ERA_SlotIntro_MAX", (int64)ERA_SlotIntro_Order::ERA_SlotIntro_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CAREEROPPONENT.Name", "ERA_SlotIntro_Order::CAREEROPPONENT" },
				{ "ERA_SlotIntro_MAX.Hidden", "" },
				{ "ERA_SlotIntro_MAX.Name", "ERA_SlotIntro_Order::ERA_SlotIntro_MAX" },
				{ "FIRST.Name", "ERA_SlotIntro_Order::FIRST" },
				{ "ModuleRelativePath", "Public/ERA_SlotIntro_Order.h" },
				{ "OPPONENT.Name", "ERA_SlotIntro_Order::OPPONENT" },
				{ "PARTNER.Name", "ERA_SlotIntro_Order::PARTNER" },
				{ "THEREAFTER.Name", "ERA_SlotIntro_Order::THEREAFTER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_SlotIntro_Order",
				"ERA_SlotIntro_Order",
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
