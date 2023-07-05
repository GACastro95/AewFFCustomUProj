// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELIKPartType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELIKPartType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELIKPartType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELIKPartType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELIKPartType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELIKPartType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELIKPartType>()
	{
		return EELIKPartType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELIKPartType(EELIKPartType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELIKPartType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELIKPartType_Hash() { return 2440291563U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELIKPartType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELIKPartType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELIKPartType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELIKPartType::Empty", (int64)EELIKPartType::Empty },
				{ "EELIKPartType::ArmIK_Begin", (int64)EELIKPartType::ArmIK_Begin },
				{ "EELIKPartType::Hand_L", (int64)EELIKPartType::Hand_L },
				{ "EELIKPartType::Hand_R", (int64)EELIKPartType::Hand_R },
				{ "EELIKPartType::Elbow_L", (int64)EELIKPartType::Elbow_L },
				{ "EELIKPartType::Elbow_R", (int64)EELIKPartType::Elbow_R },
				{ "EELIKPartType::Shoulder_L", (int64)EELIKPartType::Shoulder_L },
				{ "EELIKPartType::Shoulder_R", (int64)EELIKPartType::Shoulder_R },
				{ "EELIKPartType::ArmIK_End", (int64)EELIKPartType::ArmIK_End },
				{ "EELIKPartType::LegIK_Begin", (int64)EELIKPartType::LegIK_Begin },
				{ "EELIKPartType::Leg_L", (int64)EELIKPartType::Leg_L },
				{ "EELIKPartType::Leg_R", (int64)EELIKPartType::Leg_R },
				{ "EELIKPartType::Foot_L", (int64)EELIKPartType::Foot_L },
				{ "EELIKPartType::Foot_R", (int64)EELIKPartType::Foot_R },
				{ "EELIKPartType::LegIK_End", (int64)EELIKPartType::LegIK_End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmIK_Begin.Name", "EELIKPartType::ArmIK_Begin" },
				{ "ArmIK_End.Name", "EELIKPartType::ArmIK_End" },
				{ "BlueprintType", "true" },
				{ "Elbow_L.Name", "EELIKPartType::Elbow_L" },
				{ "Elbow_R.Name", "EELIKPartType::Elbow_R" },
				{ "Empty.Name", "EELIKPartType::Empty" },
				{ "Foot_L.Name", "EELIKPartType::Foot_L" },
				{ "Foot_R.Name", "EELIKPartType::Foot_R" },
				{ "Hand_L.Name", "EELIKPartType::Hand_L" },
				{ "Hand_R.Name", "EELIKPartType::Hand_R" },
				{ "Leg_L.Name", "EELIKPartType::Leg_L" },
				{ "Leg_R.Name", "EELIKPartType::Leg_R" },
				{ "LegIK_Begin.Name", "EELIKPartType::LegIK_Begin" },
				{ "LegIK_End.Name", "EELIKPartType::LegIK_End" },
				{ "ModuleRelativePath", "Public/EELIKPartType.h" },
				{ "Shoulder_L.Name", "EELIKPartType::Shoulder_L" },
				{ "Shoulder_R.Name", "EELIKPartType::Shoulder_R" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELIKPartType",
				"EELIKPartType",
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
