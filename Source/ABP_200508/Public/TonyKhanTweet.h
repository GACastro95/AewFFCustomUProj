#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TonyKhanTweet.generated.h"

USTRUCT(BlueprintType)
struct FTonyKhanTweet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Message;
    
    ABP_200508_API FTonyKhanTweet();
};

