#pragma once
#include "CoreMinimal.h"
#include "ELNetPlayerController.h"
#include "ELInGamePlayerControllerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELInGamePlayerControllerBase : public AELNetPlayerController {
    GENERATED_BODY()
public:
    AELInGamePlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindAcceptAction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressAcceptButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindAcceptAction();
    
};

