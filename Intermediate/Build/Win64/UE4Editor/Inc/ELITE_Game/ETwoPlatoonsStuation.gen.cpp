// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ETwoPlatoonsStuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETwoPlatoonsStuation() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ETwoPlatoonsStuation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ETwoPlatoonsStuation"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ETwoPlatoonsStuation>()
	{
		return ETwoPlatoonsStuation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwoPlatoonsStuation(ETwoPlatoonsStuation_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ETwoPlatoonsStuation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation_Hash() { return 4075155808U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwoPlatoonsStuation"), 0, Get_Z_Construct_UEnum_ELITE_Game_ETwoPlatoonsStuation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETwoPlatoonsStuation::None", (int64)ETwoPlatoonsStuation::None },
				{ "ETwoPlatoonsStuation::Type_000", (int64)ETwoPlatoonsStuation::Type_000 },
				{ "ETwoPlatoonsStuation::Type_001", (int64)ETwoPlatoonsStuation::Type_001 },
				{ "ETwoPlatoonsStuation::Type_002", (int64)ETwoPlatoonsStuation::Type_002 },
				{ "ETwoPlatoonsStuation::Type_003", (int64)ETwoPlatoonsStuation::Type_003 },
				{ "ETwoPlatoonsStuation::Type_004", (int64)ETwoPlatoonsStuation::Type_004 },
				{ "ETwoPlatoonsStuation::Type_005", (int64)ETwoPlatoonsStuation::Type_005 },
				{ "ETwoPlatoonsStuation::Type_006", (int64)ETwoPlatoonsStuation::Type_006 },
				{ "ETwoPlatoonsStuation::Type_007", (int64)ETwoPlatoonsStuation::Type_007 },
				{ "ETwoPlatoonsStuation::Type_008", (int64)ETwoPlatoonsStuation::Type_008 },
				{ "ETwoPlatoonsStuation::Type_009", (int64)ETwoPlatoonsStuation::Type_009 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETwoPlatoonsStuation.h" },
				{ "None.Name", "ETwoPlatoonsStuation::None" },
				{ "Type_000.Name", "ETwoPlatoonsStuation::Type_000" },
				{ "Type_001.Name", "ETwoPlatoonsStuation::Type_001" },
				{ "Type_002.Name", "ETwoPlatoonsStuation::Type_002" },
				{ "Type_003.Name", "ETwoPlatoonsStuation::Type_003" },
				{ "Type_004.Name", "ETwoPlatoonsStuation::Type_004" },
				{ "Type_005.Name", "ETwoPlatoonsStuation::Type_005" },
				{ "Type_006.Name", "ETwoPlatoonsStuation::Type_006" },
				{ "Type_007.Name", "ETwoPlatoonsStuation::Type_007" },
				{ "Type_008.Name", "ETwoPlatoonsStuation::Type_008" },
				{ "Type_009.Name", "ETwoPlatoonsStuation::Type_009" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ETwoPlatoonsStuation",
				"ETwoPlatoonsStuation",
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
