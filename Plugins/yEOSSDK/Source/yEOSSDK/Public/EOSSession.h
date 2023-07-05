#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityBase.h"
#include "EOSMetricsAPIVersionSettings.h"
#include "EOSMetricsSettings.h"
#include "EOSSessionAPIVersionSettings.h"
#include "EOSSessionP2PCreatedDispatcherDelegate.h"
#include "EOSSessionP2PDestroyDispatcherDelegate.h"
#include "EOSSessionSettings.h"
#include "EOSSession.generated.h"

class UEOSAPIRequestCallback;
class UEOSAttribute;
class UEOSCommunityInfoBase;
class UEOSSessionOwnRequest;
class UEOSSessionP2P;
class UEOSSessionSearchResults;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSession : public UEOSCommunityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PCreatedDispatcher SessionP2PCreatedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSessionP2PDestroyDispatcher SessionP2PDestroyDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSSessionOwnRequest*> m_cOwnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSMetricsSettings m_stLastMetricsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FString> m_cChannelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSessionCreateErr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSessionDestroyErr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSessionJoinErr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSessionLeaveErr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSessionStartErr;
    
public:
    UEOSSession();
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    bool SetSessionP2PChannelList(const TArray<uint8>& _cChannelList);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCreationSessionP2P(bool _bUseSessionP2P, bool _bUseSessionP2PWithAutoConnection, uint8 _uAdditionalFunctionTypeBits);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersionForSession(FEOSSessionAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersionForMetrics(FEOSMetricsAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpdateSession(UEOSCommunityInfoBase* _pcCommunityInfo, const FEOSSessionSettings& _stSetting, bool _bForce, UEOSAPIRequestCallback* _Callback);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUnregistUser(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    bool RequestStartSession(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<UEOSAttribute*>& _cAttributes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSearchSessionBySessionID(UEOSSessionSearchResults*& _pcSearchResults, const FString& _strSearchName, const FString& _strSessionID, int32 _sMaxResults);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSearchSession(UEOSSessionSearchResults*& _pcSearchResults, const FString& _strSearchName, const TArray<UEOSAttribute*>& _cAttributes, int32 _sMaxResults);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRemovetAttribute(UEOSCommunityInfoBase* _pcCommunityInfo, const TArray<FString>& _cAttributes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRejectInvite(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRegistUser(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQueryInvites();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLeaveSession(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _PUID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestJoinSession(UEOSCommunityInfoBase* _pcCommunityInfo, bool _bPresenceSession, UEOSAPIRequestCallback* _Callback);
    
    UFUNCTION(BlueprintCallable)
    bool RequestInviteSession(UEOSCommunityInfoBase* _pcCommunityInfo, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestEndSession(UEOSCommunityInfoBase* _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDestroySession(UEOSCommunityInfoBase* _pcCommunityInfo, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCreateSession(UEOSCommunityInfoBase*& _pcCommunityInfo, const FEOSSessionSettings& _stSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEOSMetricsSettings GetLastMetricsSettings() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDetailsCurrent(UEOSCommunityInfoBase*& _pcCommunityInfo, const FString& _strSessionName);
    
    UFUNCTION(BlueprintCallable)
    bool GetDetailsBySearchIndex(UEOSCommunityInfoBase*& _pcCommunityInfo, UEOSSessionSearchResults* _pcSearchResults, int32 _sSearchIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetDetailsByInvite(UEOSCommunityInfoBase*& _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    FString GetAccountDisplayNameForSession();
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateRandomStringForSessionName(FString& _rstrCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool EndPlayerSession();
    
    UFUNCTION(BlueprintCallable)
    bool CreateSessionP2P(UEOSSessionP2P*& _pcSessionP2P, UEOSCommunityInfoBase*& _pcCommunityInfo);
    
    UFUNCTION(BlueprintCallable)
    bool BeginPlayerSession(const FEOSMetricsSettings& _rstSettings);
    
};

