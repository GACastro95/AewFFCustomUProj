#include "ELPlayerEffectBase.h"

UELPlayerEffectBase::UELPlayerEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectDataTable = NULL;
}

void UELPlayerEffectBase::Setup(int32 ControllerId) {
}


UParticleSystem* UELPlayerEffectBase::GetReversalEffect() {
    return NULL;
}

UParticleSystem* UELPlayerEffectBase::GetPassiveSkillEffect() {
    return NULL;
}

UParticleSystem* UELPlayerEffectBase::GetNoDownEffect() {
    return NULL;
}

UParticleSystem* UELPlayerEffectBase::GetGuardBreakEffect() {
    return NULL;
}


