#pragma once
#include "CoreMinimal.h"
#include "ELSSGimmickBase.h"
#include "ELSSGimmickFgfGoal.generated.h"

class AActor;
class AELSSPlayer;
class AELSSWeaponFgfBall;
class UBoxComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSGimmickFgfGoal : public AELSSGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPlayer*> OverlapPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSWeaponFgfBall*> OverlapBalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FgfGoalGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlly;
    
public:
    AELSSGimmickFgfGoal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisual(bool inAlly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetectGoal(AELSSPlayer* inPlayer, AELSSWeaponFgfBall* inBall);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* InActor);
    
};

