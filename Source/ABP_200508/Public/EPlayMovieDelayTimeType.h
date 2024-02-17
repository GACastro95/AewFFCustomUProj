#pragma once
#include "CoreMinimal.h"
#include "EPlayMovieDelayTimeType.generated.h"

UENUM(BlueprintType)
enum class EPlayMovieDelayTimeType : uint8 {
    EPlayMovieDelayTimeType_Total,
    EPlayMovieDelayTimeType_In,
    EPlayMovieDelayTimeType_Out,
    EPlayMovieDelayTimeType_ANy,
    EPlayMovieDelayTimeType_MAX UMETA(Hidden),
};

