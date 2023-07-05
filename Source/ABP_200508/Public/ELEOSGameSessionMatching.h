#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSSessionSettings.h"
#include "ELEOSGameSessionMatchingComplete.h"
#include "ELEOSGameSessionPartyData.h"
#include "ELEOSSessionSearchResultWrapper.h"
#include "ELEOSGameSessionMatching.generated.h"

class UELEOSGameSession;
class UELEOSLobby;
class UEOSAttribute;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSUser;
class UEOSUserBase;

UCLASS(Blueprintable)
class UELEOSGameSessionMatching : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateMemberCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSortPosition, const FELEOSGameSessionMatchingComplete&, _Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionSearchStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionSearchResultNotFound);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSearchResult, FELEOSSessionSearchResultWrapper, _Results);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionMatchingResume);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionMatchingComplete, const FELEOSGameSessionMatchingComplete&, _Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSessionLeave, UEOSCommunityInfoBase*, _CommunityInfo, UEOSUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionJoin, UEOSUserBase*, _CommunityUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionError, int32, _ErrorCode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionDestroy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSessionCreate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameSession* ELGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSLobby* ELLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUser* EOSUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetupComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchSessionResultCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreateSessionMaxPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELEOSGameSessionPartyData SelfSessionPartyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELEOSGameSessionPartyData> SessionPartyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELEOSGameSessionPartyData> SessionPartyDataAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> SessionInvitePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SessionAllowedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdatePermission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdatePositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchingComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchSessionCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateMemberCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineMatchCount;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionCreate OnSessionCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionJoin OnSessionJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionJoin OnSessionJoinErr;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionJoin OnSessionMemberJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionLeave OnSessionLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionLeave OnSessionMemberLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionDestroy OnSessionDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchStart OnSessionSearchStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchResult OnSessionSearchResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchResultNotFound OnSessionSearchResultNotFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionError OnSessionError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSortPosition OSessionSortPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMatchingComplete OSessionMatchingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionMatchingResume OnSessionMatchingResume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateMemberCount OnUpdateMemberCount;
    
    UELEOSGameSessionMatching();
    UFUNCTION(BlueprintCallable)
    bool Setup(UELEOSGameSession* _GameSession, UELEOSLobby* _Lobby, UEOSUser* _User);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineMatchCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SearchSessionInitParam();
    
    UFUNCTION(BlueprintCallable)
    bool SearchSessionCancel();
    
    UFUNCTION(BlueprintCallable)
    bool SearchSession(const TArray<UEOSAttribute*>& _Array, int32 _ResultCount, int32 _RetryCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetOnlineMatchCount();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateNatP2PTransfer();
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedPositionData();
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionUpdateSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionSearchResult(FELEOSSessionSearchResultWrapper _Results);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionReceivedPartyData(UEOSUserBase* _CommunityUser, UObject* _Object);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionReceivedNotify(UEOSUserBase* _CommunityUser, UObject* _Object);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionMemberLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _User);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionMemberJoin(UEOSCommunityUserBase* _User);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionLeave(UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _User);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionJoinErr(UEOSCommunityUserBase* RemoteUser);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionJoin(UEOSCommunityUserBase* _User);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnGameSessionCreate();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionSearching();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineMatchCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlayerCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateSession(const FEOSSessionSettings& _Settings);
    
};

