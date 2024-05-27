#include "ELReplayEmitterRecorder.h"

AELReplayEmitterRecorder::AELReplayEmitterRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlay_N = false;
    this->RecordIndex_N = 0;
    this->ConstRecordMax_N = 300;
    this->ReplayIndex_N = 0;
    this->BeforeReplayIndex_N = 0;
    this->ReplayActiveSec_N = 0.00f;
}

void AELReplayEmitterRecorder::RecordSfx_N(const FString& SfxName) {
}

void AELReplayEmitterRecorder::RecordEffect_N(const FStReplayEffectParam& Effect) {
}

void AELReplayEmitterRecorder::PlayStart_N(float ReplaySec, float ReplayOffsetSec) {
}


void AELReplayEmitterRecorder::PlayFinish_N() {
}

void AELReplayEmitterRecorder::AddHideParticlewhenReplay_N(UParticleSystemComponent* Particle) {
}


