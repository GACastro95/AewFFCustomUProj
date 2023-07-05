#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_Intro.h"
#include "RA_SlotIntro_Info.h"
#include "RA_SlotIntro_Event.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotIntro_Event : public FRA_SlotIntro_Info {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_Intro CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundData;
    
    FRA_SlotIntro_Event();
};

