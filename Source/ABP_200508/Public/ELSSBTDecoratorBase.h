#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESSAI_FgfOffenseRole.h"
#include "ELSSBTDecoratorBase.generated.h"

class AAIController;
class AActor;
class AELSSAIController;
class AELSSGimmickFgfGoal;
class AELSSItemBox;
class AELSSPlayer;
class AELSSPlayerState;
class AELSSTeamState;
class AELSSWeaponFgfBall;
class UObject;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API UELSSBTDecoratorBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ObservedKeyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCheckConditionOnlyBlackBoardChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsObservingBB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSAIController* SSAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSPlayer* SSPlayer;
    
public:
    UELSSBTDecoratorBase();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShouldUnlockDefenseTeamTreasureBox(const UObject* WorldContextObject, float inDist, AELSSItemBox*& outBox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShouldPass(const UObject* WorldContextObject, AELSSPlayerState*& outTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShouldGuardMember(const UObject* WorldContextObject, float inDistance, AELSSPlayerState*& outTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShouldGoGetFgfBall(const UObject* WorldContextObject, AELSSWeaponFgfBall*& outTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShouldAttackDefenseTarget(const UObject* WorldContextObject, float inDist, AELSSPlayerState*& outTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShouldAimForFgfGoal(const UObject* WorldContextObject, float inDistanceToGoal, AELSSGimmickFgfGoal*& outTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerIsInFixedArea_PassReceiver(const UObject* WorldContextObject, FVector& outPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerIsInFixedArea_Partisan(const UObject* WorldContextObject, FVector& outPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerIsInBetweenDefenseTargetAndGoal(const UObject* WorldContextObject, FVector& outPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerIsInBetweenDefenseTargetAndBallHolder(const UObject* WorldContextObject, FVector& outPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SSPlayerIsFgfOffense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SSPlayerHasFgfBall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSDefenseTargetIsNearToFgfBall(const UObject* WorldContextObject, float inDist, AELSSPlayerState*& outTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool SSDefenseTargetIsDead(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SSDefenseTargetHasFgfBall() const;
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValue_SSPlayerState(const FBlackboardKeySelector& Key, AELSSPlayerState* inPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackboardValue_Actor(const FBlackboardKeySelector& Key, AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverDeactivatedAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverDeactivated(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverActivatedAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveObserverActivated(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStartAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionStart(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionFinishAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn, EBTNodeResult::Type NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecutionFinish(AActor* OwnerActor, EBTNodeResult::Type NodeResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PerformConditionCheckAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PerformConditionCheck(AActor* OwnerActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSSFgfBallFree() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecoratorObserverActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecoratorExecutionActive() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSTeamState* GetSSTeamState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetSSPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSAI_FgfOffenseRole GetSSFgfOffenseRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    AELSSItemBox* GetSSDefenseTeamTreasureBox(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayer* GetSSDefenseTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetSSDefenseTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetSSBallHoldPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool GetNearlyFgfGoal(const UObject* WorldContextObject, AELSSGimmickFgfGoal*& outGoal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistSSTeamTreasureBoxOpening() const;
    
};

