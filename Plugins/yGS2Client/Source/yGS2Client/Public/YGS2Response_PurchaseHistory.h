#pragma once
#include "CoreMinimal.h"
#include "YGS2Response_PurchaseHistory.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FYGS2Response_PurchaseHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AEW_Gold_Before;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AEW_Gold_After;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AEW_Gold_Total;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYGS2Response_PurchaseHistory();
};

