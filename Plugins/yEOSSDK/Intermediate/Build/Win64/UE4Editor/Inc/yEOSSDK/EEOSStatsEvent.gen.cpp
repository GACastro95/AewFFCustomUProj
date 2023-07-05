// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSStatsEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSStatsEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSStatsEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSStatsEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSStatsEvent>()
	{
		return EEOSStatsEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSStatsEvent(EEOSStatsEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSStatsEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent_Hash() { return 2948863923U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSStatsEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSStatsEvent::IngestStat", (int64)EEOSStatsEvent::IngestStat },
				{ "EEOSStatsEvent::IngestStatErr", (int64)EEOSStatsEvent::IngestStatErr },
				{ "EEOSStatsEvent::QueryStat", (int64)EEOSStatsEvent::QueryStat },
				{ "EEOSStatsEvent::QueryStatErr", (int64)EEOSStatsEvent::QueryStatErr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IngestStat.Name", "EEOSStatsEvent::IngestStat" },
				{ "IngestStatErr.Name", "EEOSStatsEvent::IngestStatErr" },
				{ "ModuleRelativePath", "Public/EEOSStatsEvent.h" },
				{ "QueryStat.Name", "EEOSStatsEvent::QueryStat" },
				{ "QueryStatErr.Name", "EEOSStatsEvent::QueryStatErr" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSStatsEvent",
				"EEOSStatsEvent",
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
