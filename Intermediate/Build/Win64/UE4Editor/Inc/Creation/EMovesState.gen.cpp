// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesState() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesState();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesState, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesState"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesState>()
	{
		return EMovesState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesState(EMovesState_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesState_Hash() { return 4178894691U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesState"), 0, Get_Z_Construct_UEnum_Creation_EMovesState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesState::State_000", (int64)EMovesState::State_000 },
				{ "EMovesState::State_001", (int64)EMovesState::State_001 },
				{ "EMovesState::State_002", (int64)EMovesState::State_002 },
				{ "EMovesState::State_003", (int64)EMovesState::State_003 },
				{ "EMovesState::State_004", (int64)EMovesState::State_004 },
				{ "EMovesState::State_005", (int64)EMovesState::State_005 },
				{ "EMovesState::State_006", (int64)EMovesState::State_006 },
				{ "EMovesState::State_007", (int64)EMovesState::State_007 },
				{ "EMovesState::State_008", (int64)EMovesState::State_008 },
				{ "EMovesState::State_009", (int64)EMovesState::State_009 },
				{ "EMovesState::State_010", (int64)EMovesState::State_010 },
				{ "EMovesState::State_011", (int64)EMovesState::State_011 },
				{ "EMovesState::State_012", (int64)EMovesState::State_012 },
				{ "EMovesState::State_013", (int64)EMovesState::State_013 },
				{ "EMovesState::State_014", (int64)EMovesState::State_014 },
				{ "EMovesState::State_015", (int64)EMovesState::State_015 },
				{ "EMovesState::State_016", (int64)EMovesState::State_016 },
				{ "EMovesState::State_017", (int64)EMovesState::State_017 },
				{ "EMovesState::State_018", (int64)EMovesState::State_018 },
				{ "EMovesState::State_019", (int64)EMovesState::State_019 },
				{ "EMovesState::State_020", (int64)EMovesState::State_020 },
				{ "EMovesState::State_021", (int64)EMovesState::State_021 },
				{ "EMovesState::State_022", (int64)EMovesState::State_022 },
				{ "EMovesState::State_023", (int64)EMovesState::State_023 },
				{ "EMovesState::State_024", (int64)EMovesState::State_024 },
				{ "EMovesState::State_025", (int64)EMovesState::State_025 },
				{ "EMovesState::State_026", (int64)EMovesState::State_026 },
				{ "EMovesState::State_027", (int64)EMovesState::State_027 },
				{ "EMovesState::State_028", (int64)EMovesState::State_028 },
				{ "EMovesState::State_029", (int64)EMovesState::State_029 },
				{ "EMovesState::State_030", (int64)EMovesState::State_030 },
				{ "EMovesState::State_031", (int64)EMovesState::State_031 },
				{ "EMovesState::State_032", (int64)EMovesState::State_032 },
				{ "EMovesState::State_033", (int64)EMovesState::State_033 },
				{ "EMovesState::State_034", (int64)EMovesState::State_034 },
				{ "EMovesState::State_035", (int64)EMovesState::State_035 },
				{ "EMovesState::State_036", (int64)EMovesState::State_036 },
				{ "EMovesState::State_037", (int64)EMovesState::State_037 },
				{ "EMovesState::State_038", (int64)EMovesState::State_038 },
				{ "EMovesState::State_039", (int64)EMovesState::State_039 },
				{ "EMovesState::State_040", (int64)EMovesState::State_040 },
				{ "EMovesState::State_041", (int64)EMovesState::State_041 },
				{ "EMovesState::State_042", (int64)EMovesState::State_042 },
				{ "EMovesState::State_043", (int64)EMovesState::State_043 },
				{ "EMovesState::State_044", (int64)EMovesState::State_044 },
				{ "EMovesState::State_045", (int64)EMovesState::State_045 },
				{ "EMovesState::State_046", (int64)EMovesState::State_046 },
				{ "EMovesState::State_047", (int64)EMovesState::State_047 },
				{ "EMovesState::State_048", (int64)EMovesState::State_048 },
				{ "EMovesState::State_049", (int64)EMovesState::State_049 },
				{ "EMovesState::State_050", (int64)EMovesState::State_050 },
				{ "EMovesState::State_051", (int64)EMovesState::State_051 },
				{ "EMovesState::State_052", (int64)EMovesState::State_052 },
				{ "EMovesState::State_053", (int64)EMovesState::State_053 },
				{ "EMovesState::State_054", (int64)EMovesState::State_054 },
				{ "EMovesState::State_055", (int64)EMovesState::State_055 },
				{ "EMovesState::State_056", (int64)EMovesState::State_056 },
				{ "EMovesState::State_057", (int64)EMovesState::State_057 },
				{ "EMovesState::State_058", (int64)EMovesState::State_058 },
				{ "EMovesState::State_059", (int64)EMovesState::State_059 },
				{ "EMovesState::State_060", (int64)EMovesState::State_060 },
				{ "EMovesState::State_061", (int64)EMovesState::State_061 },
				{ "EMovesState::State_062", (int64)EMovesState::State_062 },
				{ "EMovesState::State_063", (int64)EMovesState::State_063 },
				{ "EMovesState::State_064", (int64)EMovesState::State_064 },
				{ "EMovesState::State_065", (int64)EMovesState::State_065 },
				{ "EMovesState::State_066", (int64)EMovesState::State_066 },
				{ "EMovesState::State_067", (int64)EMovesState::State_067 },
				{ "EMovesState::State_068", (int64)EMovesState::State_068 },
				{ "EMovesState::State_069", (int64)EMovesState::State_069 },
				{ "EMovesState::State_070", (int64)EMovesState::State_070 },
				{ "EMovesState::State_071", (int64)EMovesState::State_071 },
				{ "EMovesState::State_072", (int64)EMovesState::State_072 },
				{ "EMovesState::State_073", (int64)EMovesState::State_073 },
				{ "EMovesState::State_MAX", (int64)EMovesState::State_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMovesState.h" },
				{ "State_000.Name", "EMovesState::State_000" },
				{ "State_001.Name", "EMovesState::State_001" },
				{ "State_002.Name", "EMovesState::State_002" },
				{ "State_003.Name", "EMovesState::State_003" },
				{ "State_004.Name", "EMovesState::State_004" },
				{ "State_005.Name", "EMovesState::State_005" },
				{ "State_006.Name", "EMovesState::State_006" },
				{ "State_007.Name", "EMovesState::State_007" },
				{ "State_008.Name", "EMovesState::State_008" },
				{ "State_009.Name", "EMovesState::State_009" },
				{ "State_010.Name", "EMovesState::State_010" },
				{ "State_011.Name", "EMovesState::State_011" },
				{ "State_012.Name", "EMovesState::State_012" },
				{ "State_013.Name", "EMovesState::State_013" },
				{ "State_014.Name", "EMovesState::State_014" },
				{ "State_015.Name", "EMovesState::State_015" },
				{ "State_016.Name", "EMovesState::State_016" },
				{ "State_017.Name", "EMovesState::State_017" },
				{ "State_018.Name", "EMovesState::State_018" },
				{ "State_019.Name", "EMovesState::State_019" },
				{ "State_020.Name", "EMovesState::State_020" },
				{ "State_021.Name", "EMovesState::State_021" },
				{ "State_022.Name", "EMovesState::State_022" },
				{ "State_023.Name", "EMovesState::State_023" },
				{ "State_024.Name", "EMovesState::State_024" },
				{ "State_025.Name", "EMovesState::State_025" },
				{ "State_026.Name", "EMovesState::State_026" },
				{ "State_027.Name", "EMovesState::State_027" },
				{ "State_028.Name", "EMovesState::State_028" },
				{ "State_029.Name", "EMovesState::State_029" },
				{ "State_030.Name", "EMovesState::State_030" },
				{ "State_031.Name", "EMovesState::State_031" },
				{ "State_032.Name", "EMovesState::State_032" },
				{ "State_033.Name", "EMovesState::State_033" },
				{ "State_034.Name", "EMovesState::State_034" },
				{ "State_035.Name", "EMovesState::State_035" },
				{ "State_036.Name", "EMovesState::State_036" },
				{ "State_037.Name", "EMovesState::State_037" },
				{ "State_038.Name", "EMovesState::State_038" },
				{ "State_039.Name", "EMovesState::State_039" },
				{ "State_040.Name", "EMovesState::State_040" },
				{ "State_041.Name", "EMovesState::State_041" },
				{ "State_042.Name", "EMovesState::State_042" },
				{ "State_043.Name", "EMovesState::State_043" },
				{ "State_044.Name", "EMovesState::State_044" },
				{ "State_045.Name", "EMovesState::State_045" },
				{ "State_046.Name", "EMovesState::State_046" },
				{ "State_047.Name", "EMovesState::State_047" },
				{ "State_048.Name", "EMovesState::State_048" },
				{ "State_049.Name", "EMovesState::State_049" },
				{ "State_050.Name", "EMovesState::State_050" },
				{ "State_051.Name", "EMovesState::State_051" },
				{ "State_052.Name", "EMovesState::State_052" },
				{ "State_053.Name", "EMovesState::State_053" },
				{ "State_054.Name", "EMovesState::State_054" },
				{ "State_055.Name", "EMovesState::State_055" },
				{ "State_056.Name", "EMovesState::State_056" },
				{ "State_057.Name", "EMovesState::State_057" },
				{ "State_058.Name", "EMovesState::State_058" },
				{ "State_059.Name", "EMovesState::State_059" },
				{ "State_060.Name", "EMovesState::State_060" },
				{ "State_061.Name", "EMovesState::State_061" },
				{ "State_062.Name", "EMovesState::State_062" },
				{ "State_063.Name", "EMovesState::State_063" },
				{ "State_064.Name", "EMovesState::State_064" },
				{ "State_065.Name", "EMovesState::State_065" },
				{ "State_066.Name", "EMovesState::State_066" },
				{ "State_067.Name", "EMovesState::State_067" },
				{ "State_068.Name", "EMovesState::State_068" },
				{ "State_069.Name", "EMovesState::State_069" },
				{ "State_070.Name", "EMovesState::State_070" },
				{ "State_071.Name", "EMovesState::State_071" },
				{ "State_072.Name", "EMovesState::State_072" },
				{ "State_073.Name", "EMovesState::State_073" },
				{ "State_MAX.Hidden", "" },
				{ "State_MAX.Name", "EMovesState::State_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesState",
				"EMovesState",
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
