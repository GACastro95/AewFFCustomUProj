#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSLocker.generated.h"

class IEOSLockableInterface;
class UEOSLockableInterface;
class UEOSLocker;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSLocker : public UObject {
    GENERATED_BODY()
public:
    UEOSLocker();

    UFUNCTION(BlueprintCallable)
    static UEOSLocker* CreateObjectLocker(TScriptInterface<IEOSLockableInterface> _pcLockableObject);
    
};

