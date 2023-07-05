#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_VictoryChampionShip.h"
#include "RA_SlotVictoryChampionShip_Info.h"
#include "RA_SlotVictoryChampionShip_Event.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotVictoryChampionShip_Event : public FRA_SlotVictoryChampionShip_Info {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_VictoryChampionShip CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundData;
    
    FRA_SlotVictoryChampionShip_Event();
};

