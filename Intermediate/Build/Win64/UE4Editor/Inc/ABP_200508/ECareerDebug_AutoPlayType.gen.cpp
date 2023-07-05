// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDebug_AutoPlayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDebug_AutoPlayType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDebug_AutoPlayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDebug_AutoPlayType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDebug_AutoPlayType>()
	{
		return ECareerDebug_AutoPlayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDebug_AutoPlayType(ECareerDebug_AutoPlayType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDebug_AutoPlayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType_Hash() { return 1201549498U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDebug_AutoPlayType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDebug_AutoPlayType::None", (int64)ECareerDebug_AutoPlayType::None },
				{ "ECareerDebug_AutoPlayType::Random", (int64)ECareerDebug_AutoPlayType::Random },
				{ "ECareerDebug_AutoPlayType::DataDriven_All", (int64)ECareerDebug_AutoPlayType::DataDriven_All },
				{ "ECareerDebug_AutoPlayType::DataDriven_Range", (int64)ECareerDebug_AutoPlayType::DataDriven_Range },
				{ "ECareerDebug_AutoPlayType::DataDriven_Individual", (int64)ECareerDebug_AutoPlayType::DataDriven_Individual },
				{ "ECareerDebug_AutoPlayType::ECareerDebug_MAX", (int64)ECareerDebug_AutoPlayType::ECareerDebug_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DataDriven_All.Name", "ECareerDebug_AutoPlayType::DataDriven_All" },
				{ "DataDriven_Individual.Name", "ECareerDebug_AutoPlayType::DataDriven_Individual" },
				{ "DataDriven_Range.Name", "ECareerDebug_AutoPlayType::DataDriven_Range" },
				{ "ECareerDebug_MAX.Hidden", "" },
				{ "ECareerDebug_MAX.Name", "ECareerDebug_AutoPlayType::ECareerDebug_MAX" },
				{ "ModuleRelativePath", "Public/ECareerDebug_AutoPlayType.h" },
				{ "None.Name", "ECareerDebug_AutoPlayType::None" },
				{ "Random.Name", "ECareerDebug_AutoPlayType::Random" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDebug_AutoPlayType",
				"ECareerDebug_AutoPlayType",
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
