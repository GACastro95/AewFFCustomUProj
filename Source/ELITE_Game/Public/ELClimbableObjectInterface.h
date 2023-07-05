#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ELClimbableObjectInterface.generated.h"

class UELHoldComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UELClimbableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IELClimbableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FindHoldComponent(UELHoldComponent*& HoldComponent, FVector CurrentLocation, const bool bHand, const bool bFoot, const FName TagName) const;
    
};

