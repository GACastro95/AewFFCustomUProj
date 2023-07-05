#pragma once
#include "CoreMinimal.h"
#include "ESSLocatorFilterCondition.generated.h"

UENUM(BlueprintType)
enum class ESSLocatorFilterCondition : uint8 {
    None,
    SafeArea,
    SafeAreaAndNear,
    NearSafeArea,
    AnnounceSafeArea,
    DamageArea,
};

