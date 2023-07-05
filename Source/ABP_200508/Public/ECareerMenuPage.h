#pragma once
#include "CoreMinimal.h"
#include "ECareerMenuPage.generated.h"

UENUM(BlueprintType)
enum class ECareerMenuPage : uint8 {
    None,
    MainMenu,
    Training,
    Restaurant,
    Hospital,
    Promotion,
    OtherAction,
    DarkMatch,
    DynamiteMatch,
    UseItems,
    OtherOptions,
    debug_event,
    debug_money,
    debug_slot,
};

