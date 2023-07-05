// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerSkillBaseType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerSkillBaseType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillBaseType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerSkillBaseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerSkillBaseType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerSkillBaseType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerSkillBaseType>()
	{
		return EWrestlerSkillBaseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerSkillBaseType(EWrestlerSkillBaseType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerSkillBaseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillBaseType_Hash() { return 2252782072U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillBaseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerSkillBaseType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillBaseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerSkillBaseType::Type_000", (int64)EWrestlerSkillBaseType::Type_000 },
				{ "EWrestlerSkillBaseType::Type_001", (int64)EWrestlerSkillBaseType::Type_001 },
				{ "EWrestlerSkillBaseType::Type_002", (int64)EWrestlerSkillBaseType::Type_002 },
				{ "EWrestlerSkillBaseType::Type_003", (int64)EWrestlerSkillBaseType::Type_003 },
				{ "EWrestlerSkillBaseType::Type_004", (int64)EWrestlerSkillBaseType::Type_004 },
				{ "EWrestlerSkillBaseType::Type_005", (int64)EWrestlerSkillBaseType::Type_005 },
				{ "EWrestlerSkillBaseType::Type_006", (int64)EWrestlerSkillBaseType::Type_006 },
				{ "EWrestlerSkillBaseType::Type_007", (int64)EWrestlerSkillBaseType::Type_007 },
				{ "EWrestlerSkillBaseType::Type_008", (int64)EWrestlerSkillBaseType::Type_008 },
				{ "EWrestlerSkillBaseType::Type_MAX", (int64)EWrestlerSkillBaseType::Type_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EWrestlerSkillBaseType.h" },
				{ "Type_000.Name", "EWrestlerSkillBaseType::Type_000" },
				{ "Type_001.Name", "EWrestlerSkillBaseType::Type_001" },
				{ "Type_002.Name", "EWrestlerSkillBaseType::Type_002" },
				{ "Type_003.Name", "EWrestlerSkillBaseType::Type_003" },
				{ "Type_004.Name", "EWrestlerSkillBaseType::Type_004" },
				{ "Type_005.Name", "EWrestlerSkillBaseType::Type_005" },
				{ "Type_006.Name", "EWrestlerSkillBaseType::Type_006" },
				{ "Type_007.Name", "EWrestlerSkillBaseType::Type_007" },
				{ "Type_008.Name", "EWrestlerSkillBaseType::Type_008" },
				{ "Type_MAX.Hidden", "" },
				{ "Type_MAX.Name", "EWrestlerSkillBaseType::Type_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerSkillBaseType",
				"EWrestlerSkillBaseType",
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
