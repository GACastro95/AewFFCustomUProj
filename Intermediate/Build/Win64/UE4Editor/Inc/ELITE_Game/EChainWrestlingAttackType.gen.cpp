// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EChainWrestlingAttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChainWrestlingAttackType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EChainWrestlingAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EChainWrestlingAttackType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EChainWrestlingAttackType>()
	{
		return EChainWrestlingAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChainWrestlingAttackType(EChainWrestlingAttackType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EChainWrestlingAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType_Hash() { return 977854881U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChainWrestlingAttackType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EChainWrestlingAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChainWrestlingAttackType::None", (int64)EChainWrestlingAttackType::None },
				{ "EChainWrestlingAttackType::Start_Up", (int64)EChainWrestlingAttackType::Start_Up },
				{ "EChainWrestlingAttackType::Start_Down", (int64)EChainWrestlingAttackType::Start_Down },
				{ "EChainWrestlingAttackType::Start_Left", (int64)EChainWrestlingAttackType::Start_Left },
				{ "EChainWrestlingAttackType::Start_Right", (int64)EChainWrestlingAttackType::Start_Right },
				{ "EChainWrestlingAttackType::Failure", (int64)EChainWrestlingAttackType::Failure },
				{ "EChainWrestlingAttackType::Reversal", (int64)EChainWrestlingAttackType::Reversal },
				{ "EChainWrestlingAttackType::Release", (int64)EChainWrestlingAttackType::Release },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failure.Name", "EChainWrestlingAttackType::Failure" },
				{ "ModuleRelativePath", "Public/EChainWrestlingAttackType.h" },
				{ "None.Name", "EChainWrestlingAttackType::None" },
				{ "Release.Name", "EChainWrestlingAttackType::Release" },
				{ "Reversal.Name", "EChainWrestlingAttackType::Reversal" },
				{ "Start_Down.Name", "EChainWrestlingAttackType::Start_Down" },
				{ "Start_Left.Name", "EChainWrestlingAttackType::Start_Left" },
				{ "Start_Right.Name", "EChainWrestlingAttackType::Start_Right" },
				{ "Start_Up.Name", "EChainWrestlingAttackType::Start_Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EChainWrestlingAttackType",
				"EChainWrestlingAttackType",
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
