// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/EGfeSDKScope.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGfeSDKScope() {}
// Cross Module References
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
	static UEnum* EGfeSDKScope_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("EGfeSDKScope"));
		}
		return Singleton;
	}
	template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKScope>()
	{
		return EGfeSDKScope_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGfeSDKScope(EGfeSDKScope_StaticEnum, TEXT("/Script/NVIDIAGfeSDK"), TEXT("EGfeSDKScope"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope_Hash() { return 1770384980U; }
	UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGfeSDKScope"), 0, Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGfeSDKScope::Highlights", (int64)EGfeSDKScope::Highlights },
				{ "EGfeSDKScope::HighlightsRecordVideo", (int64)EGfeSDKScope::HighlightsRecordVideo },
				{ "EGfeSDKScope::HighlightsRecordScreenshot", (int64)EGfeSDKScope::HighlightsRecordScreenshot },
				{ "EGfeSDKScope::MAX", (int64)EGfeSDKScope::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Highlights.Name", "EGfeSDKScope::Highlights" },
				{ "HighlightsRecordScreenshot.Name", "EGfeSDKScope::HighlightsRecordScreenshot" },
				{ "HighlightsRecordVideo.Name", "EGfeSDKScope::HighlightsRecordVideo" },
				{ "MAX.Name", "EGfeSDKScope::MAX" },
				{ "ModuleRelativePath", "Public/EGfeSDKScope.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
				nullptr,
				"EGfeSDKScope",
				"EGfeSDKScope",
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
