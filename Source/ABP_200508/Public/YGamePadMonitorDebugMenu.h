#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "YGamePadMonitorDebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYGamePadMonitorDebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYGamePadMonitorDebugMenu();
    UFUNCTION(BlueprintCallable)
    void SetMonitorType(int32 _sMonitorType);
    
    UFUNCTION(BlueprintCallable)
    void SetMonitorPositionType(int32 _sMonitorPositionType);
    
    UFUNCTION(BlueprintCallable)
    void SetMonitorNum(int32 _sNum);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMonitor(bool _bEnableMonitor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableMonitor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMonitorType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMonitorPositionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMonitorNum();
    
};

