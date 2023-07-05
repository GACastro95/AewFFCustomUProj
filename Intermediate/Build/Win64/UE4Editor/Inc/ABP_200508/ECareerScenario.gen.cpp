// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerScenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerScenario() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerScenario_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerScenario, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerScenario"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerScenario>()
	{
		return ECareerScenario_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerScenario(ECareerScenario_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerScenario"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerScenario_Hash() { return 2086652163U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerScenario"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerScenario_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerScenario::Prologue", (int64)ECareerScenario::Prologue },
				{ "ECareerScenario::AllOut", (int64)ECareerScenario::AllOut },
				{ "ECareerScenario::FullGear", (int64)ECareerScenario::FullGear },
				{ "ECareerScenario::Revolution", (int64)ECareerScenario::Revolution },
				{ "ECareerScenario::DoubleOrNothing", (int64)ECareerScenario::DoubleOrNothing },
				{ "ECareerScenario::ScenarioEnd", (int64)ECareerScenario::ScenarioEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllOut.Name", "ECareerScenario::AllOut" },
				{ "BlueprintType", "true" },
				{ "DoubleOrNothing.Name", "ECareerScenario::DoubleOrNothing" },
				{ "FullGear.Name", "ECareerScenario::FullGear" },
				{ "ModuleRelativePath", "Public/ECareerScenario.h" },
				{ "Prologue.Name", "ECareerScenario::Prologue" },
				{ "Revolution.Name", "ECareerScenario::Revolution" },
				{ "ScenarioEnd.Name", "ECareerScenario::ScenarioEnd" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerScenario",
				"ECareerScenario",
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
