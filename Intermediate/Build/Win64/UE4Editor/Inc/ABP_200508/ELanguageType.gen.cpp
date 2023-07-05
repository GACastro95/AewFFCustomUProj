// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELanguageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELanguageType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELanguageType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ELanguageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ELanguageType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELanguageType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ELanguageType>()
	{
		return ELanguageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELanguageType(ELanguageType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ELanguageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ELanguageType_Hash() { return 1208553598U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ELanguageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELanguageType"), 0, Get_Z_Construct_UEnum_ABP_200508_ELanguageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELanguageType::ENGLISH", (int64)ELanguageType::ENGLISH },
				{ "ELanguageType::FRENCH", (int64)ELanguageType::FRENCH },
				{ "ELanguageType::GERMAN", (int64)ELanguageType::GERMAN },
				{ "ELanguageType::SPANISH", (int64)ELanguageType::SPANISH },
				{ "ELanguageType::PORTUGAL", (int64)ELanguageType::PORTUGAL },
				{ "ELanguageType::CHINESE", (int64)ELanguageType::CHINESE },
				{ "ELanguageType::JAPANESE", (int64)ELanguageType::JAPANESE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CHINESE.Name", "ELanguageType::CHINESE" },
				{ "ENGLISH.Name", "ELanguageType::ENGLISH" },
				{ "FRENCH.Name", "ELanguageType::FRENCH" },
				{ "GERMAN.Name", "ELanguageType::GERMAN" },
				{ "JAPANESE.Name", "ELanguageType::JAPANESE" },
				{ "ModuleRelativePath", "Public/ELanguageType.h" },
				{ "PORTUGAL.Name", "ELanguageType::PORTUGAL" },
				{ "SPANISH.Name", "ELanguageType::SPANISH" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ELanguageType",
				"ELanguageType",
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
