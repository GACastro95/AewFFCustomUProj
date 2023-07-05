#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RA_SlotIntro_Info.h"
#include "RA_SlotIntro.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API URA_SlotIntro : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URA_SlotIntro();
private:
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSlotIntroSoundAtom(const FRA_SlotIntro_Info& _SlotIntro_Info);
    
};

