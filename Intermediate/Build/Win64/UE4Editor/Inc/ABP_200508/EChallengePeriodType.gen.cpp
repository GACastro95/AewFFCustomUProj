// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EChallengePeriodType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengePeriodType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengePeriodType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EChallengePeriodType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EChallengePeriodType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EChallengePeriodType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EChallengePeriodType>()
	{
		return EChallengePeriodType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengePeriodType(EChallengePeriodType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EChallengePeriodType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EChallengePeriodType_Hash() { return 3706749889U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EChallengePeriodType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengePeriodType"), 0, Get_Z_Construct_UEnum_ABP_200508_EChallengePeriodType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengePeriodType::Daily", (int64)EChallengePeriodType::Daily },
				{ "EChallengePeriodType::Weekly", (int64)EChallengePeriodType::Weekly },
				{ "EChallengePeriodType::Normal", (int64)EChallengePeriodType::Normal },
				{ "EChallengePeriodType::Secret", (int64)EChallengePeriodType::Secret },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Daily.Name", "EChallengePeriodType::Daily" },
				{ "ModuleRelativePath", "Public/EChallengePeriodType.h" },
				{ "Normal.Name", "EChallengePeriodType::Normal" },
				{ "Secret.Name", "EChallengePeriodType::Secret" },
				{ "Weekly.Name", "EChallengePeriodType::Weekly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EChallengePeriodType",
				"EChallengePeriodType",
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
