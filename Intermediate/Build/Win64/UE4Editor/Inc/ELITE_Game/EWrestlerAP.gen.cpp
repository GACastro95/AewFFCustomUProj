// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EWrestlerAP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWrestlerAP() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerAP();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EWrestlerAP_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EWrestlerAP, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EWrestlerAP"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerAP>()
	{
		return EWrestlerAP_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWrestlerAP(EWrestlerAP_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EWrestlerAP"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EWrestlerAP_Hash() { return 1393860278U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerAP()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWrestlerAP"), 0, Get_Z_Construct_UEnum_ELITE_Game_EWrestlerAP_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWrestlerAP::Invalid", (int64)EWrestlerAP::Invalid },
				{ "EWrestlerAP::Head_00", (int64)EWrestlerAP::Head_00 },
				{ "EWrestlerAP::Head_01", (int64)EWrestlerAP::Head_01 },
				{ "EWrestlerAP::Head_02", (int64)EWrestlerAP::Head_02 },
				{ "EWrestlerAP::Head_03", (int64)EWrestlerAP::Head_03 },
				{ "EWrestlerAP::Neck_00", (int64)EWrestlerAP::Neck_00 },
				{ "EWrestlerAP::Neck_01", (int64)EWrestlerAP::Neck_01 },
				{ "EWrestlerAP::Neck_02", (int64)EWrestlerAP::Neck_02 },
				{ "EWrestlerAP::Neck_03", (int64)EWrestlerAP::Neck_03 },
				{ "EWrestlerAP::ArmL_Wrist_00", (int64)EWrestlerAP::ArmL_Wrist_00 },
				{ "EWrestlerAP::ArmL_Wrist_01", (int64)EWrestlerAP::ArmL_Wrist_01 },
				{ "EWrestlerAP::ArmL_Elbow_00", (int64)EWrestlerAP::ArmL_Elbow_00 },
				{ "EWrestlerAP::ArmL_Elbow_01", (int64)EWrestlerAP::ArmL_Elbow_01 },
				{ "EWrestlerAP::ArmL_Elbow_02", (int64)EWrestlerAP::ArmL_Elbow_02 },
				{ "EWrestlerAP::ArmL_Elbow_03", (int64)EWrestlerAP::ArmL_Elbow_03 },
				{ "EWrestlerAP::ArmL_Shoulder_00", (int64)EWrestlerAP::ArmL_Shoulder_00 },
				{ "EWrestlerAP::ArmL_Shoulder_01", (int64)EWrestlerAP::ArmL_Shoulder_01 },
				{ "EWrestlerAP::ArmL_Shoulder_02", (int64)EWrestlerAP::ArmL_Shoulder_02 },
				{ "EWrestlerAP::ArmL_Shoulder_03", (int64)EWrestlerAP::ArmL_Shoulder_03 },
				{ "EWrestlerAP::ArmL_Clavicle_00", (int64)EWrestlerAP::ArmL_Clavicle_00 },
				{ "EWrestlerAP::ArmL_Clavicle_01", (int64)EWrestlerAP::ArmL_Clavicle_01 },
				{ "EWrestlerAP::ArmL_Clavicle_02", (int64)EWrestlerAP::ArmL_Clavicle_02 },
				{ "EWrestlerAP::ArmR_Wrist_00", (int64)EWrestlerAP::ArmR_Wrist_00 },
				{ "EWrestlerAP::ArmR_Wrist_01", (int64)EWrestlerAP::ArmR_Wrist_01 },
				{ "EWrestlerAP::ArmR_Elbow_00", (int64)EWrestlerAP::ArmR_Elbow_00 },
				{ "EWrestlerAP::ArmR_Elbow_01", (int64)EWrestlerAP::ArmR_Elbow_01 },
				{ "EWrestlerAP::ArmR_Elbow_02", (int64)EWrestlerAP::ArmR_Elbow_02 },
				{ "EWrestlerAP::ArmR_Elbow_03", (int64)EWrestlerAP::ArmR_Elbow_03 },
				{ "EWrestlerAP::ArmR_Shoulder_00", (int64)EWrestlerAP::ArmR_Shoulder_00 },
				{ "EWrestlerAP::ArmR_Shoulder_01", (int64)EWrestlerAP::ArmR_Shoulder_01 },
				{ "EWrestlerAP::ArmR_Shoulder_02", (int64)EWrestlerAP::ArmR_Shoulder_02 },
				{ "EWrestlerAP::ArmR_Shoulder_03", (int64)EWrestlerAP::ArmR_Shoulder_03 },
				{ "EWrestlerAP::ArmR_Clavicle_00", (int64)EWrestlerAP::ArmR_Clavicle_00 },
				{ "EWrestlerAP::ArmR_Clavicle_01", (int64)EWrestlerAP::ArmR_Clavicle_01 },
				{ "EWrestlerAP::ArmR_Clavicle_02", (int64)EWrestlerAP::ArmR_Clavicle_02 },
				{ "EWrestlerAP::Chest_00", (int64)EWrestlerAP::Chest_00 },
				{ "EWrestlerAP::Chest_01", (int64)EWrestlerAP::Chest_01 },
				{ "EWrestlerAP::Spine2_00", (int64)EWrestlerAP::Spine2_00 },
				{ "EWrestlerAP::Spine1_00", (int64)EWrestlerAP::Spine1_00 },
				{ "EWrestlerAP::Spine1_01", (int64)EWrestlerAP::Spine1_01 },
				{ "EWrestlerAP::Spine1_02", (int64)EWrestlerAP::Spine1_02 },
				{ "EWrestlerAP::Spine1_03", (int64)EWrestlerAP::Spine1_03 },
				{ "EWrestlerAP::Spine1_04", (int64)EWrestlerAP::Spine1_04 },
				{ "EWrestlerAP::Spine1_05", (int64)EWrestlerAP::Spine1_05 },
				{ "EWrestlerAP::Spine1_06", (int64)EWrestlerAP::Spine1_06 },
				{ "EWrestlerAP::Hips_00", (int64)EWrestlerAP::Hips_00 },
				{ "EWrestlerAP::Hips_01", (int64)EWrestlerAP::Hips_01 },
				{ "EWrestlerAP::Hips_02", (int64)EWrestlerAP::Hips_02 },
				{ "EWrestlerAP::Hips_03", (int64)EWrestlerAP::Hips_03 },
				{ "EWrestlerAP::Hips_04", (int64)EWrestlerAP::Hips_04 },
				{ "EWrestlerAP::LegL_Toe_00", (int64)EWrestlerAP::LegL_Toe_00 },
				{ "EWrestlerAP::LegL_Foot_00", (int64)EWrestlerAP::LegL_Foot_00 },
				{ "EWrestlerAP::LegL_Foot_01", (int64)EWrestlerAP::LegL_Foot_01 },
				{ "EWrestlerAP::LegL_Foot_02", (int64)EWrestlerAP::LegL_Foot_02 },
				{ "EWrestlerAP::LegL_Foot_03", (int64)EWrestlerAP::LegL_Foot_03 },
				{ "EWrestlerAP::LegL_Knee_00", (int64)EWrestlerAP::LegL_Knee_00 },
				{ "EWrestlerAP::LegL_Knee_01", (int64)EWrestlerAP::LegL_Knee_01 },
				{ "EWrestlerAP::LegL_Knee_02", (int64)EWrestlerAP::LegL_Knee_02 },
				{ "EWrestlerAP::LegL_Knee_03", (int64)EWrestlerAP::LegL_Knee_03 },
				{ "EWrestlerAP::LegL_Knee_04", (int64)EWrestlerAP::LegL_Knee_04 },
				{ "EWrestlerAP::LegL_Knee_05", (int64)EWrestlerAP::LegL_Knee_05 },
				{ "EWrestlerAP::LegL_Thigh_00", (int64)EWrestlerAP::LegL_Thigh_00 },
				{ "EWrestlerAP::LegL_Thigh_01", (int64)EWrestlerAP::LegL_Thigh_01 },
				{ "EWrestlerAP::LegL_Thigh_02", (int64)EWrestlerAP::LegL_Thigh_02 },
				{ "EWrestlerAP::LegL_Thigh_03", (int64)EWrestlerAP::LegL_Thigh_03 },
				{ "EWrestlerAP::LegL_Thigh_04", (int64)EWrestlerAP::LegL_Thigh_04 },
				{ "EWrestlerAP::LegL_Thigh_05", (int64)EWrestlerAP::LegL_Thigh_05 },
				{ "EWrestlerAP::LegL_Thigh_06", (int64)EWrestlerAP::LegL_Thigh_06 },
				{ "EWrestlerAP::LegR_Toe_00", (int64)EWrestlerAP::LegR_Toe_00 },
				{ "EWrestlerAP::LegR_Foot_00", (int64)EWrestlerAP::LegR_Foot_00 },
				{ "EWrestlerAP::LegR_Foot_01", (int64)EWrestlerAP::LegR_Foot_01 },
				{ "EWrestlerAP::LegR_Foot_02", (int64)EWrestlerAP::LegR_Foot_02 },
				{ "EWrestlerAP::LegR_Foot_03", (int64)EWrestlerAP::LegR_Foot_03 },
				{ "EWrestlerAP::LegR_Knee_00", (int64)EWrestlerAP::LegR_Knee_00 },
				{ "EWrestlerAP::LegR_Knee_01", (int64)EWrestlerAP::LegR_Knee_01 },
				{ "EWrestlerAP::LegR_Knee_02", (int64)EWrestlerAP::LegR_Knee_02 },
				{ "EWrestlerAP::LegR_Knee_03", (int64)EWrestlerAP::LegR_Knee_03 },
				{ "EWrestlerAP::LegR_Knee_04", (int64)EWrestlerAP::LegR_Knee_04 },
				{ "EWrestlerAP::LegR_Knee_05", (int64)EWrestlerAP::LegR_Knee_05 },
				{ "EWrestlerAP::LegR_Thigh_00", (int64)EWrestlerAP::LegR_Thigh_00 },
				{ "EWrestlerAP::LegR_Thigh_01", (int64)EWrestlerAP::LegR_Thigh_01 },
				{ "EWrestlerAP::LegR_Thigh_02", (int64)EWrestlerAP::LegR_Thigh_02 },
				{ "EWrestlerAP::LegR_Thigh_03", (int64)EWrestlerAP::LegR_Thigh_03 },
				{ "EWrestlerAP::LegR_Thigh_04", (int64)EWrestlerAP::LegR_Thigh_04 },
				{ "EWrestlerAP::LegR_Thigh_05", (int64)EWrestlerAP::LegR_Thigh_05 },
				{ "EWrestlerAP::LegR_Thigh_06", (int64)EWrestlerAP::LegR_Thigh_06 },
				{ "EWrestlerAP::EWrestlerAP_MAX", (int64)EWrestlerAP::EWrestlerAP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmL_Clavicle_00.Name", "EWrestlerAP::ArmL_Clavicle_00" },
				{ "ArmL_Clavicle_01.Name", "EWrestlerAP::ArmL_Clavicle_01" },
				{ "ArmL_Clavicle_02.Name", "EWrestlerAP::ArmL_Clavicle_02" },
				{ "ArmL_Elbow_00.Name", "EWrestlerAP::ArmL_Elbow_00" },
				{ "ArmL_Elbow_01.Name", "EWrestlerAP::ArmL_Elbow_01" },
				{ "ArmL_Elbow_02.Name", "EWrestlerAP::ArmL_Elbow_02" },
				{ "ArmL_Elbow_03.Name", "EWrestlerAP::ArmL_Elbow_03" },
				{ "ArmL_Shoulder_00.Name", "EWrestlerAP::ArmL_Shoulder_00" },
				{ "ArmL_Shoulder_01.Name", "EWrestlerAP::ArmL_Shoulder_01" },
				{ "ArmL_Shoulder_02.Name", "EWrestlerAP::ArmL_Shoulder_02" },
				{ "ArmL_Shoulder_03.Name", "EWrestlerAP::ArmL_Shoulder_03" },
				{ "ArmL_Wrist_00.Name", "EWrestlerAP::ArmL_Wrist_00" },
				{ "ArmL_Wrist_01.Name", "EWrestlerAP::ArmL_Wrist_01" },
				{ "ArmR_Clavicle_00.Name", "EWrestlerAP::ArmR_Clavicle_00" },
				{ "ArmR_Clavicle_01.Name", "EWrestlerAP::ArmR_Clavicle_01" },
				{ "ArmR_Clavicle_02.Name", "EWrestlerAP::ArmR_Clavicle_02" },
				{ "ArmR_Elbow_00.Name", "EWrestlerAP::ArmR_Elbow_00" },
				{ "ArmR_Elbow_01.Name", "EWrestlerAP::ArmR_Elbow_01" },
				{ "ArmR_Elbow_02.Name", "EWrestlerAP::ArmR_Elbow_02" },
				{ "ArmR_Elbow_03.Name", "EWrestlerAP::ArmR_Elbow_03" },
				{ "ArmR_Shoulder_00.Name", "EWrestlerAP::ArmR_Shoulder_00" },
				{ "ArmR_Shoulder_01.Name", "EWrestlerAP::ArmR_Shoulder_01" },
				{ "ArmR_Shoulder_02.Name", "EWrestlerAP::ArmR_Shoulder_02" },
				{ "ArmR_Shoulder_03.Name", "EWrestlerAP::ArmR_Shoulder_03" },
				{ "ArmR_Wrist_00.Name", "EWrestlerAP::ArmR_Wrist_00" },
				{ "ArmR_Wrist_01.Name", "EWrestlerAP::ArmR_Wrist_01" },
				{ "BlueprintType", "true" },
				{ "Chest_00.Name", "EWrestlerAP::Chest_00" },
				{ "Chest_01.Name", "EWrestlerAP::Chest_01" },
				{ "EWrestlerAP_MAX.Name", "EWrestlerAP::EWrestlerAP_MAX" },
				{ "Head_00.Name", "EWrestlerAP::Head_00" },
				{ "Head_01.Name", "EWrestlerAP::Head_01" },
				{ "Head_02.Name", "EWrestlerAP::Head_02" },
				{ "Head_03.Name", "EWrestlerAP::Head_03" },
				{ "Hips_00.Name", "EWrestlerAP::Hips_00" },
				{ "Hips_01.Name", "EWrestlerAP::Hips_01" },
				{ "Hips_02.Name", "EWrestlerAP::Hips_02" },
				{ "Hips_03.Name", "EWrestlerAP::Hips_03" },
				{ "Hips_04.Name", "EWrestlerAP::Hips_04" },
				{ "Invalid.Name", "EWrestlerAP::Invalid" },
				{ "LegL_Foot_00.Name", "EWrestlerAP::LegL_Foot_00" },
				{ "LegL_Foot_01.Name", "EWrestlerAP::LegL_Foot_01" },
				{ "LegL_Foot_02.Name", "EWrestlerAP::LegL_Foot_02" },
				{ "LegL_Foot_03.Name", "EWrestlerAP::LegL_Foot_03" },
				{ "LegL_Knee_00.Name", "EWrestlerAP::LegL_Knee_00" },
				{ "LegL_Knee_01.Name", "EWrestlerAP::LegL_Knee_01" },
				{ "LegL_Knee_02.Name", "EWrestlerAP::LegL_Knee_02" },
				{ "LegL_Knee_03.Name", "EWrestlerAP::LegL_Knee_03" },
				{ "LegL_Knee_04.Name", "EWrestlerAP::LegL_Knee_04" },
				{ "LegL_Knee_05.Name", "EWrestlerAP::LegL_Knee_05" },
				{ "LegL_Thigh_00.Name", "EWrestlerAP::LegL_Thigh_00" },
				{ "LegL_Thigh_01.Name", "EWrestlerAP::LegL_Thigh_01" },
				{ "LegL_Thigh_02.Name", "EWrestlerAP::LegL_Thigh_02" },
				{ "LegL_Thigh_03.Name", "EWrestlerAP::LegL_Thigh_03" },
				{ "LegL_Thigh_04.Name", "EWrestlerAP::LegL_Thigh_04" },
				{ "LegL_Thigh_05.Name", "EWrestlerAP::LegL_Thigh_05" },
				{ "LegL_Thigh_06.Name", "EWrestlerAP::LegL_Thigh_06" },
				{ "LegL_Toe_00.Name", "EWrestlerAP::LegL_Toe_00" },
				{ "LegR_Foot_00.Name", "EWrestlerAP::LegR_Foot_00" },
				{ "LegR_Foot_01.Name", "EWrestlerAP::LegR_Foot_01" },
				{ "LegR_Foot_02.Name", "EWrestlerAP::LegR_Foot_02" },
				{ "LegR_Foot_03.Name", "EWrestlerAP::LegR_Foot_03" },
				{ "LegR_Knee_00.Name", "EWrestlerAP::LegR_Knee_00" },
				{ "LegR_Knee_01.Name", "EWrestlerAP::LegR_Knee_01" },
				{ "LegR_Knee_02.Name", "EWrestlerAP::LegR_Knee_02" },
				{ "LegR_Knee_03.Name", "EWrestlerAP::LegR_Knee_03" },
				{ "LegR_Knee_04.Name", "EWrestlerAP::LegR_Knee_04" },
				{ "LegR_Knee_05.Name", "EWrestlerAP::LegR_Knee_05" },
				{ "LegR_Thigh_00.Name", "EWrestlerAP::LegR_Thigh_00" },
				{ "LegR_Thigh_01.Name", "EWrestlerAP::LegR_Thigh_01" },
				{ "LegR_Thigh_02.Name", "EWrestlerAP::LegR_Thigh_02" },
				{ "LegR_Thigh_03.Name", "EWrestlerAP::LegR_Thigh_03" },
				{ "LegR_Thigh_04.Name", "EWrestlerAP::LegR_Thigh_04" },
				{ "LegR_Thigh_05.Name", "EWrestlerAP::LegR_Thigh_05" },
				{ "LegR_Thigh_06.Name", "EWrestlerAP::LegR_Thigh_06" },
				{ "LegR_Toe_00.Name", "EWrestlerAP::LegR_Toe_00" },
				{ "ModuleRelativePath", "Public/EWrestlerAP.h" },
				{ "Neck_00.Name", "EWrestlerAP::Neck_00" },
				{ "Neck_01.Name", "EWrestlerAP::Neck_01" },
				{ "Neck_02.Name", "EWrestlerAP::Neck_02" },
				{ "Neck_03.Name", "EWrestlerAP::Neck_03" },
				{ "Spine1_00.Name", "EWrestlerAP::Spine1_00" },
				{ "Spine1_01.Name", "EWrestlerAP::Spine1_01" },
				{ "Spine1_02.Name", "EWrestlerAP::Spine1_02" },
				{ "Spine1_03.Name", "EWrestlerAP::Spine1_03" },
				{ "Spine1_04.Name", "EWrestlerAP::Spine1_04" },
				{ "Spine1_05.Name", "EWrestlerAP::Spine1_05" },
				{ "Spine1_06.Name", "EWrestlerAP::Spine1_06" },
				{ "Spine2_00.Name", "EWrestlerAP::Spine2_00" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EWrestlerAP",
				"EWrestlerAP",
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
