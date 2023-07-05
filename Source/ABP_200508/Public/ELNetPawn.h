#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EELNetRole.h"
#include "ELNetObjectInterface.h"
#include "ELNetPawn.generated.h"

UCLASS(Blueprintable)
class AELNetPawn : public APawn, public IELNetObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetRole ELNetRole;
    
public:
    AELNetPawn();
    UFUNCTION(BlueprintCallable)
    bool SetELNetTemporaryAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetModeBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetExecAuthorityBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetAuthorityBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceSkip_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceSkip_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro03_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro03_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro02_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro02_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro01_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro01_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro00_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntrancePyro00_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_U_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_U_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_R_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_R_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_L_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_L_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_D_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceEffect_D_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceCamera_ZoomUp(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceCamera_ZoomOut(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceCamera_Previous_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceCamera_Previous_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceCamera_Next_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventInput_EntranceCamera_Next_Pressed();
    
    
    // Fix for true pure virtual functions not being implemented
};

