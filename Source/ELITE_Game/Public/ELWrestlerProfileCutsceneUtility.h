#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELWrestlerProfile_CutScene.h"
#include "ELWrestlerProfileCutsceneUtility.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UELWrestlerProfileCutsceneUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELWrestlerProfileCutsceneUtility();

private:
    UFUNCTION(BlueprintCallable)
    static bool IsSameCutscene(const FELWrestlerProfile_CutScene& CutsceneA, const FELWrestlerProfile_CutScene& CutsceneB);
    
};

