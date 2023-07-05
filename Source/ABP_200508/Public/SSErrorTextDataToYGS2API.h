#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYGS2ErrorType.h"
#include "SSErrorTextDataToYGS2API.generated.h"

USTRUCT(BlueprintType)
struct FSSErrorTextDataToYGS2API : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGS2ErrorType ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCodeForSwitch;
    
    ABP_200508_API FSSErrorTextDataToYGS2API();
};

