#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERA_Slot_RosterName.h"
#include "RA_SlotRosterName.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotRosterName : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotRosterName();
private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotRosterNameSoundAtom(ERA_Slot_RosterName _eRA_Slot_RosterName);
    
};

