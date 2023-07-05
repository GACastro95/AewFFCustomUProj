#pragma once
#include "CoreMinimal.h"
#include "ECareerDialogType.generated.h"

UENUM(BlueprintType)
enum class ECareerDialogType : uint8 {
    Dialog_SaveAndExit,
    Dialog_GotoDynamite_TurnSkip,
    Dialog_Information,
    Dialog_UnlockDark,
    Dialog_UnlockRampage,
    Dialog_ResultMessage,
    Dialog_SpecialReward,
    Dialog_FinishCareerMode,
    Dialog_GetAEWCash,
    Dialog_MAX UMETA(Hidden),
};

