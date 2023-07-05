// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerDebug_TextMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerDebug_TextMode() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_TextMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerDebug_TextMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerDebug_TextMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerDebug_TextMode"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerDebug_TextMode>()
	{
		return ECareerDebug_TextMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerDebug_TextMode(ECareerDebug_TextMode_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerDebug_TextMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_TextMode_Hash() { return 1594288383U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerDebug_TextMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerDebug_TextMode"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerDebug_TextMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerDebug_TextMode::Normal", (int64)ECareerDebug_TextMode::Normal },
				{ "ECareerDebug_TextMode::StringKey", (int64)ECareerDebug_TextMode::StringKey },
				{ "ECareerDebug_TextMode::ECareerDebug_MAX", (int64)ECareerDebug_TextMode::ECareerDebug_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECareerDebug_MAX.Hidden", "" },
				{ "ECareerDebug_MAX.Name", "ECareerDebug_TextMode::ECareerDebug_MAX" },
				{ "ModuleRelativePath", "Public/ECareerDebug_TextMode.h" },
				{ "Normal.Name", "ECareerDebug_TextMode::Normal" },
				{ "StringKey.Name", "ECareerDebug_TextMode::StringKey" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerDebug_TextMode",
				"ECareerDebug_TextMode",
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
