#pragma once
#include "CoreMinimal.h"
#include "EEOSObjectType.generated.h"

UENUM(BlueprintType)
enum class EEOSObjectType : uint8 {
    Unknown,
    Achievement,
    APIRequestManager,
    AsyncTask,
    AsyncTaskDataLocker,
    AsyncTaskDataTryLocker,
    AsyncTaskRun,
    Attribute,
    Auth,
    Common,
    CommunityInfoBase,
    CommunityUserBase,
    ECommerce,
    FileAccessor,
    Friend,
    FriendPresence,
    FriendUser,
    IDs,
    InstanceBase,
    InstanceManagerBase,
    InternalIssueNotify,
    Leaderboard,
    Lobby,
    LobbyInfo,
    LobbySearchResults,
    LobbyUser,
    LockableInterface,
    LockebleBase,
    Locker,
    LockerInternal,
    Manager,
    MetricsSettings,
    NatP2P,
    NatP2PCachedTransfer,
    P2PBinary,
    P2PPacketBase,
    P2PContentPacket,
    P2PStringPacket,
    Presence,
    PresenceBase,
    ReadLocker,
    Session,
    SessionInfo,
    SessionP2P,
    SessionP2PPacketBase,
    SessionP2PAFDataSharing,
    SessionP2PAFBindPlayer,
    SessionP2PAFHostMigration,
    SessionP2PAFGameFlowManager,
    SessionP2PSynchronizedPacketBase,
    SessionSearchResults,
    SessionUser,
    SessionUserPacketMap,
    Stats,
    User,
    UserBase,
    UserContents,
    UserContentsBase,
    UserContentProgress,
    UserManager,
    TitleStorage,
    TitleStorageBase,
    AntiCheatClient,
    AntiCheatDedicatedClient,
    AntiCheatDedicatedServer,
    Reports,
    Sanctions,
    Voice,
};

