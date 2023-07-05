// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EMovesSkillType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesSkillType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EMovesSkillType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EMovesSkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EMovesSkillType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EMovesSkillType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EMovesSkillType>()
	{
		return EMovesSkillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesSkillType(EMovesSkillType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EMovesSkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EMovesSkillType_Hash() { return 977789584U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EMovesSkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesSkillType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EMovesSkillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesSkillType::Passive", (int64)EMovesSkillType::Passive },
				{ "EMovesSkillType::Finisher", (int64)EMovesSkillType::Finisher },
				{ "EMovesSkillType::Signature", (int64)EMovesSkillType::Signature },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Finisher.Name", "EMovesSkillType::Finisher" },
				{ "ModuleRelativePath", "Public/EMovesSkillType.h" },
				{ "Passive.Name", "EMovesSkillType::Passive" },
				{ "Signature.Name", "EMovesSkillType::Signature" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EMovesSkillType",
				"EMovesSkillType",
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
