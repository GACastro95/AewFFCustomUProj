#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "YUnlockableItem_DebugMenu.generated.h"

class UELUnlockableItemManagerBase;

UCLASS(Blueprintable)
class ABP_200508_API UYUnlockableItem_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYUnlockableItem_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetEnableUnlockSkip(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseOnlineShop(bool bFlag);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteRevertDefault();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAllUnlockCore(UELUnlockableItemManagerBase* ItemManagerBase);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAllUnlock();
    
};

