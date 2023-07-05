// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSItemBoxType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSItemBoxType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSItemBoxType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSItemBoxType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSItemBoxType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSItemBoxType>()
	{
		return ESSItemBoxType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSItemBoxType(ESSItemBoxType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSItemBoxType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSItemBoxType_Hash() { return 860153278U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSItemBoxType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSItemBoxType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSItemBoxType::None", (int64)ESSItemBoxType::None },
				{ "ESSItemBoxType::ItemBoxRound1", (int64)ESSItemBoxType::ItemBoxRound1 },
				{ "ESSItemBoxType::ItemBoxRound2", (int64)ESSItemBoxType::ItemBoxRound2 },
				{ "ESSItemBoxType::ItemBoxRound3", (int64)ESSItemBoxType::ItemBoxRound3 },
				{ "ESSItemBoxType::ItemBoxRound4", (int64)ESSItemBoxType::ItemBoxRound4 },
				{ "ESSItemBoxType::ItemBoxRound5", (int64)ESSItemBoxType::ItemBoxRound5 },
				{ "ESSItemBoxType::ItemBoxRound6", (int64)ESSItemBoxType::ItemBoxRound6 },
				{ "ESSItemBoxType::AbilityItemBox", (int64)ESSItemBoxType::AbilityItemBox },
				{ "ESSItemBoxType::TreasureBox1", (int64)ESSItemBoxType::TreasureBox1 },
				{ "ESSItemBoxType::TreasureBox2", (int64)ESSItemBoxType::TreasureBox2 },
				{ "ESSItemBoxType::TreasureBox3", (int64)ESSItemBoxType::TreasureBox3 },
				{ "ESSItemBoxType::TreasureBoxEpic1", (int64)ESSItemBoxType::TreasureBoxEpic1 },
				{ "ESSItemBoxType::TreasureBoxEpic2", (int64)ESSItemBoxType::TreasureBoxEpic2 },
				{ "ESSItemBoxType::TreasureBoxEpic3", (int64)ESSItemBoxType::TreasureBoxEpic3 },
				{ "ESSItemBoxType::TreasureBoxLegendary", (int64)ESSItemBoxType::TreasureBoxLegendary },
				{ "ESSItemBoxType::CarrotTreasureBox", (int64)ESSItemBoxType::CarrotTreasureBox },
				{ "ESSItemBoxType::Vending", (int64)ESSItemBoxType::Vending },
				{ "ESSItemBoxType::SlotMachineCommon", (int64)ESSItemBoxType::SlotMachineCommon },
				{ "ESSItemBoxType::SlotMachineUnCommon", (int64)ESSItemBoxType::SlotMachineUnCommon },
				{ "ESSItemBoxType::SlotMachineRare", (int64)ESSItemBoxType::SlotMachineRare },
				{ "ESSItemBoxType::SlotMachineEpic", (int64)ESSItemBoxType::SlotMachineEpic },
				{ "ESSItemBoxType::SlotMachineLegendary", (int64)ESSItemBoxType::SlotMachineLegendary },
				{ "ESSItemBoxType::Max", (int64)ESSItemBoxType::Max },
				{ "ESSItemBoxType::ItemBoxBegin", (int64)ESSItemBoxType::ItemBoxBegin },
				{ "ESSItemBoxType::ItemBoxEnd", (int64)ESSItemBoxType::ItemBoxEnd },
				{ "ESSItemBoxType::TreasureBoxBegin", (int64)ESSItemBoxType::TreasureBoxBegin },
				{ "ESSItemBoxType::TreasureBoxEnd", (int64)ESSItemBoxType::TreasureBoxEnd },
				{ "ESSItemBoxType::VendingBegin", (int64)ESSItemBoxType::VendingBegin },
				{ "ESSItemBoxType::VendingEnd", (int64)ESSItemBoxType::VendingEnd },
				{ "ESSItemBoxType::SlotMachineBegin", (int64)ESSItemBoxType::SlotMachineBegin },
				{ "ESSItemBoxType::SlotMachineEnd", (int64)ESSItemBoxType::SlotMachineEnd },
				{ "ESSItemBoxType::Common", (int64)ESSItemBoxType::Common },
				{ "ESSItemBoxType::UnCommon", (int64)ESSItemBoxType::UnCommon },
				{ "ESSItemBoxType::Rare", (int64)ESSItemBoxType::Rare },
				{ "ESSItemBoxType::Epic", (int64)ESSItemBoxType::Epic },
				{ "ESSItemBoxType::Legendary", (int64)ESSItemBoxType::Legendary },
				{ "ESSItemBoxType::TreasureCommon", (int64)ESSItemBoxType::TreasureCommon },
				{ "ESSItemBoxType::TreasureUnCommon", (int64)ESSItemBoxType::TreasureUnCommon },
				{ "ESSItemBoxType::TreasureRare", (int64)ESSItemBoxType::TreasureRare },
				{ "ESSItemBoxType::TreasureEpic", (int64)ESSItemBoxType::TreasureEpic },
				{ "ESSItemBoxType::TreasureLegendary", (int64)ESSItemBoxType::TreasureLegendary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbilityItemBox.Name", "ESSItemBoxType::AbilityItemBox" },
				{ "BlueprintType", "true" },
				{ "CarrotTreasureBox.Name", "ESSItemBoxType::CarrotTreasureBox" },
				{ "Common.Name", "ESSItemBoxType::Common" },
				{ "Epic.Name", "ESSItemBoxType::Epic" },
				{ "ItemBoxBegin.Name", "ESSItemBoxType::ItemBoxBegin" },
				{ "ItemBoxEnd.Name", "ESSItemBoxType::ItemBoxEnd" },
				{ "ItemBoxRound1.Name", "ESSItemBoxType::ItemBoxRound1" },
				{ "ItemBoxRound2.Name", "ESSItemBoxType::ItemBoxRound2" },
				{ "ItemBoxRound3.Name", "ESSItemBoxType::ItemBoxRound3" },
				{ "ItemBoxRound4.Name", "ESSItemBoxType::ItemBoxRound4" },
				{ "ItemBoxRound5.Name", "ESSItemBoxType::ItemBoxRound5" },
				{ "ItemBoxRound6.Name", "ESSItemBoxType::ItemBoxRound6" },
				{ "Legendary.Name", "ESSItemBoxType::Legendary" },
				{ "Max.Name", "ESSItemBoxType::Max" },
				{ "ModuleRelativePath", "Public/ESSItemBoxType.h" },
				{ "None.Name", "ESSItemBoxType::None" },
				{ "Rare.Name", "ESSItemBoxType::Rare" },
				{ "SlotMachineBegin.Name", "ESSItemBoxType::SlotMachineBegin" },
				{ "SlotMachineCommon.Name", "ESSItemBoxType::SlotMachineCommon" },
				{ "SlotMachineEnd.Name", "ESSItemBoxType::SlotMachineEnd" },
				{ "SlotMachineEpic.Name", "ESSItemBoxType::SlotMachineEpic" },
				{ "SlotMachineLegendary.Name", "ESSItemBoxType::SlotMachineLegendary" },
				{ "SlotMachineRare.Name", "ESSItemBoxType::SlotMachineRare" },
				{ "SlotMachineUnCommon.Name", "ESSItemBoxType::SlotMachineUnCommon" },
				{ "TreasureBox1.Name", "ESSItemBoxType::TreasureBox1" },
				{ "TreasureBox2.Name", "ESSItemBoxType::TreasureBox2" },
				{ "TreasureBox3.Name", "ESSItemBoxType::TreasureBox3" },
				{ "TreasureBoxBegin.Name", "ESSItemBoxType::TreasureBoxBegin" },
				{ "TreasureBoxEnd.Name", "ESSItemBoxType::TreasureBoxEnd" },
				{ "TreasureBoxEpic1.Name", "ESSItemBoxType::TreasureBoxEpic1" },
				{ "TreasureBoxEpic2.Name", "ESSItemBoxType::TreasureBoxEpic2" },
				{ "TreasureBoxEpic3.Name", "ESSItemBoxType::TreasureBoxEpic3" },
				{ "TreasureBoxLegendary.Name", "ESSItemBoxType::TreasureBoxLegendary" },
				{ "TreasureCommon.Name", "ESSItemBoxType::TreasureCommon" },
				{ "TreasureEpic.Name", "ESSItemBoxType::TreasureEpic" },
				{ "TreasureLegendary.Name", "ESSItemBoxType::TreasureLegendary" },
				{ "TreasureRare.Name", "ESSItemBoxType::TreasureRare" },
				{ "TreasureUnCommon.Name", "ESSItemBoxType::TreasureUnCommon" },
				{ "UnCommon.Name", "ESSItemBoxType::UnCommon" },
				{ "Vending.Name", "ESSItemBoxType::Vending" },
				{ "VendingBegin.Name", "ESSItemBoxType::VendingBegin" },
				{ "VendingEnd.Name", "ESSItemBoxType::VendingEnd" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSItemBoxType",
				"ESSItemBoxType",
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
