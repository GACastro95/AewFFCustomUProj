// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionGameEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionGameEventType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionGameEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionGameEventType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionGameEventType>()
	{
		return EEOSSessionGameEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionGameEventType(EEOSSessionGameEventType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionGameEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType_Hash() { return 3287246502U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionGameEventType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionGameEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionGameEventType::None", (int64)EEOSSessionGameEventType::None },
				{ "EEOSSessionGameEventType::DisconnectedHost", (int64)EEOSSessionGameEventType::DisconnectedHost },
				{ "EEOSSessionGameEventType::WaitingForJoinPlayres", (int64)EEOSSessionGameEventType::WaitingForJoinPlayres },
				{ "EEOSSessionGameEventType::RegisteredAllMembers", (int64)EEOSSessionGameEventType::RegisteredAllMembers },
				{ "EEOSSessionGameEventType::WaitingClientForReady", (int64)EEOSSessionGameEventType::WaitingClientForReady },
				{ "EEOSSessionGameEventType::ReadyAllClients", (int64)EEOSSessionGameEventType::ReadyAllClients },
				{ "EEOSSessionGameEventType::WaitingForMemberInfo", (int64)EEOSSessionGameEventType::WaitingForMemberInfo },
				{ "EEOSSessionGameEventType::WaitingForReceivedAPackets", (int64)EEOSSessionGameEventType::WaitingForReceivedAPackets },
				{ "EEOSSessionGameEventType::SynchronizedAllPackets", (int64)EEOSSessionGameEventType::SynchronizedAllPackets },
				{ "EEOSSessionGameEventType::QuitGame", (int64)EEOSSessionGameEventType::QuitGame },
				{ "EEOSSessionGameEventType::ResendRequestPlayerData", (int64)EEOSSessionGameEventType::ResendRequestPlayerData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisconnectedHost.Name", "EEOSSessionGameEventType::DisconnectedHost" },
				{ "ModuleRelativePath", "Public/EEOSSessionGameEventType.h" },
				{ "None.Name", "EEOSSessionGameEventType::None" },
				{ "QuitGame.Name", "EEOSSessionGameEventType::QuitGame" },
				{ "ReadyAllClients.Name", "EEOSSessionGameEventType::ReadyAllClients" },
				{ "RegisteredAllMembers.Name", "EEOSSessionGameEventType::RegisteredAllMembers" },
				{ "ResendRequestPlayerData.Name", "EEOSSessionGameEventType::ResendRequestPlayerData" },
				{ "SynchronizedAllPackets.Name", "EEOSSessionGameEventType::SynchronizedAllPackets" },
				{ "WaitingClientForReady.Name", "EEOSSessionGameEventType::WaitingClientForReady" },
				{ "WaitingForJoinPlayres.Name", "EEOSSessionGameEventType::WaitingForJoinPlayres" },
				{ "WaitingForMemberInfo.Name", "EEOSSessionGameEventType::WaitingForMemberInfo" },
				{ "WaitingForReceivedAPackets.Name", "EEOSSessionGameEventType::WaitingForReceivedAPackets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionGameEventType",
				"EEOSSessionGameEventType",
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
