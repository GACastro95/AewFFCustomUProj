// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerItemEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerItemEffect() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemEffect();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerItemEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerItemEffect, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerItemEffect"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerItemEffect>()
	{
		return ECareerItemEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerItemEffect(ECareerItemEffect_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerItemEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerItemEffect_Hash() { return 3177215570U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerItemEffect"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerItemEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerItemEffect::None", (int64)ECareerItemEffect::None },
				{ "ECareerItemEffect::EnagyUpEffect", (int64)ECareerItemEffect::EnagyUpEffect },
				{ "ECareerItemEffect::MotivationUpEffect", (int64)ECareerItemEffect::MotivationUpEffect },
				{ "ECareerItemEffect::CareInjuryEffect", (int64)ECareerItemEffect::CareInjuryEffect },
				{ "ECareerItemEffect::NextMatchSkillPointUpEffect", (int64)ECareerItemEffect::NextMatchSkillPointUpEffect },
				{ "ECareerItemEffect::NextMatchMomentumUPEffect", (int64)ECareerItemEffect::NextMatchMomentumUPEffect },
				{ "ECareerItemEffect::NextMatchFinisherMode", (int64)ECareerItemEffect::NextMatchFinisherMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CareInjuryEffect.Name", "ECareerItemEffect::CareInjuryEffect" },
				{ "EnagyUpEffect.Name", "ECareerItemEffect::EnagyUpEffect" },
				{ "ModuleRelativePath", "Public/ECareerItemEffect.h" },
				{ "MotivationUpEffect.Name", "ECareerItemEffect::MotivationUpEffect" },
				{ "NextMatchFinisherMode.Name", "ECareerItemEffect::NextMatchFinisherMode" },
				{ "NextMatchMomentumUPEffect.Name", "ECareerItemEffect::NextMatchMomentumUPEffect" },
				{ "NextMatchSkillPointUpEffect.Name", "ECareerItemEffect::NextMatchSkillPointUpEffect" },
				{ "None.Name", "ECareerItemEffect::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerItemEffect",
				"ECareerItemEffect",
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
