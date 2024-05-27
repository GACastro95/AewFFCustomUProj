#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnOnlineStoreUIClosedDelegateDelegate.h"
#include "OnOnlineStoreWebUrlClosedDelegateDelegate.h"
#include "OnlineStoreUIParam.h"
#include "OnlineStoreUI.generated.h"

UCLASS(Blueprintable)
class UOnlineStoreUI : public UObject {
    GENERATED_BODY()
public:
    UOnlineStoreUI();

    UFUNCTION(BlueprintCallable)
    bool ShowOnlineStoreWebURL(const FOnOnlineStoreWebUrlClosedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    bool ShowOnlineStoreUI(int32 LocalControllerId, const FOnlineStoreUIParam& Param, const FOnOnlineStoreUIClosedDelegate& Delegate);
    
};

