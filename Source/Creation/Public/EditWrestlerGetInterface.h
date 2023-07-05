#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "EGender.h"
#include "EditWrestlerGetInterface.generated.h"

UINTERFACE(Blueprintable)
class UEditWrestlerGetInterface : public UInterface {
    GENERATED_BODY()
};

class IEditWrestlerGetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGuid GetUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EGender GetGender() const;
    
};

