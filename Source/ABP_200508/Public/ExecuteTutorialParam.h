#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TutorialResourceParam.h"
#include "ExecuteTutorialParam.generated.h"

USTRUCT(BlueprintType)
struct FExecuteTutorialParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialResourceParam> ResourceParamList;
    
    ABP_200508_API FExecuteTutorialParam();
};

