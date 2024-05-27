#pragma once
#include "CoreMinimal.h"
#include "EELIKPartType.h"
#include "ELAnimInstance_IK.h"
#include "ELAnimInstance_PartIK.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ABP_200508_API UELAnimInstance_PartIK : public UELAnimInstance_IK {
    GENERATED_BODY()
public:
    UELAnimInstance_PartIK();

    UFUNCTION(BlueprintCallable)
    void StartIK(EELIKPartType PartType, int32 CastID, FName TargetBone, FName BaseBone, float BlendTime);
    
};

