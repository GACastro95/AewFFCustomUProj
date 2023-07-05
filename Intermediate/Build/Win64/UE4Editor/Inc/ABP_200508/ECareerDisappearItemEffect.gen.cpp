// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDisappearItemEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDisappearItemEffect() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDisappearItemEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDisappearItemEffect"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDisappearItemEffect>()
	{
		return ECareerDisappearItemEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDisappearItemEffect(ECareerDisappearItemEffect_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDisappearItemEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect_Hash() { return 3276804476U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDisappearItemEffect"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDisappearItemEffect::None", (int64)ECareerDisappearItemEffect::None },
				{ "ECareerDisappearItemEffect::Immidiate", (int64)ECareerDisappearItemEffect::Immidiate },
				{ "ECareerDisappearItemEffect::AfterMatch", (int64)ECareerDisappearItemEffect::AfterMatch },
				{ "ECareerDisappearItemEffect::WeekEnd", (int64)ECareerDisappearItemEffect::WeekEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfterMatch.Name", "ECareerDisappearItemEffect::AfterMatch" },
				{ "BlueprintType", "true" },
				{ "Immidiate.Name", "ECareerDisappearItemEffect::Immidiate" },
				{ "ModuleRelativePath", "Public/ECareerDisappearItemEffect.h" },
				{ "None.Name", "ECareerDisappearItemEffect::None" },
				{ "WeekEnd.Name", "ECareerDisappearItemEffect::WeekEnd" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDisappearItemEffect",
				"ECareerDisappearItemEffect",
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
