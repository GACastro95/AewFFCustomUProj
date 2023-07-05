// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EAttireCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttireCondition() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireCondition();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* EAttireCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_EAttireCondition, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EAttireCondition"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<EAttireCondition>()
	{
		return EAttireCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttireCondition(EAttireCondition_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("EAttireCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_EAttireCondition_Hash() { return 1283178359U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_EAttireCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttireCondition"), 0, Get_Z_Construct_UEnum_ELITE_Core_EAttireCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttireCondition::Disable", (int64)EAttireCondition::Disable },
				{ "EAttireCondition::ForRing", (int64)EAttireCondition::ForRing },
				{ "EAttireCondition::ForEntrance", (int64)EAttireCondition::ForEntrance },
				{ "EAttireCondition::ForPlain", (int64)EAttireCondition::ForPlain },
				{ "EAttireCondition::ForMatch", (int64)EAttireCondition::ForMatch },
				{ "EAttireCondition::Any", (int64)EAttireCondition::Any },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Name", "EAttireCondition::Any" },
				{ "BlueprintType", "true" },
				{ "Disable.Name", "EAttireCondition::Disable" },
				{ "ForEntrance.Name", "EAttireCondition::ForEntrance" },
				{ "ForMatch.Name", "EAttireCondition::ForMatch" },
				{ "ForPlain.Name", "EAttireCondition::ForPlain" },
				{ "ForRing.Name", "EAttireCondition::ForRing" },
				{ "ModuleRelativePath", "Public/EAttireCondition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"EAttireCondition",
				"EAttireCondition",
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
