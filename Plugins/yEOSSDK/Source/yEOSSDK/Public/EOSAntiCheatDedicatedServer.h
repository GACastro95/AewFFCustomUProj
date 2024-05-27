#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientMode.h"
#include "EOSAntiCheatAPIVersionSettings.h"
#include "EOSIDs.h"
#include "EOSAntiCheatDedicatedServer.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAntiCheatDedicatedServer : public UEOSIDs {
    GENERATED_BODY()
public:
    UEOSAntiCheatDedicatedServer();

    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSAntiCheatAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool EndSession();
    
    UFUNCTION(BlueprintCallable)
    bool BeginSession(EEOSAntiCheatClientMode _enClinetMode);
    
};

