// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSDKLogLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSDKLogLevel() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSDKLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSDKLogLevel"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSDKLogLevel>()
	{
		return EEOSSDKLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSDKLogLevel(EEOSSDKLogLevel_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSDKLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel_Hash() { return 2496302874U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSDKLogLevel"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSDKLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSDKLogLevel::Off", (int64)EEOSSDKLogLevel::Off },
				{ "EEOSSDKLogLevel::SDK_Error", (int64)EEOSSDKLogLevel::SDK_Error },
				{ "EEOSSDKLogLevel::SDK_Warn", (int64)EEOSSDKLogLevel::SDK_Warn },
				{ "EEOSSDKLogLevel::SDK_Info", (int64)EEOSSDKLogLevel::SDK_Info },
				{ "EEOSSDKLogLevel::SDK_ALL", (int64)EEOSSDKLogLevel::SDK_ALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSSDKLogLevel.h" },
				{ "Off.Name", "EEOSSDKLogLevel::Off" },
				{ "SDK_ALL.Name", "EEOSSDKLogLevel::SDK_ALL" },
				{ "SDK_Error.Name", "EEOSSDKLogLevel::SDK_Error" },
				{ "SDK_Info.Name", "EEOSSDKLogLevel::SDK_Info" },
				{ "SDK_Warn.Name", "EEOSSDKLogLevel::SDK_Warn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSDKLogLevel",
				"EEOSSDKLogLevel",
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
