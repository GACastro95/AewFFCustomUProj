#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSCommunityEvent.h"
#include "EEOSLobbyUserAudioStatus.h"
#include "EEOSLobbyUserMuteFlag.h"
#include "ELEOSGameChatSession.generated.h"

class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSLobby;
class UEOSLobbyInfo;
class UEOSUser;

UCLASS(Blueprintable)
class UELEOSGameChatSession : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatUnsupported, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatLeft, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatJoined, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatEnabled, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatDisconnected, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatDisabled, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoiceChatConnected, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnmuteVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnblockVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStopSpeaking, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSpeaking, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMuteVoiceErr, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMuteVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlockVoiceErr, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlockVoice, UEOSCommunityInfoBase*, _CommunityInfo, UEOSCommunityUserBase*, _CommunityUser);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobby* EOSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobbyInfo* EOSLobbyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReservedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostProductUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceChatStartMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSLobbyUserMuteFlag MuteFlag;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatConnected OnVoiceChatConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatDisconnected OnVoiceChatDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatJoined OnVoiceChatJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatLeft OnVoiceChatLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatEnabled OnVoiceChatEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatDisabled OnVoiceChatDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChatUnsupported OnVoiceChatUnsupported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSpeaking OnStartSpeaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopSpeaking OnStopSpeaking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMuteVoice OnMuteVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnmuteVoice OnUnmuteVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMuteVoiceErr OnMuteVoiceErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlockVoice OnBlockVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnblockVoice OnUnblockVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlockVoiceErr OnBlockVoiceErr;
    
    UELEOSGameChatSession();

    UFUNCTION(BlueprintCallable)
    bool Unmute(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool Unblock(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool StartMatchmaking(const TArray<FString>& ProductUserIDs);
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatStartMuted(bool _bMuted);
    
    UFUNCTION(BlueprintCallable)
    bool SetVoiceChatEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetMuteAll(EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommunityEvent(EEOSCommunityEvent EOSCommunityEvent, UEOSCommunityBase* EOSCommunityBase, UEOSCommunityInfoBase* EOSCommunityInfo, UEOSCommunityUserBase* EOSLobbyUser);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Mute(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeaking(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuted(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoined() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasPlayer(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserAudioStatus GetVoiceStatus(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatStartMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSpeakingUsers(UEOSCommunityInfoBase*& EOSCommunityInfo, TArray<UEOSCommunityUserBase*>& SpeakingUsers);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayers(TArray<UEOSCommunityUserBase*>& _Players);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetMuteFlag(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLobbyUserMuteFlag GetBlockFlag(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsPlayer(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearMuteAll(EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool ClearMute(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool ClearBlock(const FString& ProductUserID, EEOSLobbyUserMuteFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    bool Block(const FString& ProductUserID);
    
};

