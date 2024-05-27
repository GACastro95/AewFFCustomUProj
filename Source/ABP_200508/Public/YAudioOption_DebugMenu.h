#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "YAudioOption_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYAudioOption_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYAudioOption_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetShowSurfaceDebug(bool _show);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSFXListPlayDebug(bool _sfxlist);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCrowdDebug(bool _crowd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowSurfaceDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowSFXListPlayDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowCrowdDebug() const;
    
};

