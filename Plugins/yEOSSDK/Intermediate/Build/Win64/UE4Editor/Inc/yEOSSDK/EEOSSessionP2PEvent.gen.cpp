// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionP2PEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionP2PEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionP2PEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionP2PEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PEvent>()
	{
		return EEOSSessionP2PEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionP2PEvent(EEOSSessionP2PEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionP2PEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PEvent_Hash() { return 603724685U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionP2PEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionP2PEvent::GetNatType", (int64)EEOSSessionP2PEvent::GetNatType },
				{ "EEOSSessionP2PEvent::GetNatTypeErr", (int64)EEOSSessionP2PEvent::GetNatTypeErr },
				{ "EEOSSessionP2PEvent::IncommingPlayer", (int64)EEOSSessionP2PEvent::IncommingPlayer },
				{ "EEOSSessionP2PEvent::ConnectedPlayer", (int64)EEOSSessionP2PEvent::ConnectedPlayer },
				{ "EEOSSessionP2PEvent::DisconnectedPlayer", (int64)EEOSSessionP2PEvent::DisconnectedPlayer },
				{ "EEOSSessionP2PEvent::ReceivedPacket", (int64)EEOSSessionP2PEvent::ReceivedPacket },
				{ "EEOSSessionP2PEvent::ReceivedSynchronizedPacket", (int64)EEOSSessionP2PEvent::ReceivedSynchronizedPacket },
				{ "EEOSSessionP2PEvent::LatencyCheck", (int64)EEOSSessionP2PEvent::LatencyCheck },
				{ "EEOSSessionP2PEvent::LatencyCheckErr", (int64)EEOSSessionP2PEvent::LatencyCheckErr },
				{ "EEOSSessionP2PEvent::ClosedSocket", (int64)EEOSSessionP2PEvent::ClosedSocket },
				{ "EEOSSessionP2PEvent::ClosedSocketErr", (int64)EEOSSessionP2PEvent::ClosedSocketErr },
				{ "EEOSSessionP2PEvent::LeaveSession", (int64)EEOSSessionP2PEvent::LeaveSession },
				{ "EEOSSessionP2PEvent::HostMigration", (int64)EEOSSessionP2PEvent::HostMigration },
				{ "EEOSSessionP2PEvent::HostMigration_Owner", (int64)EEOSSessionP2PEvent::HostMigration_Owner },
				{ "EEOSSessionP2PEvent::AllPlayersLeaved", (int64)EEOSSessionP2PEvent::AllPlayersLeaved },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllPlayersLeaved.Name", "EEOSSessionP2PEvent::AllPlayersLeaved" },
				{ "BlueprintType", "true" },
				{ "ClosedSocket.Name", "EEOSSessionP2PEvent::ClosedSocket" },
				{ "ClosedSocketErr.Name", "EEOSSessionP2PEvent::ClosedSocketErr" },
				{ "ConnectedPlayer.Name", "EEOSSessionP2PEvent::ConnectedPlayer" },
				{ "DisconnectedPlayer.Name", "EEOSSessionP2PEvent::DisconnectedPlayer" },
				{ "GetNatType.Name", "EEOSSessionP2PEvent::GetNatType" },
				{ "GetNatTypeErr.Name", "EEOSSessionP2PEvent::GetNatTypeErr" },
				{ "HostMigration.Name", "EEOSSessionP2PEvent::HostMigration" },
				{ "HostMigration_Owner.Name", "EEOSSessionP2PEvent::HostMigration_Owner" },
				{ "IncommingPlayer.Name", "EEOSSessionP2PEvent::IncommingPlayer" },
				{ "LatencyCheck.Name", "EEOSSessionP2PEvent::LatencyCheck" },
				{ "LatencyCheckErr.Name", "EEOSSessionP2PEvent::LatencyCheckErr" },
				{ "LeaveSession.Name", "EEOSSessionP2PEvent::LeaveSession" },
				{ "ModuleRelativePath", "Public/EEOSSessionP2PEvent.h" },
				{ "ReceivedPacket.Name", "EEOSSessionP2PEvent::ReceivedPacket" },
				{ "ReceivedSynchronizedPacket.Name", "EEOSSessionP2PEvent::ReceivedSynchronizedPacket" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionP2PEvent",
				"EEOSSessionP2PEvent",
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
