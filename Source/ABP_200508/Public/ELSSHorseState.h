#pragma once
#include "CoreMinimal.h"
#include "ELSSDrivingState.h"
#include "ELSSHorseState.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class ABP_200508_API UELSSHorseState : public UELSSDrivingState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDamageL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDamageR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDamageB;
    
public:
    UELSSHorseState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingDamageMontage() const;
    
};

