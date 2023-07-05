#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "CustomScalingRule.generated.h"

UCLASS(Blueprintable)
class ELITE_CORE_API UCustomScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UCustomScalingRule();
};

