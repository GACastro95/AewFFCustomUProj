#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Sample_PlayerController.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API ASample_PlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ASample_PlayerController(const FObjectInitializer& ObjectInitializer);

};

