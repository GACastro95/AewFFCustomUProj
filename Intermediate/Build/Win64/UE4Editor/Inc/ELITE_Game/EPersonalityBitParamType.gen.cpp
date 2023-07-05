// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EPersonalityBitParamType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPersonalityBitParamType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EPersonalityBitParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EPersonalityBitParamType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EPersonalityBitParamType>()
	{
		return EPersonalityBitParamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPersonalityBitParamType(EPersonalityBitParamType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EPersonalityBitParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType_Hash() { return 1630254279U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPersonalityBitParamType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPersonalityBitParamType::LeftHandedness", (int64)EPersonalityBitParamType::LeftHandedness },
				{ "EPersonalityBitParamType::Vegetarian", (int64)EPersonalityBitParamType::Vegetarian },
				{ "EPersonalityBitParamType::Reserve03", (int64)EPersonalityBitParamType::Reserve03 },
				{ "EPersonalityBitParamType::Reserve04", (int64)EPersonalityBitParamType::Reserve04 },
				{ "EPersonalityBitParamType::Reserve05", (int64)EPersonalityBitParamType::Reserve05 },
				{ "EPersonalityBitParamType::Reserve06", (int64)EPersonalityBitParamType::Reserve06 },
				{ "EPersonalityBitParamType::Reserve07", (int64)EPersonalityBitParamType::Reserve07 },
				{ "EPersonalityBitParamType::Reserve08", (int64)EPersonalityBitParamType::Reserve08 },
				{ "EPersonalityBitParamType::Num", (int64)EPersonalityBitParamType::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LeftHandedness.Name", "EPersonalityBitParamType::LeftHandedness" },
				{ "ModuleRelativePath", "Public/EPersonalityBitParamType.h" },
				{ "Num.Name", "EPersonalityBitParamType::Num" },
				{ "Reserve03.Name", "EPersonalityBitParamType::Reserve03" },
				{ "Reserve04.Name", "EPersonalityBitParamType::Reserve04" },
				{ "Reserve05.Name", "EPersonalityBitParamType::Reserve05" },
				{ "Reserve06.Name", "EPersonalityBitParamType::Reserve06" },
				{ "Reserve07.Name", "EPersonalityBitParamType::Reserve07" },
				{ "Reserve08.Name", "EPersonalityBitParamType::Reserve08" },
				{ "Vegetarian.Name", "EPersonalityBitParamType::Vegetarian" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EPersonalityBitParamType",
				"EPersonalityBitParamType",
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
