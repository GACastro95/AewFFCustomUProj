#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyStateBase.h"
#include "ELSSAnimNotifyState_RestrictUpperBodyAnim.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELSSAnimNotifyState_RestrictUpperBodyAnim : public UELSSAnimNotifyStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetAimOffsetAngle;
    
public:
    UELSSAnimNotifyState_RestrictUpperBodyAnim();
};

