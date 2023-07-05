// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAttackType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAttackType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAttackType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAttackType>()
	{
		return ESSAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAttackType(ESSAttackType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAttackType_Hash() { return 2894711850U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAttackType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAttackType::None", (int64)ESSAttackType::None },
				{ "ESSAttackType::Strike", (int64)ESSAttackType::Strike },
				{ "ESSAttackType::Grapple", (int64)ESSAttackType::Grapple },
				{ "ESSAttackType::Storm", (int64)ESSAttackType::Storm },
				{ "ESSAttackType::Vehicle", (int64)ESSAttackType::Vehicle },
				{ "ESSAttackType::Pushpin", (int64)ESSAttackType::Pushpin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Grapple.Name", "ESSAttackType::Grapple" },
				{ "ModuleRelativePath", "Public/ESSAttackType.h" },
				{ "None.Name", "ESSAttackType::None" },
				{ "Pushpin.Name", "ESSAttackType::Pushpin" },
				{ "Storm.Name", "ESSAttackType::Storm" },
				{ "Strike.Name", "ESSAttackType::Strike" },
				{ "Vehicle.Name", "ESSAttackType::Vehicle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAttackType",
				"ESSAttackType",
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
