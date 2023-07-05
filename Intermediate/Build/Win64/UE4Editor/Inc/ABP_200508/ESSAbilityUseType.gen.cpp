// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAbilityUseType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAbilityUseType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityUseType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAbilityUseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAbilityUseType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAbilityUseType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAbilityUseType>()
	{
		return ESSAbilityUseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAbilityUseType(ESSAbilityUseType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAbilityUseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAbilityUseType_Hash() { return 1384013756U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityUseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAbilityUseType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAbilityUseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAbilityUseType::Passive", (int64)ESSAbilityUseType::Passive },
				{ "ESSAbilityUseType::Active", (int64)ESSAbilityUseType::Active },
				{ "ESSAbilityUseType::Auto", (int64)ESSAbilityUseType::Auto },
				{ "ESSAbilityUseType::ActiveWhenKo", (int64)ESSAbilityUseType::ActiveWhenKo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "ESSAbilityUseType::Active" },
				{ "ActiveWhenKo.Name", "ESSAbilityUseType::ActiveWhenKo" },
				{ "Auto.Name", "ESSAbilityUseType::Auto" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSAbilityUseType.h" },
				{ "Passive.Name", "ESSAbilityUseType::Passive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAbilityUseType",
				"ESSAbilityUseType",
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
