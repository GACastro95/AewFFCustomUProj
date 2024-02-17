#pragma once
#include "CoreMinimal.h"
#include "TableRowName.generated.h"

USTRUCT(BlueprintType)
struct ELITE_CORE_API FTableRowName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FTableRowName();
};

