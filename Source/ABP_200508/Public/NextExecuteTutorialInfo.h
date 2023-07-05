#pragma once
#include "CoreMinimal.h"
#include "ExecuteTutorialDialogParam.h"
#include "TutorialCompleteDelegateDelegate.h"
#include "NextExecuteTutorialInfo.generated.h"

USTRUCT(BlueprintType)
struct FNextExecuteTutorialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExecuteTutorialDialogParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayDecideBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayBottomHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialCompleteDelegate OnCompleteDelegate;
    
    ABP_200508_API FNextExecuteTutorialInfo();
};

