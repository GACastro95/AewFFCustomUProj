#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ELPlayerState.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API AELPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AELPlayerState(const FObjectInitializer& ObjectInitializer);

};

