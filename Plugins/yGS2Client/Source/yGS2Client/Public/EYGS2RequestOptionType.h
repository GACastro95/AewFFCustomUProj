#pragma once
#include "CoreMinimal.h"
#include "EYGS2RequestOptionType.generated.h"

UENUM(BlueprintType)
enum class EYGS2RequestOptionType : uint8 {
    None,
    AppKey,
    TitleID,
    TitleVer,
    EOSProductID,
    EOSSandboxID,
    EOSDeploymentID,
    EOSClientID,
    AppAuthKey,
    AppAuthSecret,
    UserAuthKey,
    UserAuthSecret,
    SessionType,
};

