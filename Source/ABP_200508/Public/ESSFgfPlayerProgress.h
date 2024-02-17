#pragma once
#include "CoreMinimal.h"
#include "ESSFgfPlayerProgress.generated.h"

UENUM(BlueprintType)
enum class ESSFgfPlayerProgress : uint8 {
    None,
    Round00_Completed = 0x2,
    Round01a_Standby = 0x11,
    Round01a_OpenScreen,
    Round01a_Completed,
    Round01b_Standby = 0x19,
    Round01b_OpenScreen,
    Round01b_Completed,
    Round02a_Standby = 0x21,
    Round02a_OpenScreen,
    Round02a_Completed,
    Round02b_Standby = 0x29,
    Round02b_OpenScreen,
    Round02b_Completed,
    Round03a_Standby = 0x31,
    Round03a_OpenScreen,
    Round03a_Completed,
    Round03b_Standby = 0x39,
    Round03b_OpenScreen,
    Round03b_Completed,
    Round04a_Standby = 0x41,
    Round04a_OpenScreen,
    Round04a_Completed,
    Round04b_Standby = 0x49,
    Round04b_OpenScreen,
    Round04b_Completed,
    Round05a_Standby = 0x51,
    Round05a_OpenScreen,
    Round05a_Completed,
    Round05b_Standby = 0x59,
    Round05b_OpenScreen,
    Round05b_Completed,
    Result = 0x7F,
};

