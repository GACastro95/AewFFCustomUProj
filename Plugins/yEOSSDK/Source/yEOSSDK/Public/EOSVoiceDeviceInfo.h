#pragma once
#include "CoreMinimal.h"
#include "EOSVoiceDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSVoiceDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDefault;
    
    FEOSVoiceDeviceInfo();
};

