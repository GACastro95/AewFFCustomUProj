// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSNatP2PConnectionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSNatP2PConnectionStatus() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSNatP2PConnectionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSNatP2PConnectionStatus"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSNatP2PConnectionStatus>()
	{
		return EEOSNatP2PConnectionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSNatP2PConnectionStatus(EEOSNatP2PConnectionStatus_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSNatP2PConnectionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus_Hash() { return 2612562809U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSNatP2PConnectionStatus"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSNatP2PConnectionStatus::NotConnected", (int64)EEOSNatP2PConnectionStatus::NotConnected },
				{ "EEOSNatP2PConnectionStatus::Connected", (int64)EEOSNatP2PConnectionStatus::Connected },
				{ "EEOSNatP2PConnectionStatus::RejectConnection", (int64)EEOSNatP2PConnectionStatus::RejectConnection },
				{ "EEOSNatP2PConnectionStatus::ConnectionAPIFailed", (int64)EEOSNatP2PConnectionStatus::ConnectionAPIFailed },
				{ "EEOSNatP2PConnectionStatus::DisconnectionAPIFailed", (int64)EEOSNatP2PConnectionStatus::DisconnectionAPIFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Connected.Name", "EEOSNatP2PConnectionStatus::Connected" },
				{ "ConnectionAPIFailed.Name", "EEOSNatP2PConnectionStatus::ConnectionAPIFailed" },
				{ "DisconnectionAPIFailed.Name", "EEOSNatP2PConnectionStatus::DisconnectionAPIFailed" },
				{ "ModuleRelativePath", "Public/EEOSNatP2PConnectionStatus.h" },
				{ "NotConnected.Name", "EEOSNatP2PConnectionStatus::NotConnected" },
				{ "RejectConnection.Name", "EEOSNatP2PConnectionStatus::RejectConnection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSNatP2PConnectionStatus",
				"EEOSNatP2PConnectionStatus",
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
