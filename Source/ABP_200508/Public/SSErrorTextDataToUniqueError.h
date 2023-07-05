#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EErrDialogType.h"
#include "ESSOnlineErrorType.h"
#include "SSErrorTextDataToUniqueError.generated.h"

USTRUCT(BlueprintType)
struct FSSErrorTextDataToUniqueError : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSOnlineErrorType ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCodeForSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EErrDialogType OverrideErrDialogType;
    
    ABP_200508_API FSSErrorTextDataToUniqueError();
};

