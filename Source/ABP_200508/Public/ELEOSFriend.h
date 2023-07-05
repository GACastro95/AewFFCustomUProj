#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EEOSFriendEvent.h"
#include "EELEOSFriendNotify.h"
#include "EOSLobbyReceiveMessageEventDelegate.h"
#include "EOSLobbyReceivePacketEventDelegate.h"
#include "LobbyCharacterData.h"
#include "LobbyChatLogData.h"
#include "LobbyPersonalChatLog.h"
#include "ELEOSFriend.generated.h"

class UEOSFriend;
class UEOSFriendUser;
class UEOSLeaderboard;
class UEOSManager;
class UEOSNatP2P;
class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PQueueTransfer;
class UEOSPresenceBase;
class UEOSStats;
class UEOSUser;
class UEOSUserBase;

UCLASS(Blueprintable)
class UELEOSFriend : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSManager* EOSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSFriend* EOSFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSStats* EOSStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLeaderboard* EOSLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2P* EOSNatP2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PQueueTransfer* EOSNatP2PTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSocketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyCharacterData> PersonalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLobbyPersonalChatLog> PersonalChatLog;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLobbyReceiveMessageEvent OnLobbyReceiveMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLobbyReceivePacketEvent OnLobbyReceivePacket;
    
    UELEOSFriend();
    UFUNCTION(BlueprintCallable)
    void UpdateInfo();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateFriendPresence(UEOSPresenceBase* _EOSPresenceBase, const FString& _EpicAccountID);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(UEOSManager* _Manager, UEOSUser* _User, UEOSStats* _Stats, UEOSLeaderboard* _Leaderboard);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonalLastReadTime(const FDateTime& _DateTime, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    bool SendPersonalStamp(int32 _StampID, UEOSUserBase* _target);
    
    UFUNCTION(BlueprintCallable)
    bool SendPersonalChat(const FString& _Message, UEOSUserBase* _target);
    
    UFUNCTION(BlueprintCallable)
    bool SendNotify(EELEOSFriendNotify Notify, UEOSUserBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    bool QueryFriendPlayerIconStats(const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    void OpenPersonalChat(const FString& _PUID, UEOSUserBase* _UserBase);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePUIDEvent(UEOSUserBase* _FriendUser);
    
    UFUNCTION(BlueprintCallable)
    void OnReceive(UEOSNatP2PCachedTransfer* _Transfer, UEOSUserBase* _UserBase, UEOSNatP2PBinary* _P2PBinary);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendEvent(EEOSFriendEvent FriendEvent, UEOSFriend* Friend, UEOSUserBase* FriendUser);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetUnreadPersonalChatCount(const FDateTime& _UtcDateTime, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSortedFriendList(TArray<UEOSFriendUser*>& List) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPersonalPlayers(TMap<FString, FLobbyCharacterData>& _Players);
    
    UFUNCTION(BlueprintCallable)
    void GetPersonalLastReadTime(FDateTime& _DateTime, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPersonalChatMember(TArray<FString>& _ChatMember) const;
    
    UFUNCTION(BlueprintCallable)
    void GetChatLog(TArray<FLobbyChatLogData>& _ChatLog, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSFriendUser* FindFriendUser(const FString& _PUID) const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePersonalChat(const FString& _PUID);
    
};

