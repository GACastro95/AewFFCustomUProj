// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionHostMigrationEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionHostMigrationEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionHostMigrationEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionHostMigrationEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationEvent>()
	{
		return EEOSSessionHostMigrationEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionHostMigrationEvent(EEOSSessionHostMigrationEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionHostMigrationEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationEvent_Hash() { return 3140936264U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionHostMigrationEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionHostMigrationEvent::None", (int64)EEOSSessionHostMigrationEvent::None },
				{ "EEOSSessionHostMigrationEvent::ExchangedLatencyInfo", (int64)EEOSSessionHostMigrationEvent::ExchangedLatencyInfo },
				{ "EEOSSessionHostMigrationEvent::DetectedLostHost", (int64)EEOSSessionHostMigrationEvent::DetectedLostHost },
				{ "EEOSSessionHostMigrationEvent::DetectedQuitGame", (int64)EEOSSessionHostMigrationEvent::DetectedQuitGame },
				{ "EEOSSessionHostMigrationEvent::ReceivedLostHost", (int64)EEOSSessionHostMigrationEvent::ReceivedLostHost },
				{ "EEOSSessionHostMigrationEvent::ReceivedQuitGame", (int64)EEOSSessionHostMigrationEvent::ReceivedQuitGame },
				{ "EEOSSessionHostMigrationEvent::UpdatedHostMigrationStatus", (int64)EEOSSessionHostMigrationEvent::UpdatedHostMigrationStatus },
				{ "EEOSSessionHostMigrationEvent::ChangeHost", (int64)EEOSSessionHostMigrationEvent::ChangeHost },
				{ "EEOSSessionHostMigrationEvent::LeaveOldSession", (int64)EEOSSessionHostMigrationEvent::LeaveOldSession },
				{ "EEOSSessionHostMigrationEvent::LeaveOldSessionErr", (int64)EEOSSessionHostMigrationEvent::LeaveOldSessionErr },
				{ "EEOSSessionHostMigrationEvent::CreateSession", (int64)EEOSSessionHostMigrationEvent::CreateSession },
				{ "EEOSSessionHostMigrationEvent::CreateSessionErr", (int64)EEOSSessionHostMigrationEvent::CreateSessionErr },
				{ "EEOSSessionHostMigrationEvent::InviteSession", (int64)EEOSSessionHostMigrationEvent::InviteSession },
				{ "EEOSSessionHostMigrationEvent::InviteSessionErr", (int64)EEOSSessionHostMigrationEvent::InviteSessionErr },
				{ "EEOSSessionHostMigrationEvent::JoinNewSession", (int64)EEOSSessionHostMigrationEvent::JoinNewSession },
				{ "EEOSSessionHostMigrationEvent::JoinNewSessionErr", (int64)EEOSSessionHostMigrationEvent::JoinNewSessionErr },
				{ "EEOSSessionHostMigrationEvent::InviteReceived", (int64)EEOSSessionHostMigrationEvent::InviteReceived },
				{ "EEOSSessionHostMigrationEvent::RetryAPI", (int64)EEOSSessionHostMigrationEvent::RetryAPI },
				{ "EEOSSessionHostMigrationEvent::RetryOnTimeout", (int64)EEOSSessionHostMigrationEvent::RetryOnTimeout },
				{ "EEOSSessionHostMigrationEvent::Fixed", (int64)EEOSSessionHostMigrationEvent::Fixed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChangeHost.Name", "EEOSSessionHostMigrationEvent::ChangeHost" },
				{ "CreateSession.Name", "EEOSSessionHostMigrationEvent::CreateSession" },
				{ "CreateSessionErr.Name", "EEOSSessionHostMigrationEvent::CreateSessionErr" },
				{ "DetectedLostHost.Name", "EEOSSessionHostMigrationEvent::DetectedLostHost" },
				{ "DetectedQuitGame.Name", "EEOSSessionHostMigrationEvent::DetectedQuitGame" },
				{ "ExchangedLatencyInfo.Name", "EEOSSessionHostMigrationEvent::ExchangedLatencyInfo" },
				{ "Fixed.Name", "EEOSSessionHostMigrationEvent::Fixed" },
				{ "InviteReceived.Name", "EEOSSessionHostMigrationEvent::InviteReceived" },
				{ "InviteSession.Name", "EEOSSessionHostMigrationEvent::InviteSession" },
				{ "InviteSessionErr.Name", "EEOSSessionHostMigrationEvent::InviteSessionErr" },
				{ "JoinNewSession.Name", "EEOSSessionHostMigrationEvent::JoinNewSession" },
				{ "JoinNewSessionErr.Name", "EEOSSessionHostMigrationEvent::JoinNewSessionErr" },
				{ "LeaveOldSession.Name", "EEOSSessionHostMigrationEvent::LeaveOldSession" },
				{ "LeaveOldSessionErr.Name", "EEOSSessionHostMigrationEvent::LeaveOldSessionErr" },
				{ "ModuleRelativePath", "Public/EEOSSessionHostMigrationEvent.h" },
				{ "None.Name", "EEOSSessionHostMigrationEvent::None" },
				{ "ReceivedLostHost.Name", "EEOSSessionHostMigrationEvent::ReceivedLostHost" },
				{ "ReceivedQuitGame.Name", "EEOSSessionHostMigrationEvent::ReceivedQuitGame" },
				{ "RetryAPI.Name", "EEOSSessionHostMigrationEvent::RetryAPI" },
				{ "RetryOnTimeout.Name", "EEOSSessionHostMigrationEvent::RetryOnTimeout" },
				{ "UpdatedHostMigrationStatus.Name", "EEOSSessionHostMigrationEvent::UpdatedHostMigrationStatus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionHostMigrationEvent",
				"EEOSSessionHostMigrationEvent",
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
