#pragma once
#include "CoreMinimal.h"
#include "ELEmoteCutsceneTriggerCondition.h"
#include "ELInteractiveVictoryCutsceneParamMontageSet.h"
#include "ELInteractiveVictoryCutsceneSpecialSceneParam.generated.h"

USTRUCT(BlueprintType)
struct FELInteractiveVictoryCutsceneSpecialSceneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELEmoteCutsceneTriggerCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELInteractiveVictoryCutsceneParamMontageSet Montages;
    
    ABP_200508_API FELInteractiveVictoryCutsceneSpecialSceneParam();
};

