// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EScoutWrestlerTemplateOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEScoutWrestlerTemplateOption() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* EScoutWrestlerTemplateOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption, Z_Construct_UPackage__Script_ELITE(), TEXT("EScoutWrestlerTemplateOption"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<EScoutWrestlerTemplateOption>()
	{
		return EScoutWrestlerTemplateOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScoutWrestlerTemplateOption(EScoutWrestlerTemplateOption_StaticEnum, TEXT("/Script/ELITE"), TEXT("EScoutWrestlerTemplateOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption_Hash() { return 2968292942U; }
	UEnum* Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScoutWrestlerTemplateOption"), 0, Get_Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScoutWrestlerTemplateOption::Default", (int64)EScoutWrestlerTemplateOption::Default },
				{ "EScoutWrestlerTemplateOption::Original", (int64)EScoutWrestlerTemplateOption::Original },
				{ "EScoutWrestlerTemplateOption::Attires", (int64)EScoutWrestlerTemplateOption::Attires },
				{ "EScoutWrestlerTemplateOption::Moves", (int64)EScoutWrestlerTemplateOption::Moves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attires.Name", "EScoutWrestlerTemplateOption::Attires" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EScoutWrestlerTemplateOption::Default" },
				{ "ModuleRelativePath", "Public/EScoutWrestlerTemplateOption.h" },
				{ "Moves.Name", "EScoutWrestlerTemplateOption::Moves" },
				{ "Original.Name", "EScoutWrestlerTemplateOption::Original" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"EScoutWrestlerTemplateOption",
				"EScoutWrestlerTemplateOption",
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
