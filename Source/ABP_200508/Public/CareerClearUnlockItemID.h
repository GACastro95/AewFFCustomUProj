#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerClearUnlockItemID.generated.h"

USTRUCT(BlueprintType)
struct FCareerClearUnlockItemID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    ABP_200508_API FCareerClearUnlockItemID();
};

