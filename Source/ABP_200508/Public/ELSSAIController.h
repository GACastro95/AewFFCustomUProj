#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "ELSSAIController.generated.h"

class AActor;
class AELSSPlayer;

UCLASS(Blueprintable)
class ABP_200508_API AELSSAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveToFgfGoalObstructed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HateActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HateActorsMax;
    
public:
    AELSSAIController();
    UFUNCTION(BlueprintCallable)
    void UpdateHateActors(AActor* newActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBehaviourTree();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupAI();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableAI(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetAddMovementInputToActorForward(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AELSSPlayer* GetAITargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetAITargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetAITargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAddMovementInputToActorForwardTimer() const;
    
    UFUNCTION(BlueprintCallable)
    bool CommandWeaponTrap();
    
    UFUNCTION(BlueprintCallable)
    bool CommandWeaponThrow();
    
    UFUNCTION(BlueprintCallable)
    bool CommandWeaponGunFire();
    
    UFUNCTION(BlueprintCallable)
    bool CommandUseItem();
    
    UFUNCTION(BlueprintCallable)
    bool CommandTaunt();
    
    UFUNCTION(BlueprintCallable)
    bool CommandStrike2(bool isHold);
    
    UFUNCTION(BlueprintCallable)
    bool CommandStrike1(bool isHold);
    
    UFUNCTION(BlueprintCallable)
    bool CommandMoveCurrentInventory(bool isRight);
    
    UFUNCTION(BlueprintCallable)
    bool CommandKoFinisher();
    
    UFUNCTION(BlueprintCallable)
    bool CommandJump();
    
    UFUNCTION(BlueprintCallable)
    bool CommandInteract();
    
    UFUNCTION(BlueprintCallable)
    bool CommandGuard(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    bool CommandGrapple(bool isHold);
    
    UFUNCTION(BlueprintCallable)
    bool CommandDashGrapple(bool isHold);
    
    UFUNCTION(BlueprintCallable)
    bool CommandAbility(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearHateActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* CalcNewAITargetByHate() const;
    
};

