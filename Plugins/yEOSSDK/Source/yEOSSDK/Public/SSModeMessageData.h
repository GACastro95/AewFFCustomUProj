#pragma once
#include "CoreMinimal.h"
#include "SSModeMessageData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FSSModeMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> buff;
    
    FSSModeMessageData();
};

