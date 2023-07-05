#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERA_Slot_ChampionState.h"
#include "ERA_Slot_Championship.h"
#include "RA_SlotVictoryChampionShip_Info.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotVictoryChampionShip_Info : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_Championship Championship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_ChampionState ChampionState;
    
    FRA_SlotVictoryChampionShip_Info();
};

