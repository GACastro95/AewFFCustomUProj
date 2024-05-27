#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ESSUpperBodyAnimState.h"
#include "ELSSAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ABP_200508_API UELSSAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> disableNotifyMontages;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdleAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpperBodyAnimEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSUpperBodyAnimState UpperBodyAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBodyAnimAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBodyAnimAlphaBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveUpperBodyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunAimOffsetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunAimOffsetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSkipUpdateSubAnimInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSkipUpdateFacialAnimInst;
    
public:
    UELSSAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetUpperBodyAnimState(ESSUpperBodyAnimState State);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUpperBodyAnim(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableUpperBodyAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpperBodyAnimAlpha(bool inCheckEnabled) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableNotifyMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    bool CheckDisableNotifyMontage(UAnimMontage* Montage);
    
};

