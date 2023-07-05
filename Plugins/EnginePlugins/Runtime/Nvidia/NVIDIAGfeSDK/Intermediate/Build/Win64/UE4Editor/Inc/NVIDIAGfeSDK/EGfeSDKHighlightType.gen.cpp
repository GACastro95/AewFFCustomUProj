// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/EGfeSDKHighlightType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGfeSDKHighlightType() {}
// Cross Module References
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
// End Cross Module References
	static UEnum* EGfeSDKHighlightType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("EGfeSDKHighlightType"));
		}
		return Singleton;
	}
	template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKHighlightType>()
	{
		return EGfeSDKHighlightType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGfeSDKHighlightType(EGfeSDKHighlightType_StaticEnum, TEXT("/Script/NVIDIAGfeSDK"), TEXT("EGfeSDKHighlightType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType_Hash() { return 2986053842U; }
	UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGfeSDKHighlightType"), 0, Get_Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKHighlightType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGfeSDKHighlightType::NONE", (int64)EGfeSDKHighlightType::NONE },
				{ "EGfeSDKHighlightType::Milestone", (int64)EGfeSDKHighlightType::Milestone },
				{ "EGfeSDKHighlightType::Achievement", (int64)EGfeSDKHighlightType::Achievement },
				{ "EGfeSDKHighlightType::Incident", (int64)EGfeSDKHighlightType::Incident },
				{ "EGfeSDKHighlightType::StateChange", (int64)EGfeSDKHighlightType::StateChange },
				{ "EGfeSDKHighlightType::Unannounced", (int64)EGfeSDKHighlightType::Unannounced },
				{ "EGfeSDKHighlightType::MAX", (int64)EGfeSDKHighlightType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Achievement.Name", "EGfeSDKHighlightType::Achievement" },
				{ "BlueprintType", "true" },
				{ "Incident.Name", "EGfeSDKHighlightType::Incident" },
				{ "MAX.Name", "EGfeSDKHighlightType::MAX" },
				{ "Milestone.Name", "EGfeSDKHighlightType::Milestone" },
				{ "ModuleRelativePath", "Public/EGfeSDKHighlightType.h" },
				{ "NONE.Name", "EGfeSDKHighlightType::NONE" },
				{ "StateChange.Name", "EGfeSDKHighlightType::StateChange" },
				{ "Unannounced.Name", "EGfeSDKHighlightType::Unannounced" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
				nullptr,
				"EGfeSDKHighlightType",
				"EGfeSDKHighlightType",
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
