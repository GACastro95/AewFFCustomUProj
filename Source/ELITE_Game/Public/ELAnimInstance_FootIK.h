#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELAnimInstance_IK.h"
#include "FootIKState.h"
#include "ELAnimInstance_FootIK.generated.h"

UCLASS(Blueprintable, NonTransient)
class ELITE_GAME_API UELAnimInstance_FootIK : public UELAnimInstance_IK {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentHipsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HipsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFootIKState KneeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFootIKState KneeRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFootIKState FootLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFootIKState FootRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHipsBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HipsBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHipsBlendSpeed;
    
public:
    UELAnimInstance_FootIK();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHipsBlendRatio(const float DeltaTime, const bool bEnable, const float OverrideSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentHipsOffset() const;
    
};

