#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELSSPoolActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UELSSPoolActorInterface : public UInterface {
    GENERATED_BODY()
};

class IELSSPoolActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSink();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoop();
    
};

