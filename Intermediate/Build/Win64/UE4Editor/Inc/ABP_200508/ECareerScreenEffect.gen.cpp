// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerScreenEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerScreenEffect() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScreenEffect();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerScreenEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerScreenEffect"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerScreenEffect>()
	{
		return ECareerScreenEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerScreenEffect(ECareerScreenEffect_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerScreenEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerScreenEffect_Hash() { return 4278831494U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerScreenEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerScreenEffect"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerScreenEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerScreenEffect::None", (int64)ECareerScreenEffect::None },
				{ "ECareerScreenEffect::Finish", (int64)ECareerScreenEffect::Finish },
				{ "ECareerScreenEffect::Black", (int64)ECareerScreenEffect::Black },
				{ "ECareerScreenEffect::DarkSkin", (int64)ECareerScreenEffect::DarkSkin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Black.Name", "ECareerScreenEffect::Black" },
				{ "BlueprintType", "true" },
				{ "DarkSkin.Name", "ECareerScreenEffect::DarkSkin" },
				{ "Finish.Name", "ECareerScreenEffect::Finish" },
				{ "ModuleRelativePath", "Public/ECareerScreenEffect.h" },
				{ "None.Name", "ECareerScreenEffect::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerScreenEffect",
				"ECareerScreenEffect",
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
