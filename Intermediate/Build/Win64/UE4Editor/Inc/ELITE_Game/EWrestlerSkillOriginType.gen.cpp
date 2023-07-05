// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerSkillOriginType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerSkillOriginType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillOriginType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerSkillOriginType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerSkillOriginType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerSkillOriginType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerSkillOriginType>()
	{
		return EWrestlerSkillOriginType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerSkillOriginType(EWrestlerSkillOriginType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerSkillOriginType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillOriginType_Hash() { return 1389318233U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerSkillOriginType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerSkillOriginType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerSkillOriginType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerSkillOriginType::Type_000", (int64)EWrestlerSkillOriginType::Type_000 },
				{ "EWrestlerSkillOriginType::Type_001", (int64)EWrestlerSkillOriginType::Type_001 },
				{ "EWrestlerSkillOriginType::Type_MAX", (int64)EWrestlerSkillOriginType::Type_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EWrestlerSkillOriginType.h" },
				{ "Type_000.Name", "EWrestlerSkillOriginType::Type_000" },
				{ "Type_001.Name", "EWrestlerSkillOriginType::Type_001" },
				{ "Type_MAX.Hidden", "" },
				{ "Type_MAX.Name", "EWrestlerSkillOriginType::Type_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerSkillOriginType",
				"EWrestlerSkillOriginType",
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
