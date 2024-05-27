#pragma once
#include "CoreMinimal.h"
#include "OnlineStoreUIParam.generated.h"

USTRUCT(BlueprintType)
struct FOnlineStoreUIParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToCart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductID;
    
    ABP_200508_API FOnlineStoreUIParam();
};

