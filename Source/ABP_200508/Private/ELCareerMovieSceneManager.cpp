#include "ELCareerMovieSceneManager.h"

AELCareerMovieSceneManager::AELCareerMovieSceneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSequencePlayer = NULL;
}

void AELCareerMovieSceneManager::SetSubtitles(const FString& TextID, float fDispTime) {
}

void AELCareerMovieSceneManager::SetState(ECareerMovieSceneState State) {
}

bool AELCareerMovieSceneManager::IsFinishState() {
    return false;
}

void AELCareerMovieSceneManager::DisableUpdateWidget() {
}

void AELCareerMovieSceneManager::CheckState(int32 _value) {
}


