// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EUnlockableItemRarityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUnlockableItemRarityType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EUnlockableItemRarityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EUnlockableItemRarityType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EUnlockableItemRarityType>()
	{
		return EUnlockableItemRarityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnlockableItemRarityType(EUnlockableItemRarityType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EUnlockableItemRarityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType_Hash() { return 2841414851U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnlockableItemRarityType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnlockableItemRarityType::Common", (int64)EUnlockableItemRarityType::Common },
				{ "EUnlockableItemRarityType::Uncommon", (int64)EUnlockableItemRarityType::Uncommon },
				{ "EUnlockableItemRarityType::Rare", (int64)EUnlockableItemRarityType::Rare },
				{ "EUnlockableItemRarityType::Epic", (int64)EUnlockableItemRarityType::Epic },
				{ "EUnlockableItemRarityType::Legendary", (int64)EUnlockableItemRarityType::Legendary },
				{ "EUnlockableItemRarityType::None", (int64)EUnlockableItemRarityType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Common.Name", "EUnlockableItemRarityType::Common" },
				{ "Epic.Name", "EUnlockableItemRarityType::Epic" },
				{ "Legendary.Name", "EUnlockableItemRarityType::Legendary" },
				{ "ModuleRelativePath", "Public/EUnlockableItemRarityType.h" },
				{ "None.Name", "EUnlockableItemRarityType::None" },
				{ "Rare.Name", "EUnlockableItemRarityType::Rare" },
				{ "Uncommon.Name", "EUnlockableItemRarityType::Uncommon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EUnlockableItemRarityType",
				"EUnlockableItemRarityType",
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
