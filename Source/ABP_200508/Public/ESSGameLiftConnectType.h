#pragma once
#include "CoreMinimal.h"
#include "ESSGameLiftConnectType.generated.h"

UENUM(BlueprintType)
enum class ESSGameLiftConnectType : uint8 {
    EGameLiftConnectType_Production,
    EGameLiftConnectType_Develop,
    EGameLiftConnectType_Test1,
    EGameLiftConnectType_Test2,
    EGameLiftConnectType_Num,
};

