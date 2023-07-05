#pragma once
#include "CoreMinimal.h"
#include "ExecuteTutorialDialogParam.h"
#include "TutorialArchiveCategoryResourceParam.generated.h"

USTRUCT(BlueprintType)
struct FTutorialArchiveCategoryResourceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExecuteTutorialDialogParam> ResourceList;
    
    ABP_200508_API FTutorialArchiveCategoryResourceParam();
};

