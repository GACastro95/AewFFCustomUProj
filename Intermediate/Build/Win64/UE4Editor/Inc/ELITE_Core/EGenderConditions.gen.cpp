// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EGenderConditions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGenderConditions() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGenderConditions();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* EGenderConditions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_EGenderConditions, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EGenderConditions"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<EGenderConditions>()
	{
		return EGenderConditions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenderConditions(EGenderConditions_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("EGenderConditions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_EGenderConditions_Hash() { return 1186852823U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_EGenderConditions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenderConditions"), 0, Get_Z_Construct_UEnum_ELITE_Core_EGenderConditions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenderConditions::Disable", (int64)EGenderConditions::Disable },
				{ "EGenderConditions::MaleOnly", (int64)EGenderConditions::MaleOnly },
				{ "EGenderConditions::FemaleOnly", (int64)EGenderConditions::FemaleOnly },
				{ "EGenderConditions::Any", (int64)EGenderConditions::Any },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Name", "EGenderConditions::Any" },
				{ "BlueprintType", "true" },
				{ "Disable.Name", "EGenderConditions::Disable" },
				{ "FemaleOnly.Name", "EGenderConditions::FemaleOnly" },
				{ "MaleOnly.Name", "EGenderConditions::MaleOnly" },
				{ "ModuleRelativePath", "Public/EGenderConditions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"EGenderConditions",
				"EGenderConditions",
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
