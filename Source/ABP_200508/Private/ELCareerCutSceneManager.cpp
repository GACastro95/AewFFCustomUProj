#include "ELCareerCutSceneManager.h"

AELCareerCutSceneManager::AELCareerCutSceneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSequencePlayer = NULL;
}

void AELCareerCutSceneManager::SetState(ECareerCutSceneState State) {
}

void AELCareerCutSceneManager::SetCutSceneMessageIndex(int32 Index, ECareerCutsceneMessageCastType MessageCast, ECareerCutsceneExtraInfo ExtraInfo) {
}

void AELCareerCutSceneManager::SetCutSceneMessage(FName MessageKey, ECareerCutsceneMessageCastType MessageCast, ECareerCutsceneExtraInfo ExtraInfo) {
}

void AELCareerCutSceneManager::SetCameraHeightCorrection(ACineCameraActor* pCineCameraActor, float CameraHeight, float CameraBlendTime) {
}


void AELCareerCutSceneManager::CheckState(int32 _value) {
}


