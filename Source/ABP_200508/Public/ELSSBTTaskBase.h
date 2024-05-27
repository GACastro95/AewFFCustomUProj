#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "ESSAI_FgfOffenseRole.h"
#include "ELSSBTTaskBase.generated.h"

class AAIController;
class AActor;
class AELSSAIController;
class AELSSGimmickFgfGoal;
class AELSSPlayer;
class AELSSPlayerState;
class AELSSTeamState;
class AELSSWeaponFgfBall;
class APawn;
class UObject;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API UELSSBTTaskBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntervalCountdown TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSAIController* SSAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSPlayer* SSPlayer;
    
public:
    UELSSBTTaskBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerShoot(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool SSPlayerPass(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SSPlayerIsNearlyIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SSPlayerIsFgfOffense() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishOnMessage(FName MessageName);
    
public:
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
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecute(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAbortAI(AELSSAIController* OwnerController, AELSSPlayer* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAbort(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskAborting() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSTeamState* GetSSTeamState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetSSPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSAI_FgfOffenseRole GetSSFgfOffenseRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSPlayerState* GetSSDefenseTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPosSSPlayerApproachFgfGoal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSGimmickFgfGoal* GetBlackboardValue_FgfGoal(const FBlackboardKeySelector& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSWeaponFgfBall* GetBlackboardValue_FgfBall(const FBlackboardKeySelector& Key);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishExecute(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishAbort();
    
};

