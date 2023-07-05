#pragma once
#include "CoreMinimal.h"
#include "EEOSApplicationStatus.h"
#include "EEOSNetworkStatus.h"
#include "EEOSRelayControl.h"
#include "EEOSSDKLogLevel.h"
#include "EEOSUpdateType.h"
#include "EOSEngineAPIVersionSettings.h"
#include "EOSInstanceManagerBase.h"
#include "EOSProductSetting.h"
#include "EOSManager.generated.h"

class UEOSAPIRequestManager;
class UEOSAchievement;
class UEOSAntiCheatClient;
class UEOSAntiCheatDedicatedServer;
class UEOSAuth;
class UEOSFileAccessor;
class UEOSLeaderboard;
class UEOSLobby;
class UEOSManager;
class UEOSNatP2P;
class UEOSReports;
class UEOSSanctions;
class UEOSSession;
class UEOSStats;
class UEOSTitleStorage;
class UEOSUserBase;
class UEOSUserManager;
class UEOSVoice;
class UObject;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSManager : public UEOSInstanceManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAuth* m_pcActiveUserEOSAuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSFileAccessor* m_pcFileAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserManager* m_pcUserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSLobby* m_pcLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSession* m_pcSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSTitleStorage* m_pcTitleStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAPIRequestManager* m_pcAPIRequestManager;
    
public:
    UEOSManager();
    UFUNCTION(BlueprintCallable)
    bool UpdateForDispose();
    
    UFUNCTION(BlueprintCallable)
    bool Update();
    
    UFUNCTION(BlueprintCallable)
    bool SetUpdateType(EEOSUpdateType _enType);
    
    UFUNCTION(BlueprintCallable)
    bool SetupAntiCheat(UEOSUserBase* _pOwnerUser, const bool isClient);
    
    UFUNCTION(BlueprintCallable)
    static void SetSDKLogLevel(EEOSSDKLogLevel _enSDKLogLevel);
    
    UFUNCTION(BlueprintCallable)
    bool SetRelayControl(EEOSRelayControl RelayControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetPortRange(int32 Port, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    bool SetNetworkStatus(EEOSNetworkStatus Status);
    
    UFUNCTION(BlueprintCallable)
    bool SetApplicationStatus(EEOSApplicationStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSEngineAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAuth(UEOSAuth* _pcEOSAuth);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseSDK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidHandle() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitSDK(const FString& _strGameName, const FString& _strProductVersion);
    
    UFUNCTION(BlueprintCallable)
    bool Initialize(FEOSProductSetting _stSetting, const FString& _strEncryptKey, const FString& _strCacheDirPath);
    
    UFUNCTION(BlueprintCallable)
    UEOSUserManager* GetUserManager();
    
    UFUNCTION(BlueprintCallable)
    UEOSTitleStorage* GetTitleStorage(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSSession* GetSession(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRelayControl(EEOSRelayControl& RelayControl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPortRange(int32& Port, int32& Range) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSNetworkStatus GetNetworkStatus() const;
    
    UFUNCTION(BlueprintCallable)
    UEOSLobby* GetLobby(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSFileAccessor* GetFileAccessor();
    
    UFUNCTION(BlueprintCallable)
    bool GetDesktopCrossplayStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSApplicationStatus GetApplicationStatus() const;
    
    UFUNCTION(BlueprintCallable)
    UEOSVoice* CreateVoice(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSStats* CreateStats(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSSanctions* CreateSanctions(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSReports* CreateReports(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSNatP2P* CreateNatP2P(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSLeaderboard* CreateLeaderboard(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CreateEOSManager(UEOSManager*& EOSManager, uint8 _uInstanceID, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UEOSAuth* CreateAuth();
    
    UFUNCTION(BlueprintCallable)
    UEOSAntiCheatDedicatedServer* CreateAntiCheatServer();
    
    UFUNCTION(BlueprintCallable)
    UEOSAntiCheatClient* CreateAntiCheatClient(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    UEOSAchievement* CreateAchievement(UEOSUserBase* _pOwnerUser);
    
    UFUNCTION(BlueprintCallable)
    bool ConfirmNetworkRequest();
    
};

