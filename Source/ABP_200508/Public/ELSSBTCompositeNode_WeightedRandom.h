#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ELSSBTCompositeNode_WeightedRandom.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSBTCompositeNode_WeightedRandom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftChildSelectingRate;
    
    UELSSBTCompositeNode_WeightedRandom();
};

