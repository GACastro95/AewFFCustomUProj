// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSUpperBodyAnimState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSUpperBodyAnimState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSUpperBodyAnimState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSUpperBodyAnimState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSUpperBodyAnimState>()
	{
		return ESSUpperBodyAnimState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSUpperBodyAnimState(ESSUpperBodyAnimState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSUpperBodyAnimState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState_Hash() { return 856488639U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSUpperBodyAnimState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSUpperBodyAnimState::Default", (int64)ESSUpperBodyAnimState::Default },
				{ "ESSUpperBodyAnimState::HoldGun", (int64)ESSUpperBodyAnimState::HoldGun },
				{ "ESSUpperBodyAnimState::HoldWeaponThrow", (int64)ESSUpperBodyAnimState::HoldWeaponThrow },
				{ "ESSUpperBodyAnimState::HoldWeaponThrow2", (int64)ESSUpperBodyAnimState::HoldWeaponThrow2 },
				{ "ESSUpperBodyAnimState::HoldWeaponTrap", (int64)ESSUpperBodyAnimState::HoldWeaponTrap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESSUpperBodyAnimState::Default" },
				{ "HoldGun.Name", "ESSUpperBodyAnimState::HoldGun" },
				{ "HoldWeaponThrow.Name", "ESSUpperBodyAnimState::HoldWeaponThrow" },
				{ "HoldWeaponThrow2.Name", "ESSUpperBodyAnimState::HoldWeaponThrow2" },
				{ "HoldWeaponTrap.Name", "ESSUpperBodyAnimState::HoldWeaponTrap" },
				{ "ModuleRelativePath", "Public/ESSUpperBodyAnimState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSUpperBodyAnimState",
				"ESSUpperBodyAnimState",
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
