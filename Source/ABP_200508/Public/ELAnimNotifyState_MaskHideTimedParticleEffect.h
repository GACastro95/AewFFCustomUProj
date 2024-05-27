#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
#include "ELAnimNotifyState_MaskHideTimedParticleEffect.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyState_MaskHideTimedParticleEffect : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
    UELAnimNotifyState_MaskHideTimedParticleEffect();

};

