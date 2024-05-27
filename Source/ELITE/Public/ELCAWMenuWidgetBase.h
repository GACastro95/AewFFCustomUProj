#pragma once
#include "CoreMinimal.h"
#include "ELMainMenuWidgetBase.h"
#include "ELCAWMenuWidgetBase.generated.h"

class AELGameCommonPlayerControllerBase;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELCAWMenuWidgetBase : public UELMainMenuWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerAccSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TriggerCurve;
    
public:
    UELCAWMenuWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UnlockBlockAllInput(const bool bBlockAllInput);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockLock(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockAllInput(bool& bSuccess, const bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputZoomLevel(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStickLDirectionY(AELGameCommonPlayerControllerBase* Controller, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputStickLDirectionX(AELGameCommonPlayerControllerBase* Controller, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void LockBlockAllInput(const bool bBlockAllInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedBlockAllInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayUnitUS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveController(const AELGameCommonPlayerControllerBase* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlockLock() const;
    
};

