#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERA_Slot_TeamName.h"
#include "RA_SlotTeamName.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotTeamName : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotTeamName();
private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotTeamNameSoundAtom(ERA_Slot_TeamName _eRA_Slot_TeamName);
    
};

