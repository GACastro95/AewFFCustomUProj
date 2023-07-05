#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERA_Slot_RosterName.h"
#include "RA_SlotRosterName_Event.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotRosterName_Event : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_RosterName CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundData;
    
    FRA_SlotRosterName_Event();
};

