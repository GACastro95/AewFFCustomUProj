// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSPlayerFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSPlayerFlag() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerFlag();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSPlayerFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSPlayerFlag, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSPlayerFlag"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerFlag>()
	{
		return ESSPlayerFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSPlayerFlag(ESSPlayerFlag_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSPlayerFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSPlayerFlag_Hash() { return 3336477315U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSPlayerFlag"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSPlayerFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSPlayerFlag::None", (int64)ESSPlayerFlag::None },
				{ "ESSPlayerFlag::UsingAbility1", (int64)ESSPlayerFlag::UsingAbility1 },
				{ "ESSPlayerFlag::UsingAbility2", (int64)ESSPlayerFlag::UsingAbility2 },
				{ "ESSPlayerFlag::UsingAbility3", (int64)ESSPlayerFlag::UsingAbility3 },
				{ "ESSPlayerFlag::PressingAbilityShiftForWatcher", (int64)ESSPlayerFlag::PressingAbilityShiftForWatcher },
				{ "ESSPlayerFlag::ViewWholeMapForWatcher", (int64)ESSPlayerFlag::ViewWholeMapForWatcher },
				{ "ESSPlayerFlag::GunAimForWatcher", (int64)ESSPlayerFlag::GunAimForWatcher },
				{ "ESSPlayerFlag::ThrowWeaponAimForWatcher", (int64)ESSPlayerFlag::ThrowWeaponAimForWatcher },
				{ "ESSPlayerFlag::PutTrapAimForWatcher", (int64)ESSPlayerFlag::PutTrapAimForWatcher },
				{ "ESSPlayerFlag::Max", (int64)ESSPlayerFlag::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GunAimForWatcher.Name", "ESSPlayerFlag::GunAimForWatcher" },
				{ "Max.Name", "ESSPlayerFlag::Max" },
				{ "ModuleRelativePath", "Public/ESSPlayerFlag.h" },
				{ "None.Name", "ESSPlayerFlag::None" },
				{ "PressingAbilityShiftForWatcher.Name", "ESSPlayerFlag::PressingAbilityShiftForWatcher" },
				{ "PutTrapAimForWatcher.Name", "ESSPlayerFlag::PutTrapAimForWatcher" },
				{ "ThrowWeaponAimForWatcher.Name", "ESSPlayerFlag::ThrowWeaponAimForWatcher" },
				{ "UsingAbility1.Name", "ESSPlayerFlag::UsingAbility1" },
				{ "UsingAbility2.Name", "ESSPlayerFlag::UsingAbility2" },
				{ "UsingAbility3.Name", "ESSPlayerFlag::UsingAbility3" },
				{ "ViewWholeMapForWatcher.Name", "ESSPlayerFlag::ViewWholeMapForWatcher" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSPlayerFlag",
				"ESSPlayerFlag",
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
