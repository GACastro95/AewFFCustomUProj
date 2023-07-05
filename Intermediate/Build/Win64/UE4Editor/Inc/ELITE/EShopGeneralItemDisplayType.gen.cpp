// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EShopGeneralItemDisplayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEShopGeneralItemDisplayType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EShopGeneralItemDisplayType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EShopGeneralItemDisplayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EShopGeneralItemDisplayType, Z_Construct_UPackage__Script_ELITE(), TEXT("EShopGeneralItemDisplayType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EShopGeneralItemDisplayType>()
	{
		return EShopGeneralItemDisplayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShopGeneralItemDisplayType(EShopGeneralItemDisplayType_StaticEnum, TEXT("/Script/ELITE"), TEXT("EShopGeneralItemDisplayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EShopGeneralItemDisplayType_Hash() { return 2315566405U; }
	UEnum* Z_Construct_UEnum_ELITE_EShopGeneralItemDisplayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShopGeneralItemDisplayType"), 0, Get_Z_Construct_UEnum_ELITE_EShopGeneralItemDisplayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShopGeneralItemDisplayType::Normal", (int64)EShopGeneralItemDisplayType::Normal },
				{ "EShopGeneralItemDisplayType::Pickup", (int64)EShopGeneralItemDisplayType::Pickup },
				{ "EShopGeneralItemDisplayType::PremiumBattlePass", (int64)EShopGeneralItemDisplayType::PremiumBattlePass },
				{ "EShopGeneralItemDisplayType::Text", (int64)EShopGeneralItemDisplayType::Text },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EShopGeneralItemDisplayType.h" },
				{ "Normal.Name", "EShopGeneralItemDisplayType::Normal" },
				{ "Pickup.Name", "EShopGeneralItemDisplayType::Pickup" },
				{ "PremiumBattlePass.Name", "EShopGeneralItemDisplayType::PremiumBattlePass" },
				{ "Text.Name", "EShopGeneralItemDisplayType::Text" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EShopGeneralItemDisplayType",
				"EShopGeneralItemDisplayType",
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
