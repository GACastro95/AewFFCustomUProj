#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "yDebugCamera.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API AyDebugCamera : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWatchingNow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_pcController;
    
public:
    AyDebugCamera();
    UFUNCTION(BlueprintCallable)
    void TakeScreenShot();
    
    UFUNCTION(BlueprintCallable)
    void StartGreenBack(bool _hidden);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerController(APlayerController* _pcPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputYButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputXButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputUpButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputStartButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputRStickButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float InputRightTriggerAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float InputRightStickYAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float InputRightStickXAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputRightButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputRBButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputPadButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputLStickButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float InputLeftTriggerAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float InputLeftStickYAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float InputLeftStickXAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputLeftButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputLBButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputDownButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputBButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputAButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedYButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedXButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedUpButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedRightButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedRBButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedLeftButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedLBButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DownedDownButton() const;
    
};

