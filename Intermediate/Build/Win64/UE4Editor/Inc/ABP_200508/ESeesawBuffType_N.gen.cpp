// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESeesawBuffType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESeesawBuffType_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESeesawBuffType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESeesawBuffType_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESeesawBuffType_N>()
	{
		return ESeesawBuffType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESeesawBuffType_N(ESeesawBuffType_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESeesawBuffType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N_Hash() { return 2511667439U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESeesawBuffType_N"), 0, Get_Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESeesawBuffType_N::None", (int64)ESeesawBuffType_N::None },
				{ "ESeesawBuffType_N::B_TouchRingInSec", (int64)ESeesawBuffType_N::B_TouchRingInSec },
				{ "ESeesawBuffType_N::B_BattleRoyal", (int64)ESeesawBuffType_N::B_BattleRoyal },
				{ "ESeesawBuffType_N::B_CriticalAtk", (int64)ESeesawBuffType_N::B_CriticalAtk },
				{ "ESeesawBuffType_N::B_InjuryAtk", (int64)ESeesawBuffType_N::B_InjuryAtk },
				{ "ESeesawBuffType_N::P_EndSpecialState", (int64)ESeesawBuffType_N::P_EndSpecialState },
				{ "ESeesawBuffType_N::P_RevFinisherDamager", (int64)ESeesawBuffType_N::P_RevFinisherDamager },
				{ "ESeesawBuffType_N::P_RevSignatureDamager", (int64)ESeesawBuffType_N::P_RevSignatureDamager },
				{ "ESeesawBuffType_N::P_EndExciteState", (int64)ESeesawBuffType_N::P_EndExciteState },
				{ "ESeesawBuffType_N::P_CriticalDamage", (int64)ESeesawBuffType_N::P_CriticalDamage },
				{ "ESeesawBuffType_N::P_InjuryDamage", (int64)ESeesawBuffType_N::P_InjuryDamage },
				{ "ESeesawBuffType_N::ESeesawBuffType_MAX", (int64)ESeesawBuffType_N::ESeesawBuffType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "B_BattleRoyal.Name", "ESeesawBuffType_N::B_BattleRoyal" },
				{ "B_CriticalAtk.Name", "ESeesawBuffType_N::B_CriticalAtk" },
				{ "B_InjuryAtk.Name", "ESeesawBuffType_N::B_InjuryAtk" },
				{ "B_TouchRingInSec.Name", "ESeesawBuffType_N::B_TouchRingInSec" },
				{ "BlueprintType", "true" },
				{ "ESeesawBuffType_MAX.Hidden", "" },
				{ "ESeesawBuffType_MAX.Name", "ESeesawBuffType_N::ESeesawBuffType_MAX" },
				{ "ModuleRelativePath", "Public/ESeesawBuffType_N.h" },
				{ "None.Name", "ESeesawBuffType_N::None" },
				{ "P_CriticalDamage.Name", "ESeesawBuffType_N::P_CriticalDamage" },
				{ "P_EndExciteState.Name", "ESeesawBuffType_N::P_EndExciteState" },
				{ "P_EndSpecialState.Name", "ESeesawBuffType_N::P_EndSpecialState" },
				{ "P_InjuryDamage.Name", "ESeesawBuffType_N::P_InjuryDamage" },
				{ "P_RevFinisherDamager.Name", "ESeesawBuffType_N::P_RevFinisherDamager" },
				{ "P_RevSignatureDamager.Name", "ESeesawBuffType_N::P_RevSignatureDamager" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESeesawBuffType_N",
				"ESeesawBuffType_N",
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
