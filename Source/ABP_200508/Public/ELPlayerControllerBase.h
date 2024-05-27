#pragma once
#include "CoreMinimal.h"
#include "ELGameCommonPlayerControllerBase.h"
#include "ELPlayerControllerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELPlayerControllerBase : public AELGameCommonPlayerControllerBase {
    GENERATED_BODY()
public:
    AELPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

};

