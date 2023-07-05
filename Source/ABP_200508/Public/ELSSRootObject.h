#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSEndGameReason.h"
#include "ESSLocalDebugFlag.h"
#include "SSDebugParam.h"
#include "ELSSRootObject.generated.h"

class UELDebugMenuManager;
class UELSSCommonDatabase;
class UELSSGameModeDataManager;
class UELSSNotice;
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
    bool LocalInGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleFadeForChangeLevel;
    
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
    void SetLocalDebugFlag(ESSLocalDebugFlag inFlagType, bool IsOn);
    
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
    
    UFUNCTION(BlueprintCallable)
    UELSSGameModeDataManager* GetSSGameDataManager();
    
    UFUNCTION(BlueprintCallable)
    void DeleteSSModeGameData();
    
    UFUNCTION(BlueprintCallable)
    UELSSGameModeDataManager* CreateSSModeGameData();
    
    UFUNCTION(BlueprintCallable)
    void ClearLastEndGameReason();
    
};

