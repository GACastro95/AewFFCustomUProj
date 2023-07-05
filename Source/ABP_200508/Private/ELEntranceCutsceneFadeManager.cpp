#include "ELEntranceCutsceneFadeManager.h"

bool UELEntranceCutsceneFadeManager::IsFadeFinished() const {
    return false;
}

void UELEntranceCutsceneFadeManager::FadeOut(float FadeTime) {
}

void UELEntranceCutsceneFadeManager::FadeIn(float FadeTime) {
}

UUserWidget* UELEntranceCutsceneFadeManager::CreateFadeWidget() {
    return NULL;
}

UELEntranceCutsceneFadeManager::UELEntranceCutsceneFadeManager() {
    this->FadeWidgetClass = NULL;
    this->FadeWidget = NULL;
}

