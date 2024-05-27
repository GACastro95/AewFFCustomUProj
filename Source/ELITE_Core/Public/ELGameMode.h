#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ELGameMode.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class ELITE_CORE_API AELGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AELGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleGlobalInvalidation(const bool bNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetPauseMenuManagerActor() const;
    
};

