// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSHitGroundSE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSHitGroundSE() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitGroundSE();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSHitGroundSE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSHitGroundSE, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSHitGroundSE"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSHitGroundSE>()
	{
		return ESSHitGroundSE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSHitGroundSE(ESSHitGroundSE_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSHitGroundSE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSHitGroundSE_Hash() { return 57439163U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSHitGroundSE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSHitGroundSE"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSHitGroundSE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSHitGroundSE::None", (int64)ESSHitGroundSE::None },
				{ "ESSHitGroundSE::footstep_walk", (int64)ESSHitGroundSE::footstep_walk },
				{ "ESSHitGroundSE::footstep_walk_end", (int64)ESSHitGroundSE::footstep_walk_end },
				{ "ESSHitGroundSE::footstep_run", (int64)ESSHitGroundSE::footstep_run },
				{ "ESSHitGroundSE::footstep_run_end", (int64)ESSHitGroundSE::footstep_run_end },
				{ "ESSHitGroundSE::footstep_stomp_weak", (int64)ESSHitGroundSE::footstep_stomp_weak },
				{ "ESSHitGroundSE::footstep_stomp_medium", (int64)ESSHitGroundSE::footstep_stomp_medium },
				{ "ESSHitGroundSE::footstep_stomp_strong", (int64)ESSHitGroundSE::footstep_stomp_strong },
				{ "ESSHitGroundSE::footstep_land_weak", (int64)ESSHitGroundSE::footstep_land_weak },
				{ "ESSHitGroundSE::footstep_land_medium", (int64)ESSHitGroundSE::footstep_land_medium },
				{ "ESSHitGroundSE::footstep_land_strong", (int64)ESSHitGroundSE::footstep_land_strong },
				{ "ESSHitGroundSE::groundimpact_sharp_weak", (int64)ESSHitGroundSE::groundimpact_sharp_weak },
				{ "ESSHitGroundSE::groundimpact_sharp_medium", (int64)ESSHitGroundSE::groundimpact_sharp_medium },
				{ "ESSHitGroundSE::groundimpact_sharp_strong", (int64)ESSHitGroundSE::groundimpact_sharp_strong },
				{ "ESSHitGroundSE::groundimpact_sharp_dive", (int64)ESSHitGroundSE::groundimpact_sharp_dive },
				{ "ESSHitGroundSE::groundimpact_blunt_weak", (int64)ESSHitGroundSE::groundimpact_blunt_weak },
				{ "ESSHitGroundSE::groundimpact_blunt_medium", (int64)ESSHitGroundSE::groundimpact_blunt_medium },
				{ "ESSHitGroundSE::groundimpact_blunt_strong", (int64)ESSHitGroundSE::groundimpact_blunt_strong },
				{ "ESSHitGroundSE::groundimpact_blunt_dive", (int64)ESSHitGroundSE::groundimpact_blunt_dive },
				{ "ESSHitGroundSE::ground_tap", (int64)ESSHitGroundSE::ground_tap },
				{ "ESSHitGroundSE::ground_rolling", (int64)ESSHitGroundSE::ground_rolling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "footstep_land_medium.Name", "ESSHitGroundSE::footstep_land_medium" },
				{ "footstep_land_strong.Name", "ESSHitGroundSE::footstep_land_strong" },
				{ "footstep_land_weak.Name", "ESSHitGroundSE::footstep_land_weak" },
				{ "footstep_run.Name", "ESSHitGroundSE::footstep_run" },
				{ "footstep_run_end.Name", "ESSHitGroundSE::footstep_run_end" },
				{ "footstep_stomp_medium.Name", "ESSHitGroundSE::footstep_stomp_medium" },
				{ "footstep_stomp_strong.Name", "ESSHitGroundSE::footstep_stomp_strong" },
				{ "footstep_stomp_weak.Name", "ESSHitGroundSE::footstep_stomp_weak" },
				{ "footstep_walk.Name", "ESSHitGroundSE::footstep_walk" },
				{ "footstep_walk_end.Name", "ESSHitGroundSE::footstep_walk_end" },
				{ "ground_rolling.Name", "ESSHitGroundSE::ground_rolling" },
				{ "ground_tap.Name", "ESSHitGroundSE::ground_tap" },
				{ "groundimpact_blunt_dive.Name", "ESSHitGroundSE::groundimpact_blunt_dive" },
				{ "groundimpact_blunt_medium.Name", "ESSHitGroundSE::groundimpact_blunt_medium" },
				{ "groundimpact_blunt_strong.Name", "ESSHitGroundSE::groundimpact_blunt_strong" },
				{ "groundimpact_blunt_weak.Name", "ESSHitGroundSE::groundimpact_blunt_weak" },
				{ "groundimpact_sharp_dive.Name", "ESSHitGroundSE::groundimpact_sharp_dive" },
				{ "groundimpact_sharp_medium.Name", "ESSHitGroundSE::groundimpact_sharp_medium" },
				{ "groundimpact_sharp_strong.Name", "ESSHitGroundSE::groundimpact_sharp_strong" },
				{ "groundimpact_sharp_weak.Name", "ESSHitGroundSE::groundimpact_sharp_weak" },
				{ "ModuleRelativePath", "Public/ESSHitGroundSE.h" },
				{ "None.Name", "ESSHitGroundSE::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSHitGroundSE",
				"ESSHitGroundSE",
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
