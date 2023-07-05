#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EELEOSEventType.h"
#include "ELNotifyOnlineError.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELNotifyOnlineError : public AActor {
    GENERATED_BODY()
public:
    AELNotifyOnlineError();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyOnlineError(EELEOSEventType EventType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceCloseDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDialogActive() const;
    
};

