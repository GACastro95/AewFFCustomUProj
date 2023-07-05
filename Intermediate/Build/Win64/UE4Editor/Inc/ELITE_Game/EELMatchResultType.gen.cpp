// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELMatchResultType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchResultType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchResultType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELMatchResultType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELMatchResultType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELMatchResultType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchResultType>()
	{
		return EELMatchResultType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchResultType(EELMatchResultType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELMatchResultType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELMatchResultType_Hash() { return 3071163293U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchResultType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchResultType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELMatchResultType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchResultType::None", (int64)EELMatchResultType::None },
				{ "EELMatchResultType::PinFall", (int64)EELMatchResultType::PinFall },
				{ "EELMatchResultType::Submit", (int64)EELMatchResultType::Submit },
				{ "EELMatchResultType::TimeOut", (int64)EELMatchResultType::TimeOut },
				{ "EELMatchResultType::DQ", (int64)EELMatchResultType::DQ },
				{ "EELMatchResultType::BattleRoyale", (int64)EELMatchResultType::BattleRoyale },
				{ "EELMatchResultType::KO", (int64)EELMatchResultType::KO },
				{ "EELMatchResultType::Draw", (int64)EELMatchResultType::Draw },
				{ "EELMatchResultType::Ladder", (int64)EELMatchResultType::Ladder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BattleRoyale.Name", "EELMatchResultType::BattleRoyale" },
				{ "BlueprintType", "true" },
				{ "DQ.Name", "EELMatchResultType::DQ" },
				{ "Draw.Name", "EELMatchResultType::Draw" },
				{ "KO.Name", "EELMatchResultType::KO" },
				{ "Ladder.Name", "EELMatchResultType::Ladder" },
				{ "ModuleRelativePath", "Public/EELMatchResultType.h" },
				{ "None.Name", "EELMatchResultType::None" },
				{ "PinFall.Name", "EELMatchResultType::PinFall" },
				{ "Submit.Name", "EELMatchResultType::Submit" },
				{ "TimeOut.Name", "EELMatchResultType::TimeOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELMatchResultType",
				"EELMatchResultType",
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
