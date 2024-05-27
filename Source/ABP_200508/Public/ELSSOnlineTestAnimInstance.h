#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ELSSOnlineTestAnimInstance.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API UELSSOnlineTestAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool enableDirectionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float directionSlotAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector actorVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float actorSpeed;
    
public:
    UELSSOnlineTestAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetEnableDirectionSlot(bool inEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDirectionSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirectionSlotAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActorSpeed() const;
    
};

