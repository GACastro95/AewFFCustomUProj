#pragma once
#include "CoreMinimal.h"
#include "GameSingleton.h"
#include "ELSSRootTickable.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSRootTickable : public UGameSingleton {
    GENERATED_BODY()
public:
    UELSSRootTickable();

    UFUNCTION(BlueprintCallable)
    void OnTick_Native(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnPreTick_Native(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnPostTick_Native(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialize_Native();
    
};

