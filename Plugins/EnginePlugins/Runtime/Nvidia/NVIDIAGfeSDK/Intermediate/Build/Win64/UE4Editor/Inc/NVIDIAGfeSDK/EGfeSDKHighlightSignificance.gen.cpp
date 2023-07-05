// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/EGfeSDKHighlightSignificance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGfeSDKHighlightSignificance() {}
// Cross Module References
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
	static UEnum* EGfeSDKHighlightSignificance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("EGfeSDKHighlightSignificance"));
		}
		return Singleton;
	}
	template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKHighlightSignificance>()
	{
		return EGfeSDKHighlightSignificance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGfeSDKHighlightSignificance(EGfeSDKHighlightSignificance_StaticEnum, TEXT("/Script/NVIDIAGfeSDK"), TEXT("EGfeSDKHighlightSignificance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance_Hash() { return 1041995293U; }
	UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGfeSDKHighlightSignificance"), 0, Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightSignificance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGfeSDKHighlightSignificance::NONE", (int64)EGfeSDKHighlightSignificance::NONE },
				{ "EGfeSDKHighlightSignificance::ExtremelyBad", (int64)EGfeSDKHighlightSignificance::ExtremelyBad },
				{ "EGfeSDKHighlightSignificance::VeryBad", (int64)EGfeSDKHighlightSignificance::VeryBad },
				{ "EGfeSDKHighlightSignificance::Bad", (int64)EGfeSDKHighlightSignificance::Bad },
				{ "EGfeSDKHighlightSignificance::Neutral", (int64)EGfeSDKHighlightSignificance::Neutral },
				{ "EGfeSDKHighlightSignificance::Good", (int64)EGfeSDKHighlightSignificance::Good },
				{ "EGfeSDKHighlightSignificance::VeryGood", (int64)EGfeSDKHighlightSignificance::VeryGood },
				{ "EGfeSDKHighlightSignificance::ExtremelyGood", (int64)EGfeSDKHighlightSignificance::ExtremelyGood },
				{ "EGfeSDKHighlightSignificance::MAX", (int64)EGfeSDKHighlightSignificance::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bad.Name", "EGfeSDKHighlightSignificance::Bad" },
				{ "BlueprintType", "true" },
				{ "ExtremelyBad.Name", "EGfeSDKHighlightSignificance::ExtremelyBad" },
				{ "ExtremelyGood.Name", "EGfeSDKHighlightSignificance::ExtremelyGood" },
				{ "Good.Name", "EGfeSDKHighlightSignificance::Good" },
				{ "MAX.Name", "EGfeSDKHighlightSignificance::MAX" },
				{ "ModuleRelativePath", "Public/EGfeSDKHighlightSignificance.h" },
				{ "Neutral.Name", "EGfeSDKHighlightSignificance::Neutral" },
				{ "NONE.Name", "EGfeSDKHighlightSignificance::NONE" },
				{ "VeryBad.Name", "EGfeSDKHighlightSignificance::VeryBad" },
				{ "VeryGood.Name", "EGfeSDKHighlightSignificance::VeryGood" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
				nullptr,
				"EGfeSDKHighlightSignificance",
				"EGfeSDKHighlightSignificance",
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
