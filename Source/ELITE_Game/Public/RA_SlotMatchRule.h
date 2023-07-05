#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERA_Slot_MatchRule.h"
#include "RA_SlotMatchRule.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotMatchRule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotMatchRule();
private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotMatchRuleSoundAtom(ERA_Slot_MatchRule _eRA_Slot_MatchRule);
    
};

