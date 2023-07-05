#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSDataLoadingFlowState.h"
#include "ESSDataLoadingResult.h"
#include "ELSSDataLoadingFlow.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSDataLoadingFlow : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDataLoadingResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDataLoadingFlowState PrevState;
    
public:
    AELSSDataLoadingFlow();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_NextLevelLoading(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_MasterDataUpdate(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Initialize(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Exit(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_Closing(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickState_AssetLoading(float inDeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsState(ESSDataLoadingFlowState inState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_NextLevelLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_MasterDataUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitState_AssetLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_NextLevelLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_MasterDataUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Exit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_Closing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterState_AssetLoading();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeState(ESSDataLoadingFlowState inState);
    
};

