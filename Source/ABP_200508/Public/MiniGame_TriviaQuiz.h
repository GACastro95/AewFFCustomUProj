#pragma once
#include "CoreMinimal.h"
#include "MiniGame_TriviaQuiz.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_TriviaQuiz {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCheckQuizTextMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuizIndex;
    
    ABP_200508_API FMiniGame_TriviaQuiz();
};

