#pragma once
#include "CoreMinimal.h"
#include "EOSAntiCheatAPIVersionSettings.h"
#include "EOSIDs.h"
#include "EOSAntiCheatDedicatedClient.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAntiCheatDedicatedClient : public UEOSIDs {
    GENERATED_BODY()
public:
    UEOSAntiCheatDedicatedClient();
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSAntiCheatAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool EndSession();
    
    UFUNCTION(BlueprintCallable)
    bool BeginSession();
    
};

