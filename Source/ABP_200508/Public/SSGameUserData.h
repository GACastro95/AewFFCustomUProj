#pragma once
#include "CoreMinimal.h"
#include "SSGameUserData.generated.h"

USTRUCT(BlueprintType)
struct FSSGameUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userUniqueId;
    
    ABP_200508_API FSSGameUserData();
};

