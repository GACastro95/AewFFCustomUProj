// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerChoicesSelectionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerChoicesSelectionResult() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerChoicesSelectionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerChoicesSelectionResult"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerChoicesSelectionResult>()
	{
		return ECareerChoicesSelectionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerChoicesSelectionResult(ECareerChoicesSelectionResult_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerChoicesSelectionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult_Hash() { return 3411061603U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerChoicesSelectionResult"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerChoicesSelectionResult::NONE", (int64)ECareerChoicesSelectionResult::NONE },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_01", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_01 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_02", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_02 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_03", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_03 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_04", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_04 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_05", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_05 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_06", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_06 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_07", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_07 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_08", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_08 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_09", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_09 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_10", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_10 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_11", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_11 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_12", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_12 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_13", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_13 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_14", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_14 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_15", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_15 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_16", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_16 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_17", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_17 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_18", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_18 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_19", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_19 },
				{ "ECareerChoicesSelectionResult::SELECTION_RESULT_20", (int64)ECareerChoicesSelectionResult::SELECTION_RESULT_20 },
				{ "ECareerChoicesSelectionResult::MAX", (int64)ECareerChoicesSelectionResult::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ECareerChoicesSelectionResult::MAX" },
				{ "ModuleRelativePath", "Public/ECareerChoicesSelectionResult.h" },
				{ "NONE.Name", "ECareerChoicesSelectionResult::NONE" },
				{ "SELECTION_RESULT_01.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_01" },
				{ "SELECTION_RESULT_02.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_02" },
				{ "SELECTION_RESULT_03.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_03" },
				{ "SELECTION_RESULT_04.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_04" },
				{ "SELECTION_RESULT_05.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_05" },
				{ "SELECTION_RESULT_06.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_06" },
				{ "SELECTION_RESULT_07.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_07" },
				{ "SELECTION_RESULT_08.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_08" },
				{ "SELECTION_RESULT_09.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_09" },
				{ "SELECTION_RESULT_10.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_10" },
				{ "SELECTION_RESULT_11.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_11" },
				{ "SELECTION_RESULT_12.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_12" },
				{ "SELECTION_RESULT_13.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_13" },
				{ "SELECTION_RESULT_14.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_14" },
				{ "SELECTION_RESULT_15.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_15" },
				{ "SELECTION_RESULT_16.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_16" },
				{ "SELECTION_RESULT_17.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_17" },
				{ "SELECTION_RESULT_18.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_18" },
				{ "SELECTION_RESULT_19.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_19" },
				{ "SELECTION_RESULT_20.Name", "ECareerChoicesSelectionResult::SELECTION_RESULT_20" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerChoicesSelectionResult",
				"ECareerChoicesSelectionResult",
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
