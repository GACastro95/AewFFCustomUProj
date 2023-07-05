// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionP2PDataSharingEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionP2PDataSharingEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PDataSharingEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionP2PDataSharingEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PDataSharingEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionP2PDataSharingEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PDataSharingEvent>()
	{
		return EEOSSessionP2PDataSharingEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionP2PDataSharingEvent(EEOSSessionP2PDataSharingEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionP2PDataSharingEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PDataSharingEvent_Hash() { return 2145089023U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PDataSharingEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionP2PDataSharingEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PDataSharingEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionP2PDataSharingEvent::None", (int64)EEOSSessionP2PDataSharingEvent::None },
				{ "EEOSSessionP2PDataSharingEvent::SyncDataSccuess", (int64)EEOSSessionP2PDataSharingEvent::SyncDataSccuess },
				{ "EEOSSessionP2PDataSharingEvent::SyncDataFailed", (int64)EEOSSessionP2PDataSharingEvent::SyncDataFailed },
				{ "EEOSSessionP2PDataSharingEvent::SyncDataOverTheRetryLimit", (int64)EEOSSessionP2PDataSharingEvent::SyncDataOverTheRetryLimit },
				{ "EEOSSessionP2PDataSharingEvent::OverwriteDataSccuess", (int64)EEOSSessionP2PDataSharingEvent::OverwriteDataSccuess },
				{ "EEOSSessionP2PDataSharingEvent::OverwriteDataFailed", (int64)EEOSSessionP2PDataSharingEvent::OverwriteDataFailed },
				{ "EEOSSessionP2PDataSharingEvent::OverwriteDataOverTheRetryLimit", (int64)EEOSSessionP2PDataSharingEvent::OverwriteDataOverTheRetryLimit },
				{ "EEOSSessionP2PDataSharingEvent::CompareDataSccuess", (int64)EEOSSessionP2PDataSharingEvent::CompareDataSccuess },
				{ "EEOSSessionP2PDataSharingEvent::CompareDataFailed", (int64)EEOSSessionP2PDataSharingEvent::CompareDataFailed },
				{ "EEOSSessionP2PDataSharingEvent::CompareDataOverTheRetryLimit", (int64)EEOSSessionP2PDataSharingEvent::CompareDataOverTheRetryLimit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CompareDataFailed.Name", "EEOSSessionP2PDataSharingEvent::CompareDataFailed" },
				{ "CompareDataOverTheRetryLimit.Name", "EEOSSessionP2PDataSharingEvent::CompareDataOverTheRetryLimit" },
				{ "CompareDataSccuess.Name", "EEOSSessionP2PDataSharingEvent::CompareDataSccuess" },
				{ "ModuleRelativePath", "Public/EEOSSessionP2PDataSharingEvent.h" },
				{ "None.Name", "EEOSSessionP2PDataSharingEvent::None" },
				{ "OverwriteDataFailed.Name", "EEOSSessionP2PDataSharingEvent::OverwriteDataFailed" },
				{ "OverwriteDataOverTheRetryLimit.Name", "EEOSSessionP2PDataSharingEvent::OverwriteDataOverTheRetryLimit" },
				{ "OverwriteDataSccuess.Name", "EEOSSessionP2PDataSharingEvent::OverwriteDataSccuess" },
				{ "SyncDataFailed.Name", "EEOSSessionP2PDataSharingEvent::SyncDataFailed" },
				{ "SyncDataOverTheRetryLimit.Name", "EEOSSessionP2PDataSharingEvent::SyncDataOverTheRetryLimit" },
				{ "SyncDataSccuess.Name", "EEOSSessionP2PDataSharingEvent::SyncDataSccuess" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionP2PDataSharingEvent",
				"EEOSSessionP2PDataSharingEvent",
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
