#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ELSSDataLoadingGameState.generated.h"

class AELSSDataLoadingFlow;

UCLASS(Blueprintable)
class ABP_200508_API AELSSDataLoadingGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSDataLoadingFlow* DataLoadingFlow;
    
    AELSSDataLoadingGameState(const FObjectInitializer& ObjectInitializer);

};

