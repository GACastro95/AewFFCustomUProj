// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EShopDisplayCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEShopDisplayCategory() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EShopDisplayCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EShopDisplayCategory"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EShopDisplayCategory>()
	{
		return EShopDisplayCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShopDisplayCategory(EShopDisplayCategory_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EShopDisplayCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory_Hash() { return 431195334U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShopDisplayCategory"), 0, Get_Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShopDisplayCategory::None", (int64)EShopDisplayCategory::None },
				{ "EShopDisplayCategory::HotItems", (int64)EShopDisplayCategory::HotItems },
				{ "EShopDisplayCategory::Apparrels", (int64)EShopDisplayCategory::Apparrels },
				{ "EShopDisplayCategory::Accessories", (int64)EShopDisplayCategory::Accessories },
				{ "EShopDisplayCategory::Moves", (int64)EShopDisplayCategory::Moves },
				{ "EShopDisplayCategory::Entrance", (int64)EShopDisplayCategory::Entrance },
				{ "EShopDisplayCategory::MoreItems", (int64)EShopDisplayCategory::MoreItems },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accessories.Name", "EShopDisplayCategory::Accessories" },
				{ "Apparrels.Name", "EShopDisplayCategory::Apparrels" },
				{ "BlueprintType", "true" },
				{ "Entrance.Name", "EShopDisplayCategory::Entrance" },
				{ "HotItems.Name", "EShopDisplayCategory::HotItems" },
				{ "ModuleRelativePath", "Public/EShopDisplayCategory.h" },
				{ "MoreItems.Name", "EShopDisplayCategory::MoreItems" },
				{ "Moves.Name", "EShopDisplayCategory::Moves" },
				{ "None.Name", "EShopDisplayCategory::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EShopDisplayCategory",
				"EShopDisplayCategory",
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
