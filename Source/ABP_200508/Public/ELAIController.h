#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "EBehaviorTreeType.h"
#include "ELAIController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class ABP_200508_API AELAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTree*> BehaviorTreeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrainingMode_N;
    
public:
    AELAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SwitchAIController_N(const EBehaviorTreeType NewType);
    
};

