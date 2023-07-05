#pragma once
#include "CoreMinimal.h"
#include "ELSSGimmickBase.h"
#include "ELSSGimmickJumpPad.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSGimmickJumpPad : public AELSSGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* JumpPadMeshComponent;
    
public:
    AELSSGimmickJumpPad();
};

