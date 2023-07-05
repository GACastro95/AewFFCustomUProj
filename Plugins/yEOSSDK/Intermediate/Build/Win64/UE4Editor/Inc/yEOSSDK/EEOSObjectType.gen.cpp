// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSObjectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSObjectType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSObjectType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSObjectType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSObjectType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSObjectType>()
	{
		return EEOSObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSObjectType(EEOSObjectType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSObjectType_Hash() { return 27063546U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSObjectType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSObjectType::Unknown", (int64)EEOSObjectType::Unknown },
				{ "EEOSObjectType::Achievement", (int64)EEOSObjectType::Achievement },
				{ "EEOSObjectType::APIRequestManager", (int64)EEOSObjectType::APIRequestManager },
				{ "EEOSObjectType::AsyncTask", (int64)EEOSObjectType::AsyncTask },
				{ "EEOSObjectType::AsyncTaskDataLocker", (int64)EEOSObjectType::AsyncTaskDataLocker },
				{ "EEOSObjectType::AsyncTaskDataTryLocker", (int64)EEOSObjectType::AsyncTaskDataTryLocker },
				{ "EEOSObjectType::AsyncTaskRun", (int64)EEOSObjectType::AsyncTaskRun },
				{ "EEOSObjectType::Attribute", (int64)EEOSObjectType::Attribute },
				{ "EEOSObjectType::Auth", (int64)EEOSObjectType::Auth },
				{ "EEOSObjectType::Common", (int64)EEOSObjectType::Common },
				{ "EEOSObjectType::CommunityInfoBase", (int64)EEOSObjectType::CommunityInfoBase },
				{ "EEOSObjectType::CommunityUserBase", (int64)EEOSObjectType::CommunityUserBase },
				{ "EEOSObjectType::ECommerce", (int64)EEOSObjectType::ECommerce },
				{ "EEOSObjectType::FileAccessor", (int64)EEOSObjectType::FileAccessor },
				{ "EEOSObjectType::Friend", (int64)EEOSObjectType::Friend },
				{ "EEOSObjectType::FriendPresence", (int64)EEOSObjectType::FriendPresence },
				{ "EEOSObjectType::FriendUser", (int64)EEOSObjectType::FriendUser },
				{ "EEOSObjectType::IDs", (int64)EEOSObjectType::IDs },
				{ "EEOSObjectType::InstanceBase", (int64)EEOSObjectType::InstanceBase },
				{ "EEOSObjectType::InstanceManagerBase", (int64)EEOSObjectType::InstanceManagerBase },
				{ "EEOSObjectType::InternalIssueNotify", (int64)EEOSObjectType::InternalIssueNotify },
				{ "EEOSObjectType::Leaderboard", (int64)EEOSObjectType::Leaderboard },
				{ "EEOSObjectType::Lobby", (int64)EEOSObjectType::Lobby },
				{ "EEOSObjectType::LobbyInfo", (int64)EEOSObjectType::LobbyInfo },
				{ "EEOSObjectType::LobbySearchResults", (int64)EEOSObjectType::LobbySearchResults },
				{ "EEOSObjectType::LobbyUser", (int64)EEOSObjectType::LobbyUser },
				{ "EEOSObjectType::LockableInterface", (int64)EEOSObjectType::LockableInterface },
				{ "EEOSObjectType::LockebleBase", (int64)EEOSObjectType::LockebleBase },
				{ "EEOSObjectType::Locker", (int64)EEOSObjectType::Locker },
				{ "EEOSObjectType::LockerInternal", (int64)EEOSObjectType::LockerInternal },
				{ "EEOSObjectType::Manager", (int64)EEOSObjectType::Manager },
				{ "EEOSObjectType::MetricsSettings", (int64)EEOSObjectType::MetricsSettings },
				{ "EEOSObjectType::NatP2P", (int64)EEOSObjectType::NatP2P },
				{ "EEOSObjectType::NatP2PCachedTransfer", (int64)EEOSObjectType::NatP2PCachedTransfer },
				{ "EEOSObjectType::P2PBinary", (int64)EEOSObjectType::P2PBinary },
				{ "EEOSObjectType::P2PPacketBase", (int64)EEOSObjectType::P2PPacketBase },
				{ "EEOSObjectType::P2PContentPacket", (int64)EEOSObjectType::P2PContentPacket },
				{ "EEOSObjectType::P2PStringPacket", (int64)EEOSObjectType::P2PStringPacket },
				{ "EEOSObjectType::Presence", (int64)EEOSObjectType::Presence },
				{ "EEOSObjectType::PresenceBase", (int64)EEOSObjectType::PresenceBase },
				{ "EEOSObjectType::ReadLocker", (int64)EEOSObjectType::ReadLocker },
				{ "EEOSObjectType::Session", (int64)EEOSObjectType::Session },
				{ "EEOSObjectType::SessionInfo", (int64)EEOSObjectType::SessionInfo },
				{ "EEOSObjectType::SessionP2P", (int64)EEOSObjectType::SessionP2P },
				{ "EEOSObjectType::SessionP2PPacketBase", (int64)EEOSObjectType::SessionP2PPacketBase },
				{ "EEOSObjectType::SessionP2PAFDataSharing", (int64)EEOSObjectType::SessionP2PAFDataSharing },
				{ "EEOSObjectType::SessionP2PAFBindPlayer", (int64)EEOSObjectType::SessionP2PAFBindPlayer },
				{ "EEOSObjectType::SessionP2PAFHostMigration", (int64)EEOSObjectType::SessionP2PAFHostMigration },
				{ "EEOSObjectType::SessionP2PAFGameFlowManager", (int64)EEOSObjectType::SessionP2PAFGameFlowManager },
				{ "EEOSObjectType::SessionP2PSynchronizedPacketBase", (int64)EEOSObjectType::SessionP2PSynchronizedPacketBase },
				{ "EEOSObjectType::SessionSearchResults", (int64)EEOSObjectType::SessionSearchResults },
				{ "EEOSObjectType::SessionUser", (int64)EEOSObjectType::SessionUser },
				{ "EEOSObjectType::SessionUserPacketMap", (int64)EEOSObjectType::SessionUserPacketMap },
				{ "EEOSObjectType::Stats", (int64)EEOSObjectType::Stats },
				{ "EEOSObjectType::User", (int64)EEOSObjectType::User },
				{ "EEOSObjectType::UserBase", (int64)EEOSObjectType::UserBase },
				{ "EEOSObjectType::UserContents", (int64)EEOSObjectType::UserContents },
				{ "EEOSObjectType::UserContentsBase", (int64)EEOSObjectType::UserContentsBase },
				{ "EEOSObjectType::UserContentProgress", (int64)EEOSObjectType::UserContentProgress },
				{ "EEOSObjectType::UserManager", (int64)EEOSObjectType::UserManager },
				{ "EEOSObjectType::TitleStorage", (int64)EEOSObjectType::TitleStorage },
				{ "EEOSObjectType::TitleStorageBase", (int64)EEOSObjectType::TitleStorageBase },
				{ "EEOSObjectType::AntiCheatClient", (int64)EEOSObjectType::AntiCheatClient },
				{ "EEOSObjectType::AntiCheatDedicatedClient", (int64)EEOSObjectType::AntiCheatDedicatedClient },
				{ "EEOSObjectType::AntiCheatDedicatedServer", (int64)EEOSObjectType::AntiCheatDedicatedServer },
				{ "EEOSObjectType::Reports", (int64)EEOSObjectType::Reports },
				{ "EEOSObjectType::Sanctions", (int64)EEOSObjectType::Sanctions },
				{ "EEOSObjectType::Voice", (int64)EEOSObjectType::Voice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Achievement.Name", "EEOSObjectType::Achievement" },
				{ "AntiCheatClient.Name", "EEOSObjectType::AntiCheatClient" },
				{ "AntiCheatDedicatedClient.Name", "EEOSObjectType::AntiCheatDedicatedClient" },
				{ "AntiCheatDedicatedServer.Name", "EEOSObjectType::AntiCheatDedicatedServer" },
				{ "APIRequestManager.Name", "EEOSObjectType::APIRequestManager" },
				{ "AsyncTask.Name", "EEOSObjectType::AsyncTask" },
				{ "AsyncTaskDataLocker.Name", "EEOSObjectType::AsyncTaskDataLocker" },
				{ "AsyncTaskDataTryLocker.Name", "EEOSObjectType::AsyncTaskDataTryLocker" },
				{ "AsyncTaskRun.Name", "EEOSObjectType::AsyncTaskRun" },
				{ "Attribute.Name", "EEOSObjectType::Attribute" },
				{ "Auth.Name", "EEOSObjectType::Auth" },
				{ "BlueprintType", "true" },
				{ "Common.Name", "EEOSObjectType::Common" },
				{ "CommunityInfoBase.Name", "EEOSObjectType::CommunityInfoBase" },
				{ "CommunityUserBase.Name", "EEOSObjectType::CommunityUserBase" },
				{ "ECommerce.Name", "EEOSObjectType::ECommerce" },
				{ "FileAccessor.Name", "EEOSObjectType::FileAccessor" },
				{ "Friend.Name", "EEOSObjectType::Friend" },
				{ "FriendPresence.Name", "EEOSObjectType::FriendPresence" },
				{ "FriendUser.Name", "EEOSObjectType::FriendUser" },
				{ "IDs.Name", "EEOSObjectType::IDs" },
				{ "InstanceBase.Name", "EEOSObjectType::InstanceBase" },
				{ "InstanceManagerBase.Name", "EEOSObjectType::InstanceManagerBase" },
				{ "InternalIssueNotify.Name", "EEOSObjectType::InternalIssueNotify" },
				{ "Leaderboard.Name", "EEOSObjectType::Leaderboard" },
				{ "Lobby.Name", "EEOSObjectType::Lobby" },
				{ "LobbyInfo.Name", "EEOSObjectType::LobbyInfo" },
				{ "LobbySearchResults.Name", "EEOSObjectType::LobbySearchResults" },
				{ "LobbyUser.Name", "EEOSObjectType::LobbyUser" },
				{ "LockableInterface.Name", "EEOSObjectType::LockableInterface" },
				{ "LockebleBase.Name", "EEOSObjectType::LockebleBase" },
				{ "Locker.Name", "EEOSObjectType::Locker" },
				{ "LockerInternal.Name", "EEOSObjectType::LockerInternal" },
				{ "Manager.Name", "EEOSObjectType::Manager" },
				{ "MetricsSettings.Name", "EEOSObjectType::MetricsSettings" },
				{ "ModuleRelativePath", "Public/EEOSObjectType.h" },
				{ "NatP2P.Name", "EEOSObjectType::NatP2P" },
				{ "NatP2PCachedTransfer.Name", "EEOSObjectType::NatP2PCachedTransfer" },
				{ "P2PBinary.Name", "EEOSObjectType::P2PBinary" },
				{ "P2PContentPacket.Name", "EEOSObjectType::P2PContentPacket" },
				{ "P2PPacketBase.Name", "EEOSObjectType::P2PPacketBase" },
				{ "P2PStringPacket.Name", "EEOSObjectType::P2PStringPacket" },
				{ "Presence.Name", "EEOSObjectType::Presence" },
				{ "PresenceBase.Name", "EEOSObjectType::PresenceBase" },
				{ "ReadLocker.Name", "EEOSObjectType::ReadLocker" },
				{ "Reports.Name", "EEOSObjectType::Reports" },
				{ "Sanctions.Name", "EEOSObjectType::Sanctions" },
				{ "Session.Name", "EEOSObjectType::Session" },
				{ "SessionInfo.Name", "EEOSObjectType::SessionInfo" },
				{ "SessionP2P.Name", "EEOSObjectType::SessionP2P" },
				{ "SessionP2PAFBindPlayer.Name", "EEOSObjectType::SessionP2PAFBindPlayer" },
				{ "SessionP2PAFDataSharing.Name", "EEOSObjectType::SessionP2PAFDataSharing" },
				{ "SessionP2PAFGameFlowManager.Name", "EEOSObjectType::SessionP2PAFGameFlowManager" },
				{ "SessionP2PAFHostMigration.Name", "EEOSObjectType::SessionP2PAFHostMigration" },
				{ "SessionP2PPacketBase.Name", "EEOSObjectType::SessionP2PPacketBase" },
				{ "SessionP2PSynchronizedPacketBase.Name", "EEOSObjectType::SessionP2PSynchronizedPacketBase" },
				{ "SessionSearchResults.Name", "EEOSObjectType::SessionSearchResults" },
				{ "SessionUser.Name", "EEOSObjectType::SessionUser" },
				{ "SessionUserPacketMap.Name", "EEOSObjectType::SessionUserPacketMap" },
				{ "Stats.Name", "EEOSObjectType::Stats" },
				{ "TitleStorage.Name", "EEOSObjectType::TitleStorage" },
				{ "TitleStorageBase.Name", "EEOSObjectType::TitleStorageBase" },
				{ "Unknown.Name", "EEOSObjectType::Unknown" },
				{ "User.Name", "EEOSObjectType::User" },
				{ "UserBase.Name", "EEOSObjectType::UserBase" },
				{ "UserContentProgress.Name", "EEOSObjectType::UserContentProgress" },
				{ "UserContents.Name", "EEOSObjectType::UserContents" },
				{ "UserContentsBase.Name", "EEOSObjectType::UserContentsBase" },
				{ "UserManager.Name", "EEOSObjectType::UserManager" },
				{ "Voice.Name", "EEOSObjectType::Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSObjectType",
				"EEOSObjectType",
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
