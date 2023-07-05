#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECareerMovieScene.h"
#include "CareerMovieSceneParam.generated.h"

USTRUCT(BlueprintType)
struct FCareerMovieSceneParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerMovieScene eMovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlesSeqNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovieNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleTextID;
    
    ABP_200508_API FCareerMovieSceneParam();
};

