#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EELVictoryCutsceneType.h"
#include "ELVictoryCutsceneTransformAndAnimation.h"
#include "ELVictoryCutsceneAnimationData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FELVictoryCutsceneAnimationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELVictoryCutsceneType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinnerCastID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELVictoryCutsceneTransformAndAnimation Partner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartnerCastID;
    
    ABP_200508_API FELVictoryCutsceneAnimationData();
};

