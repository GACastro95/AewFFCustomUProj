#pragma once
#include "CoreMinimal.h"
#include "EErrDialogType.h"
#include "Request_ErrSetupData.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FRequest_ErrSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 errAPI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EErrDialogType errDialogType;
    
    FRequest_ErrSetupData();
};

