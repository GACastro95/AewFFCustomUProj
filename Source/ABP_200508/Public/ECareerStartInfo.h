#pragma once
#include "CoreMinimal.h"
#include "ECareerStartInfo.generated.h"

UENUM(BlueprintType)
enum class ECareerStartInfo : uint8 {
    Career_Start_NotSet,
    Career_Start_NewGame,
    Career_Start_Continue,
    Career_Start_Through,
};

