#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyBaseBranchingPoint.h"
#include "ESSActionDownFaceUpType.h"
#include "ELSSAnimNotify_Down.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class ABP_200508_API UELSSAnimNotify_Down : public UELSSAnimNotifyBaseBranchingPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActionDownFaceUpType faceUpType;
    
public:
    UELSSAnimNotify_Down();

    UFUNCTION(BlueprintCallable)
    void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
    
};

