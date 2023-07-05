// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDebug_AutoPlay_MatchTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDebug_AutoPlay_MatchTransition() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDebug_AutoPlay_MatchTransition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDebug_AutoPlay_MatchTransition"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDebug_AutoPlay_MatchTransition>()
	{
		return ECareerDebug_AutoPlay_MatchTransition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDebug_AutoPlay_MatchTransition(ECareerDebug_AutoPlay_MatchTransition_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDebug_AutoPlay_MatchTransition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition_Hash() { return 2460950339U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDebug_AutoPlay_MatchTransition"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_AutoPlay_MatchTransition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDebug_AutoPlay_MatchTransition::NoLimit", (int64)ECareerDebug_AutoPlay_MatchTransition::NoLimit },
				{ "ECareerDebug_AutoPlay_MatchTransition::NoTransition", (int64)ECareerDebug_AutoPlay_MatchTransition::NoTransition },
				{ "ECareerDebug_AutoPlay_MatchTransition::ECareerDebug_AutoPlay_MAX", (int64)ECareerDebug_AutoPlay_MatchTransition::ECareerDebug_AutoPlay_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECareerDebug_AutoPlay_MAX.Hidden", "" },
				{ "ECareerDebug_AutoPlay_MAX.Name", "ECareerDebug_AutoPlay_MatchTransition::ECareerDebug_AutoPlay_MAX" },
				{ "ModuleRelativePath", "Public/ECareerDebug_AutoPlay_MatchTransition.h" },
				{ "NoLimit.Name", "ECareerDebug_AutoPlay_MatchTransition::NoLimit" },
				{ "NoTransition.Name", "ECareerDebug_AutoPlay_MatchTransition::NoTransition" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDebug_AutoPlay_MatchTransition",
				"ECareerDebug_AutoPlay_MatchTransition",
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
