#pragma once
#include "CoreMinimal.h"
#include "ELInGameMenuInputEventActor.h"
#include "ELBattleRoyaleSkipMessageManagerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELBattleRoyaleSkipMessageManagerBase : public AELInGameMenuInputEventActor {
    GENERATED_BODY()
public:
    AELBattleRoyaleSkipMessageManagerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputOK();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputCancel();
    
};

