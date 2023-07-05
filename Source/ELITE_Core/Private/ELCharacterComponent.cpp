#include "ELCharacterComponent.h"

ACharacter* UELCharacterComponent::GetOwnerAsCharacter() {
    return NULL;
}

UELCharacterComponent::UELCharacterComponent() {
    this->CharacterOwner = NULL;
    this->OwnerRoot = NULL;
}

