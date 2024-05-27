#pragma once
#include "CoreMinimal.h"
#include "ESSFgfPlayerProgress.generated.h"

UENUM(BlueprintType)
enum class ESSFgfPlayerProgress : uint8 {
    None,
    Round00_Completed = 2,
    Round01a_Standby = 17,
    Round01a_OpenScreen,
    Round01a_Completed,
    Round01b_Standby = 25,
    Round01b_OpenScreen,
    Round01b_Completed,
    Round02a_Standby = 33,
    Round02a_OpenScreen,
    Round02a_Completed,
    Round02b_Standby = 41,
    Round02b_OpenScreen,
    Round02b_Completed,
    Round03a_Standby = 49,
    Round03a_OpenScreen,
    Round03a_Completed,
    Round03b_Standby = 57,
    Round03b_OpenScreen,
    Round03b_Completed,
    Round04a_Standby = 65,
    Round04a_OpenScreen,
    Round04a_Completed,
    Round04b_Standby = 73,
    Round04b_OpenScreen,
    Round04b_Completed,
    Round05a_Standby = 81,
    Round05a_OpenScreen,
    Round05a_Completed,
    Round05b_Standby = 89,
    Round05b_OpenScreen,
    Round05b_Completed,
    Result = 127,
};

