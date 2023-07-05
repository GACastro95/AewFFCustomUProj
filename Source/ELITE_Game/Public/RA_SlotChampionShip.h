#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERA_Slot_Championship.h"
#include "RA_SlotChampionShip.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotChampionShip : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotChampionShip();
private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotChampionShipSoundAtom(ERA_Slot_Championship _eRA_Slot_Championship);
    
};

