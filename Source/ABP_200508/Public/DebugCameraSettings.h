#pragma once
#include "CoreMinimal.h"
#include "DebugCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FDebugCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DebugCameraControllerNoArray;
    
    ABP_200508_API FDebugCameraSettings();
};

