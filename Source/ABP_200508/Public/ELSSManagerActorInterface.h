#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELSSManagerActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UELSSManagerActorInterface : public UInterface {
    GENERATED_BODY()
};

class IELSSManagerActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartOfMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndOfMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeadMySelf();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompletedSpawnManagerActors();
    
};

