// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerSkillActionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerSkillActionType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillActionType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerSkillActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerSkillActionType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerSkillActionType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerSkillActionType>()
	{
		return EWrestlerSkillActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerSkillActionType(EWrestlerSkillActionType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerSkillActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillActionType_Hash() { return 803476107U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerSkillActionType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerSkillActionType::Type_000", (int64)EWrestlerSkillActionType::Type_000 },
				{ "EWrestlerSkillActionType::Type_001", (int64)EWrestlerSkillActionType::Type_001 },
				{ "EWrestlerSkillActionType::Type_002", (int64)EWrestlerSkillActionType::Type_002 },
				{ "EWrestlerSkillActionType::Type_003", (int64)EWrestlerSkillActionType::Type_003 },
				{ "EWrestlerSkillActionType::Type_004", (int64)EWrestlerSkillActionType::Type_004 },
				{ "EWrestlerSkillActionType::Type_005", (int64)EWrestlerSkillActionType::Type_005 },
				{ "EWrestlerSkillActionType::Type_006", (int64)EWrestlerSkillActionType::Type_006 },
				{ "EWrestlerSkillActionType::Type_007", (int64)EWrestlerSkillActionType::Type_007 },
				{ "EWrestlerSkillActionType::Type_008", (int64)EWrestlerSkillActionType::Type_008 },
				{ "EWrestlerSkillActionType::Type_009", (int64)EWrestlerSkillActionType::Type_009 },
				{ "EWrestlerSkillActionType::Type_010", (int64)EWrestlerSkillActionType::Type_010 },
				{ "EWrestlerSkillActionType::Type_011", (int64)EWrestlerSkillActionType::Type_011 },
				{ "EWrestlerSkillActionType::Type_012", (int64)EWrestlerSkillActionType::Type_012 },
				{ "EWrestlerSkillActionType::Type_013", (int64)EWrestlerSkillActionType::Type_013 },
				{ "EWrestlerSkillActionType::Type_014", (int64)EWrestlerSkillActionType::Type_014 },
				{ "EWrestlerSkillActionType::Type_015", (int64)EWrestlerSkillActionType::Type_015 },
				{ "EWrestlerSkillActionType::Type_016", (int64)EWrestlerSkillActionType::Type_016 },
				{ "EWrestlerSkillActionType::Type_017", (int64)EWrestlerSkillActionType::Type_017 },
				{ "EWrestlerSkillActionType::Type_MAX", (int64)EWrestlerSkillActionType::Type_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EWrestlerSkillActionType.h" },
				{ "Type_000.Name", "EWrestlerSkillActionType::Type_000" },
				{ "Type_001.Name", "EWrestlerSkillActionType::Type_001" },
				{ "Type_002.Name", "EWrestlerSkillActionType::Type_002" },
				{ "Type_003.Name", "EWrestlerSkillActionType::Type_003" },
				{ "Type_004.Name", "EWrestlerSkillActionType::Type_004" },
				{ "Type_005.Name", "EWrestlerSkillActionType::Type_005" },
				{ "Type_006.Name", "EWrestlerSkillActionType::Type_006" },
				{ "Type_007.Name", "EWrestlerSkillActionType::Type_007" },
				{ "Type_008.Name", "EWrestlerSkillActionType::Type_008" },
				{ "Type_009.Name", "EWrestlerSkillActionType::Type_009" },
				{ "Type_010.Name", "EWrestlerSkillActionType::Type_010" },
				{ "Type_011.Name", "EWrestlerSkillActionType::Type_011" },
				{ "Type_012.Name", "EWrestlerSkillActionType::Type_012" },
				{ "Type_013.Name", "EWrestlerSkillActionType::Type_013" },
				{ "Type_014.Name", "EWrestlerSkillActionType::Type_014" },
				{ "Type_015.Name", "EWrestlerSkillActionType::Type_015" },
				{ "Type_016.Name", "EWrestlerSkillActionType::Type_016" },
				{ "Type_017.Name", "EWrestlerSkillActionType::Type_017" },
				{ "Type_MAX.Hidden", "" },
				{ "Type_MAX.Name", "EWrestlerSkillActionType::Type_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerSkillActionType",
				"EWrestlerSkillActionType",
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
