#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputDeviceInfo.h"
#include "ELNotifyGamepadDisconnected.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API AELNotifyGamepadDisconnected : public AActor {
    GENERATED_BODY()
public:
    AELNotifyGamepadDisconnected();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnManipulateDecideBtn(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnManipulateCursor(bool _isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectedGamepad(FInputDeviceInfo _deviceInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeDestory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsActiveDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FInputDeviceInfo GetDeviceInfo();
    
    UFUNCTION(BlueprintCallable)
    void DisconnecteApplet();
    
};

