// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDSSR.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDSSR() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDSSR();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDSSR_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDSSR, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDSSR"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDSSR>()
	{
		return ECareerDSSR_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDSSR(ECareerDSSR_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDSSR"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDSSR_Hash() { return 1370580635U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDSSR()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDSSR"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDSSR_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDSSR::DSSR_1920x1080", (int64)ECareerDSSR::DSSR_1920x1080 },
				{ "ECareerDSSR::DSSR_1600x900", (int64)ECareerDSSR::DSSR_1600x900 },
				{ "ECareerDSSR::DSSR_1280x720", (int64)ECareerDSSR::DSSR_1280x720 },
				{ "ECareerDSSR::DSSR_960x540", (int64)ECareerDSSR::DSSR_960x540 },
				{ "ECareerDSSR::DSSR_MAX", (int64)ECareerDSSR::DSSR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DSSR_1280x720.Name", "ECareerDSSR::DSSR_1280x720" },
				{ "DSSR_1600x900.Name", "ECareerDSSR::DSSR_1600x900" },
				{ "DSSR_1920x1080.Name", "ECareerDSSR::DSSR_1920x1080" },
				{ "DSSR_960x540.Name", "ECareerDSSR::DSSR_960x540" },
				{ "DSSR_MAX.Hidden", "" },
				{ "DSSR_MAX.Name", "ECareerDSSR::DSSR_MAX" },
				{ "ModuleRelativePath", "Public/ECareerDSSR.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDSSR",
				"ECareerDSSR",
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
