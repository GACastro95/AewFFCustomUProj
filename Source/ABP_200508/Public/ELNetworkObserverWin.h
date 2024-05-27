#pragma once
#include "CoreMinimal.h"
#include "ELNetworkObserverBase.h"
#include "ELNetworkObserverWin.generated.h"

UCLASS(Blueprintable)
class UELNetworkObserverWin : public UELNetworkObserverBase {
    GENERATED_BODY()
public:
    UELNetworkObserverWin();

    UFUNCTION(BlueprintCallable)
    void OnWindowFocusChanged(bool _bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void OnSuspend();
    
    UFUNCTION(BlueprintCallable)
    void OnResume();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkInitialized(bool Initialized);
    
};

