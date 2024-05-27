#include "ELEntranceCutsceneFadeManager.h"

UELEntranceCutsceneFadeManager::UELEntranceCutsceneFadeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeWidgetClass = NULL;
    this->FadeWidget = NULL;
}

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


