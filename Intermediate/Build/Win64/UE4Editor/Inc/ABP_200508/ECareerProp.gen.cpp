// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerProp() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerProp();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerProp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerProp, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerProp"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerProp>()
	{
		return ECareerProp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerProp(ECareerProp_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerProp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerProp_Hash() { return 1770433411U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerProp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerProp"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerProp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerProp::None", (int64)ECareerProp::None },
				{ "ECareerProp::MIC", (int64)ECareerProp::MIC },
				{ "ECareerProp::Dish", (int64)ECareerProp::Dish },
				{ "ECareerProp::PaperBat", (int64)ECareerProp::PaperBat },
				{ "ECareerProp::Cup", (int64)ECareerProp::Cup },
				{ "ECareerProp::SkateBoard", (int64)ECareerProp::SkateBoard },
				{ "ECareerProp::Dumbbell", (int64)ECareerProp::Dumbbell },
				{ "ECareerProp::Barbell", (int64)ECareerProp::Barbell },
				{ "ECareerProp::Clipboard", (int64)ECareerProp::Clipboard },
				{ "ECareerProp::Smartphone", (int64)ECareerProp::Smartphone },
				{ "ECareerProp::SmartphoneR", (int64)ECareerProp::SmartphoneR },
				{ "ECareerProp::AEW_WORLD_BELT", (int64)ECareerProp::AEW_WORLD_BELT },
				{ "ECareerProp::AEW_WOMENS_WORLD_BELT", (int64)ECareerProp::AEW_WOMENS_WORLD_BELT },
				{ "ECareerProp::AEW_TNT_BELT", (int64)ECareerProp::AEW_TNT_BELT },
				{ "ECareerProp::AEW_TAG_BELT", (int64)ECareerProp::AEW_TAG_BELT },
				{ "ECareerProp::AEW_FTW_BELT", (int64)ECareerProp::AEW_FTW_BELT },
				{ "ECareerProp::EcoBag", (int64)ECareerProp::EcoBag },
				{ "ECareerProp::MicR", (int64)ECareerProp::MicR },
				{ "ECareerProp::AEW_TBS_BELT", (int64)ECareerProp::AEW_TBS_BELT },
				{ "ECareerProp::SmartphoneR_Talking", (int64)ECareerProp::SmartphoneR_Talking },
				{ "ECareerProp::MAX", (int64)ECareerProp::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEW_FTW_BELT.Name", "ECareerProp::AEW_FTW_BELT" },
				{ "AEW_TAG_BELT.Name", "ECareerProp::AEW_TAG_BELT" },
				{ "AEW_TBS_BELT.Name", "ECareerProp::AEW_TBS_BELT" },
				{ "AEW_TNT_BELT.Name", "ECareerProp::AEW_TNT_BELT" },
				{ "AEW_WOMENS_WORLD_BELT.Name", "ECareerProp::AEW_WOMENS_WORLD_BELT" },
				{ "AEW_WORLD_BELT.Name", "ECareerProp::AEW_WORLD_BELT" },
				{ "Barbell.Name", "ECareerProp::Barbell" },
				{ "BlueprintType", "true" },
				{ "Clipboard.Name", "ECareerProp::Clipboard" },
				{ "Cup.Name", "ECareerProp::Cup" },
				{ "Dish.Name", "ECareerProp::Dish" },
				{ "Dumbbell.Name", "ECareerProp::Dumbbell" },
				{ "EcoBag.Name", "ECareerProp::EcoBag" },
				{ "MAX.Name", "ECareerProp::MAX" },
				{ "MIC.Name", "ECareerProp::MIC" },
				{ "MicR.Name", "ECareerProp::MicR" },
				{ "ModuleRelativePath", "Public/ECareerProp.h" },
				{ "None.Name", "ECareerProp::None" },
				{ "PaperBat.Name", "ECareerProp::PaperBat" },
				{ "SkateBoard.Name", "ECareerProp::SkateBoard" },
				{ "Smartphone.Name", "ECareerProp::Smartphone" },
				{ "SmartphoneR.Name", "ECareerProp::SmartphoneR" },
				{ "SmartphoneR_Talking.Name", "ECareerProp::SmartphoneR_Talking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerProp",
				"ECareerProp",
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
