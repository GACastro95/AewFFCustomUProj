// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStoryResultCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStoryResultCondition() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStoryResultCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStoryResultCondition"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStoryResultCondition>()
	{
		return ECareerStoryResultCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStoryResultCondition(ECareerStoryResultCondition_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStoryResultCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition_Hash() { return 327899686U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStoryResultCondition"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStoryResultCondition::NONE", (int64)ECareerStoryResultCondition::NONE },
				{ "ECareerStoryResultCondition::WIN", (int64)ECareerStoryResultCondition::WIN },
				{ "ECareerStoryResultCondition::LOSE", (int64)ECareerStoryResultCondition::LOSE },
				{ "ECareerStoryResultCondition::WIN_OPP_A", (int64)ECareerStoryResultCondition::WIN_OPP_A },
				{ "ECareerStoryResultCondition::WIN_OPP_B", (int64)ECareerStoryResultCondition::WIN_OPP_B },
				{ "ECareerStoryResultCondition::WIN_OPP_C", (int64)ECareerStoryResultCondition::WIN_OPP_C },
				{ "ECareerStoryResultCondition::WIN_OPP_D", (int64)ECareerStoryResultCondition::WIN_OPP_D },
				{ "ECareerStoryResultCondition::SELECT_A", (int64)ECareerStoryResultCondition::SELECT_A },
				{ "ECareerStoryResultCondition::SELECT_B", (int64)ECareerStoryResultCondition::SELECT_B },
				{ "ECareerStoryResultCondition::SELECT_C", (int64)ECareerStoryResultCondition::SELECT_C },
				{ "ECareerStoryResultCondition::SELECT_D", (int64)ECareerStoryResultCondition::SELECT_D },
				{ "ECareerStoryResultCondition::SCR_TRUE", (int64)ECareerStoryResultCondition::SCR_TRUE },
				{ "ECareerStoryResultCondition::SCR_FALSE", (int64)ECareerStoryResultCondition::SCR_FALSE },
				{ "ECareerStoryResultCondition::TARGET_OPP_A", (int64)ECareerStoryResultCondition::TARGET_OPP_A },
				{ "ECareerStoryResultCondition::TARGET_OPP_B", (int64)ECareerStoryResultCondition::TARGET_OPP_B },
				{ "ECareerStoryResultCondition::TARGET_OPP_C", (int64)ECareerStoryResultCondition::TARGET_OPP_C },
				{ "ECareerStoryResultCondition::TARGET_OPP_D", (int64)ECareerStoryResultCondition::TARGET_OPP_D },
				{ "ECareerStoryResultCondition::HEIGHT_SUPER_SMALL", (int64)ECareerStoryResultCondition::HEIGHT_SUPER_SMALL },
				{ "ECareerStoryResultCondition::HEIGHT_SMALL", (int64)ECareerStoryResultCondition::HEIGHT_SMALL },
				{ "ECareerStoryResultCondition::HEIGHT_MEDIUM_SMALL", (int64)ECareerStoryResultCondition::HEIGHT_MEDIUM_SMALL },
				{ "ECareerStoryResultCondition::HEIGHT_MEDIUM", (int64)ECareerStoryResultCondition::HEIGHT_MEDIUM },
				{ "ECareerStoryResultCondition::HEIGHT_MEDIUM_LARGE", (int64)ECareerStoryResultCondition::HEIGHT_MEDIUM_LARGE },
				{ "ECareerStoryResultCondition::HEIGHT_LARGE", (int64)ECareerStoryResultCondition::HEIGHT_LARGE },
				{ "ECareerStoryResultCondition::HEIGHT_BIGMAN", (int64)ECareerStoryResultCondition::HEIGHT_BIGMAN },
				{ "ECareerStoryResultCondition::OTHER", (int64)ECareerStoryResultCondition::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HEIGHT_BIGMAN.Name", "ECareerStoryResultCondition::HEIGHT_BIGMAN" },
				{ "HEIGHT_LARGE.Name", "ECareerStoryResultCondition::HEIGHT_LARGE" },
				{ "HEIGHT_MEDIUM.Name", "ECareerStoryResultCondition::HEIGHT_MEDIUM" },
				{ "HEIGHT_MEDIUM_LARGE.Name", "ECareerStoryResultCondition::HEIGHT_MEDIUM_LARGE" },
				{ "HEIGHT_MEDIUM_SMALL.Name", "ECareerStoryResultCondition::HEIGHT_MEDIUM_SMALL" },
				{ "HEIGHT_SMALL.Name", "ECareerStoryResultCondition::HEIGHT_SMALL" },
				{ "HEIGHT_SUPER_SMALL.Name", "ECareerStoryResultCondition::HEIGHT_SUPER_SMALL" },
				{ "LOSE.Name", "ECareerStoryResultCondition::LOSE" },
				{ "ModuleRelativePath", "Public/ECareerStoryResultCondition.h" },
				{ "NONE.Name", "ECareerStoryResultCondition::NONE" },
				{ "OTHER.Name", "ECareerStoryResultCondition::OTHER" },
				{ "SCR_FALSE.Name", "ECareerStoryResultCondition::SCR_FALSE" },
				{ "SCR_TRUE.Name", "ECareerStoryResultCondition::SCR_TRUE" },
				{ "SELECT_A.Name", "ECareerStoryResultCondition::SELECT_A" },
				{ "SELECT_B.Name", "ECareerStoryResultCondition::SELECT_B" },
				{ "SELECT_C.Name", "ECareerStoryResultCondition::SELECT_C" },
				{ "SELECT_D.Name", "ECareerStoryResultCondition::SELECT_D" },
				{ "TARGET_OPP_A.Name", "ECareerStoryResultCondition::TARGET_OPP_A" },
				{ "TARGET_OPP_B.Name", "ECareerStoryResultCondition::TARGET_OPP_B" },
				{ "TARGET_OPP_C.Name", "ECareerStoryResultCondition::TARGET_OPP_C" },
				{ "TARGET_OPP_D.Name", "ECareerStoryResultCondition::TARGET_OPP_D" },
				{ "WIN.Name", "ECareerStoryResultCondition::WIN" },
				{ "WIN_OPP_A.Name", "ECareerStoryResultCondition::WIN_OPP_A" },
				{ "WIN_OPP_B.Name", "ECareerStoryResultCondition::WIN_OPP_B" },
				{ "WIN_OPP_C.Name", "ECareerStoryResultCondition::WIN_OPP_C" },
				{ "WIN_OPP_D.Name", "ECareerStoryResultCondition::WIN_OPP_D" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStoryResultCondition",
				"ECareerStoryResultCondition",
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
