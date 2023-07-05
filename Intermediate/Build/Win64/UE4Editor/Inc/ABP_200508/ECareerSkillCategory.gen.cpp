// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerSkillCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerSkillCategory() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSkillCategory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerSkillCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerSkillCategory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerSkillCategory"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerSkillCategory>()
	{
		return ECareerSkillCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerSkillCategory(ECareerSkillCategory_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerSkillCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerSkillCategory_Hash() { return 482532570U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerSkillCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerSkillCategory"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerSkillCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerSkillCategory::ParameterSkill", (int64)ECareerSkillCategory::ParameterSkill },
				{ "ECareerSkillCategory::ActionSkill", (int64)ECareerSkillCategory::ActionSkill },
				{ "ECareerSkillCategory::PassiveSkill", (int64)ECareerSkillCategory::PassiveSkill },
				{ "ECareerSkillCategory::SkillCategoryMax", (int64)ECareerSkillCategory::SkillCategoryMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionSkill.Name", "ECareerSkillCategory::ActionSkill" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECareerSkillCategory.h" },
				{ "ParameterSkill.Name", "ECareerSkillCategory::ParameterSkill" },
				{ "PassiveSkill.Name", "ECareerSkillCategory::PassiveSkill" },
				{ "SkillCategoryMax.Name", "ECareerSkillCategory::SkillCategoryMax" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerSkillCategory",
				"ECareerSkillCategory",
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
