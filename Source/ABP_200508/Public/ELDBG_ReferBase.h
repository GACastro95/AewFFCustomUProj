#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELDBG_ReferBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELDBG_ReferBase : public UObject {
    GENERATED_BODY()
public:
    UELDBG_ReferBase();
    UFUNCTION(BlueprintCallable)
    void RemRef();
    
    UFUNCTION(BlueprintCallable)
    bool IsRef();
    
    UFUNCTION(BlueprintCallable)
    void AddRef();
    
};

