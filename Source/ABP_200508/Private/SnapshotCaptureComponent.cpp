#include "SnapshotCaptureComponent.h"

USnapshotCaptureComponent::USnapshotCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->m_TextureTarget = NULL;
}

void USnapshotCaptureComponent::CaptureScene() {
}


