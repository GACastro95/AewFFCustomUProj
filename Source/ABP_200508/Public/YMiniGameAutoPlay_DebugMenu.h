#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ELDebugMenuRootBase.h"
#include "EMiniGameID.h"
#include "YMiniGameAutoPlay_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYMiniGameAutoPlay_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYMiniGameAutoPlay_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetEnableAutoPlay(bool _EnableAutoPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipGamePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableGame(EMiniGameID _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    EWrestlerID_N GetTargetWrestlerID(int32 _targetId);
    
    UFUNCTION(BlueprintCallable)
    EWrestlerID_N GetAllWrestlerID();
    
};

