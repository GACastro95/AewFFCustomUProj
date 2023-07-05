#pragma once
#include "CoreMinimal.h"
#include "CommonObject.h"
#include "TickableObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_CORE_API UTickableObject : public UCommonObject {
    GENERATED_BODY()
public:
    UTickableObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

