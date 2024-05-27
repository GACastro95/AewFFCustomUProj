#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELHandsDamageArea.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API AELHandsDamageArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRateTime_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDanageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActorList_N;
    
public:
    AELHandsDamageArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableEffect();
    
    UFUNCTION(BlueprintCallable)
    float GetDamageRateTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDamageAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AlreadyHit(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void AddHitActor(AActor* Target);
    
};

