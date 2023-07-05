#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EErrDialogType.h"
#include "eErrorStatusType.h"
#include "SSErrorTextDataToSSAPI.generated.h"

USTRUCT(BlueprintType)
struct FSSErrorTextDataToSSAPI : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eErrorStatusType ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCodeForSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDialogTypeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EErrDialogType OverrideErrDialogType;
    
    ABP_200508_API FSSErrorTextDataToSSAPI();
};

