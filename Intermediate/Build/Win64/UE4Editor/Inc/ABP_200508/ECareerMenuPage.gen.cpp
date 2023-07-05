// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMenuPage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMenuPage() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuPage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMenuPage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMenuPage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMenuPage"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMenuPage>()
	{
		return ECareerMenuPage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMenuPage(ECareerMenuPage_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMenuPage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMenuPage_Hash() { return 1830578757U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuPage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMenuPage"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMenuPage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMenuPage::None", (int64)ECareerMenuPage::None },
				{ "ECareerMenuPage::MainMenu", (int64)ECareerMenuPage::MainMenu },
				{ "ECareerMenuPage::Training", (int64)ECareerMenuPage::Training },
				{ "ECareerMenuPage::Restaurant", (int64)ECareerMenuPage::Restaurant },
				{ "ECareerMenuPage::Hospital", (int64)ECareerMenuPage::Hospital },
				{ "ECareerMenuPage::Promotion", (int64)ECareerMenuPage::Promotion },
				{ "ECareerMenuPage::OtherAction", (int64)ECareerMenuPage::OtherAction },
				{ "ECareerMenuPage::DarkMatch", (int64)ECareerMenuPage::DarkMatch },
				{ "ECareerMenuPage::DynamiteMatch", (int64)ECareerMenuPage::DynamiteMatch },
				{ "ECareerMenuPage::UseItems", (int64)ECareerMenuPage::UseItems },
				{ "ECareerMenuPage::OtherOptions", (int64)ECareerMenuPage::OtherOptions },
				{ "ECareerMenuPage::debug_event", (int64)ECareerMenuPage::debug_event },
				{ "ECareerMenuPage::debug_money", (int64)ECareerMenuPage::debug_money },
				{ "ECareerMenuPage::debug_slot", (int64)ECareerMenuPage::debug_slot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DarkMatch.Name", "ECareerMenuPage::DarkMatch" },
				{ "debug_event.Name", "ECareerMenuPage::debug_event" },
				{ "debug_money.Name", "ECareerMenuPage::debug_money" },
				{ "debug_slot.Name", "ECareerMenuPage::debug_slot" },
				{ "DynamiteMatch.Name", "ECareerMenuPage::DynamiteMatch" },
				{ "Hospital.Name", "ECareerMenuPage::Hospital" },
				{ "MainMenu.Name", "ECareerMenuPage::MainMenu" },
				{ "ModuleRelativePath", "Public/ECareerMenuPage.h" },
				{ "None.Name", "ECareerMenuPage::None" },
				{ "OtherAction.Name", "ECareerMenuPage::OtherAction" },
				{ "OtherOptions.Name", "ECareerMenuPage::OtherOptions" },
				{ "Promotion.Name", "ECareerMenuPage::Promotion" },
				{ "Restaurant.Name", "ECareerMenuPage::Restaurant" },
				{ "Training.Name", "ECareerMenuPage::Training" },
				{ "UseItems.Name", "ECareerMenuPage::UseItems" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMenuPage",
				"ECareerMenuPage",
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
