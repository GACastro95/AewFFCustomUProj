#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TutorialCompleteDelegateDelegate.h"
#include "TutorialStartWaitStateDelegate.h"
#include "ELTutorialManager.generated.h"

class AELTutorialExecutorBase;

UCLASS(Blueprintable)
class ABP_200508_API UELTutorialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialCompleteDelegate CompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELTutorialExecutorBase* m_pTutorialExecuteActor;
    
public:
    UELTutorialManager();
    UFUNCTION(BlueprintCallable)
    void SetDisableAutoEndTutorial(FTutorialStartWaitState OnStartWaotStateDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool RequestStartTutorialByIndex(int32 TutorialIndex, FTutorialCompleteDelegate OnCompleteDelegate, bool _displayDecideBtn, bool _displayBottomHelp, bool _checkSaveData, bool _loadingAsset);
    
    UFUNCTION(BlueprintCallable)
    bool RequestStartTutorial(FName _tutorialName, FTutorialCompleteDelegate OnCompleteDelegate, bool _displayDecideBtn, bool _displayBottomHelp, bool _checkSaveData, bool _loadingAsset);
    
    UFUNCTION(BlueprintCallable)
    void PseudoPushButtonOK();
    
    UFUNCTION(BlueprintCallable)
    void PseudoChangePage(bool isRight);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteTutorial();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool IsConfirmedTutorial(FName _tutorialName);
    
    UFUNCTION(BlueprintCallable)
    void IntervalPseudoPushButtonOK(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteManualEndTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool CanShowTutorial(int32 TutorialIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CancelTutorial(bool WithForceCloseDialog);
    
};

