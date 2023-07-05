#pragma once
#include "CoreMinimal.h"
#include "DebugCameraSettings.h"
#include "ELDebugMenuRootBase.h"
#include "YDebugCamera_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYDebugCamera_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYDebugCamera_DebugMenu();
    UFUNCTION(BlueprintCallable)
    void SetUseDebugCamera(bool _bHilights);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FDebugCameraSettings& _stSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCameraControllerNo(int32 _No);
    
    UFUNCTION(BlueprintCallable)
    bool IsUseDebugCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugCameraControllerNo() const;
    
};

