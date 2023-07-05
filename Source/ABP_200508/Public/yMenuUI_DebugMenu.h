#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "yMenuUI_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UyMenuUI_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UyMenuUI_DebugMenu();
    UFUNCTION(BlueprintCallable)
    void SetDebugWindow(bool _Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugString(bool _Flg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugString() const;
    
};

