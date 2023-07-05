#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CareerDebugInfoMessageColor.generated.h"

USTRUCT(BlueprintType)
struct FCareerDebugInfoMessageColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    ABP_200508_API FCareerDebugInfoMessageColor();
};

