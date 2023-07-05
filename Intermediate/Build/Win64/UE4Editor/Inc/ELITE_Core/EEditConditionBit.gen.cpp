// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EEditConditionBit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEditConditionBit() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EEditConditionBit();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* EEditConditionBit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_EEditConditionBit, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EEditConditionBit"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<EEditConditionBit>()
	{
		return EEditConditionBit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditConditionBit(EEditConditionBit_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("EEditConditionBit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_EEditConditionBit_Hash() { return 2195982890U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_EEditConditionBit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditConditionBit"), 0, Get_Z_Construct_UEnum_ELITE_Core_EEditConditionBit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditConditionBit::PEEK_ADDED_DEFAULT", (int64)EEditConditionBit::PEEK_ADDED_DEFAULT },
				{ "EEditConditionBit::BaseBody", (int64)EEditConditionBit::BaseBody },
				{ "EEditConditionBit::Ring", (int64)EEditConditionBit::Ring },
				{ "EEditConditionBit::Entrance", (int64)EEditConditionBit::Entrance },
				{ "EEditConditionBit::Plain", (int64)EEditConditionBit::Plain },
				{ "EEditConditionBit::Match", (int64)EEditConditionBit::Match },
				{ "EEditConditionBit::EEditConditionBit_MAX", (int64)EEditConditionBit::EEditConditionBit_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BaseBody.Name", "EEditConditionBit::BaseBody" },
				{ "BlueprintType", "true" },
				{ "EEditConditionBit_MAX.Name", "EEditConditionBit::EEditConditionBit_MAX" },
				{ "Entrance.Name", "EEditConditionBit::Entrance" },
				{ "Match.Name", "EEditConditionBit::Match" },
				{ "ModuleRelativePath", "Public/EEditConditionBit.h" },
				{ "PEEK_ADDED_DEFAULT.Name", "EEditConditionBit::PEEK_ADDED_DEFAULT" },
				{ "Plain.Name", "EEditConditionBit::Plain" },
				{ "Ring.Name", "EEditConditionBit::Ring" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"EEditConditionBit",
				"EEditConditionBit",
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
