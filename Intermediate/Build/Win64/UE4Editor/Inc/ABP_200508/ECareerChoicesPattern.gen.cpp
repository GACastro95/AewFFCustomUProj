// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerChoicesPattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerChoicesPattern() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerChoicesPattern_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerChoicesPattern"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerChoicesPattern>()
	{
		return ECareerChoicesPattern_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerChoicesPattern(ECareerChoicesPattern_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerChoicesPattern"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern_Hash() { return 843421865U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerChoicesPattern"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerChoicesPattern::SELECT_A", (int64)ECareerChoicesPattern::SELECT_A },
				{ "ECareerChoicesPattern::SELECT_B", (int64)ECareerChoicesPattern::SELECT_B },
				{ "ECareerChoicesPattern::SELECT_C", (int64)ECareerChoicesPattern::SELECT_C },
				{ "ECareerChoicesPattern::SELECT_D", (int64)ECareerChoicesPattern::SELECT_D },
				{ "ECareerChoicesPattern::SELECT_MAX", (int64)ECareerChoicesPattern::SELECT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECareerChoicesPattern.h" },
				{ "SELECT_A.Name", "ECareerChoicesPattern::SELECT_A" },
				{ "SELECT_B.Name", "ECareerChoicesPattern::SELECT_B" },
				{ "SELECT_C.Name", "ECareerChoicesPattern::SELECT_C" },
				{ "SELECT_D.Name", "ECareerChoicesPattern::SELECT_D" },
				{ "SELECT_MAX.Hidden", "" },
				{ "SELECT_MAX.Name", "ECareerChoicesPattern::SELECT_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerChoicesPattern",
				"ECareerChoicesPattern",
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
