#pragma once
#include "CoreMinimal.h"
#include "EOSAuthPinGrantInfo.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSAuthPinGrantInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VerificationURI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpiresIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VerificationURIComplete;
    
    FEOSAuthPinGrantInfo();
};

