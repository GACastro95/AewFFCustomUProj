#pragma once
#include "CoreMinimal.h"
#include "CareerStory.h"
#include "CareerStoryCard.h"
#include "CareerVeryShortEventStockInfo.generated.h"

USTRUCT(BlueprintType)
struct FCareerVeryShortEventStockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerStory Story;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCareerStoryCard StoryCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStory> StoryDataTable;
    
    ABP_200508_API FCareerVeryShortEventStockInfo();
};

