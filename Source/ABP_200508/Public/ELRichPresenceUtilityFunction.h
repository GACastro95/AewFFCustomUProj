#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERichPresenceType.h"
#include "ELRichPresenceUtilityFunction.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELRichPresenceUtilityFunction : public UObject {
    GENERATED_BODY()
public:
    UELRichPresenceUtilityFunction();

    UFUNCTION(BlueprintCallable)
    void UpdateQuery();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePresence(ERichPresenceType Type);
    
};

