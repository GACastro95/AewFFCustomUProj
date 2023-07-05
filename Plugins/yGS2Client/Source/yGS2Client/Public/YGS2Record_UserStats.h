#pragma once
#include "CoreMinimal.h"
#include "YGS2Record_UserStats.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FYGS2Record_UserStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Kind;
    
    FYGS2Record_UserStats();
};

