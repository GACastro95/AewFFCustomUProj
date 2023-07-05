#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyWrestlerInterface.generated.h"

class UMyWrestlerDataObject;

UINTERFACE(Blueprintable)
class UMyWrestlerInterface : public UInterface {
    GENERATED_BODY()
};

class IMyWrestlerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EntryMyWrestler(bool& bOutAddedNew, UMyWrestlerDataObject* DataObject);
    
};

