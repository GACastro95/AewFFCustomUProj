#pragma once
#include "CoreMinimal.h"
#include "ELCAEMenuItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FELCAEMenuItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockID;
    
    ABP_200508_API FELCAEMenuItemInfo();
};

