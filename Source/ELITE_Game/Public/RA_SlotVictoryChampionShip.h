#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RA_SlotVictoryChampionShip_Info.h"
#include "RA_SlotVictoryChampionShip.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotVictoryChampionShip : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotVictoryChampionShip();
private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotVictoryChampionShipSoundAtom(const FRA_SlotVictoryChampionShip_Info& _SlotVictoryChampionShip_Info);
    
};

