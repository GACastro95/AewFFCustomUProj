#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "ELSSInGameDebugMenuRootBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSInGameDebugMenuRootBase : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UELSSInGameDebugMenuRootBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuInputMode(bool inEnable);
    
};

