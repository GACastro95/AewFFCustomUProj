// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EAutoPlayFileName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAutoPlayFileName() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAutoPlayFileName();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EAutoPlayFileName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EAutoPlayFileName, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EAutoPlayFileName"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EAutoPlayFileName>()
	{
		return EAutoPlayFileName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoPlayFileName(EAutoPlayFileName_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EAutoPlayFileName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EAutoPlayFileName_Hash() { return 3873690282U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EAutoPlayFileName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoPlayFileName"), 0, Get_Z_Construct_UEnum_ABP_200508_EAutoPlayFileName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoPlayFileName::ExhibitionMenu", (int64)EAutoPlayFileName::ExhibitionMenu },
				{ "EAutoPlayFileName::Win64_Smoketest", (int64)EAutoPlayFileName::Win64_Smoketest },
				{ "EAutoPlayFileName::XB1_X_PS4_5_Smoketest", (int64)EAutoPlayFileName::XB1_X_PS4_5_Smoketest },
				{ "EAutoPlayFileName::Switch_Smoketest", (int64)EAutoPlayFileName::Switch_Smoketest },
				{ "EAutoPlayFileName::Win64_BackstageOptions", (int64)EAutoPlayFileName::Win64_BackstageOptions },
				{ "EAutoPlayFileName::XB1_X_PS4_5_BackstageOptions", (int64)EAutoPlayFileName::XB1_X_PS4_5_BackstageOptions },
				{ "EAutoPlayFileName::Switch_BackstageOptions", (int64)EAutoPlayFileName::Switch_BackstageOptions },
				{ "EAutoPlayFileName::HighestCAW_1st", (int64)EAutoPlayFileName::HighestCAW_1st },
				{ "EAutoPlayFileName::HighestCAW_2nd", (int64)EAutoPlayFileName::HighestCAW_2nd },
				{ "EAutoPlayFileName::HighestCAW_3rd", (int64)EAutoPlayFileName::HighestCAW_3rd },
				{ "EAutoPlayFileName::HighestCAW_4th", (int64)EAutoPlayFileName::HighestCAW_4th },
				{ "EAutoPlayFileName::HighestCAW_1_4", (int64)EAutoPlayFileName::HighestCAW_1_4 },
				{ "EAutoPlayFileName::HighestCAA", (int64)EAutoPlayFileName::HighestCAA },
				{ "EAutoPlayFileName::Mainmenu", (int64)EAutoPlayFileName::Mainmenu },
				{ "EAutoPlayFileName::Challenges", (int64)EAutoPlayFileName::Challenges },
				{ "EAutoPlayFileName::Shop", (int64)EAutoPlayFileName::Shop },
				{ "EAutoPlayFileName::XB1_X_PS4_5_SmoketestLoop", (int64)EAutoPlayFileName::XB1_X_PS4_5_SmoketestLoop },
				{ "EAutoPlayFileName::Win64_SmoketestLoop", (int64)EAutoPlayFileName::Win64_SmoketestLoop },
				{ "EAutoPlayFileName::Switch_SmoketestLoop", (int64)EAutoPlayFileName::Switch_SmoketestLoop },
				{ "EAutoPlayFileName::AutoPlayFileNameMax", (int64)EAutoPlayFileName::AutoPlayFileNameMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoPlayFileNameMax.Name", "EAutoPlayFileName::AutoPlayFileNameMax" },
				{ "BlueprintType", "true" },
				{ "Challenges.Name", "EAutoPlayFileName::Challenges" },
				{ "ExhibitionMenu.Name", "EAutoPlayFileName::ExhibitionMenu" },
				{ "HighestCAA.Name", "EAutoPlayFileName::HighestCAA" },
				{ "HighestCAW_1_4.Name", "EAutoPlayFileName::HighestCAW_1_4" },
				{ "HighestCAW_1st.Name", "EAutoPlayFileName::HighestCAW_1st" },
				{ "HighestCAW_2nd.Name", "EAutoPlayFileName::HighestCAW_2nd" },
				{ "HighestCAW_3rd.Name", "EAutoPlayFileName::HighestCAW_3rd" },
				{ "HighestCAW_4th.Name", "EAutoPlayFileName::HighestCAW_4th" },
				{ "Mainmenu.Name", "EAutoPlayFileName::Mainmenu" },
				{ "ModuleRelativePath", "Public/EAutoPlayFileName.h" },
				{ "Shop.Name", "EAutoPlayFileName::Shop" },
				{ "Switch_BackstageOptions.Name", "EAutoPlayFileName::Switch_BackstageOptions" },
				{ "Switch_Smoketest.Name", "EAutoPlayFileName::Switch_Smoketest" },
				{ "Switch_SmoketestLoop.Name", "EAutoPlayFileName::Switch_SmoketestLoop" },
				{ "Win64_BackstageOptions.Name", "EAutoPlayFileName::Win64_BackstageOptions" },
				{ "Win64_Smoketest.Name", "EAutoPlayFileName::Win64_Smoketest" },
				{ "Win64_SmoketestLoop.Name", "EAutoPlayFileName::Win64_SmoketestLoop" },
				{ "XB1_X_PS4_5_BackstageOptions.Name", "EAutoPlayFileName::XB1_X_PS4_5_BackstageOptions" },
				{ "XB1_X_PS4_5_Smoketest.Name", "EAutoPlayFileName::XB1_X_PS4_5_Smoketest" },
				{ "XB1_X_PS4_5_SmoketestLoop.Name", "EAutoPlayFileName::XB1_X_PS4_5_SmoketestLoop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EAutoPlayFileName",
				"EAutoPlayFileName",
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
