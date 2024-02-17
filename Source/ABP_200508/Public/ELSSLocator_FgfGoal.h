#pragma once
#include "CoreMinimal.h"
#include "ELSSLocator.h"
#include "ELSSLocator_FgfGoal.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSLocator_FgfGoal : public AELSSLocator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FgfGoalLocatorId;
    
public:
    AELSSLocator_FgfGoal();
};

