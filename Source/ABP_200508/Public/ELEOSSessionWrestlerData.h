#pragma once
#include "CoreMinimal.h"
#include "ELEOSSessionWrestlerData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FELEOSSessionWrestlerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> WrestlerArray;
    
    ABP_200508_API FELEOSSessionWrestlerData();
};

