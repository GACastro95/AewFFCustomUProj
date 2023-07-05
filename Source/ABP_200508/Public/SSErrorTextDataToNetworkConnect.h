#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSErrorTextDataToNetworkConnect.generated.h"

USTRUCT(BlueprintType)
struct FSSErrorTextDataToNetworkConnect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowErrorCodeForSwitch;
    
    ABP_200508_API FSSErrorTextDataToNetworkConnect();
};

