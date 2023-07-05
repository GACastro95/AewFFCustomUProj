// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELMatchModeStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchModeStat() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMatchModeStat();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELMatchModeStat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELMatchModeStat, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELMatchModeStat"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELMatchModeStat>()
	{
		return EELMatchModeStat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchModeStat(EELMatchModeStat_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELMatchModeStat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELMatchModeStat_Hash() { return 567932402U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELMatchModeStat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchModeStat"), 0, Get_Z_Construct_UEnum_ABP_200508_EELMatchModeStat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchModeStat::Total_Score", (int64)EELMatchModeStat::Total_Score },
				{ "EELMatchModeStat::Total_PlayTime", (int64)EELMatchModeStat::Total_PlayTime },
				{ "EELMatchModeStat::Total_MAX", (int64)EELMatchModeStat::Total_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EELMatchModeStat.h" },
				{ "Total_MAX.Hidden", "" },
				{ "Total_MAX.Name", "EELMatchModeStat::Total_MAX" },
				{ "Total_PlayTime.Name", "EELMatchModeStat::Total_PlayTime" },
				{ "Total_Score.Name", "EELMatchModeStat::Total_Score" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELMatchModeStat",
				"EELMatchModeStat",
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
