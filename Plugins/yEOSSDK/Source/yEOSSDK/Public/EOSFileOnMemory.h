#pragma once
#include "CoreMinimal.h"
#include "EOSFileOnMemory.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSFileOnMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Binary;
    
    FEOSFileOnMemory();
};

