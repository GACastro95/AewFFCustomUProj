// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerSkillStateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerSkillStateType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillStateType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerSkillStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerSkillStateType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerSkillStateType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerSkillStateType>()
	{
		return EWrestlerSkillStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerSkillStateType(EWrestlerSkillStateType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerSkillStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillStateType_Hash() { return 3537671790U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerSkillStateType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerSkillStateType::Type_000", (int64)EWrestlerSkillStateType::Type_000 },
				{ "EWrestlerSkillStateType::Type_001", (int64)EWrestlerSkillStateType::Type_001 },
				{ "EWrestlerSkillStateType::Type_002", (int64)EWrestlerSkillStateType::Type_002 },
				{ "EWrestlerSkillStateType::Type_003", (int64)EWrestlerSkillStateType::Type_003 },
				{ "EWrestlerSkillStateType::Type_004", (int64)EWrestlerSkillStateType::Type_004 },
				{ "EWrestlerSkillStateType::Type_005", (int64)EWrestlerSkillStateType::Type_005 },
				{ "EWrestlerSkillStateType::Type_006", (int64)EWrestlerSkillStateType::Type_006 },
				{ "EWrestlerSkillStateType::Type_007", (int64)EWrestlerSkillStateType::Type_007 },
				{ "EWrestlerSkillStateType::Type_008", (int64)EWrestlerSkillStateType::Type_008 },
				{ "EWrestlerSkillStateType::Type_009", (int64)EWrestlerSkillStateType::Type_009 },
				{ "EWrestlerSkillStateType::Type_010", (int64)EWrestlerSkillStateType::Type_010 },
				{ "EWrestlerSkillStateType::Type_011", (int64)EWrestlerSkillStateType::Type_011 },
				{ "EWrestlerSkillStateType::Type_MAX", (int64)EWrestlerSkillStateType::Type_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EWrestlerSkillStateType.h" },
				{ "Type_000.Name", "EWrestlerSkillStateType::Type_000" },
				{ "Type_001.Name", "EWrestlerSkillStateType::Type_001" },
				{ "Type_002.Name", "EWrestlerSkillStateType::Type_002" },
				{ "Type_003.Name", "EWrestlerSkillStateType::Type_003" },
				{ "Type_004.Name", "EWrestlerSkillStateType::Type_004" },
				{ "Type_005.Name", "EWrestlerSkillStateType::Type_005" },
				{ "Type_006.Name", "EWrestlerSkillStateType::Type_006" },
				{ "Type_007.Name", "EWrestlerSkillStateType::Type_007" },
				{ "Type_008.Name", "EWrestlerSkillStateType::Type_008" },
				{ "Type_009.Name", "EWrestlerSkillStateType::Type_009" },
				{ "Type_010.Name", "EWrestlerSkillStateType::Type_010" },
				{ "Type_011.Name", "EWrestlerSkillStateType::Type_011" },
				{ "Type_MAX.Hidden", "" },
				{ "Type_MAX.Name", "EWrestlerSkillStateType::Type_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerSkillStateType",
				"EWrestlerSkillStateType",
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
