// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EBodyWeightToWightClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBodyWeightToWightClass() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EBodyWeightToWightClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EBodyWeightToWightClass"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EBodyWeightToWightClass>()
	{
		return EBodyWeightToWightClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyWeightToWightClass(EBodyWeightToWightClass_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EBodyWeightToWightClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass_Hash() { return 542799807U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyWeightToWightClass"), 0, Get_Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyWeightToWightClass::Cruiser", (int64)EBodyWeightToWightClass::Cruiser },
				{ "EBodyWeightToWightClass::LightHeavy", (int64)EBodyWeightToWightClass::LightHeavy },
				{ "EBodyWeightToWightClass::Heavy", (int64)EBodyWeightToWightClass::Heavy },
				{ "EBodyWeightToWightClass::SuperHeavy", (int64)EBodyWeightToWightClass::SuperHeavy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cruiser.Name", "EBodyWeightToWightClass::Cruiser" },
				{ "Heavy.Name", "EBodyWeightToWightClass::Heavy" },
				{ "LightHeavy.Name", "EBodyWeightToWightClass::LightHeavy" },
				{ "ModuleRelativePath", "Public/EBodyWeightToWightClass.h" },
				{ "SuperHeavy.Name", "EBodyWeightToWightClass::SuperHeavy" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EBodyWeightToWightClass",
				"EBodyWeightToWightClass",
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
