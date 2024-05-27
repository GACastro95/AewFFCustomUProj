#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EELEOSSessionAttributeTypes.h"
#include "ELEOSSessionAttributeTypes.generated.h"

UCLASS(Blueprintable)
class UELEOSSessionAttributeTypes : public UObject {
    GENERATED_BODY()
public:
    UELEOSSessionAttributeTypes();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionAttributeName(const EELEOSSessionAttributeTypes& Type);
    
};

