// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSGuardBreakerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSGuardBreakerType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSGuardBreakerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSGuardBreakerType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSGuardBreakerType>()
	{
		return ESSGuardBreakerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSGuardBreakerType(ESSGuardBreakerType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSGuardBreakerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType_Hash() { return 455032698U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSGuardBreakerType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSGuardBreakerType::Strike1", (int64)ESSGuardBreakerType::Strike1 },
				{ "ESSGuardBreakerType::Strike2", (int64)ESSGuardBreakerType::Strike2 },
				{ "ESSGuardBreakerType::Strike3", (int64)ESSGuardBreakerType::Strike3 },
				{ "ESSGuardBreakerType::HighFly1", (int64)ESSGuardBreakerType::HighFly1 },
				{ "ESSGuardBreakerType::HighFly2", (int64)ESSGuardBreakerType::HighFly2 },
				{ "ESSGuardBreakerType::HighFly3", (int64)ESSGuardBreakerType::HighFly3 },
				{ "ESSGuardBreakerType::Weapon1", (int64)ESSGuardBreakerType::Weapon1 },
				{ "ESSGuardBreakerType::Weapon2", (int64)ESSGuardBreakerType::Weapon2 },
				{ "ESSGuardBreakerType::Weapon3", (int64)ESSGuardBreakerType::Weapon3 },
				{ "ESSGuardBreakerType::IgnoreGuard", (int64)ESSGuardBreakerType::IgnoreGuard },
				{ "ESSGuardBreakerType::Default", (int64)ESSGuardBreakerType::Default },
				{ "ESSGuardBreakerType::ESSGuardBreakerType_MAX", (int64)ESSGuardBreakerType::ESSGuardBreakerType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESSGuardBreakerType::Default" },
				{ "ESSGuardBreakerType_MAX.Name", "ESSGuardBreakerType::ESSGuardBreakerType_MAX" },
				{ "HighFly1.Name", "ESSGuardBreakerType::HighFly1" },
				{ "HighFly2.Name", "ESSGuardBreakerType::HighFly2" },
				{ "HighFly3.Name", "ESSGuardBreakerType::HighFly3" },
				{ "IgnoreGuard.Name", "ESSGuardBreakerType::IgnoreGuard" },
				{ "ModuleRelativePath", "Public/ESSGuardBreakerType.h" },
				{ "Strike1.Name", "ESSGuardBreakerType::Strike1" },
				{ "Strike2.Name", "ESSGuardBreakerType::Strike2" },
				{ "Strike3.Name", "ESSGuardBreakerType::Strike3" },
				{ "Weapon1.Name", "ESSGuardBreakerType::Weapon1" },
				{ "Weapon2.Name", "ESSGuardBreakerType::Weapon2" },
				{ "Weapon3.Name", "ESSGuardBreakerType::Weapon3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSGuardBreakerType",
				"ESSGuardBreakerType",
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
