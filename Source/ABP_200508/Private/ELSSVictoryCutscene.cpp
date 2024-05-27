#include "ELSSVictoryCutscene.h"

AELSSVictoryCutscene::AELSSVictoryCutscene(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequence = NULL;
    this->LSPlayer = NULL;
    this->LSActor = NULL;
    this->Locator = NULL;
    this->IsDonePlay = false;
    this->TeamCharaPlaceWidth = 800.00f;
    this->TeamCharaEffectDelayTime = 1.00f;
    this->TeamCharaMotionDelayTime = 2.00f;
}




void AELSSVictoryCutscene::Skip() {
}

bool AELSSVictoryCutscene::Prepare_Implementation(const TArray<FSSVictoryCutsceneCharaSetting>& inCharaSettings) {
    return false;
}

bool AELSSVictoryCutscene::PlayCutscene() {
    return false;
}


void AELSSVictoryCutscene::OnSkip_Implementation() {
}

void AELSSVictoryCutscene::OnFinishedPlay_Implementation() {
}

void AELSSVictoryCutscene::GetEditWrestlerMusicId(bool& out_success, int32& out_musicId) const {
}


