#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YCreate_DebugMenuBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYCreate_DebugMenuBase : public UObject {
    GENERATED_BODY()
public:
    UYCreate_DebugMenuBase();
    UFUNCTION(BlueprintCallable)
    void SetLogString(const FString& _LogString);
    
};

