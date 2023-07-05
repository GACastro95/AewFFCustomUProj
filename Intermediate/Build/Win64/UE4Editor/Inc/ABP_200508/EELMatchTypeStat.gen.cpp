// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELMatchTypeStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchTypeStat() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMatchTypeStat();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELMatchTypeStat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELMatchTypeStat, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELMatchTypeStat"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELMatchTypeStat>()
	{
		return EELMatchTypeStat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchTypeStat(EELMatchTypeStat_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELMatchTypeStat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELMatchTypeStat_Hash() { return 4158118752U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELMatchTypeStat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchTypeStat"), 0, Get_Z_Construct_UEnum_ABP_200508_EELMatchTypeStat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchTypeStat::MatchTime_Min", (int64)EELMatchTypeStat::MatchTime_Min },
				{ "EELMatchTypeStat::MatchTime_Max", (int64)EELMatchTypeStat::MatchTime_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MatchTime_Max.Name", "EELMatchTypeStat::MatchTime_Max" },
				{ "MatchTime_Min.Name", "EELMatchTypeStat::MatchTime_Min" },
				{ "ModuleRelativePath", "Public/EELMatchTypeStat.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELMatchTypeStat",
				"EELMatchTypeStat",
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
