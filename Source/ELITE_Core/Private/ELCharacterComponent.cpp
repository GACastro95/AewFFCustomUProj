#include "ELCharacterComponent.h"

UELCharacterComponent::UELCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CharacterOwner = NULL;
    this->OwnerRoot = NULL;
}

ACharacter* UELCharacterComponent::GetOwnerAsCharacter() {
    return NULL;
}


