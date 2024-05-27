#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSEndGameReason.h"
#include "ESSGameServerError.h"
#include "ESSLocalDebugFlag.h"
#include "SSDebugParam.h"
#include "SSRuleScheduleParam.h"
#include "SSRuleStatus.h"
#include "ELSSRootObject.generated.h"

class UELDebugMenuManager;
class UELSSCommonDatabase;
class UELSSGameModeDataManager;
class UELSSLobbyManager;
class UELSSNotice;
class UELSSRuleSelect;
class ULevel;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELSSRootObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SSModePlayCountToDay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSGameModeDataManager* m_pSSGameDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSCommonDatabase* CommonDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEndGameReason LastEndGameReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSGameServerError GameServerError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LocalInGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleFadeForChangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSLobbyManager* LobbyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSRuleSelect* RuleSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDebugParam SSDebugParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELDebugMenuManager* DebugMenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSNotice* Notice;
    
public:
    UELSSRootObject();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleFadeForChangeLevel(bool inEnable, bool inWithLoadingIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetSSDebugParam(const FSSDebugParam& inDebugParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedRuleScheduleId(int32 inRuleScheduleId, bool inUpdateRuleStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalDebugFlag(ESSLocalDebugFlag inFlagType, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void SetGameServerError(ESSGameServerError inGameServerError);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnGameStart();
    
    UFUNCTION(BlueprintCallable)
    bool OnGameEnd(ESSEndGameReason inReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLevel_Native(ULevel* inLevel, UWorld* inWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSRuleSelect* GetSSRuleSelect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELSSLobbyManager* GetSSLobbyManager() const;
    
    UFUNCTION(BlueprintCallable)
    UELSSGameModeDataManager* GetSSGameDataManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedRuleScheduleId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSGameServerError GetGameServerError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSSRuleScheduleParam> GetEnabledRuleScheduleListForBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSRuleStatus GetCurrentRuleStatusForBP() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteSSModeGameData();
    
    UFUNCTION(BlueprintCallable)
    UELSSGameModeDataManager* CreateSSModeGameData();
    
    UFUNCTION(BlueprintCallable)
    void ClearLastEndGameReason();
    
    UFUNCTION(BlueprintCallable)
    void ClearGameServerError();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanupSSModeObjects();
    
};

