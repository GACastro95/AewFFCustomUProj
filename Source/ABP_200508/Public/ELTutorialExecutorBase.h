#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExecuteTutorialDialogParam.h"
#include "TutorialCompleteDelegateDelegate.h"
#include "TutorialStartWaitStateDelegate.h"
#include "ELTutorialExecutorBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELTutorialExecutorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialCompleteDelegate CompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialStartWaitState StartWaitStateDelegate;
    
public:
    AELTutorialExecutorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartWaitState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIntervalPseudoPushButtonOK(float Interval);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisableAutoEndTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartTutorial(FExecuteTutorialDialogParam _targetParam, bool _displayDecideBtn, bool _displayBottomHelp, bool _loadingAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPseudoPushButtonOK();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPseudoChangePage(bool isRight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressFaceButtonRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressFaceButtonDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteManualEndTutorial();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndTutorial();
    
};

