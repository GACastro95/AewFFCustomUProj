#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELBattleRoyalePlayerSpawn.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELBattleRoyalePlayerSpawn : public AActor {
    GENERATED_BODY()
public:
    AELBattleRoyalePlayerSpawn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool FindPlayer() const;
    
};

