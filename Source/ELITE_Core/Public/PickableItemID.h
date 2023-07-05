#pragma once
#include "CoreMinimal.h"
#include "PickableItemID.generated.h"

USTRUCT(BlueprintType)
struct FPickableItemID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    int32 UID;
    
    ELITE_CORE_API FPickableItemID();
};

