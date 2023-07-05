#pragma once
#include "CoreMinimal.h"
#include "EAutoPlayFileName.generated.h"

UENUM(BlueprintType)
enum class EAutoPlayFileName : uint8 {
    ExhibitionMenu,
    Win64_Smoketest,
    XB1_X_PS4_5_Smoketest,
    Switch_Smoketest,
    Win64_BackstageOptions,
    XB1_X_PS4_5_BackstageOptions,
    Switch_BackstageOptions,
    HighestCAW_1st,
    HighestCAW_2nd,
    HighestCAW_3rd,
    HighestCAW_4th,
    HighestCAW_1_4,
    HighestCAA,
    Mainmenu,
    Challenges,
    Shop,
    XB1_X_PS4_5_SmoketestLoop,
    Win64_SmoketestLoop,
    Switch_SmoketestLoop,
    AutoPlayFileNameMax,
};

