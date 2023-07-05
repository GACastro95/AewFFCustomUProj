// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ERefereeDQKind_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERefereeDQKind_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ERefereeDQKind_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ERefereeDQKind_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ERefereeDQKind_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ERefereeDQKind_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ERefereeDQKind_N>()
	{
		return ERefereeDQKind_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefereeDQKind_N(ERefereeDQKind_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ERefereeDQKind_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ERefereeDQKind_N_Hash() { return 1108295740U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ERefereeDQKind_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefereeDQKind_N"), 0, Get_Z_Construct_UEnum_ABP_200508_ERefereeDQKind_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERefereeDQKind_N::WeaponAttack", (int64)ERefereeDQKind_N::WeaponAttack },
				{ "ERefereeDQKind_N::ManagerDisturbance", (int64)ERefereeDQKind_N::ManagerDisturbance },
				{ "ERefereeDQKind_N::ManagerWeapon", (int64)ERefereeDQKind_N::ManagerWeapon },
				{ "ERefereeDQKind_N::ManagerApron", (int64)ERefereeDQKind_N::ManagerApron },
				{ "ERefereeDQKind_N::ERefereeDQKind_MAX", (int64)ERefereeDQKind_N::ERefereeDQKind_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ERefereeDQKind_MAX.Hidden", "" },
				{ "ERefereeDQKind_MAX.Name", "ERefereeDQKind_N::ERefereeDQKind_MAX" },
				{ "ManagerApron.Name", "ERefereeDQKind_N::ManagerApron" },
				{ "ManagerDisturbance.Name", "ERefereeDQKind_N::ManagerDisturbance" },
				{ "ManagerWeapon.Name", "ERefereeDQKind_N::ManagerWeapon" },
				{ "ModuleRelativePath", "Public/ERefereeDQKind_N.h" },
				{ "WeaponAttack.Name", "ERefereeDQKind_N::WeaponAttack" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ERefereeDQKind_N",
				"ERefereeDQKind_N",
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
