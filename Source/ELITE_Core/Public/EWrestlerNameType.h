#pragma once
#include "CoreMinimal.h"
#include "EWrestlerNameType.generated.h"

UENUM(BlueprintType)
enum class EWrestlerNameType : uint8 {
    ShortName,
    SpokenName,
    RingName,
    RingName_Multiline,
    NickName,
    SnsAccount,
};

