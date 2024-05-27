#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EELEOSLobbyEventType.h"
#include "EELSSLobbyMenuState.h"
#include "EELSSLobbyState.h"
#include "ELSSLobbyManager.generated.h"

class UELEOSLobby;
class UEOSAttribute;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSUserBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSSLobbyManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveSSLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessingInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobby* CachedLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELSSLobbyState LastState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELSSLobbyMenuState LocalMenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InvalidTicketIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGameSessionMultiPlayFeature;
    
public:
    UELSSLobbyManager();

    UFUNCTION(BlueprintCallable)
    bool UpdateMemberAttributes();
    
    UFUNCTION(BlueprintCallable)
    void StartSSModeEOSLobby();
    
    UFUNCTION(BlueprintCallable)
    void StartOutGame();
    
    UFUNCTION(BlueprintCallable)
    void StartInGame();
    
    UFUNCTION(BlueprintCallable)
    void SetRuleSchedule(int32 ScheduleId);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGameSessionMultiPlayFeature(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SendCurrentWrestlerData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLobbyLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyJoin(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInviteReject(UEOSCommunityInfoBase* _CommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInviteReceive(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyEvent2(EELEOSLobbyEventType lobbyEventType, UEOSUserBase* _CommunityUser, UEOSCommunityInfoBase* _CommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyDestroy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoinedSSModeEOSLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDigestingJoinRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatingSSModeEOSLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSSRank(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSSPlayerId(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELEOSLobby* GetSSModeEOSLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSSLevel(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRuleSchedule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerAccountDisplayName(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELSSLobbyMenuState GetMemberMenuState(const FString& ProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEOSAttribute* GetLobbyAttribute(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentTicketId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRegion() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishSSModeEOSLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistNewerSSDataVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllUserReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeTicketId(const FString& TicketId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeRegion(int32 Region);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeMenuState(EELSSLobbyMenuState State);
    
};

