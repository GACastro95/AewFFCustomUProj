#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FIndexedColorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> List;
    
    FIndexedColorList();
};

