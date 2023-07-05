#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSLockableInterface.h"
#include "EOSLockebleCommon.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLockebleCommon : public UEOSCommon, public IEOSLockableInterface {
    GENERATED_BODY()
public:
    UEOSLockebleCommon();
    
    // Fix for true pure virtual functions not being implemented
};

