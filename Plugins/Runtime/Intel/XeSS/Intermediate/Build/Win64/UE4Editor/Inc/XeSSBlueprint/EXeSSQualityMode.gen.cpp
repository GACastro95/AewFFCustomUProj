// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeSSBlueprint/Public/EXeSSQualityMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEXeSSQualityMode() {}
// Cross Module References
	XESSBLUEPRINT_API UEnum* Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode();
	UPackage* Z_Construct_UPackage__Script_XeSSBlueprint();
// End Cross Module References
	static UEnum* EXeSSQualityMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, Z_Construct_UPackage__Script_XeSSBlueprint(), TEXT("EXeSSQualityMode"));
		}
		return Singleton;
	}
	template<> XESSBLUEPRINT_API UEnum* StaticEnum<EXeSSQualityMode>()
	{
		return EXeSSQualityMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXeSSQualityMode(EXeSSQualityMode_StaticEnum, TEXT("/Script/XeSSBlueprint"), TEXT("EXeSSQualityMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Hash() { return 1015974174U; }
	UEnum* Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XeSSBlueprint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXeSSQualityMode"), 0, Get_Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXeSSQualityMode::Off", (int64)EXeSSQualityMode::Off },
				{ "EXeSSQualityMode::Performance", (int64)EXeSSQualityMode::Performance },
				{ "EXeSSQualityMode::Balanced", (int64)EXeSSQualityMode::Balanced },
				{ "EXeSSQualityMode::Quality", (int64)EXeSSQualityMode::Quality },
				{ "EXeSSQualityMode::UltraQuality", (int64)EXeSSQualityMode::UltraQuality },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Balanced.Name", "EXeSSQualityMode::Balanced" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EXeSSQualityMode.h" },
				{ "Off.Name", "EXeSSQualityMode::Off" },
				{ "Performance.Name", "EXeSSQualityMode::Performance" },
				{ "Quality.Name", "EXeSSQualityMode::Quality" },
				{ "UltraQuality.Name", "EXeSSQualityMode::UltraQuality" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XeSSBlueprint,
				nullptr,
				"EXeSSQualityMode",
				"EXeSSQualityMode",
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
