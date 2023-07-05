#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELFootStepObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class ELITE_GAME_API UELFootStepObjectInterface : public UInterface {
    GENERATED_BODY()
};

class ELITE_GAME_API IELFootStepObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStepOnFoot() const;
    
};

