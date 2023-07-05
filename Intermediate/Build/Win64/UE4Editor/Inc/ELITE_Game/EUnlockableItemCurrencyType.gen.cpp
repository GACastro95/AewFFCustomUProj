// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EUnlockableItemCurrencyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUnlockableItemCurrencyType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EUnlockableItemCurrencyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EUnlockableItemCurrencyType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EUnlockableItemCurrencyType>()
	{
		return EUnlockableItemCurrencyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnlockableItemCurrencyType(EUnlockableItemCurrencyType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EUnlockableItemCurrencyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType_Hash() { return 4156814073U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnlockableItemCurrencyType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnlockableItemCurrencyType::Cash", (int64)EUnlockableItemCurrencyType::Cash },
				{ "EUnlockableItemCurrencyType::Gold", (int64)EUnlockableItemCurrencyType::Gold },
				{ "EUnlockableItemCurrencyType::CareerCash", (int64)EUnlockableItemCurrencyType::CareerCash },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CareerCash.Name", "EUnlockableItemCurrencyType::CareerCash" },
				{ "Cash.Name", "EUnlockableItemCurrencyType::Cash" },
				{ "Gold.Name", "EUnlockableItemCurrencyType::Gold" },
				{ "ModuleRelativePath", "Public/EUnlockableItemCurrencyType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EUnlockableItemCurrencyType",
				"EUnlockableItemCurrencyType",
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
