#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityEvent.h"
#include "EEOSSessionHostMigrationClientResultType.h"
#include "EEOSSessionHostMigrationStep.h"
#include "EEOSSessionHostMigrationType.h"
#include "EOSSessionP2PAdditionalFunctionBase.h"
#include "EOSSessionSettings.h"
#include "EOSSessionP2PAFHostMigration.generated.h"

class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSSearchResultsBase;
class UEOSSessionInfo;
class UEOSSessionP2PLatencyInfoPacket;
class UEOSSessionSearchResults;
class UEOSSessionUserPacketMap;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PAFHostMigration : public UEOSSessionP2PAdditionalFunctionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PLatencyInfoPacket* m_pcLatencyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionUserPacketMap* m_pcNextHostUserPacketMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionInfo* m_pcSessionInfoOld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionInfo* m_pcSessionInfoNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionSearchResults* m_pcCheckForHostSession;
    
public:
    UEOSSessionP2PAFHostMigration();
    UFUNCTION(BlueprintCallable)
    void SetRetryParams(int32 _sRetryCountForAPI, int32 _sRetryCountForRequestStatus, float _fTimerInterval, float _fRetryInterval);
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveSessionSetting(const FEOSSessionSettings& _stSessionSession);
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveObserver(bool _bActivate);
    
    UFUNCTION(BlueprintCallable)
    bool SendLatencyInfo();
    
    UFUNCTION(BlueprintCallable)
    bool SendHostMigrationPacket(EEOSSessionHostMigrationType _enType, EEOSSessionHostMigrationStep _enStep);
    
    UFUNCTION(BlueprintCallable)
    bool Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCommunitySearchResultEvent(UEOSCommunityBase* _pcEOSCommunityBase, UEOSSearchResultsBase* _pcEOSSearchResultsBase);
    
    UFUNCTION(BlueprintCallable)
    void OnCommunityEventForHostMigration(EEOSCommunityEvent _enEOSCommunityEvent, UEOSCommunityBase* _pcEOSCommunityBase, UEOSCommunityInfoBase* _pcEOSCommunityInfo, UEOSCommunityUserBase* _pcEOSLobbyUser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextHostOfTheMe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMigratingNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveObserver() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetWaitMemberNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpdateStateRequestRetryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEOSSessionSettings GetSessionSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRetryToRquestAPICount() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextHostUserPacketMap(UEOSSessionUserPacketMap*& _pcNextHostUserPacketMap);
    
    UFUNCTION(BlueprintCallable)
    bool GetNextHostProductUserID(FString& _rstNextHostProductUserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUpdateStateRequestRetryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxRetryToRquestAPICount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHostPriority(const FString& _strProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionHostMigrationStep GetHostMigrationStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSSessionHostMigrationClientResultType GetHostMigrationClientResultType() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionUserPacketMapForNextHost(UEOSSessionUserPacketMap*& _pcNextHostUserPacketMap);
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionP2PLatencyInfoPacket(UEOSSessionP2PLatencyInfoPacket*& _pcLatencyInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionInfoForBefore(UEOSSessionInfo*& _pcSessionInfoOld);
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSSessionInfoForAfter(UEOSSessionInfo*& _pcSessionInfoNext);
    
};

