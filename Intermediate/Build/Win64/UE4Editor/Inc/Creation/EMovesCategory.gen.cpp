// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesCategory() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesCategory();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesCategory, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesCategory"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesCategory>()
	{
		return EMovesCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesCategory(EMovesCategory_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesCategory_Hash() { return 1306571288U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesCategory"), 0, Get_Z_Construct_UEnum_Creation_EMovesCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesCategory::MainCategory_000", (int64)EMovesCategory::MainCategory_000 },
				{ "EMovesCategory::MainCategory_001", (int64)EMovesCategory::MainCategory_001 },
				{ "EMovesCategory::MainCategory_002", (int64)EMovesCategory::MainCategory_002 },
				{ "EMovesCategory::MainCategory_003", (int64)EMovesCategory::MainCategory_003 },
				{ "EMovesCategory::MainCategory_004", (int64)EMovesCategory::MainCategory_004 },
				{ "EMovesCategory::MainCategory_005", (int64)EMovesCategory::MainCategory_005 },
				{ "EMovesCategory::MainCategory_006", (int64)EMovesCategory::MainCategory_006 },
				{ "EMovesCategory::MainCategory_007", (int64)EMovesCategory::MainCategory_007 },
				{ "EMovesCategory::MainCategory_008", (int64)EMovesCategory::MainCategory_008 },
				{ "EMovesCategory::MainCategory_009", (int64)EMovesCategory::MainCategory_009 },
				{ "EMovesCategory::MainCategory_010", (int64)EMovesCategory::MainCategory_010 },
				{ "EMovesCategory::MainCategory_011", (int64)EMovesCategory::MainCategory_011 },
				{ "EMovesCategory::MainCategory_012", (int64)EMovesCategory::MainCategory_012 },
				{ "EMovesCategory::MainCategory_013", (int64)EMovesCategory::MainCategory_013 },
				{ "EMovesCategory::MainCategory_014", (int64)EMovesCategory::MainCategory_014 },
				{ "EMovesCategory::MainCategory_015", (int64)EMovesCategory::MainCategory_015 },
				{ "EMovesCategory::MainCategory_016", (int64)EMovesCategory::MainCategory_016 },
				{ "EMovesCategory::MainCategory_017", (int64)EMovesCategory::MainCategory_017 },
				{ "EMovesCategory::MainCategory_018", (int64)EMovesCategory::MainCategory_018 },
				{ "EMovesCategory::MainCategory_019", (int64)EMovesCategory::MainCategory_019 },
				{ "EMovesCategory::MainCategory_020", (int64)EMovesCategory::MainCategory_020 },
				{ "EMovesCategory::MainCategory_021", (int64)EMovesCategory::MainCategory_021 },
				{ "EMovesCategory::MainCategory_022", (int64)EMovesCategory::MainCategory_022 },
				{ "EMovesCategory::MainCategory_023", (int64)EMovesCategory::MainCategory_023 },
				{ "EMovesCategory::MainCategory_024", (int64)EMovesCategory::MainCategory_024 },
				{ "EMovesCategory::MainCategory_025", (int64)EMovesCategory::MainCategory_025 },
				{ "EMovesCategory::MainCategory_026", (int64)EMovesCategory::MainCategory_026 },
				{ "EMovesCategory::MainCategory_027", (int64)EMovesCategory::MainCategory_027 },
				{ "EMovesCategory::MainCategory_028", (int64)EMovesCategory::MainCategory_028 },
				{ "EMovesCategory::MainCategory_029", (int64)EMovesCategory::MainCategory_029 },
				{ "EMovesCategory::MainCategory_030", (int64)EMovesCategory::MainCategory_030 },
				{ "EMovesCategory::MainCategory_031", (int64)EMovesCategory::MainCategory_031 },
				{ "EMovesCategory::MainCategory_032", (int64)EMovesCategory::MainCategory_032 },
				{ "EMovesCategory::MainCategory_033", (int64)EMovesCategory::MainCategory_033 },
				{ "EMovesCategory::MainCategory_034", (int64)EMovesCategory::MainCategory_034 },
				{ "EMovesCategory::MainCategory_035", (int64)EMovesCategory::MainCategory_035 },
				{ "EMovesCategory::MainCategory_036", (int64)EMovesCategory::MainCategory_036 },
				{ "EMovesCategory::MainCategory_037", (int64)EMovesCategory::MainCategory_037 },
				{ "EMovesCategory::MainCategory_038", (int64)EMovesCategory::MainCategory_038 },
				{ "EMovesCategory::MainCategory_039", (int64)EMovesCategory::MainCategory_039 },
				{ "EMovesCategory::MainCategory_040", (int64)EMovesCategory::MainCategory_040 },
				{ "EMovesCategory::MainCategory_041", (int64)EMovesCategory::MainCategory_041 },
				{ "EMovesCategory::MainCategory_042", (int64)EMovesCategory::MainCategory_042 },
				{ "EMovesCategory::MainCategory_043", (int64)EMovesCategory::MainCategory_043 },
				{ "EMovesCategory::MainCategory_044", (int64)EMovesCategory::MainCategory_044 },
				{ "EMovesCategory::MainCategory_045", (int64)EMovesCategory::MainCategory_045 },
				{ "EMovesCategory::MainCategory_046", (int64)EMovesCategory::MainCategory_046 },
				{ "EMovesCategory::MainCategory_047", (int64)EMovesCategory::MainCategory_047 },
				{ "EMovesCategory::MainCategory_048", (int64)EMovesCategory::MainCategory_048 },
				{ "EMovesCategory::MainCategory_049", (int64)EMovesCategory::MainCategory_049 },
				{ "EMovesCategory::MainCategory_050", (int64)EMovesCategory::MainCategory_050 },
				{ "EMovesCategory::MainCategory_MAX", (int64)EMovesCategory::MainCategory_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MainCategory_000.Name", "EMovesCategory::MainCategory_000" },
				{ "MainCategory_001.Name", "EMovesCategory::MainCategory_001" },
				{ "MainCategory_002.Name", "EMovesCategory::MainCategory_002" },
				{ "MainCategory_003.Name", "EMovesCategory::MainCategory_003" },
				{ "MainCategory_004.Name", "EMovesCategory::MainCategory_004" },
				{ "MainCategory_005.Name", "EMovesCategory::MainCategory_005" },
				{ "MainCategory_006.Name", "EMovesCategory::MainCategory_006" },
				{ "MainCategory_007.Name", "EMovesCategory::MainCategory_007" },
				{ "MainCategory_008.Name", "EMovesCategory::MainCategory_008" },
				{ "MainCategory_009.Name", "EMovesCategory::MainCategory_009" },
				{ "MainCategory_010.Name", "EMovesCategory::MainCategory_010" },
				{ "MainCategory_011.Name", "EMovesCategory::MainCategory_011" },
				{ "MainCategory_012.Name", "EMovesCategory::MainCategory_012" },
				{ "MainCategory_013.Name", "EMovesCategory::MainCategory_013" },
				{ "MainCategory_014.Name", "EMovesCategory::MainCategory_014" },
				{ "MainCategory_015.Name", "EMovesCategory::MainCategory_015" },
				{ "MainCategory_016.Name", "EMovesCategory::MainCategory_016" },
				{ "MainCategory_017.Name", "EMovesCategory::MainCategory_017" },
				{ "MainCategory_018.Name", "EMovesCategory::MainCategory_018" },
				{ "MainCategory_019.Name", "EMovesCategory::MainCategory_019" },
				{ "MainCategory_020.Name", "EMovesCategory::MainCategory_020" },
				{ "MainCategory_021.Name", "EMovesCategory::MainCategory_021" },
				{ "MainCategory_022.Name", "EMovesCategory::MainCategory_022" },
				{ "MainCategory_023.Name", "EMovesCategory::MainCategory_023" },
				{ "MainCategory_024.Name", "EMovesCategory::MainCategory_024" },
				{ "MainCategory_025.Name", "EMovesCategory::MainCategory_025" },
				{ "MainCategory_026.Name", "EMovesCategory::MainCategory_026" },
				{ "MainCategory_027.Name", "EMovesCategory::MainCategory_027" },
				{ "MainCategory_028.Name", "EMovesCategory::MainCategory_028" },
				{ "MainCategory_029.Name", "EMovesCategory::MainCategory_029" },
				{ "MainCategory_030.Name", "EMovesCategory::MainCategory_030" },
				{ "MainCategory_031.Name", "EMovesCategory::MainCategory_031" },
				{ "MainCategory_032.Name", "EMovesCategory::MainCategory_032" },
				{ "MainCategory_033.Name", "EMovesCategory::MainCategory_033" },
				{ "MainCategory_034.Name", "EMovesCategory::MainCategory_034" },
				{ "MainCategory_035.Name", "EMovesCategory::MainCategory_035" },
				{ "MainCategory_036.Name", "EMovesCategory::MainCategory_036" },
				{ "MainCategory_037.Name", "EMovesCategory::MainCategory_037" },
				{ "MainCategory_038.Name", "EMovesCategory::MainCategory_038" },
				{ "MainCategory_039.Name", "EMovesCategory::MainCategory_039" },
				{ "MainCategory_040.Name", "EMovesCategory::MainCategory_040" },
				{ "MainCategory_041.Name", "EMovesCategory::MainCategory_041" },
				{ "MainCategory_042.Name", "EMovesCategory::MainCategory_042" },
				{ "MainCategory_043.Name", "EMovesCategory::MainCategory_043" },
				{ "MainCategory_044.Name", "EMovesCategory::MainCategory_044" },
				{ "MainCategory_045.Name", "EMovesCategory::MainCategory_045" },
				{ "MainCategory_046.Name", "EMovesCategory::MainCategory_046" },
				{ "MainCategory_047.Name", "EMovesCategory::MainCategory_047" },
				{ "MainCategory_048.Name", "EMovesCategory::MainCategory_048" },
				{ "MainCategory_049.Name", "EMovesCategory::MainCategory_049" },
				{ "MainCategory_050.Name", "EMovesCategory::MainCategory_050" },
				{ "MainCategory_MAX.Hidden", "" },
				{ "MainCategory_MAX.Name", "EMovesCategory::MainCategory_MAX" },
				{ "ModuleRelativePath", "Public/EMovesCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesCategory",
				"EMovesCategory",
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
