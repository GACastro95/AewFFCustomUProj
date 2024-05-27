#pragma once
#include "CoreMinimal.h"
#include "ELSSActionStateBase.h"
#include "ELSSDrivingState.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ABP_200508_API UELSSDrivingState : public UELSSActionStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestedDamageMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedDamageCauserYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDrivingPose;
    
public:
    UELSSDrivingState();

    UFUNCTION(BlueprintCallable)
    void RequestDamageMotion(float inCauserYaw);
    
};

