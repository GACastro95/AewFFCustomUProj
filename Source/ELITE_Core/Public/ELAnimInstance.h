#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Components/SceneComponent.h"
#include "ELAnimInstance.generated.h"

class ACharacter;

UCLASS(Blueprintable, NonTransient)
class ELITE_CORE_API UELAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UELAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSocketTransform_N(const ACharacter* Character, const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace, FTransform& Transform) const;
    
};

