// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELMatchResult_ItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchResult_ItemType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMatchResult_ItemType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELMatchResult_ItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELMatchResult_ItemType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELMatchResult_ItemType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELMatchResult_ItemType>()
	{
		return EELMatchResult_ItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchResult_ItemType(EELMatchResult_ItemType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELMatchResult_ItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELMatchResult_ItemType_Hash() { return 2054223288U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELMatchResult_ItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchResult_ItemType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELMatchResult_ItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchResult_ItemType::None", (int64)EELMatchResult_ItemType::None },
				{ "EELMatchResult_ItemType::Badge", (int64)EELMatchResult_ItemType::Badge },
				{ "EELMatchResult_ItemType::Rematch", (int64)EELMatchResult_ItemType::Rematch },
				{ "EELMatchResult_ItemType::NextMatch", (int64)EELMatchResult_ItemType::NextMatch },
				{ "EELMatchResult_ItemType::QuitMatch", (int64)EELMatchResult_ItemType::QuitMatch },
				{ "EELMatchResult_ItemType::EELMatchResult_MAX", (int64)EELMatchResult_ItemType::EELMatchResult_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Badge.Name", "EELMatchResult_ItemType::Badge" },
				{ "BlueprintType", "true" },
				{ "EELMatchResult_MAX.Hidden", "" },
				{ "EELMatchResult_MAX.Name", "EELMatchResult_ItemType::EELMatchResult_MAX" },
				{ "ModuleRelativePath", "Public/EELMatchResult_ItemType.h" },
				{ "NextMatch.Name", "EELMatchResult_ItemType::NextMatch" },
				{ "None.Name", "EELMatchResult_ItemType::None" },
				{ "QuitMatch.Name", "EELMatchResult_ItemType::QuitMatch" },
				{ "Rematch.Name", "EELMatchResult_ItemType::Rematch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELMatchResult_ItemType",
				"EELMatchResult_ItemType",
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
