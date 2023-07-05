#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSReadLocker.generated.h"

class IEOSLockableInterface;
class UEOSLockableInterface;
class UEOSReadLocker;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSReadLocker : public UObject {
    GENERATED_BODY()
public:
    UEOSReadLocker();
    UFUNCTION(BlueprintCallable)
    static UEOSReadLocker* CreateObjectReadLocker(TScriptInterface<IEOSLockableInterface> _cLockableObject);
    
};

