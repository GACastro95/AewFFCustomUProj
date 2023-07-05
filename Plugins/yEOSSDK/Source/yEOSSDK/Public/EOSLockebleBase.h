#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSLockableInterface.h"
#include "EOSLockebleBase.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLockebleBase : public UObject, public IEOSLockableInterface {
    GENERATED_BODY()
public:
    UEOSLockebleBase();
    
    // Fix for true pure virtual functions not being implemented
};

