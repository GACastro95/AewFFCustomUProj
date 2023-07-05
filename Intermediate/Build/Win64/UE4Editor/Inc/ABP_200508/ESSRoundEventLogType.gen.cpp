// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSRoundEventLogType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSRoundEventLogType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSRoundEventLogType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSRoundEventLogType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSRoundEventLogType>()
	{
		return ESSRoundEventLogType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSRoundEventLogType(ESSRoundEventLogType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSRoundEventLogType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType_Hash() { return 464280996U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSRoundEventLogType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSRoundEventLogType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSRoundEventLogType::None", (int64)ESSRoundEventLogType::None },
				{ "ESSRoundEventLogType::TreasureBoxCommon", (int64)ESSRoundEventLogType::TreasureBoxCommon },
				{ "ESSRoundEventLogType::TreasureBoxUnCommon", (int64)ESSRoundEventLogType::TreasureBoxUnCommon },
				{ "ESSRoundEventLogType::TreasureBoxRare", (int64)ESSRoundEventLogType::TreasureBoxRare },
				{ "ESSRoundEventLogType::TreasureBoxEpic", (int64)ESSRoundEventLogType::TreasureBoxEpic },
				{ "ESSRoundEventLogType::TreasureBoxLegendary", (int64)ESSRoundEventLogType::TreasureBoxLegendary },
				{ "ESSRoundEventLogType::CarrotTreasureBox", (int64)ESSRoundEventLogType::CarrotTreasureBox },
				{ "ESSRoundEventLogType::Vehicle", (int64)ESSRoundEventLogType::Vehicle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CarrotTreasureBox.Name", "ESSRoundEventLogType::CarrotTreasureBox" },
				{ "ModuleRelativePath", "Public/ESSRoundEventLogType.h" },
				{ "None.Name", "ESSRoundEventLogType::None" },
				{ "TreasureBoxCommon.Name", "ESSRoundEventLogType::TreasureBoxCommon" },
				{ "TreasureBoxEpic.Name", "ESSRoundEventLogType::TreasureBoxEpic" },
				{ "TreasureBoxLegendary.Name", "ESSRoundEventLogType::TreasureBoxLegendary" },
				{ "TreasureBoxRare.Name", "ESSRoundEventLogType::TreasureBoxRare" },
				{ "TreasureBoxUnCommon.Name", "ESSRoundEventLogType::TreasureBoxUnCommon" },
				{ "Vehicle.Name", "ESSRoundEventLogType::Vehicle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSRoundEventLogType",
				"ESSRoundEventLogType",
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
