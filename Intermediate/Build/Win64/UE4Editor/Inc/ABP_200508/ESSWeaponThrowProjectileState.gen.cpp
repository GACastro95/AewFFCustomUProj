// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSWeaponThrowProjectileState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSWeaponThrowProjectileState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSWeaponThrowProjectileState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSWeaponThrowProjectileState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSWeaponThrowProjectileState>()
	{
		return ESSWeaponThrowProjectileState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSWeaponThrowProjectileState(ESSWeaponThrowProjectileState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSWeaponThrowProjectileState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState_Hash() { return 549886631U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSWeaponThrowProjectileState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSWeaponThrowProjectileState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSWeaponThrowProjectileState::Hold", (int64)ESSWeaponThrowProjectileState::Hold },
				{ "ESSWeaponThrowProjectileState::Stocked", (int64)ESSWeaponThrowProjectileState::Stocked },
				{ "ESSWeaponThrowProjectileState::Launched", (int64)ESSWeaponThrowProjectileState::Launched },
				{ "ESSWeaponThrowProjectileState::PostImpact", (int64)ESSWeaponThrowProjectileState::PostImpact },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hold.Name", "ESSWeaponThrowProjectileState::Hold" },
				{ "Launched.Name", "ESSWeaponThrowProjectileState::Launched" },
				{ "ModuleRelativePath", "Public/ESSWeaponThrowProjectileState.h" },
				{ "PostImpact.Name", "ESSWeaponThrowProjectileState::PostImpact" },
				{ "Stocked.Name", "ESSWeaponThrowProjectileState::Stocked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSWeaponThrowProjectileState",
				"ESSWeaponThrowProjectileState",
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
