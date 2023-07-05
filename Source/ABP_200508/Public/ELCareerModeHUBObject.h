#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerStoryOperationType.h"
#include "ELCareerModeHUBObject.generated.h"

class UELGameInstance;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerModeHUBObject : public AActor {
    GENERATED_BODY()
public:
    AELCareerModeHUBObject();
    UFUNCTION(BlueprintCallable)
    void UpdateUseTableInfo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStoryWithScriptResult();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStoryByMatchResult();
    
    UFUNCTION(BlueprintCallable)
    void SetupTransitionLevelInfo();
    
    UFUNCTION(BlueprintCallable)
    bool SetupStockStoryCard();
    
    UFUNCTION(BlueprintCallable)
    void SetupMovieSceneParam();
    
    UFUNCTION(BlueprintCallable)
    void SetupCutsceneParam();
    
    UFUNCTION(BlueprintCallable)
    void SetupCAWMenuParam();
    
    UFUNCTION(BlueprintCallable)
    void SetupCareerEventMemberID();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveCAWMenuParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopBGM();
    
    UFUNCTION(BlueprintCallable)
    FString GetReverbNameTransitionLevel(UELGameInstance* _pGameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECareerStoryOperationType GetOperationType();
    
    UFUNCTION(BlueprintCallable)
    void ExecNoTransitionScript();
    
    UFUNCTION(BlueprintCallable)
    void ClearStoryCard();
    
    UFUNCTION(BlueprintCallable)
    void ClearGlobalCareerParams();
    
};

