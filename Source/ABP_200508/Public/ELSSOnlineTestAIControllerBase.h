#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ELSSOnlineTestAIControllerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSOnlineTestAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
    AELSSOnlineTestAIControllerBase();
    UFUNCTION(BlueprintCallable)
    void StopOnlineAI();
    
    UFUNCTION(BlueprintCallable)
    void StartOnlineAI();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreparationControlAI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndedControlAI();
    
};

