#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerStoryDataPath.generated.h"

USTRUCT(BlueprintType)
struct FCareerStoryDataPath : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    ABP_200508_API FCareerStoryDataPath();
};

