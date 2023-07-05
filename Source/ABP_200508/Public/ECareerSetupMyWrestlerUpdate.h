#pragma once
#include "CoreMinimal.h"
#include "ECareerSetupMyWrestlerUpdate.generated.h"

UENUM(BlueprintType)
enum class ECareerSetupMyWrestlerUpdate : uint8 {
    NewGame,
    Continue,
    SaveAndExit,
    Result,
    CareerToCAW,
    CAWToCareer,
    ChangePlayer,
};

