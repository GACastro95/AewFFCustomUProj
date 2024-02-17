#pragma once
#include "CoreMinimal.h"
#include "ESSRespawnType.generated.h"

UENUM(BlueprintType)
enum class ESSRespawnType : uint8 {
    None,
    Always,
    ExistsTeamMember,
    BeforeFinal,
    ExistsTeamMemberAndBeforeFinal,
    Max,
};

