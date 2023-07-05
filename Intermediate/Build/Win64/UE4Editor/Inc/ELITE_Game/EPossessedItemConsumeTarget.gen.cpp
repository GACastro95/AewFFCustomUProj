// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EPossessedItemConsumeTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPossessedItemConsumeTarget() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EPossessedItemConsumeTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EPossessedItemConsumeTarget"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EPossessedItemConsumeTarget>()
	{
		return EPossessedItemConsumeTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPossessedItemConsumeTarget(EPossessedItemConsumeTarget_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EPossessedItemConsumeTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget_Hash() { return 2408334165U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPossessedItemConsumeTarget"), 0, Get_Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPossessedItemConsumeTarget::None", (int64)EPossessedItemConsumeTarget::None },
				{ "EPossessedItemConsumeTarget::CrateTicket", (int64)EPossessedItemConsumeTarget::CrateTicket },
				{ "EPossessedItemConsumeTarget::BattlePassPointBoosterTicket", (int64)EPossessedItemConsumeTarget::BattlePassPointBoosterTicket },
				{ "EPossessedItemConsumeTarget::AEW_Cash", (int64)EPossessedItemConsumeTarget::AEW_Cash },
				{ "EPossessedItemConsumeTarget::AEW_Gold", (int64)EPossessedItemConsumeTarget::AEW_Gold },
				{ "EPossessedItemConsumeTarget::MAX", (int64)EPossessedItemConsumeTarget::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEW_Cash.Name", "EPossessedItemConsumeTarget::AEW_Cash" },
				{ "AEW_Gold.Name", "EPossessedItemConsumeTarget::AEW_Gold" },
				{ "BattlePassPointBoosterTicket.Name", "EPossessedItemConsumeTarget::BattlePassPointBoosterTicket" },
				{ "BlueprintType", "true" },
				{ "CrateTicket.Name", "EPossessedItemConsumeTarget::CrateTicket" },
				{ "MAX.Name", "EPossessedItemConsumeTarget::MAX" },
				{ "ModuleRelativePath", "Public/EPossessedItemConsumeTarget.h" },
				{ "None.Name", "EPossessedItemConsumeTarget::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EPossessedItemConsumeTarget",
				"EPossessedItemConsumeTarget",
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
