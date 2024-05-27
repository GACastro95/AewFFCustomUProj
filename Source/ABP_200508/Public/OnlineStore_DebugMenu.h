#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "OnlineStore_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UOnlineStore_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UOnlineStore_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void OnOnlineStoreUIClosed(bool bSuccessed);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckedQueryEntitlements(bool Successed);
    
};

