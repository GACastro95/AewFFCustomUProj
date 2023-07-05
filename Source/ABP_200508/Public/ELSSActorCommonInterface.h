#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESSActorType.h"
#include "ELSSActorCommonInterface.generated.h"

UINTERFACE(Blueprintable)
class UELSSActorCommonInterface : public UInterface {
    GENERATED_BODY()
};

class IELSSActorCommonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESSActorType GetSSActorType() const;
    
};

