#pragma once
#include "CoreMinimal.h"
#include "EOSUserInfoAPIVersionSettings.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSUserInfoAPIVersionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryUserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CopyUserInfo;
    
    FEOSUserInfoAPIVersionSettings();
};

