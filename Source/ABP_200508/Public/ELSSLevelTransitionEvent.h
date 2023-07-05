#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSSLevelTransitionEvent.generated.h"

class ULevel;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELSSLevelTransitionEvent : public UObject {
    GENERATED_BODY()
public:
    UELSSLevelTransitionEvent();
    UFUNCTION(BlueprintCallable)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLevel(ULevel* inLevel, UWorld* inWorld);
    
};

