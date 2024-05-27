#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERA_Slot_CutScene_Type.h"
#include "RA_SlotVictory.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotVictory : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotVictory();

private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotVictorySoundAtom(ERA_Slot_CutScene_Type _eRA_Slot_CutScene_Type);
    
};

