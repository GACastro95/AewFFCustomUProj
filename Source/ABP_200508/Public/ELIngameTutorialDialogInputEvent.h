#pragma once
#include "CoreMinimal.h"
#include "ELInGameMenuInputEventBase.h"
#include "ELIngameTutorialDialogInputEvent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELIngameTutorialDialogInputEvent : public UELInGameMenuInputEventBase {
    GENERATED_BODY()
public:
    UELIngameTutorialDialogInputEvent();
private:
    UFUNCTION(BlueprintCallable)
    void OnOpenedDisconnectedDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnClosedDisconnectedDialog();
    
};

