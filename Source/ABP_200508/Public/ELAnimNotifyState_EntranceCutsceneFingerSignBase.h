#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ELAnimNotifyState_EntranceCutsceneFingerSignBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyState_EntranceCutsceneFingerSignBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InBlendSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendSecond;
    
    UELAnimNotifyState_EntranceCutsceneFingerSignBase();

};

