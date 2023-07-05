#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELSSOnlineTestUtility.generated.h"

class AELSSLocatorManager;

UCLASS(Blueprintable)
class ABP_200508_API UELSSOnlineTestUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSOnlineTestUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSSModeOnlineTest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AELSSLocatorManager* GetSSOnlineTestLocatorManager();
    
};

