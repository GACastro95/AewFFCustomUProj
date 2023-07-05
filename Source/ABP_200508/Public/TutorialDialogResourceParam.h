#pragma once
#include "CoreMinimal.h"
#include "TutorialDialogResourceParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTutorialDialogResourceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DetailText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Picture;
    
    ABP_200508_API FTutorialDialogResourceParam();
};

