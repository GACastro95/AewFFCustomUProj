#include "ELSSVictoryCutscene.h"


void AELSSVictoryCutscene::Skip() {
}

bool AELSSVictoryCutscene::Prepare_Implementation(EWrestlerID_N NewWrestlerID, ESSWrestlerType WrestlerType, ACharacter* NewTargetCharacter, AELSSPlayer* TargetPlayer) {
    return false;
}

void AELSSVictoryCutscene::PlaySoundAnnounce() {
}

void AELSSVictoryCutscene::PlayCharacterMontage() {
}

void AELSSVictoryCutscene::PlayCharacterLoopMontage() {
}


bool AELSSVictoryCutscene::Play_Implementation() {
    return false;
}

void AELSSVictoryCutscene::OnSkip_Implementation() {
}

void AELSSVictoryCutscene::OnFinishedPlay_Implementation() {
}

void AELSSVictoryCutscene::GetEditWrestlerMusicId(bool& out_success, int32& out_musicId) const {
}

AELSSVictoryCutscene::AELSSVictoryCutscene() {
    this->LevelSequence = NULL;
    this->LSPlayer = NULL;
    this->LSActor = NULL;
    this->WrestlerID = EWrestlerID_N::None;
    this->targetCharacter = NULL;
    this->IsDonePlay = false;
}

