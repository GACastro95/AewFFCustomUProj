#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDBG_ReferBase.generated.h"

UCLASS(Blueprintable)
class YDEBUG_API UYDBG_ReferBase : public UObject {
    GENERATED_BODY()
public:
    UYDBG_ReferBase();

    UFUNCTION(BlueprintCallable)
    void RemRef();
    
    UFUNCTION(BlueprintCallable)
    bool IsRef();
    
    UFUNCTION(BlueprintCallable)
    void AddRef();
    
};

